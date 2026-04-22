Route104_EventScript_SailToDewfordGlitch::
# 2 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordBeforeDadCalls
# 3 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 4 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 5 "data/maps/Route104/scripts.pory"
	delay 10
# 6 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_EventScript_SailToDewfordGlitch_Movement_0
# 7 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_SailToDewfordGlitch_Movement_0
# 8 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 9 "data/maps/Route104/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 0
# 10 "data/maps/Route104/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 5
# 11 "data/maps/Route104/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 12 "data/maps/Route104/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 5
# 13 "data/maps/Route104/scripts.pory"
	warp MAP_ROUTE111, 3, 30
# 14 "data/maps/Route104/scripts.pory"
	goto Route111_EventScript_GlitchWarp
	end


# 18 "data/maps/Route104/scripts.pory"

# 19 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 20 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 21 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 22 "data/maps/Route104/scripts.pory"
	.byte 0
# 23 "data/maps/Route104/scripts.pory"

# 24 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 25 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 26 "data/maps/Route104/scripts.pory"
	.2byte 0
# 27 "data/maps/Route104/scripts.pory"

# 28 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 29 "data/maps/Route104/scripts.pory"
	lockall
# 30 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 31 "data/maps/Route104/scripts.pory"
	end
# 32 "data/maps/Route104/scripts.pory"

# 33 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 34 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 35 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 36 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 37 "data/maps/Route104/scripts.pory"
	end
# 38 "data/maps/Route104/scripts.pory"

# 39 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 40 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 41 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 42 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 43 "data/maps/Route104/scripts.pory"
	return
# 44 "data/maps/Route104/scripts.pory"

# 45 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 46 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 47 "data/maps/Route104/scripts.pory"
	return
# 48 "data/maps/Route104/scripts.pory"

# 49 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 50 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 51 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 52 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 53 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_ROUTE104_RIVAL, 17, 52
# 54 "data/maps/Route104/scripts.pory"
	return
# 55 "data/maps/Route104/scripts.pory"

# 56 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 57 "data/maps/Route104/scripts.pory"
	return
# 58 "data/maps/Route104/scripts.pory"

# 59 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 60 "data/maps/Route104/scripts.pory"
	lockall
# 61 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 62 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_FacePlayer
# 63 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 65 "data/maps/Route104/scripts.pory"

# 66 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 67 "data/maps/Route104/scripts.pory"
	lockall
# 68 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 69 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 70 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 71 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 72 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route104/scripts.pory"
	delay 10
# 74 "data/maps/Route104/scripts.pory"
	addobject LOCALID_ROUTE104_RIVAL
# 75 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 76 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerBackUp
# 77 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 79 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route104/scripts.pory"
	delay 20
# 81 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 82 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 83 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_ExclamationMark
# 85 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_Delay48
# 87 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 89 "data/maps/Route104/scripts.pory"

# 90 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 91 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 92 "data/maps/Route104/scripts.pory"
	checkplayergender
# 93 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 94 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 95 "data/maps/Route104/scripts.pory"
	return
# 96 "data/maps/Route104/scripts.pory"

# 97 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 98 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 99 "data/maps/Route104/scripts.pory"
	return
# 100 "data/maps/Route104/scripts.pory"

# 101 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 102 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 103 "data/maps/Route104/scripts.pory"
	return
# 104 "data/maps/Route104/scripts.pory"

# 105 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 106 "data/maps/Route104/scripts.pory"
	checkplayergender
# 107 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 108 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 109 "data/maps/Route104/scripts.pory"
	end
# 110 "data/maps/Route104/scripts.pory"

# 111 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 112 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 113 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 114 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 115 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 116 "data/maps/Route104/scripts.pory"
	closemessage
# 117 "data/maps/Route104/scripts.pory"
	delay 30
# 118 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 119 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 120 "data/maps/Route104/scripts.pory"
	waitfanfare
# 121 "data/maps/Route104/scripts.pory"
	closemessage
# 122 "data/maps/Route104/scripts.pory"
	delay 30
# 123 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 124 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 125 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 126 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 127 "data/maps/Route104/scripts.pory"
	closemessage
# 128 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 130 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 132 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 133 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 134 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 135 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 136 "data/maps/Route104/scripts.pory"
	releaseall
# 137 "data/maps/Route104/scripts.pory"
	end
