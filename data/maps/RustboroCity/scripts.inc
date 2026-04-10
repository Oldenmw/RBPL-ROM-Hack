RustboroCity_EventScript_Fuecoco::
# 2 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_EVIOLITE, RustboroCity_EventScript_Fuecoco_2
# 6 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_single TRAINER_FUECOCO, RustboroCity_Text_FuecocoIntro, RustboroCity_Text_FuecocoDefeated, RustboroCity_EventScript_GiveEviolite
RustboroCity_EventScript_Fuecoco_1:
	end

RustboroCity_EventScript_Fuecoco_2:
# 3 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_FuecocoPostBattle
	goto RustboroCity_EventScript_Fuecoco_1


RustboroCity_EventScript_GiveEviolite::
# 12 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_EVIOLITE
# 13 "data/maps/RustboroCity/scripts.pory"
	compare ! VAR_RESULT, 0
	goto_if_ne RustboroCity_EventScript_GiveEviolite_2
# 17 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RECEIVED_EVIOLITE
RustboroCity_EventScript_GiveEviolite_1:
# 19 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_GiveEviolite_2:
# 14 "data/maps/RustboroCity/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto RustboroCity_EventScript_GiveEviolite_1


# 23 "data/maps/RustboroCity/scripts.pory"

# 24 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 25 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 26 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 27 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 28 "data/maps/RustboroCity/scripts.pory"

# 29 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 30 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 31 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 32 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 33 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 34 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 35 "data/maps/RustboroCity/scripts.pory"
	end
# 36 "data/maps/RustboroCity/scripts.pory"

# 37 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 38 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 39 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
# 40 "data/maps/RustboroCity/scripts.pory"
	end
# 41 "data/maps/RustboroCity/scripts.pory"

# 42 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 43 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
# 44 "data/maps/RustboroCity/scripts.pory"
	end
# 45 "data/maps/RustboroCity/scripts.pory"

# 46 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 47 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 48 "data/maps/RustboroCity/scripts.pory"
	return
# 49 "data/maps/RustboroCity/scripts.pory"

# 50 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 51 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 52 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 53 "data/maps/RustboroCity/scripts.pory"

# 54 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 55 "data/maps/RustboroCity/scripts.pory"
	lockall
# 56 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 57 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 58 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 59 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 60 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 61 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 62 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 63 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 65 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 66 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 68 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 70 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 72 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 74 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 75 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 76 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 77 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 79 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 80 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 81 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 82 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 83 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 84 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 85 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 86 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 89 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 90 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 91 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 92 "data/maps/RustboroCity/scripts.pory"

# 93 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 94 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 95 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 96 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 97 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 98 "data/maps/RustboroCity/scripts.pory"

# 99 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 100 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 101 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 102 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 103 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 105 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 106 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 107 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 108 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 109 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 110 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 111 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 112 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 113 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 114 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 115 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 116 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 117 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 118 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 119 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 120 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 121 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 122 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 123 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 124 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 125 "data/maps/RustboroCity/scripts.pory"
	end
# 126 "data/maps/RustboroCity/scripts.pory"

# 127 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 128 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 129 "data/maps/RustboroCity/scripts.pory"
	step_end
# 130 "data/maps/RustboroCity/scripts.pory"

# 131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 132 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 133 "data/maps/RustboroCity/scripts.pory"
	step_end
# 134 "data/maps/RustboroCity/scripts.pory"

# 135 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 136 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 137 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 138 "data/maps/RustboroCity/scripts.pory"
	step_end
# 139 "data/maps/RustboroCity/scripts.pory"

# 140 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 142 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 143 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 144 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 145 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 146 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 147 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 148 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 149 "data/maps/RustboroCity/scripts.pory"
	step_end
# 150 "data/maps/RustboroCity/scripts.pory"

# 151 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 152 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 153 "data/maps/RustboroCity/scripts.pory"
	step_end
# 154 "data/maps/RustboroCity/scripts.pory"

# 155 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 156 "data/maps/RustboroCity/scripts.pory"
	lock
# 157 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 158 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 159 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity/scripts.pory"
	release
# 161 "data/maps/RustboroCity/scripts.pory"
	end
