BarbarianVillage_GymHall_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BarbarianVillage_GymHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BarbarianVillage_GymHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto BarbarianVillage_GYM_STATE
	return


BarbarianVillage_GYM_RESTART::
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 5
	goto_if_eq BarbarianVillage_GYM_RESTART_2
BarbarianVillage_GYM_RESTART_1:
	return

BarbarianVillage_GYM_RESTART_2:
	setvar VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 1
	goto BarbarianVillage_GYM_RESTART_1


BarbarianVillage_GYM_STATE::
	switch VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE
	case 0, BarbarianVillage_GYM_STATE_2
	case 1, BarbarianVillage_GYM_STATE_3
	case 5, BarbarianVillage_GYM_STATE_3
	case 2, BarbarianVillage_GYM_STATE_4
	case 3, BarbarianVillage_GYM_STATE_5
	return

BarbarianVillage_GYM_STATE_2:
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return

BarbarianVillage_GYM_STATE_3:
	removeobject 2
	removeobject 11
	setflag FLAG_TEMP_1
	addobject 3
	setobjectxy 3, 2, 14
	setobjectxyperm 3, 2, 14
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	addobject 1
	setobjectxy 1, 10, 9
	setobjectxyperm 1, 10, 9
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	addobject 4
	setobjectxyperm 4, 10, 10
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	addobject 5
	setobjectxyperm 5, 3, 11
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
	addobject 7
	setobjectxyperm 7, 7, 14
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	addobject 8
	setobjectxyperm 8, 8, 14
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
	addobject 9
	setobjectxyperm 9, 1, 13
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
	addobject 13
	setobjectxyperm 13, 4, 14
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_UP
	addobject 6
	setobjectxyperm 6, 2, 16
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	return

BarbarianVillage_GYM_STATE_4:
	removeobject 12
	removeobject 7
	setflag FLAG_TEMP_3
	addobject 3
	setobjectxy 3, 2, 7
	setobjectxyperm 3, 2, 7
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
	addobject 9
	setobjectxy 9, 2, 5
	setobjectxyperm 9, 2, 5
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
	addobject 1
	setobjectxy 1, 6, 7
	setobjectxyperm 1, 6, 7
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	addobject 2
	setobjectxy 2, 5, 8
	setobjectxyperm 2, 5, 8
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	addobject 6
	setobjectxy 6, 9, 5
	setobjectxyperm 6, 9, 5
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
	addobject 4
	setobjectxy 4, 7, 7
	setobjectxyperm 4, 7, 7
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	addobject 5
	setobjectxy 5, 9, 6
	setobjectxyperm 5, 9, 6
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
	addobject 8
	setobjectxy 8, 7, 8
	setobjectxyperm 8, 7, 8
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
	addobject 13
	setobjectxy 13, 8, 8
	setobjectxyperm 13, 8, 8
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_UP
	applymovement 1, MOVEMENT_FACE_UP
	applymovement 2, MOVEMENT_FACE_UP
	applymovement 3, MOVEMENT_FACE_RIGHT
	applymovement 4, MOVEMENT_FACE_UP
	applymovement 5, MOVEMENT_FACE_LEFT
	applymovement 6, MOVEMENT_FACE_LEFT
	applymovement 13, MOVEMENT_FACE_UP
	applymovement 8, MOVEMENT_FACE_UP
	applymovement 9, MOVEMENT_FACE_RIGHT
	applymovement 11, MOVEMENT_FACE_RIGHT
	return

BarbarianVillage_GYM_STATE_5:
	removeobject 2
	removeobject 11
	setflag FLAG_TEMP_1
	addobject 3
	setobjectxy 3, 2, 14
	setobjectxyperm 3, 2, 14
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	addobject 1
	setobjectxy 1, 10, 9
	setobjectxyperm 1, 10, 9
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	addobject 4
	setobjectxyperm 4, 10, 10
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	addobject 5
	setobjectxyperm 5, 3, 11
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
	addobject 7
	setobjectxyperm 7, 7, 14
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	addobject 8
	setobjectxyperm 8, 8, 14
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
	addobject 9
	setobjectxyperm 9, 1, 13
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
	addobject 6
	setobjectxyperm 6, 2, 16
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	addobject 10
	setobjectxyperm 10, 4, 3
	setobjectmovementtype 10, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	return


