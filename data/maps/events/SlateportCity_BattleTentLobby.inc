SlateportCity_BattleTentLobby_MapObjects: @ 852F408
	object_event 1, MAP_OBJ_GFX_SCIENTIST_1, 0, 0, 6, 5, 3, 8, 17, 0, 0, 0, SlateportCity_BattleTentLobby_EventScript_2088AA, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_SAILOR, 0, 0, 1, 5, 3, 2, 17, 0, 0, 0, SlateportCity_BattleTentLobby_EventScript_208A3D, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_MAN_4, 0, 0, 3, 7, 3, 7, 17, 0, 0, 0, SlateportCity_BattleTentLobby_EventScript_208A7E, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_GIRL_1, 0, 0, 1, 8, 3, 1, 17, 0, 0, 0, SlateportCity_BattleTentLobby_EventScript_208A87, 0, 0, 0
	object_event 5, MAP_OBJ_GFX_WOMAN_3, 0, 0, 11, 8, 3, 9, 17, 0, 0, 0, SlateportCity_BattleTentLobby_EventScript_208A90, 0, 0, 0

SlateportCity_BattleTentLobby_MapWarps: @ 852F480
	warp_def 6, 9, 0, 3, SLATEPORT_CITY
	warp_def 7, 9, 0, 3, SLATEPORT_CITY

SlateportCity_BattleTentLobby_MapBGEvents: @ 852F490
	bg_event 4, 5, 0, 0, 0, SlateportCity_BattleTentLobby_EventScript_208A99

SlateportCity_BattleTentLobby_MapEvents:: @ 852F49C
	map_events SlateportCity_BattleTentLobby_MapObjects, SlateportCity_BattleTentLobby_MapWarps, 0x0, SlateportCity_BattleTentLobby_MapBGEvents