# 162 "data/maps/RustboroCity/scripts.pory"

# 163 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 164 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 165 "data/maps/RustboroCity/scripts.pory"
	release
# 166 "data/maps/RustboroCity/scripts.pory"
	end
# 167 "data/maps/RustboroCity/scripts.pory"

# 168 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 169 "data/maps/RustboroCity/scripts.pory"
	lock
# 170 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 171 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 172 "data/maps/RustboroCity/scripts.pory"
	release
# 173 "data/maps/RustboroCity/scripts.pory"
	end
# 174 "data/maps/RustboroCity/scripts.pory"

# 175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 176 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 177 "data/maps/RustboroCity/scripts.pory"
	end
# 178 "data/maps/RustboroCity/scripts.pory"

# 179 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 180 "data/maps/RustboroCity/scripts.pory"
	lock
# 181 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 182 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 183 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 184 "data/maps/RustboroCity/scripts.pory"
	release
# 185 "data/maps/RustboroCity/scripts.pory"
	end
# 186 "data/maps/RustboroCity/scripts.pory"

# 187 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 188 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 189 "data/maps/RustboroCity/scripts.pory"
	release
# 190 "data/maps/RustboroCity/scripts.pory"
	end
# 191 "data/maps/RustboroCity/scripts.pory"

# 192 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 193 "data/maps/RustboroCity/scripts.pory"
	lock
# 194 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 195 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 196 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 197 "data/maps/RustboroCity/scripts.pory"
	release
# 198 "data/maps/RustboroCity/scripts.pory"
	end
# 199 "data/maps/RustboroCity/scripts.pory"

# 200 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 201 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 202 "data/maps/RustboroCity/scripts.pory"
	release
# 203 "data/maps/RustboroCity/scripts.pory"
	end
# 204 "data/maps/RustboroCity/scripts.pory"

# 205 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 206 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 207 "data/maps/RustboroCity/scripts.pory"
	end
# 208 "data/maps/RustboroCity/scripts.pory"

# 209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 210 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 211 "data/maps/RustboroCity/scripts.pory"
	end
# 212 "data/maps/RustboroCity/scripts.pory"

# 213 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 214 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 215 "data/maps/RustboroCity/scripts.pory"
	end
# 216 "data/maps/RustboroCity/scripts.pory"

# 217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 218 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 219 "data/maps/RustboroCity/scripts.pory"
	end
# 220 "data/maps/RustboroCity/scripts.pory"

# 221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 222 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 223 "data/maps/RustboroCity/scripts.pory"
	end
# 224 "data/maps/RustboroCity/scripts.pory"

# 225 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 226 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 227 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 228 "data/maps/RustboroCity/scripts.pory"
	end
# 229 "data/maps/RustboroCity/scripts.pory"

# 230 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 231 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 232 "data/maps/RustboroCity/scripts.pory"
	end
# 233 "data/maps/RustboroCity/scripts.pory"

# 234 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 235 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 236 "data/maps/RustboroCity/scripts.pory"
	end
# 237 "data/maps/RustboroCity/scripts.pory"

# 238 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 239 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 240 "data/maps/RustboroCity/scripts.pory"
	end
# 241 "data/maps/RustboroCity/scripts.pory"

# 242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 243 "data/maps/RustboroCity/scripts.pory"
	lock
# 244 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 245 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 246 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 247 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 248 "data/maps/RustboroCity/scripts.pory"
	release
# 249 "data/maps/RustboroCity/scripts.pory"
	end
# 250 "data/maps/RustboroCity/scripts.pory"

# 251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 252 "data/maps/RustboroCity/scripts.pory"
	lock
# 253 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 254 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 255 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 256 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 257 "data/maps/RustboroCity/scripts.pory"
	release
# 258 "data/maps/RustboroCity/scripts.pory"
	end
# 259 "data/maps/RustboroCity/scripts.pory"

# 260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 261 "data/maps/RustboroCity/scripts.pory"
	lock
# 262 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 263 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 264 "data/maps/RustboroCity/scripts.pory"
	release
# 265 "data/maps/RustboroCity/scripts.pory"
	end
# 266 "data/maps/RustboroCity/scripts.pory"