NPC_BARBGYM_BARBARIAN_1::
	lock
	faceplayer
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 5
	goto_if_eq NPC_BARBGYM_BARBARIAN_1_2
NPC_BARBGYM_BARBARIAN_1_1:
	goto_if_set FLAG_BADGE04_GET, NPC_BARBGYM_BARBARIAN_1_5
	msgbox NPC_BARBGYM_BARBARIAN_1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_BARBGYM_BARBARIAN_1_8
	msgbox NPC_BARBGYM_BARBARIAN_1_Text_5
	hidenamebox
	closemessage
NPC_BARBGYM_BARBARIAN_1_7:
	release
	end

NPC_BARBGYM_BARBARIAN_1_2:
	call BarbarianVillage_GYM_RESTART
	msgbox NPC_BARBGYM_BARBARIAN_1_Text_1
	goto NPC_BARBGYM_BARBARIAN_1_1

NPC_BARBGYM_BARBARIAN_1_5:
	msgbox NPC_BARBGYM_BARBARIAN_1_Text_2
	hidenamebox
	closemessage
	release
	end

NPC_BARBGYM_BARBARIAN_1_8:
	msgbox NPC_BARBGYM_BARBARIAN_1_Text_4
	hidenamebox
	closemessage
	applymovement 10, BARBARIAN_GYM_MOVEMENT_2
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, BARBARIAN_GYM_MOVEMENT_1
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement 10
	fadescreenswapbuffers FADE_TO_BLACK
	setvar VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 2
	call BarbarianVillage_GYM_STATE
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, BARBARIAN_GYM_MOVEMENT_3
	delay 30
	clearflag FLAG_TEMP_1
	fadescreenswapbuffers FADE_FROM_BLACK
	waitmovement 0
	goto NPC_BARBGYM_BARBARIAN_2
	goto NPC_BARBGYM_BARBARIAN_1_7


