# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 3 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 4 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 5 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 6 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown/scripts.pory"

# 8 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 9 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 10 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 11 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 12 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 13 "data/maps/LittlerootTown/scripts.pory"

# 14 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 22 "data/maps/LittlerootTown/scripts.pory"

# 23 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 24 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 30 "data/maps/LittlerootTown/scripts.pory"

# 31 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"

# 38 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 39 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 40 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 41 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 42 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 43 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 44 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 45 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 50 "data/maps/LittlerootTown/scripts.pory"
	end
# 51 "data/maps/LittlerootTown/scripts.pory"

# 52 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 53 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 54 "data/maps/LittlerootTown/scripts.pory"
	return
# 55 "data/maps/LittlerootTown/scripts.pory"

# 56 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 57 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 58 "data/maps/LittlerootTown/scripts.pory"
	return
# 59 "data/maps/LittlerootTown/scripts.pory"

# 60 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 61 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 62 "data/maps/LittlerootTown/scripts.pory"
	return
# 63 "data/maps/LittlerootTown/scripts.pory"

# 64 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 65 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 66 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 67 "data/maps/LittlerootTown/scripts.pory"
	return
# 68 "data/maps/LittlerootTown/scripts.pory"

# 69 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 70 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 71 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 72 "data/maps/LittlerootTown/scripts.pory"
	return
# 73 "data/maps/LittlerootTown/scripts.pory"

# 74 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 75 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 76 "data/maps/LittlerootTown/scripts.pory"
	return
# 77 "data/maps/LittlerootTown/scripts.pory"

# 78 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 79 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 80 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 81 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 82 "data/maps/LittlerootTown/scripts.pory"
	return
# 83 "data/maps/LittlerootTown/scripts.pory"

# 84 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 85 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 86 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 87 "data/maps/LittlerootTown/scripts.pory"
	return
# 88 "data/maps/LittlerootTown/scripts.pory"

# 89 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 90 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 91 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 92 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 93 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 94 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 95 "data/maps/LittlerootTown/scripts.pory"
	return
# 96 "data/maps/LittlerootTown/scripts.pory"

# 97 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 98 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 99 "data/maps/LittlerootTown/scripts.pory"
	return
# 100 "data/maps/LittlerootTown/scripts.pory"

# 101 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 102 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 103 "data/maps/LittlerootTown/scripts.pory"
	return
# 104 "data/maps/LittlerootTown/scripts.pory"

# 105 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 106 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 107 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 108 "data/maps/LittlerootTown/scripts.pory"

# 109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 110 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 111 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 112 "data/maps/LittlerootTown/scripts.pory"

# 113 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 114 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 115 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 116 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 117 "data/maps/LittlerootTown/scripts.pory"

# 118 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 119 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 120 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 121 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 122 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 123 "data/maps/LittlerootTown/scripts.pory"

# 124 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 125 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 126 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 127 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 130 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 131 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 132 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 133 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 134 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 135 "data/maps/LittlerootTown/scripts.pory"

# 136 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 137 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 138 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 139 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 140 "data/maps/LittlerootTown/scripts.pory"

# 141 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 142 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 143 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 144 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 145 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 146 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 147 "data/maps/LittlerootTown/scripts.pory"

# 148 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 149 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 150 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 151 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 154 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 155 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 156 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 157 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 158 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 159 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 160 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 161 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 162 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 163 "data/maps/LittlerootTown/scripts.pory"
	end
# 164 "data/maps/LittlerootTown/scripts.pory"

# 165 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 166 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 167 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 168 "data/maps/LittlerootTown/scripts.pory"

# 169 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 170 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 171 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 172 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 173 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 174 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 175 "data/maps/LittlerootTown/scripts.pory"
	end
# 176 "data/maps/LittlerootTown/scripts.pory"

# 177 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 178 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 179 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 180 "data/maps/LittlerootTown/scripts.pory"
	end
# 181 "data/maps/LittlerootTown/scripts.pory"

# 182 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 183 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 184 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 185 "data/maps/LittlerootTown/scripts.pory"
	end
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 188 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 189 "data/maps/LittlerootTown/scripts.pory"
	end
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 192 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 193 "data/maps/LittlerootTown/scripts.pory"
	end
# 194 "data/maps/LittlerootTown/scripts.pory"

# 195 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 196 "data/maps/LittlerootTown/scripts.pory"
	lock
# 197 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 198 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 199 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 200 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 201 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 202 "data/maps/LittlerootTown/scripts.pory"
	release
# 203 "data/maps/LittlerootTown/scripts.pory"
	end
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 206 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 207 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 208 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 209 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 210 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 211 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 212 "data/maps/LittlerootTown/scripts.pory"
	release
# 213 "data/maps/LittlerootTown/scripts.pory"
	end
# 214 "data/maps/LittlerootTown/scripts.pory"