# 138 "data/maps/Route104/scripts.pory"

# 139 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 140 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 141 "data/maps/Route104/scripts.pory"
	step_end
# 142 "data/maps/Route104/scripts.pory"

# 143 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 144 "data/maps/Route104/scripts.pory"
	walk_down
# 145 "data/maps/Route104/scripts.pory"
	face_right
# 146 "data/maps/Route104/scripts.pory"
	step_end
# 147 "data/maps/Route104/scripts.pory"

# 148 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 149 "data/maps/Route104/scripts.pory"
	delay_4
# 150 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 151 "data/maps/Route104/scripts.pory"
	step_end
# 152 "data/maps/Route104/scripts.pory"

# 153 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 154 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 155 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 156 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 157 "data/maps/Route104/scripts.pory"
	releaseall
# 158 "data/maps/Route104/scripts.pory"
	end
# 159 "data/maps/Route104/scripts.pory"

# 160 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 161 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 162 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 163 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 164 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 165 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 166 "data/maps/Route104/scripts.pory"
	end
# 167 "data/maps/Route104/scripts.pory"

# 168 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 169 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 170 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 171 "data/maps/Route104/scripts.pory"
	releaseall
# 172 "data/maps/Route104/scripts.pory"
	end
# 173 "data/maps/Route104/scripts.pory"

# 174 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 175 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 176 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 177 "data/maps/Route104/scripts.pory"
	return
# 178 "data/maps/Route104/scripts.pory"

# 179 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 180 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 181 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 182 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 183 "data/maps/Route104/scripts.pory"
	end
# 184 "data/maps/Route104/scripts.pory"

# 185 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 186 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 187 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 188 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 189 "data/maps/Route104/scripts.pory"
	end
# 190 "data/maps/Route104/scripts.pory"

# 191 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 192 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 193 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 194 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 195 "data/maps/Route104/scripts.pory"
	end
# 196 "data/maps/Route104/scripts.pory"

# 197 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 198 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 199 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 200 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 201 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 202 "data/maps/Route104/scripts.pory"
	closemessage
# 203 "data/maps/Route104/scripts.pory"
	delay 30
# 204 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 205 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 206 "data/maps/Route104/scripts.pory"
	waitfanfare
# 207 "data/maps/Route104/scripts.pory"
	closemessage
# 208 "data/maps/Route104/scripts.pory"
	delay 30
# 209 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 210 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 211 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 212 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 213 "data/maps/Route104/scripts.pory"
	closemessage
# 214 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 216 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 218 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 219 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 220 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 221 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 222 "data/maps/Route104/scripts.pory"
	releaseall
# 223 "data/maps/Route104/scripts.pory"
	end
# 224 "data/maps/Route104/scripts.pory"

# 225 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 226 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 227 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 228 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 229 "data/maps/Route104/scripts.pory"
	releaseall
# 230 "data/maps/Route104/scripts.pory"
	end
# 231 "data/maps/Route104/scripts.pory"

# 232 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 233 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 234 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 235 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 236 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 237 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 238 "data/maps/Route104/scripts.pory"
	end
# 239 "data/maps/Route104/scripts.pory"

# 240 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 241 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 242 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 243 "data/maps/Route104/scripts.pory"
	releaseall
# 244 "data/maps/Route104/scripts.pory"
	end
# 245 "data/maps/Route104/scripts.pory"

# 246 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 247 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 248 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 249 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 250 "data/maps/Route104/scripts.pory"
	end
# 251 "data/maps/Route104/scripts.pory"

# 252 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 253 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 254 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 255 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 256 "data/maps/Route104/scripts.pory"
	end
# 257 "data/maps/Route104/scripts.pory"

# 258 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 259 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 260 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 261 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 262 "data/maps/Route104/scripts.pory"
	end
# 263 "data/maps/Route104/scripts.pory"

# 264 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 265 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 266 "data/maps/Route104/scripts.pory"
	walk_down
# 267 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 268 "data/maps/Route104/scripts.pory"
	step_end
# 269 "data/maps/Route104/scripts.pory"

# 270 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 271 "data/maps/Route104/scripts.pory"
	walk_down
# 272 "data/maps/Route104/scripts.pory"
	step_end
# 273 "data/maps/Route104/scripts.pory"

# 274 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 275 "data/maps/Route104/scripts.pory"
	lock
# 276 "data/maps/Route104/scripts.pory"
	faceplayer