# 267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 268 "data/maps/RustboroCity/scripts.pory"
	lockall
# 269 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 270 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 271 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 272 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 273 "data/maps/RustboroCity/scripts.pory"
	end
# 274 "data/maps/RustboroCity/scripts.pory"

# 275 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 276 "data/maps/RustboroCity/scripts.pory"
	lockall
# 277 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 278 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 279 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 280 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 281 "data/maps/RustboroCity/scripts.pory"
	end
# 282 "data/maps/RustboroCity/scripts.pory"

# 283 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 284 "data/maps/RustboroCity/scripts.pory"
	lockall
# 285 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 286 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 287 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 288 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 289 "data/maps/RustboroCity/scripts.pory"
	end
# 290 "data/maps/RustboroCity/scripts.pory"

# 291 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 292 "data/maps/RustboroCity/scripts.pory"
	lockall
# 293 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 294 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 295 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 296 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 297 "data/maps/RustboroCity/scripts.pory"
	end
# 298 "data/maps/RustboroCity/scripts.pory"

# 299 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 300 "data/maps/RustboroCity/scripts.pory"
	lockall
# 301 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 302 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 303 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 304 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 305 "data/maps/RustboroCity/scripts.pory"
	end
# 306 "data/maps/RustboroCity/scripts.pory"

# 307 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 308 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 309 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 310 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 311 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 312 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 313 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 314 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 315 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 316 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 317 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 319 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 320 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 321 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 323 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 324 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 325 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 326 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 327 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 328 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 329 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 330 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 331 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 332 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 333 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 334 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 335 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 336 "data/maps/RustboroCity/scripts.pory"
	end
# 337 "data/maps/RustboroCity/scripts.pory"

# 338 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 339 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 340 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 341 "data/maps/RustboroCity/scripts.pory"
	return
# 342 "data/maps/RustboroCity/scripts.pory"

# 343 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 344 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 345 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 346 "data/maps/RustboroCity/scripts.pory"
	return
# 347 "data/maps/RustboroCity/scripts.pory"

# 348 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 349 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 350 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 351 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 352 "data/maps/RustboroCity/scripts.pory"
	return
# 353 "data/maps/RustboroCity/scripts.pory"

# 354 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 355 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 356 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 357 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 358 "data/maps/RustboroCity/scripts.pory"
	return
# 359 "data/maps/RustboroCity/scripts.pory"

# 360 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 361 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 362 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 363 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 364 "data/maps/RustboroCity/scripts.pory"
	return
# 365 "data/maps/RustboroCity/scripts.pory"

# 366 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 367 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 368 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 369 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/RustboroCity/scripts.pory"
	return
# 371 "data/maps/RustboroCity/scripts.pory"

# 372 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 373 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 374 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 375 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 376 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 377 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 378 "data/maps/RustboroCity/scripts.pory"
	return
# 379 "data/maps/RustboroCity/scripts.pory"

# 380 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 381 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 399 "data/maps/RustboroCity/scripts.pory"
	step_end
# 400 "data/maps/RustboroCity/scripts.pory"

# 401 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 418 "data/maps/RustboroCity/scripts.pory"
	step_end
# 419 "data/maps/RustboroCity/scripts.pory"

# 420 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 428 "data/maps/RustboroCity/scripts.pory"
	step_end
# 429 "data/maps/RustboroCity/scripts.pory"

# 430 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 438 "data/maps/RustboroCity/scripts.pory"
	step_end
# 439 "data/maps/RustboroCity/scripts.pory"

# 440 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 441 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 445 "data/maps/RustboroCity/scripts.pory"
	step_end
# 446 "data/maps/RustboroCity/scripts.pory"

# 447 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 448 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 451 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 452 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 453 "data/maps/RustboroCity/scripts.pory"
	step_end
# 454 "data/maps/RustboroCity/scripts.pory"

# 455 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 456 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 457 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 458 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 459 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 460 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 461 "data/maps/RustboroCity/scripts.pory"
	step_end
# 462 "data/maps/RustboroCity/scripts.pory"

# 463 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 464 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 470 "data/maps/RustboroCity/scripts.pory"
	step_end
