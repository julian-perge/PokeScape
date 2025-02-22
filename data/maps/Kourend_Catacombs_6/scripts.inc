Kourend_Catacombs_6_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Kourend_Catacombs_6_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Kourend_Catacombs_6_MapScripts_MAP_SCRIPT_ON_LOAD:
	return


ITEM_Catacombs_of_Kourend_1::
	finditem ITEM_POUCH_DRAGON
	end


ITEM_Catacombs_of_Kourend_2::
	finditem ITEM_POUCH_ANCIENT
	end


ITEM_Catacombs_of_Kourend_3::
	finditem ITEM_GRANITE_MAUL
	end


ITEM_Catacombs_of_Kourend_4::
	finditem ITEM_TM26_KINGS_SHIELD
	end


ITEM_Catacombs_of_Kourend_5::
	finditem ITEM_PARTY_HAT
	end


FIND_RANDOM_ITEM_KOUREND::
	random 31
	switch VAR_RESULT
	case 0, FIND_RANDOM_ITEM_KOUREND_3
	case 1, FIND_RANDOM_ITEM_KOUREND_4
	case 2, FIND_RANDOM_ITEM_KOUREND_5
	case 3, FIND_RANDOM_ITEM_KOUREND_6
	case 4, FIND_RANDOM_ITEM_KOUREND_7
	case 5, FIND_RANDOM_ITEM_KOUREND_8
	case 6, FIND_RANDOM_ITEM_KOUREND_9
	case 7, FIND_RANDOM_ITEM_KOUREND_10
	case 8, FIND_RANDOM_ITEM_KOUREND_11
	case 9, FIND_RANDOM_ITEM_KOUREND_12
	case 10, FIND_RANDOM_ITEM_KOUREND_13
	case 11, FIND_RANDOM_ITEM_KOUREND_14
	case 12, FIND_RANDOM_ITEM_KOUREND_15
	case 13, FIND_RANDOM_ITEM_KOUREND_16
	case 14, FIND_RANDOM_ITEM_KOUREND_17
	case 15, FIND_RANDOM_ITEM_KOUREND_18
	case 16, FIND_RANDOM_ITEM_KOUREND_19
	case 17, FIND_RANDOM_ITEM_KOUREND_20
	case 18, FIND_RANDOM_ITEM_KOUREND_21
	case 19, FIND_RANDOM_ITEM_KOUREND_22
	case 20, FIND_RANDOM_ITEM_KOUREND_23
	case 21, FIND_RANDOM_ITEM_KOUREND_24
	case 22, FIND_RANDOM_ITEM_KOUREND_25
	case 23, FIND_RANDOM_ITEM_KOUREND_26
	case 24, FIND_RANDOM_ITEM_KOUREND_27
	case 25, FIND_RANDOM_ITEM_KOUREND_28
	case 26, FIND_RANDOM_ITEM_KOUREND_29
	case 27, FIND_RANDOM_ITEM_KOUREND_30
	case 28, FIND_RANDOM_ITEM_KOUREND_31
	case 29, FIND_RANDOM_ITEM_KOUREND_32
	case 30, FIND_RANDOM_ITEM_KOUREND_33
FIND_RANDOM_ITEM_KOUREND_1:
	end

FIND_RANDOM_ITEM_KOUREND_3:
	finditem ITEM_FLAX, 6
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_4:
	finditem ITEM_SPIRIT_SHARD, 2
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_5:
	finditem ITEM_PRAYER_POTION, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_6:
	finditem ITEM_LAMP_SPATT, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_7:
	finditem ITEM_STAT_BEER, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_8:
	finditem ITEM_SPIRIT_SHARD, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_9:
	finditem ITEM_PURPLE_SWEETS, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_10:
	finditem ITEM_CHOCOLATE_CAKE, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_11:
	finditem ITEM_MINT_CAKE, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_12:
	finditem ITEM_HWEEN_MASK, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_13:
	finditem ITEM_SPIRIT_SHARD, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_14:
	finditem ITEM_DRAGON_SCIMITAR, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_15:
	finditem ITEM_POUCH_ELEMENTAL, 5
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_16:
	finditem ITEM_POUCH_BLACK, 5
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_17:
	finditem ITEM_POUCH, 10
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_18:
	finditem ITEM_SPIRIT_CHARM, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_19:
	finditem ITEM_SOUL_RUNE, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_20:
	finditem ITEM_CABBAGE, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_21:
	finditem ITEM_PURPLE_SWEETS, 5
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_22:
	finditem ITEM_CABBAGE, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_23:
	finditem ITEM_PARTY_HAT, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_24:
	finditem ITEM_POUCH_ANCIENT, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_25:
	finditem ITEM_CABBAGE, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_26:
	finditem ITEM_STAT_BEER, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_27:
	finditem ITEM_SPIRIT_SHARD, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_28:
	finditem ITEM_CAKE, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_29:
	finditem ITEM_CHOCOLATE_CAKE, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_30:
	finditem ITEM_CAKE, 5
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_31:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER, 0
	compare VAR_RESULT, 0
	goto_if_eq FIND_RANDOM_ITEM_KOUREND_35
FIND_RANDOM_ITEM_KOUREND_34:
	finditem ITEM_DARK_TOTEM_BASE, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_32:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER, 1
	compare VAR_RESULT, 0
	goto_if_eq FIND_RANDOM_ITEM_KOUREND_38
FIND_RANDOM_ITEM_KOUREND_37:
	finditem ITEM_DARK_TOTEM_MID, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_33:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER, 2
	compare VAR_RESULT, 0
	goto_if_eq FIND_RANDOM_ITEM_KOUREND_41
FIND_RANDOM_ITEM_KOUREND_40:
	finditem ITEM_DARK_TOTEM_TOP, 1
	goto FIND_RANDOM_ITEM_KOUREND_1

FIND_RANDOM_ITEM_KOUREND_35:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER, 0
	goto FIND_RANDOM_ITEM_KOUREND_34

FIND_RANDOM_ITEM_KOUREND_38:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER, 1
	goto FIND_RANDOM_ITEM_KOUREND_37

FIND_RANDOM_ITEM_KOUREND_41:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER, 2
	goto FIND_RANDOM_ITEM_KOUREND_40

