LittlerootTown_EventScript_Meowth::
# 2 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Meowth_Text_0
	end


LittlerootTown_EventScript_Growlithe::
# 7 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Growlithe_Text_0
	end


LittlerootTown_EventScript_Pichu::
# 12 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Pichu_Text_0
	end


LittlerootTown_EventScript_Pidgey::
# 17 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Pidgey_Text_0
	end


# 21 "data/maps/LittlerootTown/scripts.pory"

# 22 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 23 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 24 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 25 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 26 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 27 "data/maps/LittlerootTown/scripts.pory"

# 28 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 33 "data/maps/LittlerootTown/scripts.pory"

# 34 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 44 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 45 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 46 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 47 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 48 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 49 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 50 "data/maps/LittlerootTown/scripts.pory"

# 51 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 52 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 53 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 54 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 55 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 56 "data/maps/LittlerootTown/scripts.pory"

# 57 "data/maps/LittlerootTown/scripts.pory"

# 58 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 59 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 60 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 61 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 62 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 63 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 64 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 65 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 66 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 67 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 68 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 69 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 70 "data/maps/LittlerootTown/scripts.pory"
	end
# 71 "data/maps/LittlerootTown/scripts.pory"

# 72 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 73 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 74 "data/maps/LittlerootTown/scripts.pory"
	return
# 75 "data/maps/LittlerootTown/scripts.pory"

# 76 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 77 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 78 "data/maps/LittlerootTown/scripts.pory"
	return
# 79 "data/maps/LittlerootTown/scripts.pory"

# 80 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 81 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 82 "data/maps/LittlerootTown/scripts.pory"
	return
# 83 "data/maps/LittlerootTown/scripts.pory"

# 84 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 85 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 86 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 87 "data/maps/LittlerootTown/scripts.pory"
	return
# 88 "data/maps/LittlerootTown/scripts.pory"

# 89 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 90 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 91 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 92 "data/maps/LittlerootTown/scripts.pory"
	return
# 93 "data/maps/LittlerootTown/scripts.pory"

# 94 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 95 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 96 "data/maps/LittlerootTown/scripts.pory"
	return
# 97 "data/maps/LittlerootTown/scripts.pory"

# 98 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 99 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 100 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 101 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 102 "data/maps/LittlerootTown/scripts.pory"
	return
# 103 "data/maps/LittlerootTown/scripts.pory"

# 104 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 105 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 106 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 107 "data/maps/LittlerootTown/scripts.pory"
	return
# 108 "data/maps/LittlerootTown/scripts.pory"

# 109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 110 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 111 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 112 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 113 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 114 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 115 "data/maps/LittlerootTown/scripts.pory"
	return
# 116 "data/maps/LittlerootTown/scripts.pory"

# 117 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 118 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 119 "data/maps/LittlerootTown/scripts.pory"
	return
# 120 "data/maps/LittlerootTown/scripts.pory"

# 121 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 122 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 123 "data/maps/LittlerootTown/scripts.pory"
	return
# 124 "data/maps/LittlerootTown/scripts.pory"

# 125 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 126 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 127 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 131 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 132 "data/maps/LittlerootTown/scripts.pory"

# 133 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 135 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 136 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 137 "data/maps/LittlerootTown/scripts.pory"

# 138 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 139 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 140 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 141 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 142 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 143 "data/maps/LittlerootTown/scripts.pory"

# 144 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 145 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 146 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 147 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 148 "data/maps/LittlerootTown/scripts.pory"

# 149 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 150 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 151 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 152 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 153 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 154 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 155 "data/maps/LittlerootTown/scripts.pory"

# 156 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 157 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 158 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 159 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 160 "data/maps/LittlerootTown/scripts.pory"

# 161 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 162 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 163 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 164 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 165 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 166 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 167 "data/maps/LittlerootTown/scripts.pory"

# 168 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 169 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 170 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 171 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 172 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 174 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 175 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 176 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 177 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 178 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 179 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 180 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 181 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 182 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 183 "data/maps/LittlerootTown/scripts.pory"
	end