# 215 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 216 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 217 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 218 "data/maps/LittlerootTown/scripts.pory"
	release
# 219 "data/maps/LittlerootTown/scripts.pory"
	end
# 220 "data/maps/LittlerootTown/scripts.pory"

# 221 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 222 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 223 "data/maps/LittlerootTown/scripts.pory"
	release
# 224 "data/maps/LittlerootTown/scripts.pory"
	end
# 225 "data/maps/LittlerootTown/scripts.pory"

# 226 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 227 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 228 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 229 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 230 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 231 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 232 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 233 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 234 "data/maps/LittlerootTown/scripts.pory"
	end
# 235 "data/maps/LittlerootTown/scripts.pory"

# 236 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 237 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 238 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 239 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 240 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 241 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 242 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 243 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 244 "data/maps/LittlerootTown/scripts.pory"
	return
# 245 "data/maps/LittlerootTown/scripts.pory"

# 246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 247 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 248 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 249 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 250 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 251 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 252 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 253 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 254 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 255 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 256 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 257 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 258 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 259 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 260 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 261 "data/maps/LittlerootTown/scripts.pory"

# 262 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 263 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 264 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 265 "data/maps/LittlerootTown/scripts.pory"

# 266 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 267 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 268 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 269 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 270 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 271 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 272 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 273 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 274 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 275 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 276 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 277 "data/maps/LittlerootTown/scripts.pory"

# 278 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 279 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 280 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 281 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 282 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 285 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 286 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 287 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 289 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 290 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 292 "data/maps/LittlerootTown/scripts.pory"
	end
# 293 "data/maps/LittlerootTown/scripts.pory"

# 294 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 295 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 296 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 297 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 298 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 299 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 300 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 301 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 302 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 303 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 306 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 307 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 308 "data/maps/LittlerootTown/scripts.pory"

# 309 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 310 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 311 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 312 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 313 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 314 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 315 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 316 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 317 "data/maps/LittlerootTown/scripts.pory"

# 318 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 319 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 320 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 322 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 323 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 324 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 325 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 326 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 327 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 328 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 329 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 330 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 331 "data/maps/LittlerootTown/scripts.pory"
	end
# 332 "data/maps/LittlerootTown/scripts.pory"

# 333 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 334 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 335 "data/maps/LittlerootTown/scripts.pory"
	end
# 336 "data/maps/LittlerootTown/scripts.pory"

# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 338 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 339 "data/maps/LittlerootTown/scripts.pory"
	end
# 340 "data/maps/LittlerootTown/scripts.pory"

# 341 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 342 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 343 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 344 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 345 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 346 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 347 "data/maps/LittlerootTown/scripts.pory"
	end
# 348 "data/maps/LittlerootTown/scripts.pory"

# 349 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 350 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 351 "data/maps/LittlerootTown/scripts.pory"
	return
# 352 "data/maps/LittlerootTown/scripts.pory"

# 353 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 354 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 355 "data/maps/LittlerootTown/scripts.pory"
	return
# 356 "data/maps/LittlerootTown/scripts.pory"

# 357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 358 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 359 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 360 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 361 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 362 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 363 "data/maps/LittlerootTown/scripts.pory"
	end
# 364 "data/maps/LittlerootTown/scripts.pory"

# 365 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 366 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 367 "data/maps/LittlerootTown/scripts.pory"
	return
# 368 "data/maps/LittlerootTown/scripts.pory"

# 369 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 370 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 371 "data/maps/LittlerootTown/scripts.pory"
	return
# 372 "data/maps/LittlerootTown/scripts.pory"

# 373 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 374 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 375 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 376 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 13, 17
# 377 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 378 "data/maps/LittlerootTown/scripts.pory"
	end
# 379 "data/maps/LittlerootTown/scripts.pory"

# 380 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 381 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 382 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 383 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 384 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 385 "data/maps/LittlerootTown/scripts.pory"
	end
# 386 "data/maps/LittlerootTown/scripts.pory"

# 387 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 388 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 389 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 390 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 391 "data/maps/LittlerootTown/scripts.pory"
	end
# 392 "data/maps/LittlerootTown/scripts.pory"

# 393 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 394 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 395 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 396 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 397 "data/maps/LittlerootTown/scripts.pory"
	end
# 398 "data/maps/LittlerootTown/scripts.pory"

# 399 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 400 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 401 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 402 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 403 "data/maps/LittlerootTown/scripts.pory"
	end
# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 406 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 407 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 408 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 409 "data/maps/LittlerootTown/scripts.pory"
	end
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 412 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 413 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 414 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 415 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 416 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 417 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 418 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 419 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 420 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 421 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 422 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 423 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 424 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 425 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 426 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 427 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 428 "data/maps/LittlerootTown/scripts.pory"
	end
# 429 "data/maps/LittlerootTown/scripts.pory"

