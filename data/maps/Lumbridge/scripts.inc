Lumbridge_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Lumbridge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_LUMBRIDGE
	setvar VAR_EVOLUTION_MAP_STATE, 1
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_LUMBRIDGE
	return

Lumbridge_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call STORYMODE_STATE_LUMBRIDGE
	return

Lumbridge_MapScripts_MAP_SCRIPT_ON_LOAD:
	call LUMBRIDGE_STATE
	return


LUMBRIDGE_STATE::
	removeobject 33
	setflag FLAG_TEMP_1F
	goto_if_unset FLAG_A_NUB_TOT_TUTORIAL, LUMBRIDGE_STATE_2
LUMBRIDGE_STATE_1:
	return

LUMBRIDGE_STATE_2:
	setmetatile 18, 8, METATILE_PokeScapeOutdoors_NOT_A_DOOR, 1
	special DrawWholeMapView
	goto LUMBRIDGE_STATE_1


OPENWORLD_STATE_LUMBRIDGE::
	setobjectxyperm 14, 43, 20
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 23, 40, 4
	setobjectmovementtype 23, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 3, 13, 7
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm 13, 12, 7
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 21, 35, 11
	setobjectmovementtype 21, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 11, 52, 21
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 12, 39, 33
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 1, 8, 12
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 2, 8, 13
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


STORYMODE_STATE_LUMBRIDGE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq STORYMODE_STATE_LUMBRIDGE_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 5
	goto_if_eq STORYMODE_STATE_LUMBRIDGE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 10
	goto_if_eq STORYMODE_STATE_LUMBRIDGE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 15
	goto_if_ge STORYMODE_STATE_LUMBRIDGE_10
	return

STORYMODE_STATE_LUMBRIDGE_2:
	setobjectxyperm 22, 35, 33
	setobjectmovementtype 22, MOVEMENT_TYPE_LOOK_AROUND
	return

STORYMODE_STATE_LUMBRIDGE_5:
	setobjectxyperm 14, 41, 20
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 23, 40, 4
	setobjectmovementtype 23, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 3, 13, 7
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm 13, 12, 7
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 21, 35, 11
	setobjectmovementtype 21, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 11, 52, 21
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 1, 8, 12
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 2, 8, 13
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return

STORYMODE_STATE_LUMBRIDGE_10:
	setobjectxyperm 14, 43, 20
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 23, 40, 4
	setobjectmovementtype 23, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 3, 13, 7
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm 13, 12, 7
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 21, 35, 11
	setobjectmovementtype 21, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 11, 52, 21
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 12, 39, 33
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 1, 8, 12
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 2, 8, 13
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


CUPHOLDER_NPC::
	lock
	faceplayer
	msgbox CUPHOLDER_NPC_Text_0
	release
	end


LOCKED_DOOR::
	lock
	msgbox LOCKED_DOOR_Text_0
	release
	end


COOKING_RANGE::
	lock
	faceplayer
	msgbox COOKING_RANGE_Text_0
	release
	end


Lumbridge_SIGN::
	lock
	faceplayer
	msgbox Lumbridge_SIGN_Text_0
	release
	end


Lumbridge_Phileas::
	lock
	faceplayer
	namebox Lumbridge_Phileas_Text_0
	checkitem ITEM_TM61_PAY_DAY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Lumbridge_Phileas_2
	msgbox Lumbridge_Phileas_Text_4
	release
	end

Lumbridge_Phileas_2:
	msgbox Lumbridge_Phileas_Text_1
	msgbox Lumbridge_Phileas_Text_2
	hidenamebox
	giveitem ITEM_TM61_PAY_DAY, 1
	namebox Lumbridge_Phileas_Text_0
	msgbox Lumbridge_Phileas_Text_3
	release
	end


NPC_SARAOWL::
	lock
	faceplayer
	namebox NPC_SARAOWL_Text_0
	playmoncry SPECIES_SARAOWL, 0
	msgbox NPC_SARAOWL_Text_1
	waitmoncry
	applymovement 9, MOVEMENT_FACE_RIGHT
	namebox Lumbridge_Phileas_Text_0
	msgbox NPC_SARAOWL_Text_2
	release
	end


Lumbridge_GENERALSTORE_CLERK::
	lock
	faceplayer
	namebox Lumbridge_GENERALSTORE_CLERK_Text_0
	msgbox Lumbridge_GENERALSTORE_CLERK_Text_1
	hidenamebox
	closemessage
	release
	end


Lumbridge_FAYETH::
	lock
	faceplayer
	namebox Lumbridge_FAYETH_Text_0
	msgbox Lumbridge_FAYETH_Text_1
	hidenamebox
	release
	end


Lumbridge_BOT::
	msgbox Lumbridge_BOT_Text_0
	release
	end


Lumbridge_DONIE::
	lock
	faceplayer
	namebox Lumbridge_DONIE_Text_0
	msgbox Lumbridge_DONIE_Text_1
	hidenamebox
	release
	end