NPC_BARBGYM_BARBARIAN_2::
	applymovement 10, BARBARIAN_GYM_MOVEMENT_4
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_0
	hidenamebox
	closemessage
	call BARBARIAN_GYM_AUDIENCE_CHEER
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_1
	applymovement 10, MOVEMENT_WALK_UP
	waitmovement 0
	applymovement 10, MOVEMENT_FACE_LEFT
	waitmovement 0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_2
	hidenamebox
	closemessage
	call BARBARIAN_GYM_AUDIENCE_CHEER
	applymovement 10, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_3
	applymovement 6, BARBARIAN_GYM_MOVEMENT_5
	playse SE_LEDGE
	waitmovement 0
	call BARBARIAN_GYM_AUDIENCE_CHEER
	applymovement 10, MOVEMENT_FACE_DOWN
	waitmovement 0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_4
	hidenamebox
	closemessage
	applymovement 10, BARBARIAN_GYM_MOVEMENT_6
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_2_Text_5
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_6
	hidenamebox
	closemessage
	applymovement 6, MOVEMENT_WALK_LEFT
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_RIGHT
	waitmovement 0
	call BARBARIAN_GYM_BATTLE_ATLAS
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_7
	hidenamebox
	closemessage
	call BARBARIAN_GYM_AUDIENCE_CHEER
	applymovement OBJ_EVENT_ID_PLAYER, BARBARIAN_GYM_MOVEMENT_10
	applymovement 6, BARBARIAN_GYM_MOVEMENT_8
	waitmovement 6
	applymovement 10, BARBARIAN_GYM_MOVEMENT_7
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_8
	hidenamebox
	closemessage
	applymovement 10, BARBARIAN_GYM_MOVEMENT_6
	applymovement 2, BARBARIAN_GYM_MOVEMENT_9
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_2_Text_9
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_10
	hidenamebox
	closemessage
	applymovement 2, MOVEMENT_WALK_LEFT
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_RIGHT
	waitmovement 0
	call BARBARIAN_GYM_BATTLE_LITARA
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_11
	closemessage
	hidenamebox
	call BARBARIAN_GYM_AUDIENCE_CHEER
	applymovement OBJ_EVENT_ID_PLAYER, BARBARIAN_GYM_MOVEMENT_10
	applymovement 2, BARBARIAN_GYM_MOVEMENT_11
	waitmovement 2
	applymovement 10, BARBARIAN_GYM_MOVEMENT_7
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_12
	hidenamebox
	closemessage
	call BARBARIAN_GYM_AUDIENCE_CHEER
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_13
	hidenamebox
	closemessage
	call BARBARIAN_GYM_AUDIENCE_CHEER
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_14
	delay 15
	applymovement 10, MOVEMENT_FACE_LEFT
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_15
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_RIGHT
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_16
	hidenamebox
	closemessage
	call BARBARIAN_GYM_BATTLE_HAAKON
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_7
	hidenamebox
	closemessage
	call BARBARIAN_GYM_AUDIENCE_CHEER
	applymovement 10, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_17
	hidenamebox
	closemessage
	call BARBARIAN_GYM_AUDIENCE_CHEER
	applymovement 10, BARBARIAN_GYM_MOVEMENT_6
	applymovement 1, BARBARIAN_GYM_MOVEMENT_12
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_18
	closemessage
	waitmovement 1
	namebox NPC_BARBGYM_BARBARIAN_2_Text_19
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_20
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_21
	closemessage
	hidenamebox
	call BARBARIAN_GYM_BATTLE_GUNTHOR
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_22
	hidenamebox
	call BARBARIAN_GYM_AUDIENCE_CHEER
	special RemoveCameraObject
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, BARBARIAN_GYM_MOVEMENT_13
	delay 30
	delay 20
	waitmovement OBJ_EVENT_ID_CAMERA
	namebox NPC_BARBGYM_BARBARIAN_2_Text_19
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_23
	hidenamebox
	giveitem ITEM_TM66_BRUTAL_SWING
	namebox NPC_BARBGYM_BARBARIAN_2_Text_19
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_24
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_25
	waitmessage
	waitfanfare
	playbgm MUS_PS_BARBARIAN_VILLAGE, 0
	savebgm MUS_PS_BARBARIAN_VILLAGE
	applymovement 10, MOVEMENT_WALK_DOWN
	waitmovement 0
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox NPC_BARBGYM_BARBARIAN_2_Text_26
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_BADGE04_GET
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 5
	call HIDDEN_GROTTO_RESET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	setvar VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 3
	call BarbarianVillage_GYM_STATE
	special RemoveCameraObject
	setflag FLAG_TEMP_1
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end


MOVEMENT_FACE_UP:
	face_up
	step_end

MOVEMENT_FACE_LEFT:
	face_left
	step_end

MOVEMENT_FACE_RIGHT:
	face_right
	step_end

MOVEMENT_FACE_DOWN:
	face_down
	step_end

MOVEMENT_WALK_UP:
	walk_up
	step_end

MOVEMENT_WALK_LEFT:
	walk_left
	step_end

MOVEMENT_WALK_RIGHT:
	walk_right
	step_end

MOVEMENT_WALK_DOWN:
	walk_down
	step_end

BARBARIAN_GYM_MOVEMENT_1:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	face_right
	step_end

BARBARIAN_GYM_MOVEMENT_2:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	face_down
	step_end

BARBARIAN_GYM_MOVEMENT_3:
	walk_slow_right
	walk_slow_right
	delay_16
	delay_16
	walk_slow_down
	walk_slow_down
	step_end

BARBARIAN_GYM_MOVEMENT_4:
	walk_down
	step_end

BARBARIAN_GYM_MOVEMENT_5:
	jump_special_left
	walk_up
	walk_left
	face_left
	step_end

BARBARIAN_GYM_MOVEMENT_6:
	walk_up
	walk_right
	walk_right
	face_down
	step_end

