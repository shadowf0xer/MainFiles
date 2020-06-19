// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSData() {}
// Cross Module References
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EActorType();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EDataLoadType();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerArchive();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelArchive();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FControllerSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelScriptSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FGameObjectSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSaveData();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	static UEnum* ELoadTypeFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadTypeFlags"));
		}
		return Singleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadTypeFlags>()
	{
		return ELoadTypeFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadTypeFlags(ELoadTypeFlags_StaticEnum, TEXT("/Script/EasyMultiSave"), TEXT("ELoadTypeFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Hash() { return 565783266U; }
	UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadTypeFlags"), 0, Get_Z_Construct_UEnum_EasyMultiSave_ELoadTypeFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadTypeFlags::LF_Player", (int64)ELoadTypeFlags::LF_Player },
				{ "ELoadTypeFlags::LF_Level", (int64)ELoadTypeFlags::LF_Level },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "LF_Level.Comment", "/** Load Level Actors and Level Blueprints. */" },
				{ "LF_Level.DisplayName", "Level Actors" },
				{ "LF_Level.Name", "ELoadTypeFlags::LF_Level" },
				{ "LF_Level.ToolTip", "Load Level Actors and Level Blueprints." },
				{ "LF_Player.Comment", "/** Load Player Controller, Pawn and Player State. */" },
				{ "LF_Player.DisplayName", "Player Actors" },
				{ "LF_Player.Name", "ELoadTypeFlags::LF_Player" },
				{ "LF_Player.ToolTip", "Load Player Controller, Pawn and Player State." },
				{ "ModuleRelativePath", "Public/EMSData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
				nullptr,
				"ELoadTypeFlags",
				"ELoadTypeFlags",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESaveTypeFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ESaveTypeFlags"));
		}
		return Singleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ESaveTypeFlags>()
	{
		return ESaveTypeFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveTypeFlags(ESaveTypeFlags_StaticEnum, TEXT("/Script/EasyMultiSave"), TEXT("ESaveTypeFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Hash() { return 3860899211U; }
	UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveTypeFlags"), 0, Get_Z_Construct_UEnum_EasyMultiSave_ESaveTypeFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveTypeFlags::SF_Player", (int64)ESaveTypeFlags::SF_Player },
				{ "ESaveTypeFlags::SF_Level", (int64)ESaveTypeFlags::SF_Level },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMSData.h" },
				{ "SF_Level.Comment", "/** Save Level Actors and Level Blueprints. */" },
				{ "SF_Level.DisplayName", "Level Actors" },
				{ "SF_Level.Name", "ESaveTypeFlags::SF_Level" },
				{ "SF_Level.ToolTip", "Save Level Actors and Level Blueprints." },
				{ "SF_Player.Comment", "/** Save Player Controller, Pawn and Player State. */" },
				{ "SF_Player.DisplayName", "Player Actors" },
				{ "SF_Player.Name", "ESaveTypeFlags::SF_Player" },
				{ "SF_Player.ToolTip", "Save Player Controller, Pawn and Player State." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
				nullptr,
				"ESaveTypeFlags",
				"ESaveTypeFlags",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELoadMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_ELoadMethod, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ELoadMethod"));
		}
		return Singleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<ELoadMethod>()
	{
		return ELoadMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadMethod(ELoadMethod_StaticEnum, TEXT("/Script/EasyMultiSave"), TEXT("ELoadMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Hash() { return 1093487166U; }
	UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadMethod"), 0, Get_Z_Construct_UEnum_EasyMultiSave_ELoadMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadMethod::LM_Default", (int64)ELoadMethod::LM_Default },
				{ "ELoadMethod::LM_Deferred", (int64)ELoadMethod::LM_Deferred },
				{ "ELoadMethod::LM_Thread", (int64)ELoadMethod::LM_Thread },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LM_Default.Comment", "/** Useful for small amounts of Actors. */" },
				{ "LM_Default.DisplayName", "Default" },
				{ "LM_Default.Name", "ELoadMethod::LM_Default" },
				{ "LM_Default.ToolTip", "Useful for small amounts of Actors." },
				{ "LM_Deferred.Comment", "/** Useful for medium amounts of Actors with lots of data or components. */" },
				{ "LM_Deferred.DisplayName", "Deferred" },
				{ "LM_Deferred.Name", "ELoadMethod::LM_Deferred" },
				{ "LM_Deferred.ToolTip", "Useful for medium amounts of Actors with lots of data or components." },
				{ "LM_Thread.Comment", "/** Useful for large amounts of Actors without many components and data. */" },
				{ "LM_Thread.DisplayName", "Multi-Thread" },
				{ "LM_Thread.Name", "ELoadMethod::LM_Thread" },
				{ "LM_Thread.ToolTip", "Useful for large amounts of Actors without many components and data." },
				{ "ModuleRelativePath", "Public/EMSData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
				nullptr,
				"ELoadMethod",
				"ELoadMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EActorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EActorType, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EActorType"));
		}
		return Singleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EActorType>()
	{
		return EActorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActorType(EActorType_StaticEnum, TEXT("/Script/EasyMultiSave"), TEXT("EActorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyMultiSave_EActorType_Hash() { return 3492935373U; }
	UEnum* Z_Construct_UEnum_EasyMultiSave_EActorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActorType"), 0, Get_Z_Construct_UEnum_EasyMultiSave_EActorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActorType::AT_Runtime", (int64)EActorType::AT_Runtime },
				{ "EActorType::AT_Placed", (int64)EActorType::AT_Placed },
				{ "EActorType::AT_LevelScript", (int64)EActorType::AT_LevelScript },
				{ "EActorType::AT_Player", (int64)EActorType::AT_Player },
				{ "EActorType::AT_GameObject", (int64)EActorType::AT_GameObject },
				{ "EActorType::AT_Persistent", (int64)EActorType::AT_Persistent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AT_GameObject.Name", "EActorType::AT_GameObject" },
				{ "AT_LevelScript.Name", "EActorType::AT_LevelScript" },
				{ "AT_Persistent.Name", "EActorType::AT_Persistent" },
				{ "AT_Placed.Name", "EActorType::AT_Placed" },
				{ "AT_Player.Name", "EActorType::AT_Player" },
				{ "AT_Runtime.Name", "EActorType::AT_Runtime" },
				{ "ModuleRelativePath", "Public/EMSData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
				nullptr,
				"EActorType",
				"EActorType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDataLoadType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EDataLoadType, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EDataLoadType"));
		}
		return Singleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EDataLoadType>()
	{
		return EDataLoadType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataLoadType(EDataLoadType_StaticEnum, TEXT("/Script/EasyMultiSave"), TEXT("EDataLoadType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Hash() { return 2901172060U; }
	UEnum* Z_Construct_UEnum_EasyMultiSave_EDataLoadType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataLoadType"), 0, Get_Z_Construct_UEnum_EasyMultiSave_EDataLoadType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataLoadType::DATA_Level", (int64)EDataLoadType::DATA_Level },
				{ "EDataLoadType::DATA_Player", (int64)EDataLoadType::DATA_Player },
				{ "EDataLoadType::DATA_Object", (int64)EDataLoadType::DATA_Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DATA_Level.Name", "EDataLoadType::DATA_Level" },
				{ "DATA_Object.Name", "EDataLoadType::DATA_Object" },
				{ "DATA_Player.Name", "EDataLoadType::DATA_Player" },
				{ "ModuleRelativePath", "Public/EMSData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
				nullptr,
				"EDataLoadType",
				"EDataLoadType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUpdateActorResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("EUpdateActorResult"));
		}
		return Singleton;
	}
	template<> EASYMULTISAVE_API UEnum* StaticEnum<EUpdateActorResult>()
	{
		return EUpdateActorResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpdateActorResult(EUpdateActorResult_StaticEnum, TEXT("/Script/EasyMultiSave"), TEXT("EUpdateActorResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Hash() { return 1384283785U; }
	UEnum* Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpdateActorResult"), 0, Get_Z_Construct_UEnum_EasyMultiSave_EUpdateActorResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpdateActorResult::RES_Success", (int64)EUpdateActorResult::RES_Success },
				{ "EUpdateActorResult::RES_Skip", (int64)EUpdateActorResult::RES_Skip },
				{ "EUpdateActorResult::RES_ShouldSpawnNewActor", (int64)EUpdateActorResult::RES_ShouldSpawnNewActor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EMSData.h" },
				{ "RES_ShouldSpawnNewActor.Name", "EUpdateActorResult::RES_ShouldSpawnNewActor" },
				{ "RES_Skip.Name", "EUpdateActorResult::RES_Skip" },
				{ "RES_Success.Name", "EUpdateActorResult::RES_Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave,
				nullptr,
				"EUpdateActorResult",
				"EUpdateActorResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPlayerArchive::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYMULTISAVE_API uint32 Get_Z_Construct_UScriptStruct_FPlayerArchive_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerArchive, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerArchive"), sizeof(FPlayerArchive), Get_Z_Construct_UScriptStruct_FPlayerArchive_Hash());
	}
	return Singleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPlayerArchive>()
{
	return FPlayerArchive::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerArchive(FPlayerArchive::StaticStruct, TEXT("/Script/EasyMultiSave"), TEXT("PlayerArchive"), false, nullptr, nullptr);
static struct FScriptStruct_EasyMultiSave_StaticRegisterNativesFPlayerArchive
{
	FScriptStruct_EasyMultiSave_StaticRegisterNativesFPlayerArchive()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerArchive")),new UScriptStruct::TCppStructOps<FPlayerArchive>);
	}
} ScriptStruct_EasyMultiSave_StaticRegisterNativesFPlayerArchive;
	struct Z_Construct_UScriptStruct_FPlayerArchive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerArchive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerArchive>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerArchive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"PlayerArchive",
		sizeof(FPlayerArchive),
		alignof(FPlayerArchive),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerArchive()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerArchive_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerArchive"), sizeof(FPlayerArchive), Get_Z_Construct_UScriptStruct_FPlayerArchive_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerArchive_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerArchive_Hash() { return 341820306U; }
class UScriptStruct* FLevelArchive::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYMULTISAVE_API uint32 Get_Z_Construct_UScriptStruct_FLevelArchive_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelArchive, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelArchive"), sizeof(FLevelArchive), Get_Z_Construct_UScriptStruct_FLevelArchive_Hash());
	}
	return Singleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FLevelArchive>()
{
	return FLevelArchive::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelArchive(FLevelArchive::StaticStruct, TEXT("/Script/EasyMultiSave"), TEXT("LevelArchive"), false, nullptr, nullptr);
static struct FScriptStruct_EasyMultiSave_StaticRegisterNativesFLevelArchive
{
	FScriptStruct_EasyMultiSave_StaticRegisterNativesFLevelArchive()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelArchive")),new UScriptStruct::TCppStructOps<FLevelArchive>);
	}
} ScriptStruct_EasyMultiSave_StaticRegisterNativesFLevelArchive;
	struct Z_Construct_UScriptStruct_FLevelArchive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelArchive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelArchive>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelArchive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"LevelArchive",
		sizeof(FLevelArchive),
		alignof(FLevelArchive),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelArchive()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelArchive_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelArchive"), sizeof(FLevelArchive), Get_Z_Construct_UScriptStruct_FLevelArchive_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelArchive_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelArchive_Hash() { return 2124090865U; }
class UScriptStruct* FControllerSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYMULTISAVE_API uint32 Get_Z_Construct_UScriptStruct_FControllerSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FControllerSaveData, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ControllerSaveData"), sizeof(FControllerSaveData), Get_Z_Construct_UScriptStruct_FControllerSaveData_Hash());
	}
	return Singleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FControllerSaveData>()
{
	return FControllerSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FControllerSaveData(FControllerSaveData::StaticStruct, TEXT("/Script/EasyMultiSave"), TEXT("ControllerSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_EasyMultiSave_StaticRegisterNativesFControllerSaveData
{
	FScriptStruct_EasyMultiSave_StaticRegisterNativesFControllerSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ControllerSaveData")),new UScriptStruct::TCppStructOps<FControllerSaveData>);
	}
} ScriptStruct_EasyMultiSave_StaticRegisterNativesFControllerSaveData;
	struct Z_Construct_UScriptStruct_FControllerSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControllerSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControllerSaveData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControllerSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"ControllerSaveData",
		sizeof(FControllerSaveData),
		alignof(FControllerSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControllerSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FControllerSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ControllerSaveData"), sizeof(FControllerSaveData), Get_Z_Construct_UScriptStruct_FControllerSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FControllerSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FControllerSaveData_Hash() { return 3774977048U; }
class UScriptStruct* FPawnSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYMULTISAVE_API uint32 Get_Z_Construct_UScriptStruct_FPawnSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnSaveData, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PawnSaveData"), sizeof(FPawnSaveData), Get_Z_Construct_UScriptStruct_FPawnSaveData_Hash());
	}
	return Singleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FPawnSaveData>()
{
	return FPawnSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPawnSaveData(FPawnSaveData::StaticStruct, TEXT("/Script/EasyMultiSave"), TEXT("PawnSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_EasyMultiSave_StaticRegisterNativesFPawnSaveData
{
	FScriptStruct_EasyMultiSave_StaticRegisterNativesFPawnSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PawnSaveData")),new UScriptStruct::TCppStructOps<FPawnSaveData>);
	}
} ScriptStruct_EasyMultiSave_StaticRegisterNativesFPawnSaveData;
	struct Z_Construct_UScriptStruct_FPawnSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPawnSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnSaveData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"PawnSaveData",
		sizeof(FPawnSaveData),
		alignof(FPawnSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPawnSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPawnSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PawnSaveData"), sizeof(FPawnSaveData), Get_Z_Construct_UScriptStruct_FPawnSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPawnSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPawnSaveData_Hash() { return 2505318494U; }
class UScriptStruct* FLevelScriptSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYMULTISAVE_API uint32 Get_Z_Construct_UScriptStruct_FLevelScriptSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelScriptSaveData, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelScriptSaveData"), sizeof(FLevelScriptSaveData), Get_Z_Construct_UScriptStruct_FLevelScriptSaveData_Hash());
	}
	return Singleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FLevelScriptSaveData>()
{
	return FLevelScriptSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelScriptSaveData(FLevelScriptSaveData::StaticStruct, TEXT("/Script/EasyMultiSave"), TEXT("LevelScriptSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_EasyMultiSave_StaticRegisterNativesFLevelScriptSaveData
{
	FScriptStruct_EasyMultiSave_StaticRegisterNativesFLevelScriptSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelScriptSaveData")),new UScriptStruct::TCppStructOps<FLevelScriptSaveData>);
	}
} ScriptStruct_EasyMultiSave_StaticRegisterNativesFLevelScriptSaveData;
	struct Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelScriptSaveData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"LevelScriptSaveData",
		sizeof(FLevelScriptSaveData),
		alignof(FLevelScriptSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelScriptSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelScriptSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelScriptSaveData"), sizeof(FLevelScriptSaveData), Get_Z_Construct_UScriptStruct_FLevelScriptSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelScriptSaveData_Hash() { return 1802650321U; }
class UScriptStruct* FActorSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYMULTISAVE_API uint32 Get_Z_Construct_UScriptStruct_FActorSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSaveData, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ActorSaveData"), sizeof(FActorSaveData), Get_Z_Construct_UScriptStruct_FActorSaveData_Hash());
	}
	return Singleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FActorSaveData>()
{
	return FActorSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSaveData(FActorSaveData::StaticStruct, TEXT("/Script/EasyMultiSave"), TEXT("ActorSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_EasyMultiSave_StaticRegisterNativesFActorSaveData
{
	FScriptStruct_EasyMultiSave_StaticRegisterNativesFActorSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSaveData")),new UScriptStruct::TCppStructOps<FActorSaveData>);
	}
} ScriptStruct_EasyMultiSave_StaticRegisterNativesFActorSaveData;
	struct Z_Construct_UScriptStruct_FActorSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSaveData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"ActorSaveData",
		sizeof(FActorSaveData),
		alignof(FActorSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSaveData"), sizeof(FActorSaveData), Get_Z_Construct_UScriptStruct_FActorSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSaveData_Hash() { return 2088438962U; }
class UScriptStruct* FGameObjectSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYMULTISAVE_API uint32 Get_Z_Construct_UScriptStruct_FGameObjectSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameObjectSaveData, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("GameObjectSaveData"), sizeof(FGameObjectSaveData), Get_Z_Construct_UScriptStruct_FGameObjectSaveData_Hash());
	}
	return Singleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FGameObjectSaveData>()
{
	return FGameObjectSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameObjectSaveData(FGameObjectSaveData::StaticStruct, TEXT("/Script/EasyMultiSave"), TEXT("GameObjectSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_EasyMultiSave_StaticRegisterNativesFGameObjectSaveData
{
	FScriptStruct_EasyMultiSave_StaticRegisterNativesFGameObjectSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameObjectSaveData")),new UScriptStruct::TCppStructOps<FGameObjectSaveData>);
	}
} ScriptStruct_EasyMultiSave_StaticRegisterNativesFGameObjectSaveData;
	struct Z_Construct_UScriptStruct_FGameObjectSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameObjectSaveData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"GameObjectSaveData",
		sizeof(FGameObjectSaveData),
		alignof(FGameObjectSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameObjectSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameObjectSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameObjectSaveData"), sizeof(FGameObjectSaveData), Get_Z_Construct_UScriptStruct_FGameObjectSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameObjectSaveData_Hash() { return 1139064703U; }
class UScriptStruct* FComponentSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYMULTISAVE_API uint32 Get_Z_Construct_UScriptStruct_FComponentSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSaveData, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ComponentSaveData"), sizeof(FComponentSaveData), Get_Z_Construct_UScriptStruct_FComponentSaveData_Hash());
	}
	return Singleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FComponentSaveData>()
{
	return FComponentSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentSaveData(FComponentSaveData::StaticStruct, TEXT("/Script/EasyMultiSave"), TEXT("ComponentSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_EasyMultiSave_StaticRegisterNativesFComponentSaveData
{
	FScriptStruct_EasyMultiSave_StaticRegisterNativesFComponentSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentSaveData")),new UScriptStruct::TCppStructOps<FComponentSaveData>);
	}
} ScriptStruct_EasyMultiSave_StaticRegisterNativesFComponentSaveData;
	struct Z_Construct_UScriptStruct_FComponentSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSaveData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"ComponentSaveData",
		sizeof(FComponentSaveData),
		alignof(FComponentSaveData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentSaveData"), sizeof(FComponentSaveData), Get_Z_Construct_UScriptStruct_FComponentSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentSaveData_Hash() { return 905358900U; }
class UScriptStruct* FSaveSlotInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYMULTISAVE_API uint32 Get_Z_Construct_UScriptStruct_FSaveSlotInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveSlotInfo, Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("SaveSlotInfo"), sizeof(FSaveSlotInfo), Get_Z_Construct_UScriptStruct_FSaveSlotInfo_Hash());
	}
	return Singleton;
}
template<> EASYMULTISAVE_API UScriptStruct* StaticStruct<FSaveSlotInfo>()
{
	return FSaveSlotInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveSlotInfo(FSaveSlotInfo::StaticStruct, TEXT("/Script/EasyMultiSave"), TEXT("SaveSlotInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EasyMultiSave_StaticRegisterNativesFSaveSlotInfo
{
	FScriptStruct_EasyMultiSave_StaticRegisterNativesFSaveSlotInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveSlotInfo")),new UScriptStruct::TCppStructOps<FSaveSlotInfo>);
	}
} ScriptStruct_EasyMultiSave_StaticRegisterNativesFSaveSlotInfo;
	struct Z_Construct_UScriptStruct_FSaveSlotInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveSlotInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveSlotInfo, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveSlotInfo, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveSlotInfo, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "ModuleRelativePath", "Public/EMSData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveSlotInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
		nullptr,
		&NewStructOps,
		"SaveSlotInfo",
		sizeof(FSaveSlotInfo),
		alignof(FSaveSlotInfo),
		Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveSlotInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyMultiSave();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveSlotInfo"), sizeof(FSaveSlotInfo), Get_Z_Construct_UScriptStruct_FSaveSlotInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveSlotInfo_Hash() { return 203114608U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
