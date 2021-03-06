FallarborTown_BattleTentBattleRoom_MapScripts:: @ 8200899
	map_script 3, FallarborTown_BattleTentBattleRoom_MapScript1_2008A9
	map_script 2, FallarborTown_BattleTentBattleRoom_MapScript2_2008DD
	map_script 4, FallarborTown_BattleTentBattleRoom_MapScript2_200BB0
	.byte 0

FallarborTown_BattleTentBattleRoom_MapScript1_2008A9: @ 82008A9
	call FallarborTown_BattleTentBattleRoom_EventScript_2008AF
	end

FallarborTown_BattleTentBattleRoom_EventScript_2008AF:: @ 82008AF
	checkplayergender
	compare VAR_RESULT, 0
	goto_eq FallarborTown_BattleTentBattleRoom_EventScript_2008C7
	compare VAR_RESULT, 1
	goto_eq FallarborTown_BattleTentBattleRoom_EventScript_2008D2
	return

FallarborTown_BattleTentBattleRoom_EventScript_2008C7:: @ 82008C7
	setvar VAR_0x4011, 100
	setvar VAR_0x4010, 100
	return

FallarborTown_BattleTentBattleRoom_EventScript_2008D2:: @ 82008D2
	setvar VAR_0x4011, 105
	setvar VAR_0x4010, 105
	return

FallarborTown_BattleTentBattleRoom_MapScript2_2008DD: @ 82008DD
	map_script_2 VAR_0x4000, 0, FallarborTown_BattleTentBattleRoom_EventScript_2008E7
	.2byte 0

FallarborTown_BattleTentBattleRoom_EventScript_2008E7:: @ 82008E7
	lockall
	showobjectat 1, FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
	applymovement 1, FallarborTown_BattleTentBattleRoom_Movement_200B8D
	waitmovement 0
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special sub_81A1780
	compare VAR_RESULT, 0
	goto_if 5, FallarborTown_BattleTentBattleRoom_EventScript_200B73

FallarborTown_BattleTentBattleRoom_EventScript_20090F:: @ 820090F
	setvar VAR_0x8004, 3
	special sub_8161F74
	addobject 3
	applymovement 3, FallarborTown_BattleTentBattleRoom_Movement_200B96
	waitmovement 0
	applymovement 2, FallarborTown_BattleTentBattleRoom_Movement_200BA3
	playse SE_W187
	waitse
	waitmovement 0
	msgbox FallarborTown_BattleTentBattleRoom_Text_257C93, 4
	setvar VAR_0x8004, 4
	special sub_81B99B4
	msgbox 0x2021fc4, 4
	waitmessage
	call FallarborTown_BattleTentBattleRoom_EventScript_257B6C
	switch VAR_RESULT
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_20099C
	applymovement 2, FallarborTown_BattleTentBattleRoom_Movement_200BA3
	playse SE_W173
	waitse
	waitmovement 0
	setvar VAR_0x8004, 6
	special sub_81B9B80
	msgbox FallarborTown_BattleTentBattleRoom_Text_257CCE, 4

FallarborTown_BattleTentBattleRoom_EventScript_20097E:: @ 820097E
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 4
	special sub_81A1780
	special copy_player_party_from_sav1
	warp FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 255, 6, 6
	waitstate

FallarborTown_BattleTentBattleRoom_EventScript_20099C:: @ 820099C
	applymovement 2, FallarborTown_BattleTentBattleRoom_Movement_200BA3
	playse SE_BAN
	waitse
	waitmovement 0
	msgbox FallarborTown_BattleTentBattleRoom_Text_257CB3, 4
	closemessage

FallarborTown_BattleTentBattleRoom_EventScript_2009B3:: @ 82009B3
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special sub_81A1780
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	copyvar VAR_0x8006, VAR_RESULT
	special sub_81A1780
	switch VAR_RESULT
	case 3, FallarborTown_BattleTentBattleRoom_EventScript_200AF3
	applymovement 3, FallarborTown_BattleTentBattleRoom_Movement_200B9E
	waitmovement 0
	removeobject 3
	applymovement 2, FallarborTown_BattleTentBattleRoom_Movement_200BA6
	waitmovement 0
	applymovement 1, FallarborTown_BattleTentBattleRoom_Movement_200B94
	waitmovement 0
	msgbox FallarborTown_BattleTentBattleRoom_Text_257CE9, 4
	special copy_player_party_from_sav1
	special copy_player_party_to_sav1
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special sub_81A1780
	playfanfare MUS_ME_ASA
	waitfanfare
	special HealPlayerParty

