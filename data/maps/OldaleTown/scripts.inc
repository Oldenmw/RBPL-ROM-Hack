# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 3 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 4 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 7 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 8 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 9 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 10 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 11 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 12 "data/maps/OldaleTown/scripts.pory"
	end
# 13 "data/maps/OldaleTown/scripts.pory"

# 14 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 15 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 16 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 17 "data/maps/OldaleTown/scripts.pory"
	return
# 18 "data/maps/OldaleTown/scripts.pory"

# 19 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_OldRodFisherman::
# 20 "data/maps/OldaleTown/scripts.pory"
	lock
# 21 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 22 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, OldaleTown_EventScript_HowsFishing
# 23 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_GettingItchToFish, MSGBOX_YESNO
# 24 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, OldaleTown_EventScript_GiveOldRod
# 25 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OldaleTown_EventScript_NotGettingItchToFish
# 26 "data/maps/OldaleTown/scripts.pory"
	end
# 27 "data/maps/OldaleTown/scripts.pory"

# 28 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GiveOldRod::
# 29 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 30 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 31 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 32 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 33 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 34 "data/maps/OldaleTown/scripts.pory"
	release
# 35 "data/maps/OldaleTown/scripts.pory"
	end
# 36 "data/maps/OldaleTown/scripts.pory"

# 37 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotGettingItchToFish::
# 38 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 39 "data/maps/OldaleTown/scripts.pory"
	release
# 40 "data/maps/OldaleTown/scripts.pory"
	end
# 41 "data/maps/OldaleTown/scripts.pory"

# 42 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_HowsFishing::
# 43 "data/maps/OldaleTown/scripts.pory"
	message OldaleTown_Text_HowsYourFishing
# 44 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 45 "data/maps/OldaleTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 46 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, OldaleTown_EventScript_FishingExcellent
# 47 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, OldaleTown_EventScript_FishingNotSoGood
# 48 "data/maps/OldaleTown/scripts.pory"
	end
# 49 "data/maps/OldaleTown/scripts.pory"

# 50 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FishingExcellent::
# 51 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 52 "data/maps/OldaleTown/scripts.pory"
	release
# 53 "data/maps/OldaleTown/scripts.pory"
	end
# 54 "data/maps/OldaleTown/scripts.pory"

# 55 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FishingNotSoGood::
# 56 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 57 "data/maps/OldaleTown/scripts.pory"
	release
# 58 "data/maps/OldaleTown/scripts.pory"
	end
# 59 "data/maps/OldaleTown/scripts.pory"

# 60 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 61 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 62 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 63 "data/maps/OldaleTown/scripts.pory"
	return
# 64 "data/maps/OldaleTown/scripts.pory"

# 65 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 66 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 67 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 68 "data/maps/OldaleTown/scripts.pory"
	return
# 69 "data/maps/OldaleTown/scripts.pory"

# 70 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 71 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 72 "data/maps/OldaleTown/scripts.pory"
	end
# 73 "data/maps/OldaleTown/scripts.pory"

# 74 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 75 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 76 "data/maps/OldaleTown/scripts.pory"
	end
# 77 "data/maps/OldaleTown/scripts.pory"

# 78 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 79 "data/maps/OldaleTown/scripts.pory"
	lock
# 80 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 81 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 82 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 83 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 84 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 85 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 86 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 87 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 88 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 89 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 90 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 91 "data/maps/OldaleTown/scripts.pory"
	end
# 92 "data/maps/OldaleTown/scripts.pory"

# 93 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 94 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 95 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 96 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 97 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 98 "data/maps/OldaleTown/scripts.pory"
	end
# 99 "data/maps/OldaleTown/scripts.pory"

# 100 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 101 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 102 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 103 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 104 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 105 "data/maps/OldaleTown/scripts.pory"
	end
# 106 "data/maps/OldaleTown/scripts.pory"

# 107 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 108 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 109 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 110 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 112 "data/maps/OldaleTown/scripts.pory"
	end
# 113 "data/maps/OldaleTown/scripts.pory"

# 114 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 115 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 116 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 117 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 118 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 119 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 120 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 121 "data/maps/OldaleTown/scripts.pory"
	release
# 122 "data/maps/OldaleTown/scripts.pory"
	end
# 123 "data/maps/OldaleTown/scripts.pory"

# 124 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 125 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 126 "data/maps/OldaleTown/scripts.pory"
	release
# 127 "data/maps/OldaleTown/scripts.pory"
	end
# 128 "data/maps/OldaleTown/scripts.pory"

# 129 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 130 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 131 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 132 "data/maps/OldaleTown/scripts.pory"
	release
# 133 "data/maps/OldaleTown/scripts.pory"
	end
# 134 "data/maps/OldaleTown/scripts.pory"

# 135 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 142 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 144 "data/maps/OldaleTown/scripts.pory"
	step_end
# 145 "data/maps/OldaleTown/scripts.pory"

