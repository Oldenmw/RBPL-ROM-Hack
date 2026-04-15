LittlerootTown_BrendansHouse_2F_MapScripts::
# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
	.byte 0


LittlerootTown_BrendansHouse_2F_EventScript_SetClockStaircase::
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_2F_EventScript_SetClockStaircase_Text_0
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_EventScript_SetClockStaircase_Movement_0
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition::
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 7, LittlerootTown_PlayersHouse_2F_EventScript_Vars
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "POKéMON movers are so convenient!\p"
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{REGION} region map.$"
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetClockStaircase_Movement_0:
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

LittlerootTown_BrendansHouse_2F_EventScript_SetClockStaircase_Text_0:
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh! You forgot to set the clock!$"