# 430 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 431 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 432 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 433 "data/maps/LittlerootTown/scripts.pory"
	return
# 434 "data/maps/LittlerootTown/scripts.pory"

# 435 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 436 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 437 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 438 "data/maps/LittlerootTown/scripts.pory"
	return
# 439 "data/maps/LittlerootTown/scripts.pory"

# 440 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 441 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 442 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 443 "data/maps/LittlerootTown/scripts.pory"
	return
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 446 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 447 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 448 "data/maps/LittlerootTown/scripts.pory"
	return
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 451 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 452 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 453 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 454 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 455 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 456 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 457 "data/maps/LittlerootTown/scripts.pory"
	return
# 458 "data/maps/LittlerootTown/scripts.pory"

# 459 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 460 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 461 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 462 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 463 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 464 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 465 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 466 "data/maps/LittlerootTown/scripts.pory"
	return
# 467 "data/maps/LittlerootTown/scripts.pory"

# 468 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 469 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 470 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 471 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 472 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 473 "data/maps/LittlerootTown/scripts.pory"
	return
# 474 "data/maps/LittlerootTown/scripts.pory"

# 475 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 476 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 477 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 478 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 479 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 480 "data/maps/LittlerootTown/scripts.pory"
	return
# 481 "data/maps/LittlerootTown/scripts.pory"

# 482 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 483 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 484 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 485 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 486 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 487 "data/maps/LittlerootTown/scripts.pory"
	return
# 488 "data/maps/LittlerootTown/scripts.pory"

# 489 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 490 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 491 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 492 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 493 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 494 "data/maps/LittlerootTown/scripts.pory"
	return
# 495 "data/maps/LittlerootTown/scripts.pory"

# 496 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 497 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 498 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 499 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 500 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 501 "data/maps/LittlerootTown/scripts.pory"
	return
# 502 "data/maps/LittlerootTown/scripts.pory"

# 503 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 504 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 505 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 506 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 507 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 508 "data/maps/LittlerootTown/scripts.pory"
	return
# 509 "data/maps/LittlerootTown/scripts.pory"

# 510 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 511 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 512 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 513 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 514 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 515 "data/maps/LittlerootTown/scripts.pory"
	return
# 516 "data/maps/LittlerootTown/scripts.pory"

# 517 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 518 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 519 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 521 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 522 "data/maps/LittlerootTown/scripts.pory"
	return
# 523 "data/maps/LittlerootTown/scripts.pory"

# 524 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 525 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 526 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 527 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 528 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 529 "data/maps/LittlerootTown/scripts.pory"
	return
# 530 "data/maps/LittlerootTown/scripts.pory"

# 531 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 532 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 533 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 534 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 535 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 536 "data/maps/LittlerootTown/scripts.pory"
	return
# 537 "data/maps/LittlerootTown/scripts.pory"

# 538 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 539 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 540 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 541 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 542 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 543 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 544 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 545 "data/maps/LittlerootTown/scripts.pory"
	return
# 546 "data/maps/LittlerootTown/scripts.pory"

# 547 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 548 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 549 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 550 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 551 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 552 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 553 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 554 "data/maps/LittlerootTown/scripts.pory"
	return
# 555 "data/maps/LittlerootTown/scripts.pory"

# 556 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 557 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 558 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/LittlerootTown/scripts.pory"
	return
# 560 "data/maps/LittlerootTown/scripts.pory"

# 561 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 562 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 563 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 564 "data/maps/LittlerootTown/scripts.pory"
	return
# 565 "data/maps/LittlerootTown/scripts.pory"

# 566 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 570 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 571 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 574 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 576 "data/maps/LittlerootTown/scripts.pory"
	return
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 583 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 584 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 585 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 586 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 588 "data/maps/LittlerootTown/scripts.pory"
	return
# 589 "data/maps/LittlerootTown/scripts.pory"

# 590 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 591 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 592 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 593 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 598 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 599 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 600 "data/maps/LittlerootTown/scripts.pory"
	return
# 601 "data/maps/LittlerootTown/scripts.pory"

# 602 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 603 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 604 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 605 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 606 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 607 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 608 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 609 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 610 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 611 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 612 "data/maps/LittlerootTown/scripts.pory"
	return
# 613 "data/maps/LittlerootTown/scripts.pory"

# 614 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 615 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 616 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 617 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 618 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 619 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 620 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 621 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 622 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 623 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 624 "data/maps/LittlerootTown/scripts.pory"
	return
# 625 "data/maps/LittlerootTown/scripts.pory"

# 626 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 627 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 628 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 629 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 630 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 631 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 633 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 634 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 636 "data/maps/LittlerootTown/scripts.pory"
	return
# 637 "data/maps/LittlerootTown/scripts.pory"

# 638 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 643 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 645 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 646 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 648 "data/maps/LittlerootTown/scripts.pory"
	return