Lumbridge_HATIUS::
	lock
	faceplayer
	namebox Lumbridge_HATIUS_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_HATIUS_4
Lumbridge_HATIUS_3:
	msgbox Lumbridge_HATIUS_Text_2
Lumbridge_HATIUS_1:
	hidenamebox
	closemessage
	release
	end

Lumbridge_HATIUS_2:
	msgbox Lumbridge_HATIUS_Text_1
	goto Lumbridge_HATIUS_1

Lumbridge_HATIUS_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_HATIUS_2
	goto Lumbridge_HATIUS_3


Lumbridge_LACHTOPHER::
	checkmoney 200, 0
	compare VAR_RESULT, TRUE
	goto_if_eq Lumbridge_LACHTOPHER_2
	lock
	faceplayer
	namebox Lumbridge_LACHTOPHER_Text_0
	msgbox Lumbridge_LACHTOPHER_Text_2
	addmoney 200, 0
	hidenamebox
	release
	end

	release
	end

Lumbridge_LACHTOPHER_2:
	lock
	faceplayer
	namebox Lumbridge_LACHTOPHER_Text_0
	msgbox Lumbridge_LACHTOPHER_Text_1
	hidenamebox
	release
	end


Lumbridge_DOOMSAYER::
	lock
	faceplayer
	namebox Lumbridge_DOOMSAYER_Text_0
	msgbox Lumbridge_DOOMSAYER_Text_1
	hidenamebox
	release
	end


Lumbridge_IRONMAN_PAUL::
	lock
	faceplayer
	namebox Lumbridge_IRONMAN_PAUL_Text_0
	msgbox Lumbridge_IRONMAN_PAUL_Text_1
	hidenamebox
	release
	end


Lumbridge_IMP::
	lock
	faceplayer
	msgbox Lumbridge_IMP_Text_0
	release
	end


Lumbridge_BANKER::
	lock
	faceplayer
	namebox Lumbridge_BANKER_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_BANKER_4
Lumbridge_BANKER_3:
	msgbox Lumbridge_BANKER_Text_2
	applymovement 3, MOVEMENT_LUMBRIDGE_BANKER_FEMALE
	waitmovement 0
Lumbridge_BANKER_1:
	release
	end

Lumbridge_BANKER_2:
	msgbox Lumbridge_BANKER_Text_1
	goto Lumbridge_BANKER_1

Lumbridge_BANKER_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_BANKER_2
	goto Lumbridge_BANKER_3


MOVEMENT_LUMBRIDGE_BANKER_FEMALE:
	face_left
	step_end

Lumbridge_EVENT_NPC1::
	lock
	faceplayer
	namebox Lumbridge_EVENT_NPC1_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_EVENT_NPC1_4
Lumbridge_EVENT_NPC1_3:
	msgbox Lumbridge_EVENT_NPC1_Text_2
Lumbridge_EVENT_NPC1_1:
	release
	end

Lumbridge_EVENT_NPC1_2:
	msgbox Lumbridge_EVENT_NPC1_Text_1
	goto Lumbridge_EVENT_NPC1_1

Lumbridge_EVENT_NPC1_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_EVENT_NPC1_2
	goto Lumbridge_EVENT_NPC1_3


Lumbridge_EVENT_NPC2::
	lock
	faceplayer
	namebox Lumbridge_EVENT_NPC2_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_EVENT_NPC2_4
Lumbridge_EVENT_NPC2_3:
	msgbox Lumbridge_EVENT_NPC2_Text_2
Lumbridge_EVENT_NPC2_1:
	release
	end

Lumbridge_EVENT_NPC2_2:
	msgbox Lumbridge_EVENT_NPC2_Text_1
	goto Lumbridge_EVENT_NPC2_1

Lumbridge_EVENT_NPC2_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_EVENT_NPC2_2
	goto Lumbridge_EVENT_NPC2_3


Lumbridge_EVENT_NPC3::
	lock
	faceplayer
	namebox Lumbridge_EVENT_NPC3_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_EVENT_NPC3_4
Lumbridge_EVENT_NPC3_3:
	msgbox Lumbridge_EVENT_NPC3_Text_2
Lumbridge_EVENT_NPC3_1:
	release
	end

Lumbridge_EVENT_NPC3_2:
	msgbox Lumbridge_EVENT_NPC3_Text_1
	goto Lumbridge_EVENT_NPC3_1

Lumbridge_EVENT_NPC3_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_EVENT_NPC3_2
	goto Lumbridge_EVENT_NPC3_3


NPC_LumbridgeBridge::
	lock
	faceplayer
	namebox Lumbridge_EVENT_NPC1_Text_0
	msgbox NPC_LumbridgeBridge_Text_0
	release
	end


Lumbridge_Guard_NORTH::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Guard_NORTH_3
Lumbridge_Guard_NORTH_1:
	lock
	faceplayer
	namebox Lumbridge_Guard_NORTH_Text_0
	msgbox Lumbridge_Guard_NORTH_Text_2
	hidenamebox
	applymovement 13, MOVEMENT_LUMBRIDGE_GUARD_NORTH
	waitmovement 0
	release
	end