# 277 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 278 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 279 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 280 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 281 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 282 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 283 "data/maps/Route104/scripts.pory"
	release
# 284 "data/maps/Route104/scripts.pory"
	end
# 285 "data/maps/Route104/scripts.pory"

# 286 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 287 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 288 "data/maps/Route104/scripts.pory"
	release
# 289 "data/maps/Route104/scripts.pory"
	end
# 290 "data/maps/Route104/scripts.pory"

# 291 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 292 "data/maps/Route104/scripts.pory"
	lock
# 293 "data/maps/Route104/scripts.pory"
	faceplayer
# 294 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 295 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 296 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 297 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 298 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 299 "data/maps/Route104/scripts.pory"
	release
# 300 "data/maps/Route104/scripts.pory"
	end
# 301 "data/maps/Route104/scripts.pory"

# 302 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 303 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 304 "data/maps/Route104/scripts.pory"
	release
# 305 "data/maps/Route104/scripts.pory"
	end
# 306 "data/maps/Route104/scripts.pory"

# 307 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 308 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 309 "data/maps/Route104/scripts.pory"
	end
# 310 "data/maps/Route104/scripts.pory"

# 311 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 312 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 313 "data/maps/Route104/scripts.pory"
	end
# 314 "data/maps/Route104/scripts.pory"

# 315 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 316 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 317 "data/maps/Route104/scripts.pory"
	end
# 318 "data/maps/Route104/scripts.pory"

# 319 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 320 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 321 "data/maps/Route104/scripts.pory"
	end
# 322 "data/maps/Route104/scripts.pory"

# 323 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 324 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 325 "data/maps/Route104/scripts.pory"
	end
# 326 "data/maps/Route104/scripts.pory"

# 327 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 328 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 329 "data/maps/Route104/scripts.pory"
	end
# 330 "data/maps/Route104/scripts.pory"

# 331 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 332 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 333 "data/maps/Route104/scripts.pory"
	end
# 334 "data/maps/Route104/scripts.pory"

# 335 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 336 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 337 "data/maps/Route104/scripts.pory"
	end
# 338 "data/maps/Route104/scripts.pory"

# 339 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 340 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 341 "data/maps/Route104/scripts.pory"
	end
# 342 "data/maps/Route104/scripts.pory"

# 343 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 344 "data/maps/Route104/scripts.pory"
	lock
# 345 "data/maps/Route104/scripts.pory"
	faceplayer
# 346 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 347 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 348 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 349 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 350 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 351 "data/maps/Route104/scripts.pory"
	release
# 352 "data/maps/Route104/scripts.pory"
	end
# 353 "data/maps/Route104/scripts.pory"

# 354 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 355 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 356 "data/maps/Route104/scripts.pory"
	release
# 357 "data/maps/Route104/scripts.pory"
	end
# 358 "data/maps/Route104/scripts.pory"

# 359 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 360 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 361 "data/maps/Route104/scripts.pory"
	end
# 362 "data/maps/Route104/scripts.pory"

# 363 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 364 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE104_BRINEY, MAP_ROUTE104, 0
# 365 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104, 0
# 366 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BRINEY, Route104_Movement_BrineyBoardBoat
# 367 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_ROUTE104_BRINEY
# 369 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerBoardBoat
# 370 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 371 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE104
# 372 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 373 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_GLITCH_WARPS, 1, Route104_EventScript_SailToDewfordGlitch
# 374 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 375 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 376 "data/maps/Route104/scripts.pory"
	end
# 377 "data/maps/Route104/scripts.pory"

# 378 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 379 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewford
# 380 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewford
# 381 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 382 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 383 "data/maps/Route104/scripts.pory"

# 384 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 385 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordBeforeDadCalls
# 386 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 387 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 389 "data/maps/Route104/scripts.pory"
	waitmessage
# 390 "data/maps/Route104/scripts.pory"
	delay 30
# 391 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 392 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 393 "data/maps/Route104/scripts.pory"
	waitfanfare
# 394 "data/maps/Route104/scripts.pory"
	closemessage
# 395 "data/maps/Route104/scripts.pory"
	delay 30
# 396 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 397 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 398 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 399 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 400 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 402 "data/maps/Route104/scripts.pory"

# 403 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 404 "data/maps/Route104/scripts.pory"
	delay 50
