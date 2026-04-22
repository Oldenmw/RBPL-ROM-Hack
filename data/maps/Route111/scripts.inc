Route111_EventScript_GlitchWarp::
# 2 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_GlitchWarp_Text_0
# 3 "data/maps/Route111/scripts.pory"
	closemessage
# 4 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_EventScript_GlitchWarp_Movement_0
# 8 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 9 "data/maps/Route111/scripts.pory"
	delay 2
# 10 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_EventScript_GlitchWarp_Movement_1
# 16 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route111/scripts.pory"
	setvar VAR_GLITCH_WARPS, 2
# 18 "data/maps/Route111/scripts.pory"
	release
	end


# 22 "data/maps/Route111/scripts.pory"

# 23 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 24 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 25 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 26 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 27 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 28 "data/maps/Route111/scripts.pory"
	.byte 0
# 29 "data/maps/Route111/scripts.pory"

# 30 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 31 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 32 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 33 "data/maps/Route111/scripts.pory"
	end
# 34 "data/maps/Route111/scripts.pory"

# 35 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 38 "data/maps/Route111/scripts.pory"
	return
# 39 "data/maps/Route111/scripts.pory"

# 40 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 41 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 47 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 48 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 49 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 50 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 51 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 52 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 53 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 54 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 55 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 56 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 57 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 58 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 59 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 60 "data/maps/Route111/scripts.pory"
	return
# 61 "data/maps/Route111/scripts.pory"

# 62 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 63 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 64 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 65 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 66 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 67 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 68 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 69 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 70 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 71 "data/maps/Route111/scripts.pory"
	end
# 72 "data/maps/Route111/scripts.pory"

# 73 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 74 "data/maps/Route111/scripts.pory"
	checkplayergender
# 75 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 76 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 77 "data/maps/Route111/scripts.pory"
	return
# 78 "data/maps/Route111/scripts.pory"

# 79 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 80 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 81 "data/maps/Route111/scripts.pory"
	return
# 82 "data/maps/Route111/scripts.pory"

# 83 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 84 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 85 "data/maps/Route111/scripts.pory"
	return
# 86 "data/maps/Route111/scripts.pory"

# 87 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 88 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 89 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 90 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 91 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 92 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 93 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 94 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 95 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 96 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 97 "data/maps/Route111/scripts.pory"
	return
# 98 "data/maps/Route111/scripts.pory"

# 99 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 100 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 101 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 102 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 103 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 104 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 105 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 106 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 107 "data/maps/Route111/scripts.pory"
	end
# 108 "data/maps/Route111/scripts.pory"

# 109 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 110 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 111 "data/maps/Route111/scripts.pory"
	return
# 112 "data/maps/Route111/scripts.pory"

# 113 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 114 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 115 "data/maps/Route111/scripts.pory"
	return
# 116 "data/maps/Route111/scripts.pory"

# 117 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 118 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 119 "data/maps/Route111/scripts.pory"
	.2byte 0
# 120 "data/maps/Route111/scripts.pory"

# 121 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 122 "data/maps/Route111/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 123 "data/maps/Route111/scripts.pory"
	end
# 124 "data/maps/Route111/scripts.pory"

# 125 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 126 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 127 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_GLITCH_WARPS, 1, Route111_EventScript_GlitchWarp
# 128 "data/maps/Route111/scripts.pory"
	.2byte 0
# 129 "data/maps/Route111/scripts.pory"

# 130 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 131 "data/maps/Route111/scripts.pory"
	lockall
# 132 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 133 "data/maps/Route111/scripts.pory"
	waitstate
# 134 "data/maps/Route111/scripts.pory"
	delay 24
# 135 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 136 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 137 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 138 "data/maps/Route111/scripts.pory"
	waitstate
# 139 "data/maps/Route111/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 140 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 141 "data/maps/Route111/scripts.pory"
	delay 16
# 142 "data/maps/Route111/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 143 "data/maps/Route111/scripts.pory"
	delay 16
# 144 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 145 "data/maps/Route111/scripts.pory"
	waitstate
# 146 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 147 "data/maps/Route111/scripts.pory"
	waitstate
# 148 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 149 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 150 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 151 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 152 "data/maps/Route111/scripts.pory"
	releaseall
# 153 "data/maps/Route111/scripts.pory"
	end
# 154 "data/maps/Route111/scripts.pory"

