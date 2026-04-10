MoveToBattle::
# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, MoveToBattle_3
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, MoveToBattle_4
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, MoveToBattle_5
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, MoveToBattle_6
MoveToBattle_1:
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_StartWallyBattle
	end

MoveToBattle_3:
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MoveToBattle_Movement_0
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	goto MoveToBattle_1

MoveToBattle_4:
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MoveToBattle_Movement_1
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	goto MoveToBattle_1

MoveToBattle_5:
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MoveToBattle_Movement_2
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	goto MoveToBattle_1

MoveToBattle_6:
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MoveToBattle_Movement_3
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	goto MoveToBattle_1


WallyMoveToBattle::
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, WallyMoveToBattle_3
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, WallyMoveToBattle_Movement_1
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
WallyMoveToBattle_1:
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto MoveToBattle
	end

WallyMoveToBattle_3:
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, WallyMoveToBattle_Movement_0
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	goto WallyMoveToBattle_1


PetalburgCity_Gym_StartWallyBattle::
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WALLY_PETALBURG, PetalburgCity_Gym_Text_WallyIntro, PetalburgCity_Gym_Text_WallyOutro, PetalburgCity_Gym_EndWallyBattle
	end


PetalburgCity_Gym_EndWallyBattle::
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EndWallyBattle_Text_0
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EndWallyBattle_Movement_0
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EndWallyBattle_Movement_0
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EndWallyBattle_Text_1
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_WallyLeaveGym
	end


PetalburgCity_Gym_WallyLeaveGym::
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_WallyLeaveGym_Movement_0
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


# 120 "data/maps/PetalburgCity_Gym/scripts.pory"

# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"

# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"

# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"

# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"

# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_WALLY, 5, 108
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"

# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"

# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"

# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"

# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"

# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"

# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"

# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"

# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"

# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	vsseeker_rematchid TRAINER_NORMAN_1
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"

# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"

# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"

# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"

# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto WallyMoveToBattle
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"

# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"

# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"

# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"

# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"

# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"

# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"

# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"

# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"

# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"

# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"

# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_WalkInPlaceFasterDown
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"

# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"

# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"

# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"

# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"

# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"

# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"

# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"

# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"

# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"

# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"

# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"

# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"

# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"

# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"

# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"

# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"

# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"

# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"

# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"

# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"

# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"

# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"

# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"

# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"

# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"

# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"

# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"

# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"

# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"

# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"

# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"

# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"

# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"

# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"

# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"

# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"

# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"

# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"

# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"

# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"

# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"

# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"

# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"

# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"

# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"

# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"

# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"

# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"

# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"

# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"

# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"

# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"

# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"

# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"

# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"

# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"

# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"

# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"

# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"

# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"

# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"

# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"

# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"

# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to challenge you to a gym battle!$"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?$"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I've been studying for years,\n"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "but my parents never let me have\l"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a pokemon until now.\p"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to prove to them that\n"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can be a real trainer!$"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I see. I'm much too\n"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong for you right now.$"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you're taking on\n"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the gym challenge too, right?$"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, why don't you battle {PLAYER}?\n"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It should be a good first test\l" 
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of your skill.$"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Alright, my first official battle!\n"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I've been studying for years, I know\l"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "everything there is to know about Pokemon!$"
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… I challenge you\n"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "to a Pokemon battle!$"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: So, did it work out?$"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your POKéMON back.\p"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my POKéMON.\p"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER, ROXANNE.\p"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other POKéMON\n"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a GYM LEADER, too.\n"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named BRAWLY.\p"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm…\n"
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four GYM BADGES.\p"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON battle.\p"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a GYM LEADER to win.\p"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from DAD!$"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: With that BADGE, the DEFENSE\n"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your POKéMON will increase.\p"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON that know the HM move SURF\n"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: TM42 contains FACADE.\p"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the POKéMON is poisoned, paralyzed,\l"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: As the GYM LEADER, I can't\n"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our LEADER's kid.\p"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LEADER's kid!$"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1675 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1680 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1681 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one POKéMON that is\n"
# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
MoveToBattle_Movement_0:
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_left
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_right
	step_end

# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
MoveToBattle_Movement_1:
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_left
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_down
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_right
	step_end

# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
MoveToBattle_Movement_2:
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_left
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_down
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	Face_right
	step_end

# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
MoveToBattle_Movement_3:
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_down
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_left
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_right
	step_end

# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
WallyMoveToBattle_Movement_0:
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_down
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_right
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_left
	step_end

# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
WallyMoveToBattle_Movement_1:
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_right
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_left
	step_end

# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EndWallyBattle_Movement_0:
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_up
	step_end

# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_WallyLeaveGym_Movement_0:
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_left
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_down
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

PetalburgCity_Gym_EndWallyBattle_Text_0:
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: That was exhilirating!$"

PetalburgCity_Gym_EndWallyBattle_Text_1:
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you handled yourself well.\n"
	.string "You too, Wally. Both of you should be proud.\p"
	.string "Now go to RUSTBORO CITY, through the forest.\n"
	.string "Challenge Th3e and earn his badge.\n"
	.string "Make me proud, {PLAYER}.\p"
	.string "WALLY: I'm going to prove my parents wrong\n"
	.string "and be the strongest trainer in the world.\n"
	.string "Thank you {PLAYER}!$"

PetalburgCity_Gym_Text_WallyIntro::
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Alright, {PLAYER}.\n"
	.string "Show me what you got!$"

PetalburgCity_Gym_Text_WallyOutro::
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I guess theory means nothing\n"
	.string "if I can't put it into practice.$"