Lumbridge_Guard_NORTH_2:
	lock
	faceplayer
	namebox Lumbridge_Guard_NORTH_Text_0
	msgbox Lumbridge_Guard_NORTH_Text_1
	hidenamebox
	release
	end

Lumbridge_Guard_NORTH_3:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Guard_NORTH_2
	goto Lumbridge_Guard_NORTH_1


MOVEMENT_LUMBRIDGE_GUARD_NORTH:
	face_right
	step_end

Lumbridge_Guard_EAST::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Guard_EAST_3
Lumbridge_Guard_EAST_1:
	lock
	faceplayer
	namebox Lumbridge_Guard_EAST_Text_0
	msgbox Lumbridge_Guard_EAST_Text_1
	hidenamebox
	release
	end

Lumbridge_Guard_EAST_2:
	lock
	faceplayer
	namebox Lumbridge_Guard_EAST_Text_0
	msgbox Lumbridge_Guard_NORTH_Text_1
	hidenamebox
	release
	end

Lumbridge_Guard_EAST_3:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Guard_EAST_2
	goto Lumbridge_Guard_EAST_1


Lumbridge_Guard_SOUTH::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Guard_SOUTH_3
Lumbridge_Guard_SOUTH_2:
	lock
	faceplayer
	namebox Lumbridge_Guard_SOUTH_Text_0
	msgbox Lumbridge_Guard_SOUTH_Text_2
	hidenamebox
	release
	end

Lumbridge_Guard_SOUTH_1:
	lock
	faceplayer
	namebox Lumbridge_Guard_SOUTH_Text_0
	msgbox Lumbridge_Guard_SOUTH_Text_1
	hidenamebox
	release
	end

Lumbridge_Guard_SOUTH_3:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 10
	goto_if_le Lumbridge_Guard_SOUTH_1
	goto Lumbridge_Guard_SOUTH_2


Lumbridge_Guard_NORTH_TRIGGER::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Guard_NORTH_TRIGGER_3
Lumbridge_Guard_NORTH_TRIGGER_1:
	release
	end

Lumbridge_Guard_NORTH_TRIGGER_2:
	lock
	PlaySE SE_PIN
	applymovement 13, LUMBRIDGE_GUARD_NORTH_TRIGGER_1
	waitmovement 0
	namebox Lumbridge_Guard_NORTH_Text_0
	msgbox Lumbridge_Guard_NORTH_Text_1
	waitmessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, LUMBRIDGE_PLAYER_NORTH_TRIGGER
	applymovement 13, LUMBRIDGE_GUARD_NORTH_TRIGGER_2
	waitmovement 0
	release
	end

Lumbridge_Guard_NORTH_TRIGGER_3:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Guard_NORTH_TRIGGER_2
	goto Lumbridge_Guard_NORTH_TRIGGER_1


LUMBRIDGE_GUARD_NORTH_TRIGGER_1:
	emote_exclamation_mark
	face_player
	step_end

LUMBRIDGE_PLAYER_NORTH_TRIGGER:
	walk_down
	step_end

LUMBRIDGE_GUARD_NORTH_TRIGGER_2:
	face_down
	step_end

Lumbridge_Guard_EAST_TRIGGER::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Guard_EAST_TRIGGER_3
Lumbridge_Guard_EAST_TRIGGER_1:
	release
	end

Lumbridge_Guard_EAST_TRIGGER_2:
	lock
	PlaySE SE_PIN
	applymovement 14, LUMBRIDGE_GUARD_EAST_TRIGGER_1
	waitmovement 0
	namebox Lumbridge_Guard_EAST_Text_0
	msgbox Lumbridge_Guard_NORTH_Text_1
	waitmessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, LUMBRIDGE_PLAYER_EAST_TRIGGER
	applymovement 14, LUMBRIDGE_GUARD_EAST_TRIGGER_2
	waitmovement 0
	release
	end

Lumbridge_Guard_EAST_TRIGGER_3:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Guard_EAST_TRIGGER_2
	goto Lumbridge_Guard_EAST_TRIGGER_1


LUMBRIDGE_GUARD_EAST_TRIGGER_1:
	emote_exclamation_mark
	face_player
	step_end

LUMBRIDGE_PLAYER_EAST_TRIGGER:
	walk_left
	step_end

LUMBRIDGE_GUARD_EAST_TRIGGER_2:
	face_left
	step_end

Lumbridge_Guard_SOUTH_TRIGGER::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Guard_SOUTH_TRIGGER_3
Lumbridge_Guard_SOUTH_TRIGGER_2:
	release
	end

Lumbridge_Guard_SOUTH_TRIGGER_1:
	lock
	PlaySE SE_PIN
	applymovement 12, LUMBRIDGE_GUARD_SOUTH_TRIGGER_1
	waitmovement 0
	namebox Lumbridge_Guard_SOUTH_Text_0
	msgbox Lumbridge_Guard_SOUTH_Text_1
	waitmessage
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LUMBRIDGE_PLAYER_SOUTH_TRIGGER
	applymovement 12, LUMBRIDGE_GUARD_SOUTH_TRIGGER_2
	waitmovement 0
	release
	end