# 155 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 156 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 157 "data/maps/Route111/scripts.pory"
	releaseall
# 158 "data/maps/Route111/scripts.pory"
	end
# 159 "data/maps/Route111/scripts.pory"

# 160 "data/maps/Route111/scripts.pory"
@ Unused
# 161 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 162 "data/maps/Route111/scripts.pory"
	lock_anim
# 163 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 164 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 165 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 167 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 168 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 169 "data/maps/Route111/scripts.pory"
	step_end
# 170 "data/maps/Route111/scripts.pory"

# 171 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 172 "data/maps/Route111/scripts.pory"
	lock
# 173 "data/maps/Route111/scripts.pory"
	faceplayer
# 174 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 175 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 176 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 177 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 178 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 179 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 180 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 181 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 182 "data/maps/Route111/scripts.pory"
	release
# 183 "data/maps/Route111/scripts.pory"
	end
# 184 "data/maps/Route111/scripts.pory"

# 185 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 186 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 187 "data/maps/Route111/scripts.pory"
	release
# 188 "data/maps/Route111/scripts.pory"
	end
# 189 "data/maps/Route111/scripts.pory"

# 190 "data/maps/Route111/scripts.pory"
@ Unused
# 191 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 192 "data/maps/Route111/scripts.pory"
	lockall
# 193 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 194 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 195 "data/maps/Route111/scripts.pory"
	end
# 196 "data/maps/Route111/scripts.pory"

# 197 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 198 "data/maps/Route111/scripts.pory"
	lockall
# 199 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 200 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 201 "data/maps/Route111/scripts.pory"
	end
# 202 "data/maps/Route111/scripts.pory"

# 203 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 204 "data/maps/Route111/scripts.pory"
	lockall
# 205 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 206 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 207 "data/maps/Route111/scripts.pory"
	end
# 208 "data/maps/Route111/scripts.pory"

# 209 "data/maps/Route111/scripts.pory"
@ Unused
# 210 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 211 "data/maps/Route111/scripts.pory"
	lockall
# 212 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 213 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 214 "data/maps/Route111/scripts.pory"
	end
# 215 "data/maps/Route111/scripts.pory"

# 216 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 217 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 218 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 219 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 220 "data/maps/Route111/scripts.pory"
	releaseall
# 221 "data/maps/Route111/scripts.pory"
	end
# 222 "data/maps/Route111/scripts.pory"

# 223 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 224 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 225 "data/maps/Route111/scripts.pory"
	closemessage
# 226 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 227 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 228 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 229 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 230 "data/maps/Route111/scripts.pory"
	releaseall
# 231 "data/maps/Route111/scripts.pory"
	end
# 232 "data/maps/Route111/scripts.pory"

# 233 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 234 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushUpFromRoute
# 235 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route111/scripts.pory"
	return
# 237 "data/maps/Route111/scripts.pory"

# 238 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 239 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushDownFromRoute
# 240 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route111/scripts.pory"
	return
# 242 "data/maps/Route111/scripts.pory"

# 243 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 244 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushLeftFromRoute
# 245 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route111/scripts.pory"
	return
# 247 "data/maps/Route111/scripts.pory"

# 248 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 249 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushRightFromRoute
# 250 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route111/scripts.pory"
	return
# 252 "data/maps/Route111/scripts.pory"

# 253 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 254 "data/maps/Route111/scripts.pory"
	walk_up
# 255 "data/maps/Route111/scripts.pory"
	step_end
# 256 "data/maps/Route111/scripts.pory"

# 257 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 258 "data/maps/Route111/scripts.pory"
	walk_down
# 259 "data/maps/Route111/scripts.pory"
	step_end
# 260 "data/maps/Route111/scripts.pory"

# 261 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 262 "data/maps/Route111/scripts.pory"
	walk_left
# 263 "data/maps/Route111/scripts.pory"
	step_end
# 264 "data/maps/Route111/scripts.pory"

# 265 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 266 "data/maps/Route111/scripts.pory"
	walk_right
# 267 "data/maps/Route111/scripts.pory"
	step_end
# 268 "data/maps/Route111/scripts.pory"

# 269 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 270 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 271 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 272 "data/maps/Route111/scripts.pory"
	doweather
# 273 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 274 "data/maps/Route111/scripts.pory"
	end
# 275 "data/maps/Route111/scripts.pory"

