LittlerootTown_Mansion_Pichu::
# 2 "data/maps/LittlerootTown_Mansion/scripts.pory"
	lock
# 3 "data/maps/LittlerootTown_Mansion/scripts.pory"
	faceplayer
# 4 "data/maps/LittlerootTown_Mansion/scripts.pory"
	msgbox LittlerootTown_Mansion_Pichu_Text_0
# 5 "data/maps/LittlerootTown_Mansion/scripts.pory"
	closemessage
# 6 "data/maps/LittlerootTown_Mansion/scripts.pory"
	release
	end


LittlerootTown_Mansion_Skitty::
# 11 "data/maps/LittlerootTown_Mansion/scripts.pory"
	lock
# 12 "data/maps/LittlerootTown_Mansion/scripts.pory"
	faceplayer
# 13 "data/maps/LittlerootTown_Mansion/scripts.pory"
	msgbox LittlerootTown_Mansion_Skitty_Text_0
# 14 "data/maps/LittlerootTown_Mansion/scripts.pory"
	closemessage
# 15 "data/maps/LittlerootTown_Mansion/scripts.pory"
	release
	end


LittlerootTown_Mansion_Sprigatito::
# 20 "data/maps/LittlerootTown_Mansion/scripts.pory"
	lock
# 21 "data/maps/LittlerootTown_Mansion/scripts.pory"
	faceplayer
# 22 "data/maps/LittlerootTown_Mansion/scripts.pory"
	msgbox LittlerootTown_Mansion_Sprigatito_Text_0
# 23 "data/maps/LittlerootTown_Mansion/scripts.pory"
	closemessage
# 24 "data/maps/LittlerootTown_Mansion/scripts.pory"
	release
	end


LittlerootTown_Mansion_Freya::
# 29 "data/maps/LittlerootTown_Mansion/scripts.pory"
	lock
# 30 "data/maps/LittlerootTown_Mansion/scripts.pory"
	faceplayer
# 31 "data/maps/LittlerootTown_Mansion/scripts.pory"
	msgbox LittlerootTown_Mansion_Freya_Text_0, MSGBOX_YESNO
# 32 "data/maps/LittlerootTown_Mansion/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_Mansion_Freya_6
LittlerootTown_Mansion_Freya_5:
# 37 "data/maps/LittlerootTown_Mansion/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_Mansion_Freya_3
# 42 "data/maps/LittlerootTown_Mansion/scripts.pory"
	msgbox LittlerootTown_Mansion_Freya_Text_3
# 44 "data/maps/LittlerootTown_Mansion/scripts.pory"
	closemessage
LittlerootTown_Mansion_Freya_1:
# 46 "data/maps/LittlerootTown_Mansion/scripts.pory"
	release
	end

LittlerootTown_Mansion_Freya_2:
# 33 "data/maps/LittlerootTown_Mansion/scripts.pory"
	trainerbattle_single TRAINER_FREYA, LittlerootTown_Mansion_Text_Freya_Intro, LittlerootTown_Mansion_Text_Freya_Defeat
# 34 "data/maps/LittlerootTown_Mansion/scripts.pory"
	msgbox LittlerootTown_Mansion_Freya_Text_1
# 35 "data/maps/LittlerootTown_Mansion/scripts.pory"
	closemessage
	goto LittlerootTown_Mansion_Freya_1

LittlerootTown_Mansion_Freya_3:
# 38 "data/maps/LittlerootTown_Mansion/scripts.pory"
	msgbox LittlerootTown_Mansion_Freya_Text_2
# 39 "data/maps/LittlerootTown_Mansion/scripts.pory"
	closemessage
	goto LittlerootTown_Mansion_Freya_1

LittlerootTown_Mansion_Freya_6:
# 32 "data/maps/LittlerootTown_Mansion/scripts.pory"
	compare VAR_ROUTE101_STATE, 3
	goto_if_eq LittlerootTown_Mansion_Freya_2
	goto LittlerootTown_Mansion_Freya_5


# 58 "data/maps/LittlerootTown_Mansion/scripts.pory"

# 59 "data/maps/LittlerootTown_Mansion/scripts.pory"
LittlerootTown_Mansion_MapScripts::
# 60 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.byte 0

LittlerootTown_Mansion_Pichu_Text_0:
# 4 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.string "Pichu! Pi!$"

LittlerootTown_Mansion_Skitty_Text_0:
# 13 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.string "Skit!$"

LittlerootTown_Mansion_Sprigatito_Text_0:
# 22 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.string "Gatito!$"

LittlerootTown_Mansion_Freya_Text_0:
# 31 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.string "How about a battle, just for fun?$"

LittlerootTown_Mansion_Freya_Text_1:
# 34 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.string "That was a blast.$"

LittlerootTown_Mansion_Freya_Text_2:
# 38 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.string "Oh well. Could have been fun.$"

LittlerootTown_Mansion_Freya_Text_3:
# 42 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.string "Hey, you don't have any Pokemon!\n\n"
	.string "Go get one then come back here.$"

LittlerootTown_Mansion_Text_Freya_Intro::
# 50 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.string "Good luck!$"

LittlerootTown_Mansion_Text_Freya_Defeat::
# 54 "data/maps/LittlerootTown_Mansion/scripts.pory"
	.string "What a great battle!$"