# 471 "data/maps/RustboroCity/scripts.pory"

# 472 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 474 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 475 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 476 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 477 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 478 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 479 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 480 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 481 "data/maps/RustboroCity/scripts.pory"
	step_end
# 482 "data/maps/RustboroCity/scripts.pory"

# 483 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 484 "data/maps/RustboroCity/scripts.pory"
	lock
# 485 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 486 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 487 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 488 "data/maps/RustboroCity/scripts.pory"
	release
# 489 "data/maps/RustboroCity/scripts.pory"
	end
# 490 "data/maps/RustboroCity/scripts.pory"

# 491 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 492 "data/maps/RustboroCity/scripts.pory"
	waitse
# 493 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 494 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 495 "data/maps/RustboroCity/scripts.pory"
	end
# 496 "data/maps/RustboroCity/scripts.pory"

# 497 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 498 "data/maps/RustboroCity/scripts.pory"
	lockall
# 499 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 500 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 501 "data/maps/RustboroCity/scripts.pory"
	end
# 502 "data/maps/RustboroCity/scripts.pory"

# 503 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 504 "data/maps/RustboroCity/scripts.pory"
	lockall
# 505 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 506 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 507 "data/maps/RustboroCity/scripts.pory"
	end
# 508 "data/maps/RustboroCity/scripts.pory"

# 509 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 510 "data/maps/RustboroCity/scripts.pory"
	lockall
# 511 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 512 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 513 "data/maps/RustboroCity/scripts.pory"
	end
# 514 "data/maps/RustboroCity/scripts.pory"

# 515 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 516 "data/maps/RustboroCity/scripts.pory"
	lockall
# 517 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 518 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 519 "data/maps/RustboroCity/scripts.pory"
	end
# 520 "data/maps/RustboroCity/scripts.pory"

# 521 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 522 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 523 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 524 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 525 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 526 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 527 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 528 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 529 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 530 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 531 "data/maps/RustboroCity/scripts.pory"
	end
# 532 "data/maps/RustboroCity/scripts.pory"

# 533 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 534 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 535 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 538 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 539 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 543 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/RustboroCity/scripts.pory"
	return
# 545 "data/maps/RustboroCity/scripts.pory"

# 546 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 550 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 551 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 555 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/RustboroCity/scripts.pory"
	return
# 557 "data/maps/RustboroCity/scripts.pory"

# 558 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 559 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 560 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 562 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 563 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 565 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 567 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/RustboroCity/scripts.pory"
	return
# 569 "data/maps/RustboroCity/scripts.pory"

# 570 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 571 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 572 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 573 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 574 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 575 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 577 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 579 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 581 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 582 "data/maps/RustboroCity/scripts.pory"
	return
# 583 "data/maps/RustboroCity/scripts.pory"

# 584 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 585 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 586 "data/maps/RustboroCity/scripts.pory"
	step_end
# 587 "data/maps/RustboroCity/scripts.pory"

# 588 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 589 "data/maps/RustboroCity/scripts.pory"
	lockall
# 590 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 591 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 592 "data/maps/RustboroCity/scripts.pory"
	end
# 593 "data/maps/RustboroCity/scripts.pory"

# 594 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 595 "data/maps/RustboroCity/scripts.pory"
	lockall
# 596 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 597 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 598 "data/maps/RustboroCity/scripts.pory"
	end
# 599 "data/maps/RustboroCity/scripts.pory"

# 600 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 601 "data/maps/RustboroCity/scripts.pory"
	lockall
# 602 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 603 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 604 "data/maps/RustboroCity/scripts.pory"
	end
# 605 "data/maps/RustboroCity/scripts.pory"

# 606 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 607 "data/maps/RustboroCity/scripts.pory"
	lockall
# 608 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 609 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 610 "data/maps/RustboroCity/scripts.pory"
	end
# 611 "data/maps/RustboroCity/scripts.pory"

# 612 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 613 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 614 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 615 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 616 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 617 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 618 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 619 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 620 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 621 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 622 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 623 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 624 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 625 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 626 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 627 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 628 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 629 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 630 "data/maps/RustboroCity/scripts.pory"
	end