BARBARIAN_GYM_MOVEMENT_7:
	walk_left
	walk_left
	walk_down
	step_end

BARBARIAN_GYM_MOVEMENT_8:
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

BARBARIAN_GYM_MOVEMENT_9:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	face_left
	step_end

BARBARIAN_GYM_MOVEMENT_10:
	walk_left
	face_right
	step_end

BARBARIAN_GYM_MOVEMENT_11:
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	face_up
	step_end

BARBARIAN_GYM_MOVEMENT_12:
	walk_down
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	face_left
	step_end

BARBARIAN_GYM_MOVEMENT_13:
	walk_slow_up
	walk_slow_up
	walk_slow_left
	step_end

BARBARIAN_GYM_MOVEMENT_CAMERA_RESET:
	walk_faster_up
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

BARBARIAN_GYM_NPC_1::
	lock
	faceplayer
	namebox BARBARIAN_GYM_NPC_1_Text_0
	msgbox BARBARIAN_GYM_NPC_1_Text_1
	hidenamebox
	release
	end


BARBARIAN_GYM_NPC_2::
	lock
	faceplayer
	namebox BARBARIAN_GYM_NPC_1_Text_0
	msgbox BARBARIAN_GYM_NPC_2_Text_0
	hidenamebox
	release
	end


BARBARIAN_GYM_NPC_3::
	lock
	faceplayer
	namebox BARBARIAN_GYM_NPC_1_Text_0
	msgbox BARBARIAN_GYM_NPC_3_Text_0
	hidenamebox
	release
	end


BARBARIAN_GYM_NPC_4::
	lock
	faceplayer
	namebox BARBARIAN_GYM_NPC_1_Text_0
	msgbox BARBARIAN_GYM_NPC_4_Text_0
	hidenamebox
	release
	end


BARBARIAN_GYM_NPC_5::
	lock
	faceplayer
	namebox BARBARIAN_GYM_NPC_1_Text_0
	msgbox BARBARIAN_GYM_NPC_5_Text_0
	hidenamebox
	release
	end


BARBARIAN_GYM_NPC_6::
	lock
	faceplayer
	namebox BARBARIAN_GYM_NPC_1_Text_0
	msgbox BARBARIAN_GYM_NPC_6_Text_0
	hidenamebox
	release
	end


BARBARIAN_GYM_NPC_7::
	lock
	faceplayer
	namebox BARBARIAN_GYM_NPC_1_Text_0
	msgbox BARBARIAN_GYM_NPC_7_Text_0
	hidenamebox
	release
	end


BARBARIAN_GYM_NPC_GUNTHOR::
	lock
	goto_if_unset FLAG_BADGE04_GET, BARBARIAN_GYM_NPC_GUNTHOR_2
	faceplayer
	namebox NPC_BARBGYM_BARBARIAN_2_Text_19
	msgbox BARBARIAN_GYM_NPC_GUNTHOR_Text_2
BARBARIAN_GYM_NPC_GUNTHOR_1:
	hidenamebox
	release
	end

BARBARIAN_GYM_NPC_GUNTHOR_2:
	namebox NPC_BARBGYM_BARBARIAN_2_Text_19
	msgbox BARBARIAN_GYM_NPC_GUNTHOR_Text_0
	hidenamebox
	msgbox BARBARIAN_GYM_NPC_GUNTHOR_Text_1
	goto BARBARIAN_GYM_NPC_GUNTHOR_1


BARBARIAN_GYM_NPC_ATLAS::
	lock
	faceplayer
	namebox NPC_BARBGYM_BARBARIAN_2_Text_5
	goto_if_unset FLAG_BADGE04_GET, BARBARIAN_GYM_NPC_ATLAS_2
	msgbox BARBARIAN_GYM_NPC_ATLAS_Text_1
BARBARIAN_GYM_NPC_ATLAS_1:
	hidenamebox
	release
	end

BARBARIAN_GYM_NPC_ATLAS_2:
	msgbox BARBARIAN_GYM_NPC_ATLAS_Text_0
	goto BARBARIAN_GYM_NPC_ATLAS_1