# 146 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 149 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 150 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 157 "data/maps/OldaleTown/scripts.pory"
	step_end
# 158 "data/maps/OldaleTown/scripts.pory"

# 159 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 160 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 164 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 165 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 166 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 167 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 168 "data/maps/OldaleTown/scripts.pory"
	step_end
# 169 "data/maps/OldaleTown/scripts.pory"

# 170 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 171 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 172 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 173 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 182 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 184 "data/maps/OldaleTown/scripts.pory"
	step_end
# 185 "data/maps/OldaleTown/scripts.pory"

# 186 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 188 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 192 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 194 "data/maps/OldaleTown/scripts.pory"
	step_end
# 195 "data/maps/OldaleTown/scripts.pory"

# 196 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 197 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 198 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 199 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 200 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 201 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 203 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 204 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 205 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 206 "data/maps/OldaleTown/scripts.pory"
	step_end
# 207 "data/maps/OldaleTown/scripts.pory"

# 208 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 209 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 210 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 212 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 213 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 214 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 216 "data/maps/OldaleTown/scripts.pory"
	step_end
# 217 "data/maps/OldaleTown/scripts.pory"

# 218 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 219 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 220 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 221 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 222 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 223 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 224 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 225 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 226 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 227 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 229 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 230 "data/maps/OldaleTown/scripts.pory"
	step_end
# 231 "data/maps/OldaleTown/scripts.pory"

# 232 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 233 "data/maps/OldaleTown/scripts.pory"
	lock
# 234 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 235 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 236 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 237 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 238 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 239 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 240 "data/maps/OldaleTown/scripts.pory"
	release
# 241 "data/maps/OldaleTown/scripts.pory"
	end
# 242 "data/maps/OldaleTown/scripts.pory"

# 243 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 244 "data/maps/OldaleTown/scripts.pory"
	lockall
# 245 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 246 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 247 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 248 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 249 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 250 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 251 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 252 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 253 "data/maps/OldaleTown/scripts.pory"
	end
# 254 "data/maps/OldaleTown/scripts.pory"

# 255 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 256 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 257 "data/maps/OldaleTown/scripts.pory"
	release
# 258 "data/maps/OldaleTown/scripts.pory"
	end
# 259 "data/maps/OldaleTown/scripts.pory"

# 260 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 261 "data/maps/OldaleTown/scripts.pory"
	lockall
# 262 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 263 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 264 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 265 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 266 "data/maps/OldaleTown/scripts.pory"
	end
# 267 "data/maps/OldaleTown/scripts.pory"

# 268 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 269 "data/maps/OldaleTown/scripts.pory"
	lockall
# 270 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 271 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 272 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 273 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 274 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 275 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 276 "data/maps/OldaleTown/scripts.pory"
	end
# 277 "data/maps/OldaleTown/scripts.pory"

# 278 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 279 "data/maps/OldaleTown/scripts.pory"
	lockall
# 280 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 281 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 282 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 283 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 284 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 285 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 286 "data/maps/OldaleTown/scripts.pory"
	end
# 287 "data/maps/OldaleTown/scripts.pory"

# 288 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 289 "data/maps/OldaleTown/scripts.pory"
	lockall
# 290 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 291 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 292 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 293 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 295 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 296 "data/maps/OldaleTown/scripts.pory"
	end
# 297 "data/maps/OldaleTown/scripts.pory"

# 298 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 299 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 300 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 301 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 302 "data/maps/OldaleTown/scripts.pory"
	end
# 303 "data/maps/OldaleTown/scripts.pory"

# 304 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 305 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 306 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 307 "data/maps/OldaleTown/scripts.pory"
	end
# 308 "data/maps/OldaleTown/scripts.pory"

# 309 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 310 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 311 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 312 "data/maps/OldaleTown/scripts.pory"
	end
# 313 "data/maps/OldaleTown/scripts.pory"

# 314 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 315 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 316 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 317 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 318 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 319 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 320 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 321 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 322 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 323 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 324 "data/maps/OldaleTown/scripts.pory"
	end
# 325 "data/maps/OldaleTown/scripts.pory"

# 326 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 327 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 328 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 329 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 330 "data/maps/OldaleTown/scripts.pory"
	return
# 331 "data/maps/OldaleTown/scripts.pory"

# 332 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 333 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 334 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 335 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 336 "data/maps/OldaleTown/scripts.pory"
	return
# 337 "data/maps/OldaleTown/scripts.pory"

# 338 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 339 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 340 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 341 "data/maps/OldaleTown/scripts.pory"
	step_end
# 342 "data/maps/OldaleTown/scripts.pory"

# 343 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 344 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 345 "data/maps/OldaleTown/scripts.pory"
	step_end
# 346 "data/maps/OldaleTown/scripts.pory"

# 347 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 348 "data/maps/OldaleTown/scripts.pory"
	face_left
# 349 "data/maps/OldaleTown/scripts.pory"
	step_end
