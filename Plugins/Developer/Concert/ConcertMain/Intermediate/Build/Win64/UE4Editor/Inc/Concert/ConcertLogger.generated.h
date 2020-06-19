// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERT_ConcertLogger_generated_h
#error "ConcertLogger.generated.h already included, missing '#pragma once' in ConcertLogger.h"
#endif
#define CONCERT_ConcertLogger_generated_h

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Private_ConcertLogger_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertLog_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertLog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Private_ConcertLogger_h


#define FOREACH_ENUM_ECONCERTLOGMESSAGEACTION(op) \
	op(EConcertLogMessageAction::Send) \
	op(EConcertLogMessageAction::Publish) \
	op(EConcertLogMessageAction::Receive) \
	op(EConcertLogMessageAction::Queue) \
	op(EConcertLogMessageAction::Discard) \
	op(EConcertLogMessageAction::Duplicate) \
	op(EConcertLogMessageAction::TimeOut) \
	op(EConcertLogMessageAction::Process) \
	op(EConcertLogMessageAction::EndpointDiscovery) \
	op(EConcertLogMessageAction::EndpointTimeOut) \
	op(EConcertLogMessageAction::EndpointClosure) 

enum class EConcertLogMessageAction : uint8;
template<> CONCERT_API UEnum* StaticEnum<EConcertLogMessageAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