# 405 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerExitBoat
# 406 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 408 "data/maps/Route104/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 409 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 410 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 411 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 412 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 413 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 414 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 415 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_Movement_BrineyExitBoat
# 416 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 417 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 418 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 419 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 420 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 421 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 422 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 423 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104
# 424 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 425 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 426 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 427 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 428 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 429 "data/maps/Route104/scripts.pory"
	end
# 430 "data/maps/Route104/scripts.pory"

# 431 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 432 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 433 "data/maps/Route104/scripts.pory"
	releaseall
# 434 "data/maps/Route104/scripts.pory"
	end
# 435 "data/maps/Route104/scripts.pory"

# 436 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 437 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 438 "data/maps/Route104/scripts.pory"
	releaseall
# 439 "data/maps/Route104/scripts.pory"
	end
# 440 "data/maps/Route104/scripts.pory"

# 441 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 442 "data/maps/Route104/scripts.pory"
	walk_down
# 443 "data/maps/Route104/scripts.pory"
	walk_down
# 444 "data/maps/Route104/scripts.pory"
	walk_down
# 445 "data/maps/Route104/scripts.pory"
	walk_down
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 447 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 449 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 451 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 452 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 453 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 454 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 455 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 456 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 457 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 458 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 459 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 460 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 461 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 462 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 463 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 464 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 465 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 466 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 467 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 468 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 469 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 470 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 472 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 473 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 474 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 475 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 476 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 477 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 478 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 479 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 481 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 482 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 483 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 484 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 485 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 486 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 512 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 539 "data/maps/Route104/scripts.pory"
	step_end
# 540 "data/maps/Route104/scripts.pory"

# 541 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 566 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 567 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 568 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 569 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 570 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 571 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 572 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 573 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 586 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 587 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 588 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 589 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 590 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 591 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 592 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 593 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 594 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 595 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 596 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 597 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 598 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 599 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 600 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 601 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 602 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 603 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 604 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 605 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 606 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 607 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 608 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 609 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 610 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 611 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 612 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 613 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 614 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 615 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 616 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 617 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route104/scripts.pory"
	walk_right
# 619 "data/maps/Route104/scripts.pory"
	walk_right
# 620 "data/maps/Route104/scripts.pory"
	walk_down
# 621 "data/maps/Route104/scripts.pory"
	walk_down
# 622 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 623 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 624 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 625 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 626 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 627 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 628 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 629 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 630 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 631 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 632 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 633 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 634 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 635 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 636 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 637 "data/maps/Route104/scripts.pory"
	walk_down
# 638 "data/maps/Route104/scripts.pory"
	walk_down
# 639 "data/maps/Route104/scripts.pory"
	step_end
# 640 "data/maps/Route104/scripts.pory"

# 641 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 642 "data/maps/Route104/scripts.pory"
	walk_down
# 643 "data/maps/Route104/scripts.pory"
	walk_down
# 644 "data/maps/Route104/scripts.pory"
	walk_down
# 645 "data/maps/Route104/scripts.pory"
	walk_down
# 646 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 647 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 649 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 650 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 651 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 652 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 659 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 660 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 662 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 663 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 664 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 667 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 674 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 675 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 676 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 677 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 678 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 679 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 681 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 682 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 686 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 694 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 707 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 708 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 709 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 710 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 711 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 712 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 713 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 714 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 715 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 716 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 719 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 725 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 726 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 727 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 728 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 729 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 730 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 731 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 742 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 744 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 745 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 746 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 747 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 748 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 749 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 750 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 751 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 754 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 755 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 763 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 764 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 765 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 766 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 767 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 768 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 769 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 770 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 772 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 773 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 783 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 784 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 785 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 786 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 787 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 788 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 789 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 790 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 791 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 792 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 793 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 794 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 795 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 796 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 797 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 798 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 799 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 800 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 801 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 802 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 803 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 804 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 805 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 806 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 807 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 808 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 809 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 810 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 811 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 812 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 813 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 814 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 815 "data/maps/Route104/scripts.pory"
	walk_right
# 816 "data/maps/Route104/scripts.pory"
	walk_right
# 817 "data/maps/Route104/scripts.pory"
	walk_down
# 818 "data/maps/Route104/scripts.pory"
	walk_down