# 350 "data/maps/OldaleTown/scripts.pory"

# 351 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 352 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 353 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 354 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 355 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 356 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 357 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 358 "data/maps/OldaleTown/scripts.pory"
	step_end
# 359 "data/maps/OldaleTown/scripts.pory"

# 360 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 361 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 362 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 363 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 364 "data/maps/OldaleTown/scripts.pory"
	step_end
# 365 "data/maps/OldaleTown/scripts.pory"

# 366 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 367 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 368 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 369 "data/maps/OldaleTown/scripts.pory"
	step_end
# 370 "data/maps/OldaleTown/scripts.pory"

# 371 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 372 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 373 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 374 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 375 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 376 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 377 "data/maps/OldaleTown/scripts.pory"
	step_end
# 378 "data/maps/OldaleTown/scripts.pory"

# 379 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 380 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 381 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 382 "data/maps/OldaleTown/scripts.pory"
	step_end
# 383 "data/maps/OldaleTown/scripts.pory"

# 384 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 387 "data/maps/OldaleTown/scripts.pory"

# 388 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 390 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 392 "data/maps/OldaleTown/scripts.pory"

# 393 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 394 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 398 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 400 "data/maps/OldaleTown/scripts.pory"

# 401 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 402 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 403 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 404 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 405 "data/maps/OldaleTown/scripts.pory"

# 406 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 407 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 408 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 409 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 411 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 412 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 413 "data/maps/OldaleTown/scripts.pory"

# 414 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 415 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 416 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 417 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 418 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 419 "data/maps/OldaleTown/scripts.pory"

# 420 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 421 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 422 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 423 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 424 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 425 "data/maps/OldaleTown/scripts.pory"

# 426 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 427 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 428 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 429 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 430 "data/maps/OldaleTown/scripts.pory"

# 431 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 432 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 433 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 434 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 435 "data/maps/OldaleTown/scripts.pory"

# 436 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 437 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 438 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"
# 439 "data/maps/OldaleTown/scripts.pory"

# 440 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_HowsYourFishing:
# 441 "data/maps/OldaleTown/scripts.pory"
	.string "Yo!\n"
# 442 "data/maps/OldaleTown/scripts.pory"
	.string "How's your fishing?$"
# 443 "data/maps/OldaleTown/scripts.pory"

# 444 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_GiveYouOneOfMyRods:
# 445 "data/maps/OldaleTown/scripts.pory"
	.string "I hear you, and I like what\n"
# 446 "data/maps/OldaleTown/scripts.pory"
	.string "you're saying!\p"
# 447 "data/maps/OldaleTown/scripts.pory"
	.string "I'll give you one of my fishing RODS.$"
# 448 "data/maps/OldaleTown/scripts.pory"

# 449 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_GettingItchToFish:
# 450 "data/maps/OldaleTown/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 451 "data/maps/OldaleTown/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 452 "data/maps/OldaleTown/scripts.pory"

# 453 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThrowInFishingAdvice:
# 454 "data/maps/OldaleTown/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 455 "data/maps/OldaleTown/scripts.pory"
	.string "in a little fishing advice!\p"
# 456 "data/maps/OldaleTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 457 "data/maps/OldaleTown/scripts.pory"
	.string "then use the ROD.\p"
# 458 "data/maps/OldaleTown/scripts.pory"
	.string "Focus your mind…\n"
# 459 "data/maps/OldaleTown/scripts.pory"
	.string "If you get a bite, pull on the ROD.\p"
# 460 "data/maps/OldaleTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 461 "data/maps/OldaleTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 462 "data/maps/OldaleTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 463 "data/maps/OldaleTown/scripts.pory"
	.string "to haul them in.$"
# 464 "data/maps/OldaleTown/scripts.pory"

# 465 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThatsTooBadThen:
# 466 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that so?\n"
# 467 "data/maps/OldaleTown/scripts.pory"
	.string "That's too bad, then.$"
# 468 "data/maps/OldaleTown/scripts.pory"

# 469 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_GreatHaulInSomeBigOnes:
# 470 "data/maps/OldaleTown/scripts.pory"
	.string "Is that right! That's great!\n"
# 471 "data/maps/OldaleTown/scripts.pory"
	.string "Haul in some big ones!$"
# 472 "data/maps/OldaleTown/scripts.pory"

# 473 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FishingAdvice:
# 474 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 475 "data/maps/OldaleTown/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 476 "data/maps/OldaleTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 477 "data/maps/OldaleTown/scripts.pory"
	.string "then use the ROD.\p"
# 478 "data/maps/OldaleTown/scripts.pory"
	.string "Focus your mind…\n"
# 479 "data/maps/OldaleTown/scripts.pory"
	.string "If you get a bite, pull the ROD.\p"
# 480 "data/maps/OldaleTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 481 "data/maps/OldaleTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 482 "data/maps/OldaleTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 483 "data/maps/OldaleTown/scripts.pory"
	.string "to haul them in.$"
