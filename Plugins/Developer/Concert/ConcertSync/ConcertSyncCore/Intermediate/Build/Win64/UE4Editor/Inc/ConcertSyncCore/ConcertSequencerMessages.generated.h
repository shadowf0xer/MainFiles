// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertSequencerMessages_generated_h
#error "ConcertSequencerMessages.generated.h already included, missing '#pragma once' in ConcertSequencerMessages.h"
#endif
#define CONCERTSYNCCORE_ConcertSequencerMessages_generated_h

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerStateSyncEvent>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerStateEvent>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerCloseEvent>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerOpenEvent>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerState_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h


#define FOREACH_ENUM_ECONCERTMOVIESCENEPLAYERSTATUS(op) \
	op(EConcertMovieScenePlayerStatus::Stopped) \
	op(EConcertMovieScenePlayerStatus::Playing) \
	op(EConcertMovieScenePlayerStatus::Recording) \
	op(EConcertMovieScenePlayerStatus::Scrubbing) \
	op(EConcertMovieScenePlayerStatus::Jumping) \
	op(EConcertMovieScenePlayerStatus::Stepping) \
	op(EConcertMovieScenePlayerStatus::Paused) 

enum class EConcertMovieScenePlayerStatus : uint8;
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertMovieScenePlayerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