# 819 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 820 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 821 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 822 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 823 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 824 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 825 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 826 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 827 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 828 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 829 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 830 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 831 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 832 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 833 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 834 "data/maps/Route104/scripts.pory"
	walk_down
# 835 "data/maps/Route104/scripts.pory"
	walk_down
# 836 "data/maps/Route104/scripts.pory"
	step_end
# 837 "data/maps/Route104/scripts.pory"

# 838 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 839 "data/maps/Route104/scripts.pory"
	walk_left
# 840 "data/maps/Route104/scripts.pory"
	walk_down
# 841 "data/maps/Route104/scripts.pory"
	walk_down
# 842 "data/maps/Route104/scripts.pory"
	step_end
# 843 "data/maps/Route104/scripts.pory"

# 844 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 845 "data/maps/Route104/scripts.pory"
	walk_down
# 846 "data/maps/Route104/scripts.pory"
	step_end
# 847 "data/maps/Route104/scripts.pory"

# 848 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 849 "data/maps/Route104/scripts.pory"
	walk_down
# 850 "data/maps/Route104/scripts.pory"
	walk_left
# 851 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 852 "data/maps/Route104/scripts.pory"
	step_end
# 853 "data/maps/Route104/scripts.pory"

# 854 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 855 "data/maps/Route104/scripts.pory"
	walk_down
# 856 "data/maps/Route104/scripts.pory"
	walk_down
# 857 "data/maps/Route104/scripts.pory"
	step_end
# 858 "data/maps/Route104/scripts.pory"

# 859 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 860 "data/maps/Route104/scripts.pory"
	walk_down
# 861 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 862 "data/maps/Route104/scripts.pory"
	step_end
# 863 "data/maps/Route104/scripts.pory"

# 864 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 865 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 866 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 867 "data/maps/Route104/scripts.pory"
	end
# 868 "data/maps/Route104/scripts.pory"

# 869 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 870 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 871 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 872 "data/maps/Route104/scripts.pory"
	end
# 873 "data/maps/Route104/scripts.pory"

# 874 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 875 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 876 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 877 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 878 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 879 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 880 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 881 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 882 "data/maps/Route104/scripts.pory"
	release
# 883 "data/maps/Route104/scripts.pory"
	end
# 884 "data/maps/Route104/scripts.pory"

# 885 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 886 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 887 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 888 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 889 "data/maps/Route104/scripts.pory"
	release
# 890 "data/maps/Route104/scripts.pory"
	end
# 891 "data/maps/Route104/scripts.pory"

# 892 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 893 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 894 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 895 "data/maps/Route104/scripts.pory"
	release
# 896 "data/maps/Route104/scripts.pory"
	end
# 897 "data/maps/Route104/scripts.pory"

# 898 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 899 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 900 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 901 "data/maps/Route104/scripts.pory"
	release
# 902 "data/maps/Route104/scripts.pory"
	end
# 903 "data/maps/Route104/scripts.pory"

# 904 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 905 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 906 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 907 "data/maps/Route104/scripts.pory"
	release
# 908 "data/maps/Route104/scripts.pory"
	end
# 909 "data/maps/Route104/scripts.pory"

# 910 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 911 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 912 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 913 "data/maps/Route104/scripts.pory"
	end
# 914 "data/maps/Route104/scripts.pory"

# 915 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 916 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 917 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 918 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 919 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 920 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 921 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 922 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 923 "data/maps/Route104/scripts.pory"
	release
# 924 "data/maps/Route104/scripts.pory"
	end
# 925 "data/maps/Route104/scripts.pory"

# 926 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 927 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 928 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 929 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 930 "data/maps/Route104/scripts.pory"
	release
# 931 "data/maps/Route104/scripts.pory"
	end
# 932 "data/maps/Route104/scripts.pory"

# 933 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 934 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 935 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 936 "data/maps/Route104/scripts.pory"
	release
# 937 "data/maps/Route104/scripts.pory"
	end
# 938 "data/maps/Route104/scripts.pory"

# 939 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 940 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 941 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 942 "data/maps/Route104/scripts.pory"
	release
# 943 "data/maps/Route104/scripts.pory"
	end
# 944 "data/maps/Route104/scripts.pory"

# 945 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 946 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 947 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 948 "data/maps/Route104/scripts.pory"
	release
# 949 "data/maps/Route104/scripts.pory"
	end
# 950 "data/maps/Route104/scripts.pory"