Lumbridge_Guard_SOUTH_TRIGGER_3:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 10
	goto_if_le Lumbridge_Guard_SOUTH_TRIGGER_1
	goto Lumbridge_Guard_SOUTH_TRIGGER_2


LUMBRIDGE_GUARD_SOUTH_TRIGGER_1:
	emote_exclamation_mark
	face_player
	step_end

LUMBRIDGE_PLAYER_SOUTH_TRIGGER:
	walk_up
	step_end

LUMBRIDGE_GUARD_SOUTH_TRIGGER_2:
	face_left
	step_end

Lumbridge_Hatius_TRIGGER::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Hatius_TRIGGER_3
Lumbridge_Hatius_TRIGGER_2:
	release
	end

Lumbridge_Hatius_TRIGGER_1:
	lock
	PlaySE SE_PIN
	applymovement 22, LUMBRIDGE_HATIUS_GRAVE_TRIGGER_1
	waitmovement 0
	namebox Lumbridge_HATIUS_Text_0
	msgbox Lumbridge_Hatius_TRIGGER_Text_0
	waitmessage
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LUMBRIDGE_PLAYER_GRAVE_TRIGGER
	applymovement 22, LUMBRIDGE_HATIUS_GRAVE_TRIGGER_2
	waitmovement 0
	release
	end

Lumbridge_Hatius_TRIGGER_3:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	goto_if_eq Lumbridge_Hatius_TRIGGER_1
	goto Lumbridge_Hatius_TRIGGER_2


LUMBRIDGE_HATIUS_GRAVE_TRIGGER_1:
	walk_down
	face_right
	emote_exclamation_mark
	step_end

LUMBRIDGE_PLAYER_GRAVE_TRIGGER:
	walk_left
	step_end

LUMBRIDGE_HATIUS_GRAVE_TRIGGER_2:
	face_up
	walk_up
	step_end

Lumbridge_House_NPC1::
	lock
	faceplayer
	namebox Lumbridge_House_NPC1_Text_0
	msgbox Lumbridge_House_NPC1_Text_1
	release
	end


Lumbridge_GeneralStore_NPC1::
	lock
	faceplayer
	namebox Lumbridge_GeneralStore_NPC1_Text_0
	msgbox Lumbridge_GeneralStore_NPC1_Text_1
	release
	end


Lumbridge_GeneralStore_NPC2::
	lock
	faceplayer
	namebox Lumbridge_GeneralStore_NPC2_Text_0
	msgbox Lumbridge_GeneralStore_NPC2_Text_1
	release
	end


Lumbridge_House_BobsAxes::
	lock
	faceplayer
	namebox Lumbridge_House_BobsAxes_Text_0
	msgbox Lumbridge_House_BobsAxes_Text_1
	multichoicedefault 1, 0, MULTI_AXES, 0, 0
	switch VAR_RESULT
	case 0, Lumbridge_House_BobsAxes_3
	case 1, Lumbridge_House_BobsAxes_4
Lumbridge_House_BobsAxes_1:
	closemessage
	hidenamebox
	release
	end

Lumbridge_House_BobsAxes_3:
	msgbox Lumbridge_House_BobsAxes_Text_2
	goto Lumbridge_House_BobsAxes_1

Lumbridge_House_BobsAxes_4:
	msgbox Lumbridge_House_BobsAxes_Text_3
	goto Lumbridge_House_BobsAxes_1


Lumbridge_House_BobsGirl::
	lock
	faceplayer
	namebox Lumbridge_House_BobsGirl_Text_0
	msgbox Lumbridge_House_BobsGirl_Text_1
	release
	end


Lumbridge_House_Victoria::
	lock
	faceplayer
	namebox Lumbridge_House_Victoria_Text_0
	msgbox Lumbridge_House_Victoria_Text_1
	hidenamebox
	release
	end


Lumbridge_House_NPC3::
	lock
	faceplayer
	namebox Lumbridge_House_BobsGirl_Text_0
	msgbox Lumbridge_House_NPC3_Text_0
	release
	end


Lumbridge_House_NPC4::
	lock
	faceplayer
	namebox Lumbridge_House_BobsGirl_Text_0
	msgbox Lumbridge_House_NPC4_Text_0
	release
	end


Lumbridge_House_NPC5::
	lock
	faceplayer
	msgbox Lumbridge_House_NPC5_Text_0
	release
	end


Lumbridge_House_NPC6::
	lock
	faceplayer
	msgbox Lumbridge_House_NPC6_Text_0
	release
	end


Lumbridge_GeneralStore_MOD_ASH::
	lock
	faceplayer
	namebox Lumbridge_GeneralStore_MOD_ASH_Text_0
	goto_if_unset FLAG_TEMP_1, Lumbridge_GeneralStore_MOD_ASH_2
	msgbox Lumbridge_GeneralStore_MOD_ASH_Text_4
	hidenamebox
	release
	end