# 184 "data/maps/LittlerootTown/scripts.pory"

# 185 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 186 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 187 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 188 "data/maps/LittlerootTown/scripts.pory"

# 189 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 190 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 191 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 192 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 193 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 194 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 195 "data/maps/LittlerootTown/scripts.pory"
	end
# 196 "data/maps/LittlerootTown/scripts.pory"

# 197 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 198 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 199 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 200 "data/maps/LittlerootTown/scripts.pory"
	end
# 201 "data/maps/LittlerootTown/scripts.pory"

# 202 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 203 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 204 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 205 "data/maps/LittlerootTown/scripts.pory"
	end
# 206 "data/maps/LittlerootTown/scripts.pory"

# 207 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 208 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 209 "data/maps/LittlerootTown/scripts.pory"
	end
# 210 "data/maps/LittlerootTown/scripts.pory"

# 211 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 212 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 213 "data/maps/LittlerootTown/scripts.pory"
	end
# 214 "data/maps/LittlerootTown/scripts.pory"

# 215 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 216 "data/maps/LittlerootTown/scripts.pory"
	lock
# 217 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 218 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 219 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 220 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 221 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 222 "data/maps/LittlerootTown/scripts.pory"
	release
# 223 "data/maps/LittlerootTown/scripts.pory"
	end
# 224 "data/maps/LittlerootTown/scripts.pory"

# 225 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 226 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 227 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 228 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 229 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 230 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 231 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 232 "data/maps/LittlerootTown/scripts.pory"
	release
# 233 "data/maps/LittlerootTown/scripts.pory"
	end
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 236 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 237 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 238 "data/maps/LittlerootTown/scripts.pory"
	release
# 239 "data/maps/LittlerootTown/scripts.pory"
	end
# 240 "data/maps/LittlerootTown/scripts.pory"

# 241 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 242 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 243 "data/maps/LittlerootTown/scripts.pory"
	release
# 244 "data/maps/LittlerootTown/scripts.pory"
	end
# 245 "data/maps/LittlerootTown/scripts.pory"

# 246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 247 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 248 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 249 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 250 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 251 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 252 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 253 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 254 "data/maps/LittlerootTown/scripts.pory"
	end
# 255 "data/maps/LittlerootTown/scripts.pory"

# 256 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 257 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 258 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 259 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 260 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 261 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 262 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 263 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 264 "data/maps/LittlerootTown/scripts.pory"
	return
# 265 "data/maps/LittlerootTown/scripts.pory"

# 266 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 267 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 268 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 269 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 270 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 271 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 272 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 273 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 274 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 275 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 276 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 277 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 278 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 279 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 280 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 281 "data/maps/LittlerootTown/scripts.pory"

# 282 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 283 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 284 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 285 "data/maps/LittlerootTown/scripts.pory"

# 286 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 287 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 288 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 289 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 290 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 291 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 292 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 293 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 294 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 295 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 296 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 297 "data/maps/LittlerootTown/scripts.pory"

# 298 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 299 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 300 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 301 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 302 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 303 "data/maps/LittlerootTown/scripts.pory"

# 304 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 305 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 306 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 307 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 308 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 309 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 310 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 311 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 312 "data/maps/LittlerootTown/scripts.pory"
	end
# 313 "data/maps/LittlerootTown/scripts.pory"

# 314 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 315 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 316 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 317 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 318 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 319 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 327 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 336 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 337 "data/maps/LittlerootTown/scripts.pory"

# 338 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 339 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 340 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 341 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 343 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 344 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 345 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 346 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 347 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 348 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 349 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 350 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 351 "data/maps/LittlerootTown/scripts.pory"
	end
# 352 "data/maps/LittlerootTown/scripts.pory"

# 353 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 354 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 355 "data/maps/LittlerootTown/scripts.pory"
	end
# 356 "data/maps/LittlerootTown/scripts.pory"

# 357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 358 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 359 "data/maps/LittlerootTown/scripts.pory"
	end
# 360 "data/maps/LittlerootTown/scripts.pory"

# 361 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 362 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 363 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 364 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 365 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 366 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 367 "data/maps/LittlerootTown/scripts.pory"
	end