# 276 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 277 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 278 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 279 "data/maps/Route111/scripts.pory"
	doweather
# 280 "data/maps/Route111/scripts.pory"
	end
# 281 "data/maps/Route111/scripts.pory"

# 282 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 283 "data/maps/Route111/scripts.pory"
	lock
# 284 "data/maps/Route111/scripts.pory"
	faceplayer
# 285 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 286 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 287 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 288 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 289 "data/maps/Route111/scripts.pory"
	release
# 290 "data/maps/Route111/scripts.pory"
	end
# 291 "data/maps/Route111/scripts.pory"

# 292 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 293 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 294 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 295 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 296 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 297 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 298 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 299 "data/maps/Route111/scripts.pory"
	closemessage
# 300 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_Movement_WinstrateEnterHouse
# 301 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 303 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 304 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 305 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 306 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 307 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 308 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateExitHouse
# 309 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 311 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 312 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 313 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 314 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 315 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 316 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 317 "data/maps/Route111/scripts.pory"
	closemessage
# 318 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 319 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 320 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 321 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 322 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 323 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 324 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 325 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 326 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateExitHouse
# 327 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 328 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 329 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 330 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 331 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkInPlaceFasterUp
# 332 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 333 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 334 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 335 "data/maps/Route111/scripts.pory"
	closemessage
# 336 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateEnterHouse
# 337 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 339 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 340 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 341 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 342 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 343 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 344 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateExitHouse
# 345 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 347 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 348 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 349 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 350 "data/maps/Route111/scripts.pory"
	closemessage
# 351 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkInPlaceFasterUp
# 352 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 353 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 354 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateEnterHouse
# 355 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 357 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 358 "data/maps/Route111/scripts.pory"
	release
# 359 "data/maps/Route111/scripts.pory"
	end
# 360 "data/maps/Route111/scripts.pory"

# 361 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 362 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 363 "data/maps/Route111/scripts.pory"
	waitdooranim
# 364 "data/maps/Route111/scripts.pory"
	return
# 365 "data/maps/Route111/scripts.pory"

# 366 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 367 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 368 "data/maps/Route111/scripts.pory"
	waitdooranim
# 369 "data/maps/Route111/scripts.pory"
	return
# 370 "data/maps/Route111/scripts.pory"

# 371 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 372 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 373 "data/maps/Route111/scripts.pory"
	walk_up
# 374 "data/maps/Route111/scripts.pory"
	step_end
# 375 "data/maps/Route111/scripts.pory"

# 376 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 377 "data/maps/Route111/scripts.pory"
	walk_down
# 378 "data/maps/Route111/scripts.pory"
	step_end
# 379 "data/maps/Route111/scripts.pory"

# 380 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 381 "data/maps/Route111/scripts.pory"
	delay_16
# 382 "data/maps/Route111/scripts.pory"
	delay_16
# 383 "data/maps/Route111/scripts.pory"
	delay_16
# 384 "data/maps/Route111/scripts.pory"
	step_end
# 385 "data/maps/Route111/scripts.pory"

# 386 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 387 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 388 "data/maps/Route111/scripts.pory"
	end
# 389 "data/maps/Route111/scripts.pory"

# 390 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 391 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 392 "data/maps/Route111/scripts.pory"
	end
# 393 "data/maps/Route111/scripts.pory"

# 394 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 395 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 396 "data/maps/Route111/scripts.pory"
	end
# 397 "data/maps/Route111/scripts.pory"

# 398 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 399 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 400 "data/maps/Route111/scripts.pory"
	end
# 401 "data/maps/Route111/scripts.pory"

# 402 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 403 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 404 "data/maps/Route111/scripts.pory"
	end
# 405 "data/maps/Route111/scripts.pory"

# 406 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 407 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 408 "data/maps/Route111/scripts.pory"
	end
# 409 "data/maps/Route111/scripts.pory"

# 410 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 411 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 412 "data/maps/Route111/scripts.pory"
	end
# 413 "data/maps/Route111/scripts.pory"

# 414 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 415 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 416 "data/maps/Route111/scripts.pory"
	end
# 417 "data/maps/Route111/scripts.pory"

# 418 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 419 "data/maps/Route111/scripts.pory"
	lock
# 420 "data/maps/Route111/scripts.pory"
	faceplayer