BARBARIAN_GYM_AUDIENCE_CHEER::
	playse SE_M_ENCORE2
	applymovement 8, MOVEMENT_BARBARIAN_GYM_AUDIENCE_RIGHT_UP
	applymovement 5, MOVEMENT_BARBARIAN_GYM_AUDIENCE_UP_LEFT
	waitmovement 0
	applymovement 13, MOVEMENT_BARBARIAN_GYM_AUDIENCE_LEFT_UP
	delay 10
	applymovement 9, MOVEMENT_BARBARIAN_GYM_AUDIENCE_DOWN_RIGHT
	delay 10
	applymovement 3, MOVEMENT_BARBARIAN_GYM_AUDIENCE_UP_RIGHT
	delay 10
	applymovement 4, MOVEMENT_BARBARIAN_GYM_AUDIENCE_LEFT_UP
	delay 10
	applymovement 13, MOVEMENT_BARBARIAN_GYM_AUDIENCE_LEFT_UP
	applymovement 8, MOVEMENT_BARBARIAN_GYM_AUDIENCE_RIGHT_UP
	waitmovement 0
	waitse
	return


MOVEMENT_BARBARIAN_GYM_AUDIENCE_RIGHT_UP:
	face_right
	delay_16
	face_up
	delay_16
	face_right
	delay_16
	face_up
	step_end

MOVEMENT_BARBARIAN_GYM_AUDIENCE_LEFT_UP:
	face_left
	delay_16
	face_up
	delay_16
	face_left
	delay_16
	face_up
	step_end

MOVEMENT_BARBARIAN_GYM_AUDIENCE_DOWN_LEFT:
	face_down
	delay_16
	face_left
	delay_16
	face_down
	delay_16
	face_left
	step_end

MOVEMENT_BARBARIAN_GYM_AUDIENCE_DOWN_RIGHT:
	face_down
	delay_16
	face_right
	delay_16
	face_down
	delay_16
	face_right
	step_end

MOVEMENT_BARBARIAN_GYM_AUDIENCE_UP_RIGHT:
	face_up
	delay_16
	face_right
	delay_16
	face_up
	delay_16
	face_right
	step_end

MOVEMENT_BARBARIAN_GYM_AUDIENCE_UP_LEFT:
	face_up
	delay_16
	face_left
	delay_16
	face_up
	delay_16
	face_left
	step_end

BARBARIAN_GYM_BATTLE_ATLAS::
	trainerbattle_no_intro_no_whiteout TRAINER_BARBARIAN_GYM_TRAINER_1, BARBARIAN_GYM_BATTLE_ATLAS_Text_0
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BARBARIAN_GYM_BATTLE_ATLAS_2
	return

BARBARIAN_GYM_BATTLE_ATLAS_2:
	special HealPlayerParty
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox BARBARIAN_GYM_BATTLE_ATLAS_Text_1
	closemessage
	hidenamebox
	call BARBARIAN_GYM_AUDIENCE_CHEER
	call BARBARIAN_GYM_LOST_GYM_CHALLENGE
	release
	end


BARBARIAN_GYM_BATTLE_LITARA::
	trainerbattle_no_intro_no_whiteout TRAINER_BARBARIAN_GYM_TRAINER_2, BARBARIAN_GYM_BATTLE_LITARA_Text_0
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BARBARIAN_GYM_BATTLE_LITARA_2
	return

BARBARIAN_GYM_BATTLE_LITARA_2:
	special HealPlayerParty
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox BARBARIAN_GYM_BATTLE_LITARA_Text_1
	closemessage
	hidenamebox
	call BARBARIAN_GYM_AUDIENCE_CHEER
	call BARBARIAN_GYM_LOST_GYM_CHALLENGE
	release
	end


BARBARIAN_GYM_BATTLE_HAAKON::
	trainerbattle_no_intro_no_whiteout TRAINER_BARBARIAN_GYM_TRAINER_3, BARBARIAN_GYM_BATTLE_HAAKON_Text_0
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BARBARIAN_GYM_BATTLE_HAAKON_2
	return