FallarborTown_BattleTentBattleRoom_EventScript_200A2A:: @ 8200A2A
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special sub_81A1780
	compare VAR_RESULT, 1
	call_if 1, FallarborTown_BattleTentBattleRoom_EventScript_200B43
	compare VAR_RESULT, 2
	call_if 1, FallarborTown_BattleTentBattleRoom_EventScript_200B4A
	multichoice 20, 6, 104, 1
	switch VAR_RESULT
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_200AD8
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_200A78
	case 2, FallarborTown_BattleTentBattleRoom_EventScript_200AA6

FallarborTown_BattleTentBattleRoom_EventScript_200A78:: @ 8200A78
	msgbox FallarborTown_BattleTentBattleRoom_Text_257E6B, 5
	switch VAR_RESULT
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_200A2A
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_200B51
	case 127, FallarborTown_BattleTentBattleRoom_EventScript_200A2A

FallarborTown_BattleTentBattleRoom_EventScript_200AA6:: @ 8200AA6
	message FallarborTown_BattleTentBattleRoom_Text_257E9E
	waitmessage
	multichoicedefault 20, 8, 94, 1, 0
	switch VAR_RESULT
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_200A2A
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_20097E
	case 127, FallarborTown_BattleTentBattleRoom_EventScript_200A2A

FallarborTown_BattleTentBattleRoom_EventScript_200AD8:: @ 8200AD8
	closemessage
	applymovement 2, FallarborTown_BattleTentBattleRoom_Movement_200BAB
	waitmovement 0
	applymovement 1, FallarborTown_BattleTentBattleRoom_Movement_200B92
	waitmovement 0
	goto FallarborTown_BattleTentBattleRoom_EventScript_20090F
	waitstate

FallarborTown_BattleTentBattleRoom_EventScript_200AF3:: @ 8200AF3
	delay 60
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 3
	special sub_81A1780
	special copy_player_party_from_sav1
	warp FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 255, 6, 6
	waitstate
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	special sub_81A5238
	compare VAR_RESULT, 9999
	goto_eq FallarborTown_BattleTentBattleRoom_EventScript_2009B3
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special sub_81A5238

FallarborTown_BattleTentBattleRoom_EventScript_200B43:: @ 8200B43
	message FallarborTown_BattleTentBattleRoom_Text_257D17
	waitmessage
	return

FallarborTown_BattleTentBattleRoom_EventScript_200B4A:: @ 8200B4A
	message FallarborTown_BattleTentBattleRoom_Text_257D50
	waitmessage
	return

FallarborTown_BattleTentBattleRoom_EventScript_200B51:: @ 8200B51
	message FallarborTown_BattleTentBattleRoom_Text_257EDB
	waitmessage
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 2
	special sub_81B9B80
	playse SE_SAVE
	waitse
	fadescreen 1
	setvar VAR_0x8004, 4
	special sub_81A1780
	end

FallarborTown_BattleTentBattleRoom_EventScript_200B73:: @ 8200B73
	applymovement 2, FallarborTown_BattleTentBattleRoom_Movement_200BA6
	waitmovement 0
	applymovement 1, FallarborTown_BattleTentBattleRoom_Movement_200B94
	waitmovement 0
	goto FallarborTown_BattleTentBattleRoom_EventScript_200A2A
	end

FallarborTown_BattleTentBattleRoom_Movement_200B8D: @ 8200B8D
	step_up
	step_up
	step_up
	step_28
	step_end

FallarborTown_BattleTentBattleRoom_Movement_200B92: @ 8200B92
	step_28
	step_end

FallarborTown_BattleTentBattleRoom_Movement_200B94: @ 8200B94
	step_27
	step_end

FallarborTown_BattleTentBattleRoom_Movement_200B96: @ 8200B96
	step_down
	step_down
	step_down
	step_down
	step_27
	step_end

FallarborTown_BattleTentBattleRoom_Movement_200B9C: @ 8200B9C
	step_left
	step_end

FallarborTown_BattleTentBattleRoom_Movement_200B9E: @ 8200B9E
	step_up
	step_up
	step_up
	step_up
	step_end

FallarborTown_BattleTentBattleRoom_Movement_200BA3: @ 8200BA3
	step_51
	step_46
	step_end

FallarborTown_BattleTentBattleRoom_Movement_200BA6: @ 8200BA6
	step_down
	step_down
	step_down
	step_28
	step_end

FallarborTown_BattleTentBattleRoom_Movement_200BAB: @ 8200BAB
	step_up
	step_up
	step_up
	step_25
	step_end

FallarborTown_BattleTentBattleRoom_MapScript2_200BB0: @ 8200BB0
	map_script_2 VAR_0x4001, 0, FallarborTown_BattleTentBattleRoom_EventScript_200BBA
	.2byte 0

FallarborTown_BattleTentBattleRoom_EventScript_200BBA:: @ 8200BBA
	hideobjectat 255, FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
	hideobjectat 1, FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
	removeobject 3
	setvar VAR_0x4001, 1
	end