# 368 "data/maps/LittlerootTown/scripts.pory"

# 369 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 370 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 371 "data/maps/LittlerootTown/scripts.pory"
	return
# 372 "data/maps/LittlerootTown/scripts.pory"

# 373 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 374 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 375 "data/maps/LittlerootTown/scripts.pory"
	return
# 376 "data/maps/LittlerootTown/scripts.pory"

# 377 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 378 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 379 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 380 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 381 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 382 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 383 "data/maps/LittlerootTown/scripts.pory"
	end
# 384 "data/maps/LittlerootTown/scripts.pory"

# 385 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 386 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 387 "data/maps/LittlerootTown/scripts.pory"
	return
# 388 "data/maps/LittlerootTown/scripts.pory"

# 389 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 390 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 391 "data/maps/LittlerootTown/scripts.pory"
	return
# 392 "data/maps/LittlerootTown/scripts.pory"

# 393 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 394 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 395 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 396 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 13, 17
# 397 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 398 "data/maps/LittlerootTown/scripts.pory"
	end
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 401 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 402 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 403 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 404 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 405 "data/maps/LittlerootTown/scripts.pory"
	end
# 406 "data/maps/LittlerootTown/scripts.pory"

# 407 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 408 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 409 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 410 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 411 "data/maps/LittlerootTown/scripts.pory"
	end
# 412 "data/maps/LittlerootTown/scripts.pory"

# 413 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 414 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 415 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 416 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 417 "data/maps/LittlerootTown/scripts.pory"
	end
# 418 "data/maps/LittlerootTown/scripts.pory"

# 419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 420 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 421 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 422 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 423 "data/maps/LittlerootTown/scripts.pory"
	end
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 426 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 427 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 428 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 429 "data/maps/LittlerootTown/scripts.pory"
	end
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 432 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 433 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 434 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 435 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 436 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 437 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 438 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 439 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 440 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 441 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 442 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 443 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 444 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 445 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 446 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 447 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 448 "data/maps/LittlerootTown/scripts.pory"
	end
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 451 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 452 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 453 "data/maps/LittlerootTown/scripts.pory"
	return
# 454 "data/maps/LittlerootTown/scripts.pory"

# 455 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 456 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 457 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 458 "data/maps/LittlerootTown/scripts.pory"
	return
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 461 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 462 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 463 "data/maps/LittlerootTown/scripts.pory"
	return
# 464 "data/maps/LittlerootTown/scripts.pory"

# 465 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 466 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 467 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 468 "data/maps/LittlerootTown/scripts.pory"
	return
# 469 "data/maps/LittlerootTown/scripts.pory"

# 470 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 471 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 472 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 473 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 474 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 475 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 476 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 477 "data/maps/LittlerootTown/scripts.pory"
	return
# 478 "data/maps/LittlerootTown/scripts.pory"

# 479 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 480 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 481 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 482 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 483 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 484 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 485 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 486 "data/maps/LittlerootTown/scripts.pory"
	return
# 487 "data/maps/LittlerootTown/scripts.pory"

# 488 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 489 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 490 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 491 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 492 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 493 "data/maps/LittlerootTown/scripts.pory"
	return
# 494 "data/maps/LittlerootTown/scripts.pory"

# 495 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 496 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 497 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 498 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 499 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 500 "data/maps/LittlerootTown/scripts.pory"
	return
# 501 "data/maps/LittlerootTown/scripts.pory"

# 502 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 503 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 504 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 505 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 506 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 507 "data/maps/LittlerootTown/scripts.pory"
	return
# 508 "data/maps/LittlerootTown/scripts.pory"

# 509 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 510 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 511 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 512 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 513 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 514 "data/maps/LittlerootTown/scripts.pory"
	return
# 515 "data/maps/LittlerootTown/scripts.pory"

# 516 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 517 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 518 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 519 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 520 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 521 "data/maps/LittlerootTown/scripts.pory"
	return
# 522 "data/maps/LittlerootTown/scripts.pory"