# 631 "data/maps/RustboroCity/scripts.pory"

# 632 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 633 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 634 "data/maps/RustboroCity/scripts.pory"
	return
# 635 "data/maps/RustboroCity/scripts.pory"

# 636 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 640 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 641 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 645 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/RustboroCity/scripts.pory"
	return
# 647 "data/maps/RustboroCity/scripts.pory"

# 648 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 652 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 653 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 657 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/RustboroCity/scripts.pory"
	return
# 659 "data/maps/RustboroCity/scripts.pory"

# 660 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 661 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 662 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 664 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 665 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 667 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 669 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/RustboroCity/scripts.pory"
	return
# 671 "data/maps/RustboroCity/scripts.pory"

# 672 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 673 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 674 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 675 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 676 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 677 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 678 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 679 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 680 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 681 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 683 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 684 "data/maps/RustboroCity/scripts.pory"
	return
# 685 "data/maps/RustboroCity/scripts.pory"

# 686 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 687 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 688 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 689 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 690 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 691 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 692 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 693 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 694 "data/maps/RustboroCity/scripts.pory"
	return
# 695 "data/maps/RustboroCity/scripts.pory"

# 696 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 697 "data/maps/RustboroCity/scripts.pory"
	lockall
# 698 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 699 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 700 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 701 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 702 "data/maps/RustboroCity/scripts.pory"

# 703 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 704 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 705 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 706 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 707 "data/maps/RustboroCity/scripts.pory"
	return
# 708 "data/maps/RustboroCity/scripts.pory"

# 709 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 710 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 711 "data/maps/RustboroCity/scripts.pory"
	return
# 712 "data/maps/RustboroCity/scripts.pory"

# 713 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 714 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 715 "data/maps/RustboroCity/scripts.pory"
	return
# 716 "data/maps/RustboroCity/scripts.pory"

# 717 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 718 "data/maps/RustboroCity/scripts.pory"
	lockall
# 719 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 720 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 721 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 723 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 724 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 726 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 728 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 732 "data/maps/RustboroCity/scripts.pory"

# 733 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 734 "data/maps/RustboroCity/scripts.pory"
	lockall
# 735 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 736 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 737 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 739 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 740 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 741 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 742 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 744 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 748 "data/maps/RustboroCity/scripts.pory"

# 749 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 750 "data/maps/RustboroCity/scripts.pory"
	lockall
# 751 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 752 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 753 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 755 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 756 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 758 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 760 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 764 "data/maps/RustboroCity/scripts.pory"

# 765 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 766 "data/maps/RustboroCity/scripts.pory"
	lockall
# 767 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 768 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 769 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 771 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 772 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 773 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 774 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 775 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 776 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 780 "data/maps/RustboroCity/scripts.pory"

# 781 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 782 "data/maps/RustboroCity/scripts.pory"
	lockall
# 783 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 784 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 785 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 786 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 787 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 788 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 789 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 790 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 791 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 792 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 796 "data/maps/RustboroCity/scripts.pory"

# 797 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 798 "data/maps/RustboroCity/scripts.pory"
	lockall
# 799 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 800 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 801 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 803 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 804 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 805 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 806 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 807 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 808 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 812 "data/maps/RustboroCity/scripts.pory"

# 813 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 814 "data/maps/RustboroCity/scripts.pory"
	lockall
# 815 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 816 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 817 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 818 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 819 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 820 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 821 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 822 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 823 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 824 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 825 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 826 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 828 "data/maps/RustboroCity/scripts.pory"

# 829 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 830 "data/maps/RustboroCity/scripts.pory"
	lockall
# 831 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 832 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 833 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 834 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 835 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 836 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 837 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 838 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 839 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 840 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 841 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 842 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 843 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 844 "data/maps/RustboroCity/scripts.pory"

# 845 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 846 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 847 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 848 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 849 "data/maps/RustboroCity/scripts.pory"
	end
# 850 "data/maps/RustboroCity/scripts.pory"

# 851 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 852 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 853 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 854 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 855 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 856 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 857 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 858 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 859 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 860 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 861 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 862 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 863 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 864 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 865 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 866 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 867 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 868 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 869 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 870 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 871 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 872 "data/maps/RustboroCity/scripts.pory"
	end
