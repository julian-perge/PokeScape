Lumbridge_Forest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	call WEATHER_CHANGE_AREA_DRAYNOR
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call LumForest_STATE
	return


LumForest_STATE::
	setobjectxyperm 5, 32, 15
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 4, 33, 15
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return


LUMBRIDGEFOREST_NPC_BOT1::
	namebox LUMBRIDGEFOREST_NPC_BOT1_Text_0
	msgbox LUMBRIDGEFOREST_NPC_BOT1_Text_1
	closemessage
	release
	end


LUMBRIDGEFOREST_NPC_BOT2::
	namebox LUMBRIDGEFOREST_NPC_BOT1_Text_0
	msgbox LUMBRIDGEFOREST_NPC_BOT2_Text_0
	closemessage
	release
	end


LUMBRIDGEFOREST_NPC_WOODCUTTER::
	faceplayer
	namebox LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_0
	msgbox LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_1
	closemessage
	release
	end


NPC_LUMBRIDGE_FOREST_1::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_1_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_LUMBRIDGE_FOREST_2::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_2_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_LUMBRIDGE_FOREST_3::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_3_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_3_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_LUMBRIDGE_FOREST_4::
	lock
	namebox NPC_LUMBRIDGE_FOREST_4_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_4_Text_1
	closemessage
	hidenamebox
	playse SE_LEDGE
	applymovement 13, MOVEMENT_SHOCKED_FACEPLAYER
	waitmovement 0
	namebox NPC_LUMBRIDGE_FOREST_4_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_4_Text_2
	closemessage
	hidenamebox
	release
	end


MOVEMENT_SHOCKED_FACEPLAYER:
	emote_exclamation_mark
	face_player
	lock_facing_direction
	jump_in_place_down
	unlock_facing_direction
	step_end

NPC_LUMBRIDGE_FOREST_5::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_5_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_5_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_LUMBRIDGE_FOREST_6::
	lock
	faceplayer
	namebox LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_6_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_BOT1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_BOT1, BATTLE_LUMBRIDGEFOREST_BOT1_Text_0, BATTLE_LUMBRIDGEFOREST_BOT1_Text_1
	namebox BATTLE_LUMBRIDGEFOREST_BOT1_Text_2
	msgbox BATTLE_LUMBRIDGEFOREST_BOT1_Text_1
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_WOODCUTTER1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_WOODCUTTER1, BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_0, BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_1
	msgbox BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_2
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_TRAINER_1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_TRAINER_1, BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_0, BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_1
	namebox BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_2
	msgbox BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_TRAINER_2::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_TRAINER_2, BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_0, BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_1
	msgbox BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_TRAINER_3::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_TRAINER_3, BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_0, BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_1
	msgbox BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_2
	hidenamebox
	release
	end


ITEM_LUMBRIDGEFOREST_TM49_SNARL::
	finditem ITEM_TM49_SNARL
	end


ITEM_LUMBRIDGEFOREST_BREAD::
	finditem ITEM_BREAD
	end


ITEM_LUMBRIDGE_FOREST_3::
	finditem ITEM_PURPLE_SWEETS
	end


NPC_LUMBRIDGE_FOREST_HAM_1::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_HAM_1_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_HAM_1_Text_1
	closemessage
	hidenamebox
	release
	end


LUMBRIDGEFOREST_NPC_BOT1_Text_0:
	.string "Bot$"

LUMBRIDGEFOREST_NPC_BOT1_Text_1:
	.string "BEEP BOOP.$"

LUMBRIDGEFOREST_NPC_BOT2_Text_0:
	.string "CHOP, CHOP, CHOP.$"

LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_0:
	.string "Woodcutter$"

LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_1:
	.string "These bots are so annoying.$"

NPC_LUMBRIDGE_FOREST_1_Text_0:
	.string "Monk$"

NPC_LUMBRIDGE_FOREST_1_Text_1:
	.string "Why are all of us standing around here?\p"
	.string "None of your business.\p"
	.string "Get lost.$"

NPC_LUMBRIDGE_FOREST_2_Text_0:
	.string "Warrior$"

NPC_LUMBRIDGE_FOREST_2_Text_1:
	.string "We're looking for Zanaris...GAH!\p"
	.string "I mean we're not here for any particular\n"
	.string "reason at all.\p"
	.string "...\p"
	.string "Of course we know where it is! We just\n"
	.string "haven't found which tree the stupid\l"
	.string "leprechaun's hiding in yet!$"

NPC_LUMBRIDGE_FOREST_3_Text_0:
	.string "Wizard$"

NPC_LUMBRIDGE_FOREST_3_Text_1:
	.string "Hahaha you dare talk to a mighty wizard\n"
	.string "such as myself?\p"
	.string "I bet you can't even cast windstrike\n"
	.string "yet noob!$"

NPC_LUMBRIDGE_FOREST_4_Text_0:
	.string "Archer$"

NPC_LUMBRIDGE_FOREST_4_Text_1:
	.string "Rats!\p"
	.string "I dropped my last sweet looking for\n"
	.string "that stupid lepre-$"

NPC_LUMBRIDGE_FOREST_4_Text_2:
	.string "Forget anything you might have heard!\p"
	.string "Now go away this is our quest!$"

NPC_LUMBRIDGE_FOREST_5_Text_0:
	.string "Cupholder$"

NPC_LUMBRIDGE_FOREST_5_Text_1:
	.string "Hello, I am a Cupholder.$"

NPC_LUMBRIDGE_FOREST_6_Text_0:
	.string "I can see Lumbridge on the other side.\p"
	.string "If only I had the Woodcutting level to\n"
	.string "get past these trees…$"

BATTLE_LUMBRIDGEFOREST_BOT1_Text_0:
	.string "ALERT!\p"
	.string "INTERACTION DETECTED.\p"
	.string "RESPONSE ACTIVATED.\p"
	.string "HELLO, I AM NOT A BOT.$"

BATTLE_LUMBRIDGEFOREST_BOT1_Text_1:
	.string "HELLO, I AM NOT A BOT.$"

BATTLE_LUMBRIDGEFOREST_BOT1_Text_2:
	.string "alhgkj73$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_0:
	.string "OMG LUL, guess what?\p"
	.string "These woods belong to me!$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_1:
	.string "JK, I'll share.$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_2:
	.string "Like ROFLMAO you are stronk.\p"
	.string "You sure cut me down to size, OMEGALUL!$"

BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_0:
	.string "I am going to jump out and attack you\n"
	.string "now.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_1:
	.string "I would jump for joy, except I seem to\n"
	.string "have lost this battle.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_2:
	.string "Mugger$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_0:
	.string "Me and me friend destroyed the path\n"
	.string "through the forest to lure pink\l"
	.string "hoomens into trap.\p"
	.string "Now you have wandered into it.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_1:
	.string "Oh no, you has escaped the trap!$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_2:
	.string "Me and me friend destroyed the path\n"
	.string "through the forest to lure pink\l"
	.string "hoomens into trap.\p"
	.string "You escaped trap.\p"
	.string "Makes me rethink new trap.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_0:
	.string "Me liek this forest.\p"
	.string "Me hope no harm comes to it.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_1:
	.string "Clearly big high war god favours you.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_2:
	.string "Me liek this forest.\p"
	.string "Me hope no harm comes to it.\p"
	.string "Me would be sad if big high war god were\n"
	.string "to damage it and make a big dirt hole.$"

NPC_LUMBRIDGE_FOREST_HAM_1_Text_0:
	.string "H.A.M Member$"

NPC_LUMBRIDGE_FOREST_HAM_1_Text_1:
	.string "Go away.$"
