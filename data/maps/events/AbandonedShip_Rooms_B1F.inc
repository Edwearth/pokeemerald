AbandonedShip_Rooms_B1F_MapObjects: @ 8536898
	object_event 1, MAP_OBJ_GFX_FAT_MAN, 0, 0, 25, 6, 3, 9, 0, 0, 0, 0, AbandonedShip_Rooms_B1F_EventScript_237FC6, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 6, 7, 3, 1, 17, 0, 0, 0, AbandonedShip_Rooms_B1F_EventScript_29123A, 1096, 0, 0

AbandonedShip_Rooms_B1F_MapWarps: @ 85368C8
	warp_def 4, 1, 3, 2, ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 13, 1, 3, 3, ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 22, 1, 3, 4, ABANDONED_SHIP_CORRIDORS_B1F

AbandonedShip_Rooms_B1F_MapEvents:: @ 85368E0
	map_events AbandonedShip_Rooms_B1F_MapObjects, AbandonedShip_Rooms_B1F_MapWarps, 0x0, 0x0

