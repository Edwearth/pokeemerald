SlateportCity_House2_MapObjects: @ 852FB9C
	object_event 1, MAP_OBJ_GFX_MAN_3, 0, 0, 4, 4, 3, 10, 0, 0, 0, 0, SlateportCity_House2_EventScript_20D9AF, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_GIRL_3, 0, 0, 7, 4, 3, 9, 0, 0, 0, 0, SlateportCity_House2_EventScript_20D9B8, 0, 0, 0

SlateportCity_House2_MapWarps: @ 852FBCC
	warp_def 3, 7, 0, 10, SLATEPORT_CITY
	warp_def 4, 7, 0, 10, SLATEPORT_CITY

SlateportCity_House2_MapEvents:: @ 852FBDC
	map_events SlateportCity_House2_MapObjects, SlateportCity_House2_MapWarps, 0x0, 0x0

