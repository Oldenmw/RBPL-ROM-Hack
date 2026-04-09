# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "age as you.\p"
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a new friend.\p"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with POKéMON.\p"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON!\p"
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a POKéMON?\p"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON.\p"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own POKéMON?$"
