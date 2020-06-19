// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SaveFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveFilter() {}
// Cross Module References
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSaveFilter();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FComponentClassFilter();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FActorClassFilter();
// End Cross Module References
class UScriptStruct* FSaveFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FSaveFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveFilter, Z_Construct_UPackage__Script_SaveExtension(), TEXT("SaveFilter"), sizeof(FSaveFilter), Get_Z_Construct_UScriptStruct_FSaveFilter_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FSaveFilter>()
{
	return FSaveFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveFilter(FSaveFilter::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("SaveFilter"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFSaveFilter
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFSaveFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveFilter")),new UScriptStruct::TCppStructOps<FSaveFilter>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFSaveFilter;
	struct Z_Construct_UScriptStruct_FSaveFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreControlRotation_MetaData[];
#endif
		static void NewProp_bStoreControlRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreControlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreLevelBlueprints_MetaData[];
#endif
		static void NewProp_bStoreLevelBlueprints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreLevelBlueprints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreGameInstance_MetaData[];
#endif
		static void NewProp_bStoreGameInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreGameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFrameMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFrameMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadComponentFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadComponentFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoreComponents_MetaData[];
#endif
		static void NewProp_bStoreComponents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoreComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadActorFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadActorFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains all settings that affect saving.\n * This information is saved to be restored while loading.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
		{ "ToolTip", "Contains all settings that affect saving.\nThis information is saved to be restored while loading." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreControlRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreControlRotation_SetBit(void* Obj)
	{
		((FSaveFilter*)Obj)->bStoreControlRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreControlRotation = { "bStoreControlRotation", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveFilter), &Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreControlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreLevelBlueprints_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreLevelBlueprints_SetBit(void* Obj)
	{
		((FSaveFilter*)Obj)->bStoreLevelBlueprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreLevelBlueprints = { "bStoreLevelBlueprints", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveFilter), &Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreLevelBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreLevelBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreLevelBlueprints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreGameInstance_SetBit(void* Obj)
	{
		((FSaveFilter*)Obj)->bStoreGameInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreGameInstance = { "bStoreGameInstance", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveFilter), &Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreGameInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreGameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_MaxFrameMs_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_MaxFrameMs = { "MaxFrameMs", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveFilter, MaxFrameMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_MaxFrameMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_MaxFrameMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadComponentFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadComponentFilter = { "LoadComponentFilter", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveFilter, LoadComponentFilter), Z_Construct_UScriptStruct_FComponentClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadComponentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadComponentFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ComponentFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ComponentFilter = { "ComponentFilter", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveFilter, ComponentFilter), Z_Construct_UScriptStruct_FComponentClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ComponentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ComponentFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreComponents_SetBit(void* Obj)
	{
		((FSaveFilter*)Obj)->bStoreComponents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreComponents = { "bStoreComponents", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveFilter), &Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreComponents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadActorFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadActorFilter = { "LoadActorFilter", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveFilter, LoadActorFilter), Z_Construct_UScriptStruct_FActorClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadActorFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveFilter, ActorFilter), Z_Construct_UScriptStruct_FActorClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ActorFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreLevelBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreGameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_MaxFrameMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadComponentFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ComponentFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_bStoreComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_LoadActorFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveFilter_Statics::NewProp_ActorFilter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"SaveFilter",
		sizeof(FSaveFilter),
		alignof(FSaveFilter),
		Z_Construct_UScriptStruct_FSaveFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveFilter"), sizeof(FSaveFilter), Get_Z_Construct_UScriptStruct_FSaveFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveFilter_Hash() { return 563892247U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