# 873 "data/maps/RustboroCity/scripts.pory"

# 874 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 875 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 876 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 877 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 878 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 879 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 880 "data/maps/RustboroCity/scripts.pory"
	end
# 881 "data/maps/RustboroCity/scripts.pory"

# 882 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 883 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 884 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 885 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 886 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 887 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 888 "data/maps/RustboroCity/scripts.pory"
	end
# 889 "data/maps/RustboroCity/scripts.pory"

# 890 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 891 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 892 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 893 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 894 "data/maps/RustboroCity/scripts.pory"
	end
# 895 "data/maps/RustboroCity/scripts.pory"

# 896 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 897 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 898 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 899 "data/maps/RustboroCity/scripts.pory"
	return
# 900 "data/maps/RustboroCity/scripts.pory"

# 901 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 902 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 903 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 904 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 905 "data/maps/RustboroCity/scripts.pory"
	end
# 906 "data/maps/RustboroCity/scripts.pory"

# 907 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 908 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 909 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 910 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 911 "data/maps/RustboroCity/scripts.pory"
	end
# 912 "data/maps/RustboroCity/scripts.pory"

# 913 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 914 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 915 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 916 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 917 "data/maps/RustboroCity/scripts.pory"
	end
# 918 "data/maps/RustboroCity/scripts.pory"

# 919 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 920 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 921 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 922 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 923 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 924 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 925 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 926 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 927 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 928 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 929 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 930 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 931 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 932 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 933 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 934 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 935 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 936 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 937 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 938 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 939 "data/maps/RustboroCity/scripts.pory"
	end
# 940 "data/maps/RustboroCity/scripts.pory"

# 941 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 942 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 943 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 944 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 945 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 946 "data/maps/RustboroCity/scripts.pory"
	end
# 947 "data/maps/RustboroCity/scripts.pory"

# 948 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 949 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 950 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 951 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 952 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 953 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 954 "data/maps/RustboroCity/scripts.pory"
	end
# 955 "data/maps/RustboroCity/scripts.pory"

# 956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 957 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 958 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 959 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 960 "data/maps/RustboroCity/scripts.pory"
	end
# 961 "data/maps/RustboroCity/scripts.pory"

# 962 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 963 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 964 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 965 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 966 "data/maps/RustboroCity/scripts.pory"
	end
# 967 "data/maps/RustboroCity/scripts.pory"

# 968 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 969 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 970 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 971 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 972 "data/maps/RustboroCity/scripts.pory"
	end
# 973 "data/maps/RustboroCity/scripts.pory"

# 974 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 975 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 976 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 977 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 978 "data/maps/RustboroCity/scripts.pory"
	end
# 979 "data/maps/RustboroCity/scripts.pory"

# 980 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 981 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 982 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 983 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 984 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 985 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 987 "data/maps/RustboroCity/scripts.pory"
	step_end
# 988 "data/maps/RustboroCity/scripts.pory"

# 989 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 990 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 991 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 992 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 995 "data/maps/RustboroCity/scripts.pory"
	step_end
# 996 "data/maps/RustboroCity/scripts.pory"

# 997 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 998 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 999 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1000 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1001 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1002 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1003 "data/maps/RustboroCity/scripts.pory"

# 1004 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1005 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1006 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1007 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1008 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1009 "data/maps/RustboroCity/scripts.pory"

# 1010 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1011 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1012 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1013 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1014 "data/maps/RustboroCity/scripts.pory"

# 1015 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1016 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1017 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1018 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1019 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1020 "data/maps/RustboroCity/scripts.pory"

# 1021 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1022 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1023 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1024 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1025 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1026 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1027 "data/maps/RustboroCity/scripts.pory"

# 1028 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1029 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1030 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1031 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1032 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1033 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1034 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1035 "data/maps/RustboroCity/scripts.pory"

# 1036 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1037 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1038 "data/maps/RustboroCity/scripts.pory"
	end
# 1039 "data/maps/RustboroCity/scripts.pory"

# 1040 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1045 "data/maps/RustboroCity/scripts.pory"