# 523 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 524 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 525 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 526 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 527 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 528 "data/maps/LittlerootTown/scripts.pory"
	return
# 529 "data/maps/LittlerootTown/scripts.pory"

# 530 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 531 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 532 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 533 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 534 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 535 "data/maps/LittlerootTown/scripts.pory"
	return
# 536 "data/maps/LittlerootTown/scripts.pory"

# 537 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 538 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 539 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 540 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 541 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 542 "data/maps/LittlerootTown/scripts.pory"
	return
# 543 "data/maps/LittlerootTown/scripts.pory"

# 544 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 545 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 546 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 548 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 549 "data/maps/LittlerootTown/scripts.pory"
	return
# 550 "data/maps/LittlerootTown/scripts.pory"

# 551 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 552 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 555 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 556 "data/maps/LittlerootTown/scripts.pory"
	return
# 557 "data/maps/LittlerootTown/scripts.pory"

# 558 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 559 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 560 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 561 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 562 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 563 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 564 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 565 "data/maps/LittlerootTown/scripts.pory"
	return
# 566 "data/maps/LittlerootTown/scripts.pory"

# 567 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 568 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 569 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 570 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 571 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 572 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 573 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 574 "data/maps/LittlerootTown/scripts.pory"
	return
# 575 "data/maps/LittlerootTown/scripts.pory"

# 576 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 577 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 578 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 579 "data/maps/LittlerootTown/scripts.pory"
	return
# 580 "data/maps/LittlerootTown/scripts.pory"

# 581 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 582 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 583 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 584 "data/maps/LittlerootTown/scripts.pory"
	return
# 585 "data/maps/LittlerootTown/scripts.pory"

# 586 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 588 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 590 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 591 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 592 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 593 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 594 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 595 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 596 "data/maps/LittlerootTown/scripts.pory"
	return
# 597 "data/maps/LittlerootTown/scripts.pory"

# 598 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 599 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 600 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 601 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 602 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 603 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 604 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 605 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 606 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 607 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 608 "data/maps/LittlerootTown/scripts.pory"
	return
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 611 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 612 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 613 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 614 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 615 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 616 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 617 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 618 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 619 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 620 "data/maps/LittlerootTown/scripts.pory"
	return
# 621 "data/maps/LittlerootTown/scripts.pory"

# 622 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 623 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 624 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 625 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 626 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 627 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 628 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 629 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 630 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 631 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 632 "data/maps/LittlerootTown/scripts.pory"
	return
# 633 "data/maps/LittlerootTown/scripts.pory"

# 634 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 635 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 637 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 638 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 642 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 643 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 644 "data/maps/LittlerootTown/scripts.pory"
	return
# 645 "data/maps/LittlerootTown/scripts.pory"

# 646 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 647 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 649 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 651 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 654 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 655 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 656 "data/maps/LittlerootTown/scripts.pory"
	return
# 657 "data/maps/LittlerootTown/scripts.pory"

# 658 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 659 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 660 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 661 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 663 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 665 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 666 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 667 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 668 "data/maps/LittlerootTown/scripts.pory"
	return
# 669 "data/maps/LittlerootTown/scripts.pory"

# 670 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 671 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 673 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 674 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 675 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 677 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 678 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 680 "data/maps/LittlerootTown/scripts.pory"
	return
# 681 "data/maps/LittlerootTown/scripts.pory"

# 682 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 683 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 684 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 685 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 686 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 687 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 688 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 689 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 690 "data/maps/LittlerootTown/scripts.pory"

# 691 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 692 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 693 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 694 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 696 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 697 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 698 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 701 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 702 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 704 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 705 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 706 "data/maps/LittlerootTown/scripts.pory"

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 708 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 709 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 710 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 712 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 713 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 714 "data/maps/LittlerootTown/scripts.pory"

# 715 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 716 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 717 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 718 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 719 "data/maps/LittlerootTown/scripts.pory"

# 720 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 721 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 722 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 723 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 724 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 725 "data/maps/LittlerootTown/scripts.pory"

# 726 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
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
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 735 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 736 "data/maps/LittlerootTown/scripts.pory"

