// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYMULTISAVE_EMSData_generated_h
#error "EMSData.generated.h already included, missing '#pragma once' in EMSData.h"
#endif
#define EASYMULTISAVE_EMSData_generated_h

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_234_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerArchive_Statics; \
	EASYMULTISAVE_API static class UScriptStruct* StaticStruct();


template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<struct FPlayerArchive>();

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelArchive_Statics; \
	EASYMULTISAVE_API static class UScriptStruct* StaticStruct();


template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<struct FLevelArchive>();

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_196_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControllerSaveData_Statics; \
	EASYMULTISAVE_API static class UScriptStruct* StaticStruct();


template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<struct FControllerSaveData>();

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPawnSaveData_Statics; \
	EASYMULTISAVE_API static class UScriptStruct* StaticStruct();


template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<struct FPawnSaveData>();

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics; \
	EASYMULTISAVE_API static class UScriptStruct* StaticStruct();


template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<struct FLevelScriptSaveData>();

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorSaveData_Statics; \
	EASYMULTISAVE_API static class UScriptStruct* StaticStruct();


template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<struct FActorSaveData>();

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameObjectSaveData_Statics; \
	EASYMULTISAVE_API static class UScriptStruct* StaticStruct();


template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<struct FGameObjectSaveData>();

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentSaveData_Statics; \
	EASYMULTISAVE_API static class UScriptStruct* StaticStruct();


template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<struct FComponentSaveData>();

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSaveSlotInfo_Statics; \
	EASYMULTISAVE_API static class UScriptStruct* StaticStruct();


template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<struct FSaveSlotInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSData_h


#define FOREACH_ENUM_ELOADTYPEFLAGS(op) \
	op(ELoadTypeFlags::LF_Player) \
	op(ELoadTypeFlags::LF_Level) 

enum class ELoadTypeFlags : uint8;
template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadTypeFlags>();

#define FOREACH_ENUM_ESAVETYPEFLAGS(op) \
	op(ESaveTypeFlags::SF_Player) \
	op(ESaveTypeFlags::SF_Level) 

enum class ESaveTypeFlags : uint8;
template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveTypeFlags>();

#define FOREACH_ENUM_ELOADMETHOD(op) \
	op(ELoadMethod::LM_Default) \
	op(ELoadMethod::LM_Deferred) \
	op(ELoadMethod::LM_Thread) 

enum class ELoadMethod : uint8;
template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadMethod>();

#define FOREACH_ENUM_EACTORTYPE(op) \
	op(EActorType::AT_Runtime) \
	op(EActorType::AT_Placed) \
	op(EActorType::AT_LevelScript) \
	op(EActorType::AT_Player) \
	op(EActorType::AT_GameObject) \
	op(EActorType::AT_Persistent) 

enum class EActorType : uint8;
template<> EASYMULTISAVE_API UEnum* StaticEnum<EActorType>();

#define FOREACH_ENUM_EDATALOADTYPE(op) \
	op(EDataLoadType::DATA_Level) \
	op(EDataLoadType::DATA_Player) \
	op(EDataLoadType::DATA_Object) 

enum class EDataLoadType : uint8;
template<> EASYMULTISAVE_API UEnum* StaticEnum<EDataLoadType>();

#define FOREACH_ENUM_EUPDATEACTORRESULT(op) \
	op(EUpdateActorResult::RES_Success) \
	op(EUpdateActorResult::RES_Skip) \
	op(EUpdateActorResult::RES_ShouldSpawnNewActor) 

enum class EUpdateActorResult : uint8;
template<> EASYMULTISAVE_API UEnum* StaticEnum<EUpdateActorResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