Lumbridge_GeneralStore_MOD_ASH_2:
	msgbox Lumbridge_GeneralStore_MOD_ASH_Text_1
	special ChoosePartyMon
	waitstate
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_ROC
	goto_if_eq Lumbridge_GeneralStore_MOD_ASH_4
	msgbox Lumbridge_GeneralStore_MOD_ASH_Text_3
	release
	hidenamebox
	end

Lumbridge_GeneralStore_MOD_ASH_4:
	msgbox Lumbridge_GeneralStore_MOD_ASH_Text_2
	hidenamebox
	giveitem ITEM_EMPTY_BUCKET
	setflag FLAG_TEMP_1
	release
	hidenamebox
	end


Lumbridge_GeneralStore_FANFIC::
	lock
	faceplayer
	msgbox Lumbridge_GeneralStore_FANFIC_Text_0
	release
	end


Lumbridge_House_Roddeck::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 0
	goto_if_ne Lumbridge_House_Roddeck_2
	lock
	faceplayer
	namebox Lumbridge_House_Roddeck_Text_0
	msgbox Lumbridge_House_Roddeck_Text_6
	hidenamebox
Lumbridge_House_Roddeck_1:
	release
	end

Lumbridge_House_Roddeck_2:
	lock
	faceplayer
	namebox Lumbridge_House_Roddeck_Text_0
	goto_if_unset FLAG_LUMBRIDGE_TRADE_1, Lumbridge_House_Roddeck_6
	msgbox Lumbridge_House_Roddeck_Text_5
Lumbridge_House_Roddeck_5:
	hidenamebox
	goto Lumbridge_House_Roddeck_1

Lumbridge_House_Roddeck_6:
	setvar VAR_0x8008, INGAME_TRADE_RED_DRAGON
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox Lumbridge_House_Roddeck_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Lumbridge_House_Roddeck_9
	msgbox Lumbridge_House_Roddeck_Text_4
	goto Lumbridge_House_Roddeck_5

Lumbridge_House_Roddeck_9:
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_ne Lumbridge_House_Roddeck_12
	goto Lumbridge_House_Roddeck_5

Lumbridge_House_Roddeck_12:
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq Lumbridge_House_Roddeck_14
	msgbox Lumbridge_House_Roddeck_Text_3
	goto Lumbridge_House_Roddeck_5

Lumbridge_House_Roddeck_14:
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox Lumbridge_House_Roddeck_Text_2
	setflag FLAG_LUMBRIDGE_TRADE_1
	goto Lumbridge_House_Roddeck_5


Lumbridge_HAMDuo_1::
	lock
	faceplayer
	msgbox Lumbridge_HAMDuo_1_Text_0
	faceplayer
	msgbox Lumbridge_HAMDuo_1_Text_1
	release
	end


Lumbridge_HAMDuo_2::
	lock
	msgbox Lumbridge_HAMDuo_2_Text_0
	release
	end


A_NUB_TOT_LOCKED_DOOR_TUTORIAL::
	goto_if_unset FLAG_A_NUB_TOT_TUTORIAL, A_NUB_TOT_LOCKED_DOOR_TUTORIAL_2
A_NUB_TOT_LOCKED_DOOR_TUTORIAL_1:
	end

A_NUB_TOT_LOCKED_DOOR_TUTORIAL_2:
	lockall
	setmetatile 18, 8, METATILE_PokeScapeOutdoors_Door_General_R, 1
	special DrawWholeMapView
	delay 10
	playse SE_DOOR
	opendoor 18, 8
	applymovement OBJ_EVENT_ID_PLAYER, ANUBTOT_1
	waitmovement 0
	addobject 33
	clearflag FLAG_TEMP_1F
	applymovement 33, ANUBTOT_2
	waitmovement 0
	delay 10
	closedoor 18, 8
	playbgm MUS_PS_WISE_OLD_MAN_THEME, 1
	namebox A_NUB_TOT_LOCKED_DOOR_TUTORIAL_Text_0
	msgbox A_NUB_TOT_LOCKED_DOOR_TUTORIAL_Text_1
	closemessage
	applymovement 33, ANUBTOT_3
	waitmovement 0
	fadedefaultbgm
	setflag FLAG_A_NUB_TOT_TUTORIAL
	removeobject 33
	setflag FLAG_TEMP_1F
	release
	goto A_NUB_TOT_LOCKED_DOOR_TUTORIAL_1


ANUBTOT_1:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

ANUBTOT_2:
	walk_down
	step_end

ANUBTOT_3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CUPHOLDER_NPC_Text_0:
	.string "I am currently a Cupholder with no\n"
	.string "dialog.$"

LOCKED_DOOR_Text_0:
	.string "It is securely locked.$"

COOKING_RANGE_Text_0:
	.string "Ideal for cooking on.$"