# 951 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 952 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 953 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 954 "data/maps/Route104/scripts.pory"
	end
# 955 "data/maps/Route104/scripts.pory"

# 956 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 957 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY, Route104_Text_CindyIntro, Route104_Text_CindyDefeat
# 958 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 959 "data/maps/Route104/scripts.pory"
	release
# 960 "data/maps/Route104/scripts.pory"
	end
# 961 "data/maps/Route104/scripts.pory"

# 962 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 963 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 964 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 965 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 966 "data/maps/Route104/scripts.pory"
	release
# 967 "data/maps/Route104/scripts.pory"
	end
# 968 "data/maps/Route104/scripts.pory"

# 969 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 970 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 971 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 972 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 973 "data/maps/Route104/scripts.pory"
	release
# 974 "data/maps/Route104/scripts.pory"
	end
# 975 "data/maps/Route104/scripts.pory"

# 976 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 977 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 978 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 979 "data/maps/Route104/scripts.pory"
	end
# 980 "data/maps/Route104/scripts.pory"

# 981 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 982 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 983 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 984 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 985 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 986 "data/maps/Route104/scripts.pory"

# 987 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 988 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 989 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 990 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 991 "data/maps/Route104/scripts.pory"

# 992 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 993 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 994 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 995 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 996 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 997 "data/maps/Route104/scripts.pory"

# 998 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 999 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1000 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1001 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1002 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1003 "data/maps/Route104/scripts.pory"

# 1004 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1005 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1006 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1007 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1008 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1009 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1010 "data/maps/Route104/scripts.pory"

# 1011 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1012 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1013 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1014 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1015 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1016 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1017 "data/maps/Route104/scripts.pory"

# 1018 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1019 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1020 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1021 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1022 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1023 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1024 "data/maps/Route104/scripts.pory"

# 1025 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1026 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1027 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1028 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1029 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1030 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1031 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1032 "data/maps/Route104/scripts.pory"

# 1033 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1034 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1035 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1036 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1037 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1038 "data/maps/Route104/scripts.pory"

# 1039 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1040 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1041 "data/maps/Route104/scripts.pory"

# 1042 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1043 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1044 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1045 "data/maps/Route104/scripts.pory"

# 1046 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1047 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1048 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1049 "data/maps/Route104/scripts.pory"

# 1050 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1051 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1052 "data/maps/Route104/scripts.pory"

# 1053 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1054 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1055 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1056 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1057 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1058 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1059 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1060 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1061 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1062 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1063 "data/maps/Route104/scripts.pory"

# 1064 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1065 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1066 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1067 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1068 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1069 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1070 "data/maps/Route104/scripts.pory"

# 1071 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1072 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1073 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1074 "data/maps/Route104/scripts.pory"

# 1075 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1076 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1077 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1078 "data/maps/Route104/scripts.pory"

# 1079 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1080 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1081 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1082 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1083 "data/maps/Route104/scripts.pory"

# 1084 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1085 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1086 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1087 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1088 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1089 "data/maps/Route104/scripts.pory"

# 1090 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1091 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1092 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1093 "data/maps/Route104/scripts.pory"

# 1094 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1095 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1096 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1097 "data/maps/Route104/scripts.pory"

# 1098 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1099 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1100 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1101 "data/maps/Route104/scripts.pory"

# 1102 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1103 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1104 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1105 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1106 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1107 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1108 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1109 "data/maps/Route104/scripts.pory"

# 1110 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1111 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1112 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1113 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1114 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1115 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1116 "data/maps/Route104/scripts.pory"

# 1117 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1118 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1119 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1120 "data/maps/Route104/scripts.pory"

# 1121 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1122 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1123 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1124 "data/maps/Route104/scripts.pory"

# 1125 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1126 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1127 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1128 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1129 "data/maps/Route104/scripts.pory"

# 1130 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1131 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1132 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1133 "data/maps/Route104/scripts.pory"

# 1134 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1135 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1136 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1137 "data/maps/Route104/scripts.pory"

# 1138 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1139 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1140 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1141 "data/maps/Route104/scripts.pory"

# 1142 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1143 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1144 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1145 "data/maps/Route104/scripts.pory"

# 1146 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1147 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1148 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1149 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1150 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1151 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1152 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"

# 6 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordGlitch_Movement_0:
# 6 "data/maps/Route104/scripts.pory"
	walk_down
	step_end