BARBARIAN_GYM_BATTLE_HAAKON_2:
	special HealPlayerParty
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox BARBARIAN_GYM_BATTLE_HAAKON_Text_1
	closemessage
	hidenamebox
	call BARBARIAN_GYM_AUDIENCE_CHEER
	call BARBARIAN_GYM_LOST_GYM_CHALLENGE
	release
	end


BARBARIAN_GYM_BATTLE_GUNTHOR::
	trainerbattle_no_intro_no_whiteout TRAINER_BARBARIAN_GYM_GUNTHOR, BARBARIAN_GYM_BATTLE_GUNTHOR_Text_0
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BARBARIAN_GYM_BATTLE_GUNTHOR_2
	return

BARBARIAN_GYM_BATTLE_GUNTHOR_2:
	special HealPlayerParty
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox BARBARIAN_GYM_BATTLE_GUNTHOR_Text_1
	closemessage
	hidenamebox
	call BARBARIAN_GYM_AUDIENCE_CHEER
	call BARBARIAN_GYM_LOST_GYM_CHALLENGE
	release
	end


BARBARIAN_GYM_LOST_GYM_CHALLENGE::
	namebox NPC_BARBGYM_BARBARIAN_1_Text_0
	msgbox BARBARIAN_GYM_LOST_GYM_CHALLENGE_Text_0
	closemessage
	hidenamebox
	call BARBARIAN_GYM_AUDIENCE_CHEER
	setvar VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 5
	warp MAP_BARBARIAN_VILLAGE_GYM_HALL, 4, 8
	return


NPC_BARBGYM_BARBARIAN_1_Text_0:
	.string "Haakon$"

NPC_BARBGYM_BARBARIAN_1_Text_1:
	.string "Ohoho, back for more?\p"
	.string "Let me introduce things again…$"

NPC_BARBGYM_BARBARIAN_1_Text_2:
	.string "Your battle was impressive!\p"
	.string "You are now a honorary Barbarian!\p"
	.string "You should go see Litara about\n"
	.string "accessing our Stronghold.$"

NPC_BARBGYM_BARBARIAN_1_Text_3:
	.string "Welcome to the Gym of Barbarian Village!\n"
	.string "Otherwise known as Gunnarsgrunn.\p"
	.string "Here we do things differently compared\n"
	.string "to other gyms.\p"
	.string "You must battle in three back to back\n"
	.string "to back battles without breaks before\l"
	.string "being able to challenge our Gym Leader,\l"
	.string "Gunthor.\p"
	.string "Are you ready to start your gym\n"
	.string "challenge?!$"

NPC_BARBGYM_BARBARIAN_1_Text_4:
	.string "Make your way up to the stands then\n"
	.string "brave challenger!$"

NPC_BARBGYM_BARBARIAN_1_Text_5:
	.string "Come back when you think you are ready\n"
	.string "to show us your skills.$"

NPC_BARBGYM_BARBARIAN_2_Text_0:
	.string "My brothers and sisters!\p"
	.string "Today we have a special show for you\n"
	.string "all!\p"
	.string "A challenger has decided to challenge\n"
	.string "us to an MvM Championship battle!$"

NPC_BARBGYM_BARBARIAN_2_Text_1:
	.string "I won't keep you waiting any longer.$"

NPC_BARBGYM_BARBARIAN_2_Text_2:
	.string "In this corner we have the challenger\n"
	.string "known simply as {PLAYER}!$"

NPC_BARBGYM_BARBARIAN_2_Text_3:
	.string "And in this corner it is our very own\n"
	.string "Atlas!$"

NPC_BARBGYM_BARBARIAN_2_Text_4:
	.string "Let the battles begin!$"

NPC_BARBGYM_BARBARIAN_2_Text_5:
	.string "Atlas$"

NPC_BARBGYM_BARBARIAN_2_Text_6:
	.string "Welcome to you challenger!\p"
	.string "My name is Atlas, but atlas your\n"
	.string "challenge will end as quickly as it\l"
	.string "started.$"