Lumbridge_SIGN_Text_0:
	.string "Welcome to Lumbridge.\p"
	.string "Home of the River Lum.$"

Lumbridge_Phileas_Text_0:
	.string "Phileas$"

Lumbridge_Phileas_Text_1:
	.string "Do you know about SCROLLS?\p"
	.string "SCROLLS allow you to teach your\n"
	.string "monsters unqiue moves that they can\l"
	.string "otherwise not learn!$"

Lumbridge_Phileas_Text_2:
	.string "Here, take this as a gift.$"

Lumbridge_Phileas_Text_3:
	.string "That SCROLL contains the move PayDay!\p"
	.string "It's a great way for noobs like yourself\n"
	.string "to make some money.$"

Lumbridge_Phileas_Text_4:
	.string "SCROLLS can be very useful, don't you\n"
	.string "agree?$"

NPC_SARAOWL_Text_0:
	.string "Saraowl$"

NPC_SARAOWL_Text_1:
	.string "Hoo Hoo!$"

NPC_SARAOWL_Text_2:
	.string "That's my Saraowl, she keeps me company\n"
	.string "on my travels.$"

Lumbridge_GENERALSTORE_CLERK_Text_0:
	.string "Assistant$"

Lumbridge_GENERALSTORE_CLERK_Text_1:
	.string "Hello there and welcome to the General\n"
	.string "Store.\p"
	.string "What is the General Store you ask?\p"
	.string "You did not ask?\p"
	.string "Well, I will tell you anyway because I\n"
	.string "like your face!\p"
	.string "The general store is where we sell items\n"
	.string "TO YOU for a small insignificant fee.\p"
	.string "You are about to go on an adventure?\p"
	.string "Well you better get to the General\n"
	.string "Store to buy Buckets and other items\l"
	.string "that will help you out!\p"
	.string "At the General Store!$"

Lumbridge_FAYETH_Text_0:
	.string "Fayeth$"

Lumbridge_FAYETH_Text_1:
	.string "You should keep in mind you can only\n"
	.string "capture a monster when their health is\l"
	.string "above zero.$"

Lumbridge_BOT_Text_0:
	.string "…\p"
	.string "…\p"
	.string "…\p"
	.string "…\p"
	.string "There is no response.$"

Lumbridge_DONIE_Text_0:
	.string "Donie$"

Lumbridge_DONIE_Text_1:
	.string "It is always good to talk to people,\n"
	.string "even if they do not give you anything.\p"
	.string "They might give you vital information\n"
	.string "for your adventure.$"

Lumbridge_HATIUS_Text_0:
	.string "Hatius$"

Lumbridge_HATIUS_Text_1:
	.string "Professor Normal Tree is visiting\n"
	.string "Lumbridge!\p"
	.string "You better head to the castle before\n"
	.string "you miss him!$"

Lumbridge_HATIUS_Text_2:
	.string "I saw a gang of thieves north of the\n"
	.string "town earlier.\p"
	.string "I hope they don't mug me.$"

Lumbridge_LACHTOPHER_Text_0:
	.string "Lachtopher$"

Lumbridge_LACHTOPHER_Text_1:
	.string "Free st00f pl0x!$"

Lumbridge_LACHTOPHER_Text_2:
	.string "Wow!\p"
	.string "You're even more broke than me!\p"
	.string "Here's some money noob.$"

Lumbridge_DOOMSAYER_Text_0:
	.string "Doomsayer$"

Lumbridge_DOOMSAYER_Text_1:
	.string "DOOOOOOOM!\p"
	.string "I can sense it on you!\p"
	.string "You have a terrible doom in your future!$"

Lumbridge_IRONMAN_PAUL_Text_0:
	.string "Paul$"

Lumbridge_IRONMAN_PAUL_Text_1:
	.string "My friend Adam is currently on Tutorial\n"
	.string "Island.\p"
	.string "I wonder when he'll come home.$"

Lumbridge_IMP_Text_0:
	.string "-CUPHOLDER-\p"
	.string "-IMP CATCHER QUEST-$"

Lumbridge_BANKER_Text_0:
	.string "Banker$"

Lumbridge_BANKER_Text_1:
	.string "I'm waiting for my BF to finish work.$"

Lumbridge_BANKER_Text_2:
	.string "A few years ago we were in a bidding war\n"
	.string "with a fisherman.\p"
	.string "He wanted to put a fishing shop here\n"
	.string "instead of a bank.\p"
	.string "We polled it to the community and we won\n"
	.string "by 75% of votes.$"

Lumbridge_EVENT_NPC1_Text_0:
	.string "Fisherman$"

Lumbridge_EVENT_NPC1_Text_1:
	.string "Woowee!\p"
	.string "So this is Lumbridge Castle.\p"
	.string "I'm too afraid to walk through the\n"
	.string "gates.$"

Lumbridge_EVENT_NPC1_Text_2:
	.string "I've come all the way from Catherby.\p"
	.string "I've always wanted to check out what\n"
	.string "sort of fish can be caught in the River\l"
	.string "Lum.$"

