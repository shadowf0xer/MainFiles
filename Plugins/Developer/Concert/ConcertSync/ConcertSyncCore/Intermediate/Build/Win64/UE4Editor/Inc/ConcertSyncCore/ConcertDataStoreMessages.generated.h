// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertDataStoreMessages_generated_h
#error "ConcertDataStoreMessages.generated.h already included, missing '#pragma once' in ConcertDataStoreMessages.h"
#endif
#define CONCERTSYNCCORE_ConcertDataStoreMessages_generated_h

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_423_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Response>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_392_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertDataStore_Request Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_CompareExchangeRequest>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_370_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertDataStore_Request Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_FetchOrAddRequest>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_349_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Request>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_331_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_ReplicateEvent>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_312_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_KeyValuePair>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_StoreValue>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Text>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_String_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_String>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Double>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Integer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h


#define FOREACH_ENUM_ECONCERTDATASTORERESULTCODE(op) \
	op(EConcertDataStoreResultCode::Added) \
	op(EConcertDataStoreResultCode::Fetched) \
	op(EConcertDataStoreResultCode::Exchanged) \
	op(EConcertDataStoreResultCode::NotFound) \
	op(EConcertDataStoreResultCode::TypeMismatch) \
	op(EConcertDataStoreResultCode::UnexpectedError) 

enum class EConcertDataStoreResultCode : uint8;
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertDataStoreResultCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