# 737 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 743 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 744 "data/maps/LittlerootTown/scripts.pory"

# 745 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 750 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 751 "data/maps/LittlerootTown/scripts.pory"

# 752 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 758 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 759 "data/maps/LittlerootTown/scripts.pory"

# 760 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 766 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 767 "data/maps/LittlerootTown/scripts.pory"

# 768 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 774 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 775 "data/maps/LittlerootTown/scripts.pory"

# 776 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 783 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 784 "data/maps/LittlerootTown/scripts.pory"

# 785 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 789 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 796 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 797 "data/maps/LittlerootTown/scripts.pory"

# 798 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 803 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 804 "data/maps/LittlerootTown/scripts.pory"

# 805 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 809 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 810 "data/maps/LittlerootTown/scripts.pory"

# 811 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 818 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 819 "data/maps/LittlerootTown/scripts.pory"

# 820 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 826 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 827 "data/maps/LittlerootTown/scripts.pory"

# 828 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 830 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 831 "data/maps/LittlerootTown/scripts.pory"

# 832 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 833 "data/maps/LittlerootTown/scripts.pory"
	lock
# 834 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 835 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 836 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 837 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 838 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 839 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 840 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 841 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 842 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 843 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 844 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 845 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 846 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 847 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 848 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 849 "data/maps/LittlerootTown/scripts.pory"
	end
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 852 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 853 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 854 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 855 "data/maps/LittlerootTown/scripts.pory"
	release
# 856 "data/maps/LittlerootTown/scripts.pory"
	end
# 857 "data/maps/LittlerootTown/scripts.pory"

# 858 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 859 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 860 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 861 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 862 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 863 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 864 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 865 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 866 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 867 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 868 "data/maps/LittlerootTown/scripts.pory"
	return
# 869 "data/maps/LittlerootTown/scripts.pory"

# 870 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 872 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 873 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 874 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 875 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 876 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 877 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 878 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 879 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 880 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 881 "data/maps/LittlerootTown/scripts.pory"

# 882 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 883 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 884 "data/maps/LittlerootTown/scripts.pory"

# 885 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 886 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 887 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 888 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 889 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 890 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 892 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 893 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 894 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 895 "data/maps/LittlerootTown/scripts.pory"

# 896 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 897 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 898 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 899 "data/maps/LittlerootTown/scripts.pory"

# 900 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 901 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 902 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 903 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 904 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 905 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 906 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 907 "data/maps/LittlerootTown/scripts.pory"

# 908 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 909 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 910 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 911 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 912 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 913 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 914 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 915 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 916 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 917 "data/maps/LittlerootTown/scripts.pory"

# 918 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 926 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 929 "data/maps/LittlerootTown/scripts.pory"

# 930 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 934 "data/maps/LittlerootTown/scripts.pory"

# 935 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 938 "data/maps/LittlerootTown/scripts.pory"

# 939 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 946 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 947 "data/maps/LittlerootTown/scripts.pory"

# 948 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 949 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 951 "data/maps/LittlerootTown/scripts.pory"

# 952 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 955 "data/maps/LittlerootTown/scripts.pory"

# 956 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 958 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 959 "data/maps/LittlerootTown/scripts.pory"

# 960 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 962 "data/maps/LittlerootTown/scripts.pory"

# 963 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 965 "data/maps/LittlerootTown/scripts.pory"

# 966 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 968 "data/maps/LittlerootTown/scripts.pory"

# 969 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_Meowth_Text_0:
# 2 "data/maps/LittlerootTown/scripts.pory"
	.string "Meowth!$"

LittlerootTown_EventScript_Growlithe_Text_0:
# 7 "data/maps/LittlerootTown/scripts.pory"
	.string "Growlithe!$"

LittlerootTown_EventScript_Pichu_Text_0:
# 12 "data/maps/LittlerootTown/scripts.pory"
	.string "Pi-Pichu!$"

LittlerootTown_EventScript_Pidgey_Text_0:
# 17 "data/maps/LittlerootTown/scripts.pory"
	.string "Pidgey!$"
