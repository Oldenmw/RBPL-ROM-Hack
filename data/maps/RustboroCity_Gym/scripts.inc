# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Th3e::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TH3E, RustboroCity_Gym_Text_Th3eIntro, RustboroCity_Gym_Text_Th3eDefeat, RustboroCity_Gym_EventScript_Th3eDefeated, NO_MUSIC
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Th3ePostBattle, MSGBOX_DEFAULT
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 11 "data/maps/RustboroCity_Gym/scripts.pory"

# 12 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Th3eDefeated::
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 26 "data/maps/RustboroCity_Gym/scripts.pory"

# 27 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 34 "data/maps/RustboroCity_Gym/scripts.pory"

# 35 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Th3eRematch::
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 37 "data/maps/RustboroCity_Gym/scripts.pory"

# 38 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Gym/scripts.pory"

# 43 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 47 "data/maps/RustboroCity_Gym/scripts.pory"

# 48 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 52 "data/maps/RustboroCity_Gym/scripts.pory"

# 53 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 60 "data/maps/RustboroCity_Gym/scripts.pory"

# 61 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Gym/scripts.pory"

# 66 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 71 "data/maps/RustboroCity_Gym/scripts.pory"

# 72 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 77 "data/maps/RustboroCity_Gym/scripts.pory"

# 78 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 82 "data/maps/RustboroCity_Gym/scripts.pory"

# 83 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 87 "data/maps/RustboroCity_Gym/scripts.pory"

# 88 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterTh3e::
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 90 "data/maps/RustboroCity_Gym/scripts.pory"

# 91 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Th3e, the GYM LEADER, is a user\n"
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of sticks amd stones POKéMON.\p"
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "They're either very durable\n"
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "or hit extra hard.\l"
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can weather the storm,\n"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "come see me for a reward!$"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"

# 111 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"

# 123 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"

# 127 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"

# 130 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"

# 134 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against TH3E!$"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"

# 138 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"

# 141 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TH3E is stronger than me by\n"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"

# 146 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"

# 152 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"

# 156 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"

# 161 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Th3eIntro:
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am TH3E, the RUSTBORO\n"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the POKéMON\l"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which POKéMON?$"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"

# 170 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Th3eDefeat:
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"

# 182 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from TH3E.$"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"

# 186 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the Axe to\n"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "cut trees outside of battle.\p"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"

# 193 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.$"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"

# 203 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Th3ePostBattle:
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"

# 209 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"

# 212 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TH3E'S CERTIFIED TRAINERS:\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"

# 217 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Th3eRegisterCall:
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TH3E: Oh, hello, {PLAYER}?\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is TH3E of RUSTBORO CITY.\p"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"

# 234 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredTh3e:
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER TH3E\n"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"

# 238 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Th3ePreRematch:
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TH3E: I'm so glad to see you again.\n"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm TH3E, the GYM LEADER here.\p"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"

# 246 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Th3eRematchDefeat:
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"

# 250 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Th3ePostRematch:
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TH3E: I still have much to learn\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"

# 256 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_Th3eRematchNeedTwoMons:
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TH3E: I'm so glad to see you again.\n"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm TH3E, the GYM LEADER here.\p"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"
