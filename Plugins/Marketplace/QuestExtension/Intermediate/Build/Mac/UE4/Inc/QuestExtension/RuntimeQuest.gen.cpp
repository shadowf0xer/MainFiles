// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/RuntimeQuest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeQuest() {}
// Cross Module References
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeQuest();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FRuntimeQuest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeQuest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeQuest, Z_Construct_UPackage__Script_QuestExtension(), TEXT("RuntimeQuest"), sizeof(FRuntimeQuest), Get_Z_Construct_UScriptStruct_FRuntimeQuest_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FRuntimeQuest>()
{
	return FRuntimeQuest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeQuest(FRuntimeQuest::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("RuntimeQuest"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFRuntimeQuest
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFRuntimeQuest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeQuest")),new UScriptStruct::TCppStructOps<FRuntimeQuest>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFRuntimeQuest;
	struct Z_Construct_UScriptStruct_FRuntimeQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeQuest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a Quest in runtime\n */" },
		{ "ModuleRelativePath", "Public/Quests/RuntimeQuest.h" },
		{ "ToolTip", "Represents a Quest in runtime" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeQuest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_QuestScript_MetaData[] = {
		{ "Category", "Runtime" },
		{ "DisplayName", "Script" },
		{ "ModuleRelativePath", "Public/Quests/RuntimeQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_QuestScript = { "QuestScript", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeQuest, QuestScript), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_QuestScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_QuestScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Asset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/RuntimeQuest.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeQuest, Asset), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Manager_MetaData[] = {
		{ "Category", "Runtime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/RuntimeQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x001000000108001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeQuest, Manager), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_QuestScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeQuest_Statics::NewProp_Manager,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeQuest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"RuntimeQuest",
		sizeof(FRuntimeQuest),
		alignof(FRuntimeQuest),
		Z_Construct_UScriptStruct_FRuntimeQuest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeQuest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeQuest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeQuest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeQuest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeQuest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeQuest"), sizeof(FRuntimeQuest), Get_Z_Construct_UScriptStruct_FRuntimeQuest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeQuest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeQuest_Hash() { return 2018301718U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