NPC_BARBGYM_BARBARIAN_2_Text_7:
	.string "And the winner is…{PAUSE 15}…{PAUSE 15}{PLAYER}!$"

NPC_BARBGYM_BARBARIAN_2_Text_8:
	.string "Next up we have Litara!$"

NPC_BARBGYM_BARBARIAN_2_Text_9:
	.string "Litara$"

NPC_BARBGYM_BARBARIAN_2_Text_10:
	.string "Let us make this short.\p"
	.string "I must go back out and protect the\n"
	.string "stronghold from outsiders.$"

NPC_BARBGYM_BARBARIAN_2_Text_11:
	.string "And the winner is…{PAUSE 15}…{PAUSE 15}{PLAYER}!\p"
	.string "Wow they are on fire!$"

NPC_BARBGYM_BARBARIAN_2_Text_12:
	.string "The time has come for the third and\n"
	.string "final battle before facing our\l"
	.string "Chieftain.\p"
	.string "Your challenger is no other than…{PAUSE 15}…{PAUSE 15} ME!$"

NPC_BARBGYM_BARBARIAN_2_Text_13:
	.string "Thats right my brother and sisters it is\n"
	.string "none other than me Haakon!$"

NPC_BARBGYM_BARBARIAN_2_Text_14:
	.string "HAAKON!{PAUSE 15} HAAKON!{PAUSE 15} HAAKON!$"

NPC_BARBGYM_BARBARIAN_2_Text_15:
	.string "I hope you are ready {PLAYER} since I\n"
	.string "am the second strongest of our village.$"

NPC_BARBGYM_BARBARIAN_2_Text_16:
	.string "YARRRRRGGGHHHH!$"

NPC_BARBGYM_BARBARIAN_2_Text_17:
	.string "They have done it my brother and\n"
	.string "sisters!\p"
	.string "They have bested all of us.\p"
	.string "All that remains between them and their\n"
	.string "Gym Badge is the one and only one of\l"
	.string "the strongest in all of the MvM\l"
	.string "Championships!\p"
	.string "Give it up for our Chieftain… {PAUSE 15}GUNTHOR!!!$"

NPC_BARBGYM_BARBARIAN_2_Text_18:
	.string "GGUUUUNNNTTHHHOOOORRR!!!!$"

NPC_BARBGYM_BARBARIAN_2_Text_19:
	.string "Gunthor$"

NPC_BARBGYM_BARBARIAN_2_Text_20:
	.string "RAAARRGHAHA!\p"
	.string "I have been watching your battles\n"
	.string "{PLAYER} and it has gotten me all\l"
	.string "fired up!$"

NPC_BARBGYM_BARBARIAN_2_Text_21:
	.string "Lets not waste any more time chit\n"
	.string "chatting I am itching for this fight!$"

NPC_BARBGYM_BARBARIAN_2_Text_22:
	.string "My brothers and sisters…{PAUSE 15} I cannot\n"
	.string "believe it!\p"
	.string "The winner is…{PAUSE 15}…{PAUSE 15}…{PAUSE 15}{PLAYER}!!!!!!!!$"

NPC_BARBGYM_BARBARIAN_2_Text_23:
	.string "Well done {PLAYER}, I haven't enjoyed\n"
	.string "myself in a battle like that in years!\p"
	.string "Here I would like you to have this, it is\n"
	.string "one of my favourite moves.$"

NPC_BARBGYM_BARBARIAN_2_Text_24:
	.string "And of course we cannot forget this,\n"
	.string "the main reason you are here today.\p"
	.string "Here you go {PLAYER} I proudly award\n"
	.string "you this Gym Badge and also hereby\l"
	.string "declare you an honorary Barbarian!$"

NPC_BARBGYM_BARBARIAN_2_Text_25:
	.string "{PLAYER} received the Barbarian\n"
	.string "BADGE from Gunthor the Brave.$"

NPC_BARBGYM_BARBARIAN_2_Text_26:
	.string "Thank you all for coming today to see a\n"
	.string "champ in the making!\p"
	.string "Until next time!$"