# 421 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 422 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 423 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 424 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 425 "data/maps/Route111/scripts.pory"
	release
# 426 "data/maps/Route111/scripts.pory"
	end
# 427 "data/maps/Route111/scripts.pory"

# 428 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 429 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 430 "data/maps/Route111/scripts.pory"
	release
# 431 "data/maps/Route111/scripts.pory"
	end
# 432 "data/maps/Route111/scripts.pory"

# 433 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 434 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 435 "data/maps/Route111/scripts.pory"
	release
# 436 "data/maps/Route111/scripts.pory"
	end
# 437 "data/maps/Route111/scripts.pory"

# 438 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 439 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 440 "data/maps/Route111/scripts.pory"
	release
# 441 "data/maps/Route111/scripts.pory"
	end
# 442 "data/maps/Route111/scripts.pory"

# 443 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 444 "data/maps/Route111/scripts.pory"
	lockall
# 445 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 446 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 447 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 448 "data/maps/Route111/scripts.pory"
	closemessage
# 449 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 450 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route111/scripts.pory"
	releaseall
# 452 "data/maps/Route111/scripts.pory"
	end
# 453 "data/maps/Route111/scripts.pory"

# 454 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 455 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 456 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 457 "data/maps/Route111/scripts.pory"
	end
# 458 "data/maps/Route111/scripts.pory"

# 459 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 460 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 461 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route111/scripts.pory"
	end
# 463 "data/maps/Route111/scripts.pory"

# 464 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 465 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 466 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 467 "data/maps/Route111/scripts.pory"
	end
# 468 "data/maps/Route111/scripts.pory"

# 469 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 470 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 471 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 472 "data/maps/Route111/scripts.pory"
	end
# 473 "data/maps/Route111/scripts.pory"

# 474 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 475 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 476 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 477 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 478 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 479 "data/maps/Route111/scripts.pory"
	release
# 480 "data/maps/Route111/scripts.pory"
	end
# 481 "data/maps/Route111/scripts.pory"

# 482 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 483 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 484 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 485 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 486 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 487 "data/maps/Route111/scripts.pory"
	release
# 488 "data/maps/Route111/scripts.pory"
	end
# 489 "data/maps/Route111/scripts.pory"

# 490 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 491 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 492 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 493 "data/maps/Route111/scripts.pory"
	end
# 494 "data/maps/Route111/scripts.pory"

# 495 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 496 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 497 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 498 "data/maps/Route111/scripts.pory"
	end
# 499 "data/maps/Route111/scripts.pory"

# 500 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 501 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 502 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/Route111/scripts.pory"
	end
# 504 "data/maps/Route111/scripts.pory"

# 505 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 506 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 507 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route111/scripts.pory"
	end
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 511 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 512 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 513 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 514 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 515 "data/maps/Route111/scripts.pory"
	release
# 516 "data/maps/Route111/scripts.pory"
	end
# 517 "data/maps/Route111/scripts.pory"

# 518 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 519 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 520 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 521 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 522 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 523 "data/maps/Route111/scripts.pory"
	release
# 524 "data/maps/Route111/scripts.pory"
	end
# 525 "data/maps/Route111/scripts.pory"

# 526 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 527 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 528 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 529 "data/maps/Route111/scripts.pory"
	end
# 530 "data/maps/Route111/scripts.pory"

# 531 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 532 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 533 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 534 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 535 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 536 "data/maps/Route111/scripts.pory"
	release
# 537 "data/maps/Route111/scripts.pory"
	end
# 538 "data/maps/Route111/scripts.pory"

# 539 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 540 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 541 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 542 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 543 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 544 "data/maps/Route111/scripts.pory"
	release
# 545 "data/maps/Route111/scripts.pory"
	end
# 546 "data/maps/Route111/scripts.pory"

# 547 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 548 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 549 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 550 "data/maps/Route111/scripts.pory"
	end
# 551 "data/maps/Route111/scripts.pory"

# 552 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 553 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 554 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 555 "data/maps/Route111/scripts.pory"
	end
# 556 "data/maps/Route111/scripts.pory"

# 557 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 558 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 559 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 560 "data/maps/Route111/scripts.pory"
	end
# 561 "data/maps/Route111/scripts.pory"

# 562 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 563 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 564 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 565 "data/maps/Route111/scripts.pory"
	end
# 566 "data/maps/Route111/scripts.pory"

