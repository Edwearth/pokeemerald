BattleFrontier_BattlePalaceLobby_MapObjects: @ 853C340
	object_event 1, MAP_OBJ_GFX_OLD_MAN_1, 0, 0, 5, 6, 0, 8, 17, 0, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24D944, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_BLACK_BELT, 0, 0, 11, 8, 0, 2, 17, 0, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC82, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_MANIAC, 0, 0, 24, 5, 0, 8, 17, 0, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC9D, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_MAN_4, 0, 0, 18, 10, 0, 2, 17, 0, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC8B, 0, 0, 0
	object_event 5, MAP_OBJ_GFX_BEAUTY, 0, 0, 2, 10, 0, 2, 17, 0, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC94, 0, 0, 0
	object_event 6, MAP_OBJ_GFX_OLD_MAN_1, 0, 0, 19, 6, 0, 8, 17, 0, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24D956, 0, 0, 0

BattleFrontier_BattlePalaceLobby_MapWarps: @ 853C3D0
	warp_def 12, 11, 0, 2, BATTLE_FRONTIER_OUTSIDE_EAST
	warp_def 13, 11, 0, 2, BATTLE_FRONTIER_OUTSIDE_EAST
	warp_def 5, 4, 3, 0, BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR

BattleFrontier_BattlePalaceLobby_MapBGEvents: @ 853C3E8
	bg_event 2, 7, 0, 1, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC50
	bg_event 16, 7, 0, 1, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DC69
	bg_event 10, 4, 0, 0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24DCA6

BattleFrontier_BattlePalaceLobby_MapEvents:: @ 853C40C
	map_events BattleFrontier_BattlePalaceLobby_MapObjects, BattleFrontier_BattlePalaceLobby_MapWarps, 0x0, BattleFrontier_BattlePalaceLobby_MapBGEvents