# 649 "data/maps/LittlerootTown/scripts.pory"

# 650 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 651 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 655 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 656 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 657 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 658 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 660 "data/maps/LittlerootTown/scripts.pory"
	return
# 661 "data/maps/LittlerootTown/scripts.pory"

# 662 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 663 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 664 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 666 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 667 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 668 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 669 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 672 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 673 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 674 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 675 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 676 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 677 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 678 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 679 "data/maps/LittlerootTown/scripts.pory"

# 680 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 681 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 682 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 683 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 684 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 685 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 688 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 689 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 691 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 692 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 693 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 694 "data/maps/LittlerootTown/scripts.pory"

# 695 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 696 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 697 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 698 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 701 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 702 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 704 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 705 "data/maps/LittlerootTown/scripts.pory"

# 706 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 707 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 708 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 709 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 710 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 711 "data/maps/LittlerootTown/scripts.pory"

# 712 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 713 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 714 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 715 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 716 "data/maps/LittlerootTown/scripts.pory"

# 717 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 718 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 719 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 720 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 721 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 722 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 723 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 724 "data/maps/LittlerootTown/scripts.pory"

# 725 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 730 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 731 "data/maps/LittlerootTown/scripts.pory"

# 732 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 738 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 739 "data/maps/LittlerootTown/scripts.pory"

# 740 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 746 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 747 "data/maps/LittlerootTown/scripts.pory"

# 748 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 754 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 755 "data/maps/LittlerootTown/scripts.pory"

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 760 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 763 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 764 "data/maps/LittlerootTown/scripts.pory"

# 765 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 766 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 767 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 769 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 770 "data/maps/LittlerootTown/scripts.pory"

# 771 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 776 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 777 "data/maps/LittlerootTown/scripts.pory"

# 778 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 783 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 784 "data/maps/LittlerootTown/scripts.pory"

# 785 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 789 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 798 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 799 "data/maps/LittlerootTown/scripts.pory"

# 800 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 805 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 806 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 807 "data/maps/LittlerootTown/scripts.pory"

# 808 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 810 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 811 "data/maps/LittlerootTown/scripts.pory"

# 812 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 813 "data/maps/LittlerootTown/scripts.pory"
	lock
# 814 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 815 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 816 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 817 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 818 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 819 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 820 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 821 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 822 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 823 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 824 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 825 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 826 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 827 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 828 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 829 "data/maps/LittlerootTown/scripts.pory"
	end
# 830 "data/maps/LittlerootTown/scripts.pory"

# 831 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 832 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 833 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 834 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 835 "data/maps/LittlerootTown/scripts.pory"
	release
# 836 "data/maps/LittlerootTown/scripts.pory"
	end
# 837 "data/maps/LittlerootTown/scripts.pory"

# 838 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 839 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 840 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 841 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 842 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 843 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 844 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 845 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 846 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 847 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 848 "data/maps/LittlerootTown/scripts.pory"
	return
# 849 "data/maps/LittlerootTown/scripts.pory"

# 850 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 851 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 852 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 853 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 854 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 855 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 856 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 857 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 858 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 859 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 860 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 861 "data/maps/LittlerootTown/scripts.pory"

# 862 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 863 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 864 "data/maps/LittlerootTown/scripts.pory"

# 865 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 866 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 867 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 868 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 869 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 870 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 872 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 873 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 874 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 875 "data/maps/LittlerootTown/scripts.pory"

# 876 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 877 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 878 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 879 "data/maps/LittlerootTown/scripts.pory"

# 880 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 881 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 882 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 883 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 884 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 885 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 886 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 887 "data/maps/LittlerootTown/scripts.pory"

# 888 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 889 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 890 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 892 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 893 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 894 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 895 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 896 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 897 "data/maps/LittlerootTown/scripts.pory"

# 898 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 899 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 900 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 901 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 902 "data/maps/LittlerootTown/scripts.pory"

# 903 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 904 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 905 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 906 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 907 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 908 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 909 "data/maps/LittlerootTown/scripts.pory"

# 910 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 911 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 912 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 913 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 914 "data/maps/LittlerootTown/scripts.pory"

# 915 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 916 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 917 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 918 "data/maps/LittlerootTown/scripts.pory"

# 919 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 923 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 926 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 927 "data/maps/LittlerootTown/scripts.pory"

# 928 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 931 "data/maps/LittlerootTown/scripts.pory"

# 932 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 935 "data/maps/LittlerootTown/scripts.pory"

# 936 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 939 "data/maps/LittlerootTown/scripts.pory"

# 940 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 942 "data/maps/LittlerootTown/scripts.pory"

# 943 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 945 "data/maps/LittlerootTown/scripts.pory"

# 946 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 948 "data/maps/LittlerootTown/scripts.pory"

# 949 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 958 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"