# 567 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 568 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 569 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 570 "data/maps/Route111/scripts.pory"
	end
# 571 "data/maps/Route111/scripts.pory"

# 572 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 573 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 574 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 575 "data/maps/Route111/scripts.pory"
	end
# 576 "data/maps/Route111/scripts.pory"

# 577 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 578 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 579 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 580 "data/maps/Route111/scripts.pory"
	end
# 581 "data/maps/Route111/scripts.pory"

# 582 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 583 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 584 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 585 "data/maps/Route111/scripts.pory"
	end
# 586 "data/maps/Route111/scripts.pory"

# 587 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 588 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 589 "data/maps/Route111/scripts.pory"
	end
# 590 "data/maps/Route111/scripts.pory"

# 591 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 592 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 593 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 594 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 595 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 596 "data/maps/Route111/scripts.pory"

# 597 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 598 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 599 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 600 "data/maps/Route111/scripts.pory"

# 601 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 602 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 603 "data/maps/Route111/scripts.pory"

# 604 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 605 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 606 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 607 "data/maps/Route111/scripts.pory"

# 608 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 609 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 610 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 611 "data/maps/Route111/scripts.pory"

# 612 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 613 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 614 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 615 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 616 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 617 "data/maps/Route111/scripts.pory"

# 618 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 619 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 620 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 621 "data/maps/Route111/scripts.pory"

# 622 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 623 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 624 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 625 "data/maps/Route111/scripts.pory"

# 626 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 627 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 628 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 629 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 630 "data/maps/Route111/scripts.pory"

# 631 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 632 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 633 "data/maps/Route111/scripts.pory"

# 634 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 635 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 636 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 637 "data/maps/Route111/scripts.pory"

# 638 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 639 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 640 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 641 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 642 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 643 "data/maps/Route111/scripts.pory"

# 644 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 645 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 646 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 647 "data/maps/Route111/scripts.pory"

# 648 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 649 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 650 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 651 "data/maps/Route111/scripts.pory"

# 652 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 653 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 654 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 655 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 656 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 657 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 658 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 659 "data/maps/Route111/scripts.pory"

# 660 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 661 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 662 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 663 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 664 "data/maps/Route111/scripts.pory"

# 665 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 666 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 667 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 668 "data/maps/Route111/scripts.pory"

# 669 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 670 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 671 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 672 "data/maps/Route111/scripts.pory"

# 673 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 674 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 675 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 676 "data/maps/Route111/scripts.pory"

# 677 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 678 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 679 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 680 "data/maps/Route111/scripts.pory"

# 681 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 682 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 683 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 684 "data/maps/Route111/scripts.pory"

# 685 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 686 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 687 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 688 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 689 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 690 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 691 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 692 "data/maps/Route111/scripts.pory"

# 693 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 694 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 695 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 696 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 697 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 698 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 699 "data/maps/Route111/scripts.pory"

# 700 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 701 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 702 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 703 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 704 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 705 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 706 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 707 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 708 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 709 "data/maps/Route111/scripts.pory"

# 710 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 711 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 712 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 713 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 714 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 715 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 716 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 717 "data/maps/Route111/scripts.pory"

# 718 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 719 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 720 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 721 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 722 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 723 "data/maps/Route111/scripts.pory"

# 724 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 725 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 726 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 727 "data/maps/Route111/scripts.pory"

# 728 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 729 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 730 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 731 "data/maps/Route111/scripts.pory"

# 732 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 733 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 734 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 735 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 736 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 737 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 738 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 739 "data/maps/Route111/scripts.pory"

# 740 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 741 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 742 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 743 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

# 4 "data/maps/Route111/scripts.pory"
Route111_EventScript_GlitchWarp_Movement_0:
# 5 "data/maps/Route111/scripts.pory"
	face_up
# 6 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

# 10 "data/maps/Route111/scripts.pory"
Route111_EventScript_GlitchWarp_Movement_1:
# 11 "data/maps/Route111/scripts.pory"
	face_down
# 12 "data/maps/Route111/scripts.pory"
	face_right
# 13 "data/maps/Route111/scripts.pory"
	walk_right
# 14 "data/maps/Route111/scripts.pory"
	face_down
	step_end

Route111_EventScript_GlitchWarp_Text_0:
# 2 "data/maps/Route111/scripts.pory"
	.string "What just happened?!$"