Lumbridge_EVENT_NPC2_Text_0:
	.string "Farmer$"

Lumbridge_EVENT_NPC2_Text_1:
	.string "I really want to meet this professor\n"
	.string "guy!$"

Lumbridge_EVENT_NPC2_Text_2:
	.string "I caught myself an Impling!\p"
	.string "I found it in the wheat fields north of\n"
	.string "here.$"

Lumbridge_EVENT_NPC3_Text_0:
	.string "Man$"

Lumbridge_EVENT_NPC3_Text_1:
	.string "I'm interested in the MvM\n"
	.string "Championships!$"

Lumbridge_EVENT_NPC3_Text_2:
	.string "Newcomer map?\p"
	.string "Pfft, I've got myself a World map!\p"
	.string "And no, you cannot have it.$"

NPC_LumbridgeBridge_Text_0:
	.string "Is it just me or is this really long?\p"
	.string "Nah I must be imagining it.$"

Lumbridge_Guard_NORTH_Text_0:
	.string "Pazel$"

Lumbridge_Guard_NORTH_Text_1:
	.string "I'm sorry, but it's really dangerous out\n"
	.string "there for anyone who isn't an\l"
	.string "adventurer.$"

Lumbridge_Guard_NORTH_Text_2:
	.string "Please don't bother me while I'm on my\n"
	.string "break.$"

Lumbridge_Guard_EAST_Text_0:
	.string "DeShawn$"

Lumbridge_Guard_EAST_Text_1:
	.string "Be careful, there are a lot of goblins\n"
	.string "across the bridge.$"

Lumbridge_Guard_SOUTH_Text_0:
	.string "Peale$"

Lumbridge_Guard_SOUTH_Text_1:
	.string "I'm sorry, but it's really dangerous out\n"
	.string "there for anyone who isn't a strong\l"
	.string "adventurer.\p"
	.string "If you could show me a badge from the\n"
	.string "Duke I will then allow you to pass.$"

Lumbridge_Guard_SOUTH_Text_2:
	.string "It's quite dangerous even with a\n"
	.string "monster to protect you.\p"
	.string "So be careful.$"

Lumbridge_Hatius_TRIGGER_Text_0:
	.string "Did you not hear?\p"
	.string "Professor Normal Tree is visiting\n"
	.string "Lumbridge!\p"
	.string "You better head to the castle before\n"
	.string "you miss him!$"

Lumbridge_House_NPC1_Text_0:
	.string "Dwarf$"

Lumbridge_House_NPC1_Text_1:
	.string "The forge broke, so I've requested\n"
	.string "someone from Falador to fix it.$"

Lumbridge_GeneralStore_NPC1_Text_0:
	.string "SpAc3BaR3R$"

Lumbridge_GeneralStore_NPC1_Text_1:
	.string "It is better to have more pouches than\n"
	.string "less.\p"
	.string "If you are on a long trip you might need\n"
	.string "them.$"

Lumbridge_GeneralStore_NPC2_Text_0:
	.string "H1PYRaNG3r59$"

Lumbridge_GeneralStore_NPC2_Text_1:
	.string "There are a lot of goblins around these\n"
	.string "parts, you might want to stock up on\l"
	.string "some antipoisons.\p"
	.string "This will prepare you for the worst.$"

Lumbridge_House_BobsAxes_Text_0:
	.string "Bob$"

Lumbridge_House_BobsAxes_Text_1:
	.string "Welcome to Bob's Brilliant Axes.\p"
	.string "My name is Bob, how may I be of\n"
	.string "assistance?$"

Lumbridge_House_BobsAxes_Text_2:
	.string "Hmm, a Pickaxe you say?\p"
	.string "Sorry but I don't sell those here, I only\n"
	.string "fix them.\p"
	.string "If you want a pickaxe you should see\n"
	.string "the Dwarves up in the Dwarven Mines\l"
	.string "near Falador.$"

Lumbridge_House_BobsAxes_Text_3:
	.string "An Axe?\p"
	.string "Normally I could help you with that but\n"
	.string "I am still waiting for my shipment to\l"
	.string "arrive.\p"
	.string "It is quite late I hope nothing bad\n"
	.string "happened to it.$"

Lumbridge_House_BobsGirl_Text_0:
	.string "Woman$"

Lumbridge_House_BobsGirl_Text_1:
	.string "Hey, are you the contractor we hired to\n"
	.string "fix our bed?\p"
	.string "…{PAUSE 32}\l"
	.string "No?\p"
	.string "Why are you in our house?$"

Lumbridge_House_Victoria_Text_0:
	.string "Victoria$"

Lumbridge_House_Victoria_Text_1:
	.string "Please don't give my brother,\n"
	.string "Lachtopher any money.\p"
	.string "He is lazy and begs random strangers all\n"
	.string "the time.$"

Lumbridge_House_NPC3_Text_0:
	.string "I used a Bronze Pouch.\p"
	.string "Turns out they're really bad for\n"
	.string "catching monsters.$"

