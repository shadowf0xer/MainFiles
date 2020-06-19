// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERT_ConcertMessageData_generated_h
#error "ConcertMessageData.generated.h already included, missing '#pragma once' in ConcertMessageData.h"
#endif
#define CONCERT_ConcertMessageData_generated_h

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_276_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSessionSerializedCborPayload_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertSessionSerializedCborPayload>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertSessionSerializedPayload>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSessionFilter_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertSessionFilter>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSessionInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertSessionInfo>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertSessionClientInfo>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertClientInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertClientInfo>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertServerInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertServerInfo>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertInstanceInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h


#define FOREACH_ENUM_ECONCERTSERVERFLAGS(op) \
	op(EConcertServerFlags::None) \
	op(EConcertServerFlags::IgnoreSessionRequirement) 

enum class EConcertServerFlags : uint8;
template<> CONCERT_API UEnum* StaticEnum<EConcertServerFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
