.macro def_special ptr
.global SPECIAL_\ptr
.set SPECIAL_\ptr, __special__
.set __special__, __special__ + 1
	.4byte \ptr
	.endm

.set __special__, 0
		.align 2
gSpecials:: @ 81DBA64
	def_special HealPlayerParty
	def_special sub_809D2BC
	def_special sub_80AF948
	def_special sub_80AF9F8
	def_special sub_80B36EC
	def_special sub_80B371C
	def_special sub_80E8E18
	def_special sub_80E8BC8
	def_special sub_80E9068
	def_special sub_80E9A90
	def_special sub_80E9AC0
	def_special sub_80E9744
	def_special sub_80E9BDC
	def_special sub_80E9C2C
	def_special sub_80E9C74
	def_special sub_80E9C88
	def_special sub_80EA2E4
	def_special sub_80EA354
	def_special sub_80E933C
	def_special sub_8127E18
	def_special sub_81297AC
	def_special sub_80E8C98
	def_special sub_80E95D4
	def_special sub_8129708
	def_special sub_80E91F8
	def_special sub_80EA30C
	def_special sub_80FA57C
	def_special sub_80E6BE8
	def_special sub_80B2DA4
	def_special sub_80B2E4C
	def_special sub_80B2E74
	def_special sub_80B2EA8
	def_special CloseLink
	def_special sub_80B3968
	def_special sub_80B3924
	def_special nullsub_37
	def_special sub_80B3254
	def_special sub_80B2FD8
	def_special GetLinkPartnerNames
	def_special SpawnLinkPartnerFieldObject
	def_special copy_player_party_to_sav1
	def_special copy_player_party_from_sav1
	def_special sub_80F9438
	def_special sp02A_crash_sound
	def_special FieldObjectInteractionGetBerryTreeData
	def_special FieldObjectInteractionGetBerryName
	def_special FieldObjectInteractionGetBerryCountString
	def_special Bag_ChooseBerry
	def_special FieldObjectInteractionPlantBerryTree
	def_special FieldObjectInteractionPickBerryTree
	def_special FieldObjectInteractionRemoveBerryTree
	def_special FieldObjectInteractionWaterBerryTree
	def_special PlayerHasBerries
	def_special IsEnigmaBerryValid
	def_special GetTrainerBattleMode
	def_special ShowTrainerIntroSpeech
	def_special ShowTrainerCantBattleSpeech
	def_special GetTrainerFlag
	def_special EndTrainerApproach
	def_special SetUpTrainerEncounterMusic
	def_special ShouldTryRematchBattle
	def_special IsTrainerReadyForRematch
	def_special BattleSetup_StartRematchBattle
	def_special sub_80C7578
	def_special HasEnoughMonsForDoubleBattle
	def_special TurnOffTVScreen
	def_special DoTVShow
	def_special DoPokeNews
	def_special special_0x44
	def_special special_0x45
	def_special InterviewBefore
	def_special InterviewAfter
	def_special sub_80EF8F8
	def_special SetContestCategoryStringVarForInterview
	def_special special_0x4a
	def_special TV_IsScriptShowKindAlreadyInQueue
	def_special CheckForBigMovieOrEmergencyNewsOnTV
	def_special GetMomOrDadStringForTVMessage
	def_special ResetTVShowState
	def_special sub_80F831C
	def_special sub_80F84B0
	def_special sub_80F8814
	def_special sub_80F834C
	def_special sub_80F8390
	def_special sub_80F8850
	def_special sub_80F82B4
	def_special sub_80F87D8
	def_special sub_80F7F30
	def_special sub_80F8970
	def_special sub_80F8AFC
	def_special sub_80F82FC
	def_special sub_80F7F7C
	def_special sub_80F7FFC
	def_special sub_80F8D24
	def_special sub_80F8C7C
	def_special sub_80B3000
	def_special sub_809FF80
	def_special sub_80FAFF8
	def_special easy_chat_input_maybe
	def_special sub_811EECC
	def_special sub_81201DC
	def_special sub_81201F4
	def_special sub_8120210
	def_special sub_8120358
	def_special sub_8120374
	def_special sub_812038C
	def_special sub_8120340
	def_special sub_8120B5C
	def_special sub_81203FC
	def_special sub_81203C4
	def_special sub_81213B0
	def_special sub_812139C
	def_special sub_8121388
	def_special sub_81213D8
	def_special sub_8121450
	def_special sub_8121424
	def_special sub_8133EC0
	def_special sub_8133CD8
	def_special sub_8133CF4
	def_special sub_8133D2C
	def_special sub_8133D8C
	def_special sub_8133E38
	def_special GetSeedotSizeRecordInfo
	def_special CompareSeedotSize
	def_special GetLotadSizeRecordInfo
	def_special CompareLotadSize
	def_special TV_PutNameRaterShowOnTheAirIfNicnkameChanged
	def_special TV_CopyNicknameToStringVar1AndEnsureTerminated
	def_special TV_CheckMonOTIDEqualsPlayerID
	def_special sub_8122998
	def_special sub_81229C8
	def_special sub_811EF6C
	def_special sub_8122A30
	def_special sub_80D6EDC
	def_special CalculatePlayerPartyCount
	def_special CountPartyNonEggMons
	def_special CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	def_special sub_80F88E8
	def_special sub_80F88DC
	def_special sub_80F8864
	def_special sub_80F8940
	def_special ShowContestWinner
	def_special MauvilleGymSpecial2
	def_special MauvilleGymSpecial1
	def_special ShowFieldMessageStringVar4
	def_special DrawWholeMapView
	def_special StorePlayerCoordsInVars
	def_special MauvilleGymSpecial3
	def_special PetalburgGymSpecial1
	def_special PetalburgGymSpecial2
	def_special GetPlayerTrainerIdOnesDigit
	def_special GetPlayerBigGuyGirlString
	def_special GetRivalSonDaughterString
	def_special SetFlagInVar
	def_special CableCarWarp
	def_special sub_814FC9C
	def_special Overworld_PlaySpecialMapMusic
	def_special StartWallClock
	def_special Special_ViewWallClock
	def_special ChooseStarter
	def_special StartWallyTutorialBattle
	def_special ChangePokemonNickname
	def_special sub_81B94B0
	def_special GetFirstFreePokeblockSlot
	def_special DoBerryBlending
	def_special sub_8142BC8
	def_special sub_813BD60
	def_special sub_813BCA8
	def_special sub_813BDB4
	def_special sub_813BA30
	def_special sub_813BCE8
	def_special sub_813BF60
	def_special sub_813BA60
	def_special sub_813BF7C
	def_special RockSmashWildEncounter
	def_special GabbyAndTyGetBattleNum
	def_special GabbyAndTyAfterInterview
	def_special GabbyAndTyBeforeInterview
	def_special DoTVShowInSearchOfTrainers
	def_special IsTVShowInSearchOfTrainersAiring
	def_special GabbyAndTyGetLastQuote
	def_special GabbyAndTyGetLastBattleTrivia
	def_special GabbyAndTySetScriptVarsToFieldObjectLocalIds
	def_special sub_8138B80
	def_special GetDaycareMonNicknames
	def_special GetDaycareState
	def_special RejectEggFromDayCare
	def_special GiveEggFromDaycare
	def_special SetDaycareCompatibilityString
	def_special GetSelectedMonNickAndSpecies
	def_special StoreSelectedPokemonInDaycare
	def_special ChooseSendDaycareMon
	def_special ShowDaycareLevelMenu
	def_special GetNumLevelsGainedFromDaycare
	def_special GetDaycareCost
	def_special TakePokemonFromDaycare
	def_special ScriptHatchMon
	def_special EggHatch
	def_special sub_8071614
	def_special sub_813C4BC
	def_special IsEnoughForCostInVar0x8005
	def_special SubtractMoneyFromVar0x8005
	def_special sub_80F972C
	def_special sp0C8_whiteout_maybe
	def_special sub_80FBE90
	def_special RotatingGate_InitPuzzleAndGraphics
	def_special SetSSTidalFlag
	def_special ResetSSTidalFlag
	def_special EnterSafariMode
	def_special ExitSafariMode
	def_special GetPokeblockFeederInFront
	def_special OpenPokeblockCaseOnFeeder
	def_special IsMirageIslandPresent
	def_special UpdateShoalTideFlag
	def_special InitBirchState
	def_special ScriptGetPokedexInfo
	def_special ShowPokedexRatingMessage
	def_special DoPCTurnOnEffect
	def_special DoPCTurnOffEffect
	def_special sub_8139994
	def_special DoLotteryCornerComputerEffect
	def_special EndLotteryCornerComputerEffect
	def_special sub_81B951C
	def_special sub_81B968C
	def_special sub_81B9770
	def_special sub_81B9718
	def_special sub_81B96D0
	def_special sub_8160638
	def_special GetRecordedCyclingRoadResults
	def_special Special_BeginCyclingRoadChallenge
	def_special GetPlayerAvatarBike
	def_special FinishCyclingRoadChallenge
	def_special UpdateCyclingRoadState
	def_special GetLeadMonFriendshipScore
	def_special sub_81A1780
	def_special sub_8161F74
	def_special sub_818E9AC
	def_special sub_8195960
	def_special sub_8165360
	def_special sub_8163AC4
	def_special sub_81A5238
	def_special sub_81A5E74
	def_special sub_81A703C
	def_special sub_81A8E7C
	def_special StopMapMusic
	def_special sub_81B99B4
	def_special sub_81B9B80
	def_special sub_81B9D08
	def_special sub_80F9490
	def_special ValidateEReaderTrainer
	def_special sub_8139228
	def_special sub_80F94E8
	def_special sub_816AE58
	def_special sub_816AE98
	def_special FieldShowRegionMap
	def_special sub_807E73C
	def_special sub_807EA10
	def_special sub_807F0E4
	def_special sub_807E9D4
	def_special GetWeekCount
	def_special RetrieveLotteryNumber
	def_special PickLotteryCornerTicket
	def_special ShowBerryBlenderRecordWindow
	def_special ResetTrickHouseEndRoomFlag
	def_special SetTrickHouseEndRoomFlag
	def_special ScrSpecial_CreatePCMenu
	def_special AccessHallOfFamePC
	def_special Special_ShowDiploma
	def_special CheckLeadMonCool
	def_special CheckLeadMonBeauty
	def_special CheckLeadMonCute
	def_special CheckLeadMonSmart
	def_special CheckLeadMonTough
	def_special sub_80FB7A4
	def_special DoSoftReset
	def_special GameClear
	def_special sub_8139A78
	def_special nullsub_55
	def_special SpawnScriptFieldObject
	def_special RemoveScriptFieldObject
	def_special GetPokeblockNameByMonNature
	def_special GetSecretBaseNearbyMapName
	def_special CheckRelicanthWailord
	def_special ShouldDoBrailleStrengthEffectOld
	def_special sub_80B0534
	def_special sub_80B058C
	def_special WaitWeather
	def_special sub_8139238
	def_special sub_8139248
	def_special player_get_direction_lower_nybble
	def_special sub_81392AC
	def_special sub_81392D4
	def_special sub_81392F8
	def_special sub_8139320
	def_special LeadMonHasEffortRibbon
	def_special GiveLeadMonEffortRibbon
	def_special Special_AreLeadMonEVsMaxedOut
	def_special sub_8098574
	def_special sub_809859C
	def_special InitRoamer
	def_special sub_81393FC
	def_special IsGrassTypeInParty
	def_special sub_80AFC60
	def_special PutZigzagoonInPlayerParty
	def_special IsStarterInParty
	def_special sub_80E980C
	def_special ScriptCheckFreePokemonStorageSpace
	def_special DoSealedChamberShakingEffect1
	def_special sub_8139B60
	def_special sub_80FAC78
	def_special IsPokerusInParty
	def_special sub_809E1C8
	def_special sub_8139560
	def_special StartGroudonKyogreBattle
	def_special BattleSetup_StartLegendaryBattle
	def_special StartRegiBattle
	def_special sub_80B16D8
	def_special DoSealedChamberShakingEffect2
	def_special sub_8139634
	def_special sub_80AC81C
	def_special sp13E_warp_to_last_warp
	def_special sp13F_fall_to_last_warp
	def_special sub_80F8D28
	def_special sub_80F8EB8
	def_special sub_8162794
	def_special BattleSetup_StartLatiBattle
	def_special SetRoute119Weather
	def_special SetRoute123Weather
	def_special sub_80F8FA0
	def_special ScriptGetPartyMonSpecies
	def_special sub_81B98DC
	def_special nullsub_54
	def_special sub_80E9B70
	def_special copy_bags_and_unk_data_from_save_blocks
	def_special sub_80B05B4
	def_special sub_8139754
	def_special sub_813970C
	def_special sub_80C08E4
	def_special sub_8139770
	def_special sub_81397C4
	def_special sub_81653CC
	def_special sub_80F9370
	def_special sub_80F8FE8
	def_special sub_81AFDD0
	def_special sub_80EDCE8
	def_special sub_80EE2CC
	def_special sub_80EE72C
	def_special sub_80EE7C0
	def_special nullsub_55
	def_special PutFanClubSpecialOnTheAir
	def_special sub_80EED10
	def_special sub_80EED34
	def_special sub_80EB1AC
	def_special sub_80EBE7C
	def_special sub_80EB300
	def_special sub_80EB438
	def_special sub_80EB368
	def_special sub_80EB3D0
	def_special sub_80EB290
	def_special sub_80EB2C8
	def_special sub_80EB56C
	def_special sub_80EB9E0
	def_special sub_80EBB28
	def_special sub_80EB498
	def_special sub_818D9C0
	def_special sub_818DAEC
	def_special sub_818DBE8
	def_special sub_818DC2C
	def_special sub_818DC60
	def_special sub_818DCC8
	def_special sub_818DD14
	def_special sub_818DD54
	def_special sub_818DD78
	def_special sub_818DE44
	def_special sub_818DE5C
	def_special sub_818DEA0
	def_special sub_818DEDC
	def_special sub_818E038
	def_special sub_818E06C
	def_special sub_818E2D8
	def_special sub_811A858
	def_special sub_818E2FC
	def_special sub_818E308
	def_special sub_818E358
	def_special sub_818E37C
	def_special sub_818E298
	def_special sub_818E39C
	def_special sub_818E3BC
	def_special sub_818E3E0
	def_special sub_818E430
	def_special sub_818E47C
	def_special sub_818E490
	def_special sub_813986C
	def_special sub_818E4A4
	def_special sub_818E510
	def_special sub_818E538
	def_special sub_818E274
	def_special sub_818E3EC
	def_special sub_818E8E0
	def_special sub_818E8B4
	def_special sub_818E914
	def_special sub_818E92C
	def_special sub_818E940
	def_special sub_818E960
	def_special sub_818E990
	def_special PutLilycoveContestLadyShowOnTheAir
	def_special sub_813B880
	def_special sub_81A085C
	def_special ShouldTryGetTrainerScript
	def_special ShowMapNamePopup
	def_special ShowMapNamePopup
	def_special sub_81BE994
	def_special sub_81BE79C
	def_special sub_81BE7F4
	def_special sub_81398C0
	def_special sub_80093CC
	def_special BerryBlenderLinkBecomeLeader
	def_special BerryBlenderLinkJoinGroup
	def_special UnionRoomSpecial
	def_special sub_801A42C
	def_special sub_8016934
	def_special sp182_move_string
	def_special sub_801DC20
	def_special sub_81B8958
	def_special sub_8018090
	def_special sub_813990C
	def_special sub_801B27C
	def_special HasAtLeastOneBerry
	def_special sub_802C920
	def_special sub_802E3C4
	def_special sub_8027A5C
	def_special sub_8027AAC
	def_special sub_8139980
	def_special sub_81399F4
	def_special sub_8139D98
	def_special sub_80F905C
	def_special sub_800B518
	def_special sub_80F90DC
	def_special sub_80F910C
	def_special sub_80F9160
	def_special sub_81A4AA0
	def_special sub_81A4AE8
	def_special sub_8139F20
	def_special sub_80F9134
	def_special sub_80F9154
	def_special sub_80B3028
	def_special sub_813A128
	def_special sub_813A630
	def_special sub_813A080
	def_special sub_81C6A94
	def_special sub_81C4F24
	def_special sub_81B95E0
	def_special sub_81B9620
	def_special sub_813A76C
	def_special sub_813A7B8
	def_special sub_813A958
	def_special sub_813A8FC
	def_special sub_813A988
	def_special sub_813A9D0
	def_special sub_813A9A4
	def_special sub_813AA04
	def_special sub_813AA18
	def_special sub_813AA44
	def_special sub_80248B0
	def_special sub_8024918
	def_special sub_80246D4
	def_special sub_802477C
	def_special sub_802488C
	def_special sub_813A820
	def_special sub_813A854
	def_special sub_813B7D8
	def_special sub_81C72A4
	def_special sp106_CreateStartMenu
	def_special sub_80C2E40
	def_special sub_813AC7C
	def_special sub_813ADB8
	def_special sub_813ADD4
	def_special sub_81B892C
	def_special sub_813AEB4
	def_special sub_813AF48
	def_special sub_813AFC8
	def_special sub_813B1D0
	def_special CreateObedientEnemyMon
	def_special sub_81BEB54
	def_special sub_81BEB68
	def_special sub_81BEB7C
	def_special ChangeBoxPokemonNickname
	def_special get_unknown_box_id
	def_special sub_813B21C
	def_special sub_81D1C20
	def_special sub_8175280
	def_special sub_813B2E4
	def_special sub_813B374
	def_special sub_813B490
	def_special sub_80A08CC
	def_special sub_813B484
	def_special sub_81AFDA0
	def_special sub_813B4E0
	def_special ShouldDoBrailleRegicePuzzle
	def_special EnableNationalPokedex
	def_special sub_80E2548
	def_special sub_80E2878
	def_special TurnOnTVScreen
	def_special sub_81D4A90
	def_special sub_813B514
	def_special sub_813B568
	def_special sub_813B534
	def_special sp194_trainer_tower
	def_special sub_813B7D8
	def_special sub_813B80C
	def_special sub_81D4BEC
	def_special sub_80224D0
	def_special TryBufferWaldaPhrase
	def_special DoWaldaNamingScreen
	def_special TryGetWallpaperWithWaldaPhrase
	def_special sub_8139ED0
	def_special sub_813B968
	def_special sub_80F8B94
	def_special sub_813C904
	def_special sub_80B4808
	def_special sub_813B9A0
	def_special sub_81B9918
	def_special sub_80722E0
	def_special sub_80B45D0
	def_special sub_813C5A0
	def_special sub_8139C10
	def_special sub_80B3BC4
