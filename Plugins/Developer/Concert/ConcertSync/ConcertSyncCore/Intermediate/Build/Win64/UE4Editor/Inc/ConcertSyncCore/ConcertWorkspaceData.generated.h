// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertWorkspaceData_generated_h
#error "ConcertWorkspaceData.generated.h already included, missing '#pragma once' in ConcertWorkspaceData.h"
#endif
#define CONCERTSYNCCORE_ConcertWorkspaceData_generated_h

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertPackage_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertPackage>();

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertPackageInfo_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertPackageInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h


#define FOREACH_ENUM_ECONCERTPACKAGEUPDATETYPE(op) \
	op(EConcertPackageUpdateType::Dummy) \
	op(EConcertPackageUpdateType::Added) \
	op(EConcertPackageUpdateType::Saved) \
	op(EConcertPackageUpdateType::Renamed) \
	op(EConcertPackageUpdateType::Deleted) 

enum class EConcertPackageUpdateType : uint8;
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertPackageUpdateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