BARBARIAN_GYM_NPC_1_Text_0:
	.string "Barbarian$"

BARBARIAN_GYM_NPC_1_Text_1:
	.string "Give your monster a Beer and watch as\n"
	.string "it boosts the PP of moves.$"

BARBARIAN_GYM_NPC_2_Text_0:
	.string "The way you battle is cool!$"

BARBARIAN_GYM_NPC_3_Text_0:
	.string "There are many strong monsters in our\n"
	.string "Stronghold.$"

BARBARIAN_GYM_NPC_4_Text_0:
	.string "There is a rumour of a fierce rainbow\n"
	.string "treasure deep within our Stronghold.\p"
	.string "I have no idea what it could be though.$"

BARBARIAN_GYM_NPC_5_Text_0:
	.string "While us Barbarians do not condone the\n"
	.string "use of Runes.\p"
	.string "It can be argued whether they are\n"
	.string "allowed to evolve our monsters.$"

BARBARIAN_GYM_NPC_6_Text_0:
	.string "YEEEEEEEEAARRRGGGGHHHHHHHH!!!!\p"
	.string "The move Brutal Swing is pretty brutal!$"

BARBARIAN_GYM_NPC_7_Text_0:
	.string "I can only make it to the 2nd level of\n"
	.string "the stronghold.$"

BARBARIAN_GYM_NPC_GUNTHOR_Text_0:
	.string "RAAAGGGGGUUHHAHAHAHA!!$"

BARBARIAN_GYM_NPC_GUNTHOR_Text_1:
	.string "He seems to be enjoying shouting\n"
	.string "warcries with the other barbarians.$"

BARBARIAN_GYM_NPC_GUNTHOR_Text_2:
	.string "RAAAGGGGGUUHH!\p"
	.string "Hello {PLAYER}, I await our rematch!\p"
	.string "But now is too soon.\p"
	.string "I expect you to be stronger when next\n"
	.string "week battle.$"

BARBARIAN_GYM_NPC_ATLAS_Text_0:
	.string "Bahahahaha! Looks like we have another\n"
	.string "challenger.$"

BARBARIAN_GYM_NPC_ATLAS_Text_1:
	.string "If you are up for a challenge you should\n"
	.string "enter our stronghold.$"

BARBARIAN_GYM_BATTLE_ATLAS_Text_0:
	.string "Well done but it is still too early to\n"
	.string "celebrate there still remains three\l"
	.string "more battles.$"

BARBARIAN_GYM_BATTLE_ATLAS_Text_1:
	.string "And the winner is…{PAUSE 15}…{PAUSE 15}ATLAS!$"

BARBARIAN_GYM_BATTLE_LITARA_Text_0:
	.string "If you win this I may allow you access\n"
	.string "to our stronghold.$"

BARBARIAN_GYM_BATTLE_LITARA_Text_1:
	.string "And the winner is…{PAUSE 15}…{PAUSE 15}LITARA!$"

BARBARIAN_GYM_BATTLE_HAAKON_Text_0:
	.string "ARRGHH-HAHAHA!$"

BARBARIAN_GYM_BATTLE_HAAKON_Text_1:
	.string "And the winner is…{PAUSE 15}…{PAUSE 15}HAAKON!$"

BARBARIAN_GYM_BATTLE_GUNTHOR_Text_0:
	.string "ARAGGHHHARH!\p"
	.string "Battles like this is what I live for and\n"
	.string "why I decided to become a Gym Leader!$"

BARBARIAN_GYM_BATTLE_GUNTHOR_Text_1:
	.string "And the winner is…{PAUSE 15}…{PAUSE 15}OUR CHAMPION\n"
	.string "GUNTHOR!!!$"

BARBARIAN_GYM_LOST_GYM_CHALLENGE_Text_0:
	.string "Which means {PLAYER} is defeated and\n"
	.string "gym challenge is over!\p"
	.string "Thank you for watching my brothers and\n"
	.string "sisters!\p"
	.string "May we continue to stand victorious!$"
