#include "global.h"
#include "berry.h"
#include "event_data.h"
#include "config/save.h"
#include "constants/global.h"
#include "save.h"
#include "global.berry.h"

#define GROWTH_THRESHOLD_1 3  // After 3 trainer defeats
#define GROWTH_THRESHOLD_2 7  // After 7 trainer defeats  
#define GROWTH_THRESHOLD_3 12 // After 12 trainer defeats

static bool8 CanBerryTreeGrow(u8 treeId) {
    if (treeId >= BERRY_TREES_COUNT)
        return FALSE;
    
    struct BerryTree *tree = GetBerryTreeInfo(treeId);
    
    // If no berry planted or already at max stage
    if (tree->berry == 0 || tree->stage >= 4)
        return FALSE;
    
    return TRUE;
}

// Advance a berry tree by one stage
static void AdvanceBerryTreeStage(u8 treeId) {
    struct BerryTree *tree = GetBerryTreeInfo(treeId);
    
    if (tree->stage < 4) {
        tree->stage++;
        
        // Reset growth timer for next stage
        tree->minutesUntilNextStage = 1440; // 24 hours in minutes
        
        // Regrowth logic if needed
        if (tree->stage == 4 && tree->regrowthCount > 0) {
            // Reset for regrowth
            tree->stage = 0;
            tree->regrowthCount--;
            tree->minutesUntilNextStage = 1440;
        }
    }
}

void CheckTrainerDefeatThreshold(void) {
    u16 defeats = gSaveBlock1Ptr->trainersDefeated;
    
    if (defeats == GROWTH_THRESHOLD_1 || defeats == GROWTH_THRESHOLD_2 || defeats == GROWTH_THRESHOLD_3) {
        for (u8 i = 0; i < BERRY_TREES_COUNT; i++) {
            if (CanBerryTreeGrow(i)) {
                // Set bit in queue
                u8 byteIndex = i / 8;
                u8 bitIndex = i % 8;
                gSaveBlock1Ptr->berryTreeGrowthQueue[byteIndex] |= (1 << bitIndex);
            }
        }
        
        // Set a flag to show message later
        VarSet(VAR_0x8000, 1); // Flag for script to show message
    }
}

// Apply queued growth when player moves between maps
void ApplyQueuedBerryGrowth(void) {
    bool8 anyGrown = FALSE;
    
    for (u8 i = 0; i < BERRY_TREES_COUNT; i++) {
        u8 byteIndex = i / 8;
        u8 bitIndex = i % 8;
        
        if (gSaveBlock1Ptr->berryTreeGrowthQueue[byteIndex] & (1 << bitIndex)) {
            AdvanceBerryTreeStage(i);
            anyGrown = TRUE;
            
            gSaveBlock1Ptr->berryTreeGrowthQueue[byteIndex] &= ~(1 << bitIndex);
        }
    }
    
    if (anyGrown) {
        VarSet(VAR_0x8001, 1);
    }
}

void IncrementTrainerDefeatCounter(void) {
    gSaveBlock1Ptr->trainersDefeated++;
    CheckTrainerDefeatThreshold();
}