# 1046 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1050 "data/maps/RustboroCity/scripts.pory"

# 1051 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1056 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1057 "data/maps/RustboroCity/scripts.pory"

# 1058 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1062 "data/maps/RustboroCity/scripts.pory"

# 1063 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1068 "data/maps/RustboroCity/scripts.pory"

# 1069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1075 "data/maps/RustboroCity/scripts.pory"

# 1076 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1081 "data/maps/RustboroCity/scripts.pory"

# 1082 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1086 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1089 "data/maps/RustboroCity/scripts.pory"

# 1090 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1094 "data/maps/RustboroCity/scripts.pory"

# 1095 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1099 "data/maps/RustboroCity/scripts.pory"

# 1100 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1104 "data/maps/RustboroCity/scripts.pory"

# 1105 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1108 "data/maps/RustboroCity/scripts.pory"

# 1109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1114 "data/maps/RustboroCity/scripts.pory"

# 1115 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1118 "data/maps/RustboroCity/scripts.pory"

# 1119 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1122 "data/maps/RustboroCity/scripts.pory"

# 1123 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1131 "data/maps/RustboroCity/scripts.pory"

# 1132 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1135 "data/maps/RustboroCity/scripts.pory"

# 1136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1144 "data/maps/RustboroCity/scripts.pory"

# 1145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1148 "data/maps/RustboroCity/scripts.pory"

# 1149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1152 "data/maps/RustboroCity/scripts.pory"

# 1153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1160 "data/maps/RustboroCity/scripts.pory"

# 1161 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1164 "data/maps/RustboroCity/scripts.pory"

# 1165 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1174 "data/maps/RustboroCity/scripts.pory"

# 1175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1180 "data/maps/RustboroCity/scripts.pory"

# 1181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1184 "data/maps/RustboroCity/scripts.pory"

# 1185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1188 "data/maps/RustboroCity/scripts.pory"

# 1189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1192 "data/maps/RustboroCity/scripts.pory"

# 1193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1198 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1199 "data/maps/RustboroCity/scripts.pory"

# 1200 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1207 "data/maps/RustboroCity/scripts.pory"

# 1208 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1211 "data/maps/RustboroCity/scripts.pory"

# 1212 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1222 "data/maps/RustboroCity/scripts.pory"

# 1223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1226 "data/maps/RustboroCity/scripts.pory"

# 1227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1230 "data/maps/RustboroCity/scripts.pory"

# 1231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1234 "data/maps/RustboroCity/scripts.pory"

# 1235 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1238 "data/maps/RustboroCity/scripts.pory"

# 1239 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1245 "data/maps/RustboroCity/scripts.pory"

# 1246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1252 "data/maps/RustboroCity/scripts.pory"

# 1253 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1257 "data/maps/RustboroCity/scripts.pory"

# 1258 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1262 "data/maps/RustboroCity/scripts.pory"

# 1263 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1265 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1266 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1267 "data/maps/RustboroCity/scripts.pory"

# 1268 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1272 "data/maps/RustboroCity/scripts.pory"

# 1273 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1277 "data/maps/RustboroCity/scripts.pory"

# 1278 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1280 "data/maps/RustboroCity/scripts.pory"

# 1281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1287 "data/maps/RustboroCity/scripts.pory"

# 1288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1291 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1292 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1293 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1299 "data/maps/RustboroCity/scripts.pory"

# 1300 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1302 "data/maps/RustboroCity/scripts.pory"

# 1303 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1306 "data/maps/RustboroCity/scripts.pory"

# 1307 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1308 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1309 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1310 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1311 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1312 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1313 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1314 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1315 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"
# 1316 "data/maps/RustboroCity/scripts.pory"

# 1317 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_FuecocoIntro:
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "Fuecoco!$"
# 1319 "data/maps/RustboroCity/scripts.pory"

# 1320 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_FuecocoDefeated:
# 1321 "data/maps/RustboroCity/scripts.pory"
	.string "Fue...$"
# 1322 "data/maps/RustboroCity/scripts.pory"

# 1323 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_FuecocoPostBattle:
# 1324 "data/maps/RustboroCity/scripts.pory"
	.string "Fue. Fuecoco!$"