Lumbridge_House_NPC4_Text_0:
	.string "Not all monsters evolve the same way.\p"
	.string "You'll need to experiment to find the\n"
	.string "correct evolution method.$"

Lumbridge_House_NPC5_Text_0:
	.string "Luckily monsters only faint.\p"
	.string "Otherwise we would be overstocked with\n"
	.string "funeral services.$"

Lumbridge_House_NPC6_Text_0:
	.string "If you can't rest in a bank try a bed.\p"
	.string "Some beds are very inviting.$"

Lumbridge_GeneralStore_MOD_ASH_Text_0:
	.string "Mod Ash$"

Lumbridge_GeneralStore_MOD_ASH_Text_1:
	.string "WOAH!\p"
	.string "I didn't see you there, I almost spilt my\n"
	.string "drink.\p"
	.string "I'm just writing out some dialog for my\n"
	.string "new fanfic.\p"
	.string "I call it MY ARM'S BIG ADVENTURE!\p"
	.string "…\p"
	.string "What?\l"
	.string "It is a great name.\p"
	.string "Although I'm a bit stuck, I've made the\n"
	.string "adventurer in this story fight a giant\l"
	.string "bird but I'm not sure what the bird\l"
	.string "should look like.\p"
	.string "Do you have any monsters that might\n"
	.string "help inspire me?$"

Lumbridge_GeneralStore_MOD_ASH_Text_2:
	.string "Yes!\p"
	.string "That's it!\p"
	.string "I'll have the player face off against a\n"
	.string "giant ROC!\p"
	.string "Thank you for giving me the inspiration\n"
	.string "I need to finish my story!\p"
	.string "Please take this!$"

Lumbridge_GeneralStore_MOD_ASH_Text_3:
	.string "No, I don't think that would work…$"

Lumbridge_GeneralStore_MOD_ASH_Text_4:
	.string "Once again, thank you for helping me.\p"
	.string "What is that?\p"
	.string "You would like to read my fanfic?\p"
	.string "Sorry it's not finished yet, you'll have\n"
	.string "to wait.\p"
	.string "…\p"
	.string "How long?\p"
	.string "Soon TM.$"

Lumbridge_GeneralStore_FANFIC_Text_0:
	.string "It's a fanfic filled to the brim with\n"
	.string "weird innuendo's.$"

Lumbridge_House_Roddeck_Text_0:
	.string "Roddeck$"

Lumbridge_House_Roddeck_Text_1:
	.string "Would you like to trade me a Baby Green\n"
	.string "Dragon for my Red Dragon?$"

Lumbridge_House_Roddeck_Text_2:
	.string "Please take care of Sottlepot, he is a\n"
	.string "good boy.$"

Lumbridge_House_Roddeck_Text_3:
	.string "Sorry that's not what I want.$"

Lumbridge_House_Roddeck_Text_4:
	.string "Well come back if you change your mind.$"

Lumbridge_House_Roddeck_Text_5:
	.string "How is Sottlepot doing?$"

Lumbridge_House_Roddeck_Text_6:
	.string "Did you know the more badges you have\n"
	.string "the easier it is to control monsters\l"
	.string "obtained in a trade?\p"
	.string "I wish I knew that before Sottlepot\n"
	.string "went on a rampage killing Sir Vant and\l"
	.string "that adventurer…$"

Lumbridge_HAMDuo_1_Text_0:
	.string "I'm sure the boss said that the hideout\n"
	.string "was this way..{PAUSE 15}$"

Lumbridge_HAMDuo_1_Text_1:
	.string "Hey! Mind your own business!$"

Lumbridge_HAMDuo_2_Text_0:
	.string "Did the forest get overgrown again?\p"
	.string "Maybe we need to go find an axe to cut\n"
	.string "back some of these trees..$"

A_NUB_TOT_LOCKED_DOOR_TUTORIAL_Text_0:
	.string "A Nub Tot$"

A_NUB_TOT_LOCKED_DOOR_TUTORIAL_Text_1:
	.string "Heya! My name is A Nub Tot, but everyone\n"
	.string "calls me Tot.\p"
	.string "Let me pass on some very important\n"
	.string "advice to you that will help you on your\l"
	.string "adventure.\p"
	.string "The A BUTTON!\n"
	.string "Yes, simply the A BUTTON!\p"
	.string "The A BUTTON will give you all sorts of\n"
	.string "knowledge in your travels!\p"
	.string "Is there a RED BOOK in that bookcase?\n"
	.string "Is that a LEVER that needs pulling?\p"
	.string "What's that thing that is SPARKLING?\n"
	.string "Is that DOOR LOCKED?\p"
	.string "Are you lost and don't know where to\n"
	.string "go?\p"
	.string "Just use the A BUTTON!\p"
	.string "And that is it, that is the wisdom I give\n"
	.string "to you.\p"
	.string "I hope you have an amazing adventure!\p"
	.string "Nice meeting you!\p"
	.string "And one final time.\n"
	.string "Remember… the A BUTTON.$"
