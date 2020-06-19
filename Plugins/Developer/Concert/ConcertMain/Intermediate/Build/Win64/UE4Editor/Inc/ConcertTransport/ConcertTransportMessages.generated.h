// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTTRANSPORT_ConcertTransportMessages_generated_h
#error "ConcertTransportMessages.generated.h already included, missing '#pragma once' in ConcertTransportMessages.h"
#endif
#define CONCERTTRANSPORT_ConcertTransportMessages_generated_h

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertKeepAlive_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertKeepAlive>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertAckData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertAckData>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertEndpointDiscoveryEvent Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertReliableHandshakeData>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertEndpointClosedData>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertEventData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertEndpointDiscoveryEvent>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertResponseData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertResponseData>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertRequestData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertRequestData>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertEventData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertEventData>();

#define Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertMessageData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct();


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertMessageData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h


#define FOREACH_ENUM_ECONCERTRELIABLEHANDSHAKESTATE(op) \
	op(EConcertReliableHandshakeState::Negotiate) \
	op(EConcertReliableHandshakeState::Success) 

enum class EConcertReliableHandshakeState : uint8;
template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertReliableHandshakeState>();

#define FOREACH_ENUM_ECONCERTRESPONSECODE(op) \
	op(EConcertResponseCode::Pending) \
	op(EConcertResponseCode::Success) \
	op(EConcertResponseCode::Failed) \
	op(EConcertResponseCode::InvalidRequest) \
	op(EConcertResponseCode::UnknownRequest) \
	op(EConcertResponseCode::TimedOut) 

enum class EConcertResponseCode : uint8;
template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertResponseCode>();

#define FOREACH_ENUM_ECONCERTMESSAGEFLAGS(op) \
	op(EConcertMessageFlags::None) \
	op(EConcertMessageFlags::ReliableOrdered) \
	op(EConcertMessageFlags::UniqueId) 

enum class EConcertMessageFlags : uint8;
template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertMessageFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
