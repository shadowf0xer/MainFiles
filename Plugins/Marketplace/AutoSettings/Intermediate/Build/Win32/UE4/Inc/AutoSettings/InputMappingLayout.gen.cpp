// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/InputMappingLayout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingLayout() {}
// Cross Module References
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingLayout();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup();
// End Cross Module References
class UScriptStruct* FInputMappingLayout::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FInputMappingLayout_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingLayout, Z_Construct_UPackage__Script_AutoSettings(), TEXT("InputMappingLayout"), sizeof(FInputMappingLayout), Get_Z_Construct_UScriptStruct_FInputMappingLayout_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<FInputMappingLayout>()
{
	return FInputMappingLayout::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputMappingLayout(FInputMappingLayout::StaticStruct, TEXT("/Script/AutoSettings"), TEXT("InputMappingLayout"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettings_StaticRegisterNativesFInputMappingLayout
{
	FScriptStruct_AutoSettings_StaticRegisterNativesFInputMappingLayout()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputMappingLayout")),new UScriptStruct::TCppStructOps<FInputMappingLayout>);
	}
} ScriptStruct_AutoSettings_StaticRegisterNativesFInputMappingLayout;
	struct Z_Construct_UScriptStruct_FInputMappingLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappingGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappingGroups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingLayout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InputMapping/InputMappingLayout.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingLayout>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups_MetaData[] = {
		{ "Category", "Input Mapping Preset" },
		{ "EditCondition", "!bUseDefaultMappings" },
		{ "ModuleRelativePath", "Public/InputMapping/InputMappingLayout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups = { "MappingGroups", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingLayout, MappingGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups_Inner = { "MappingGroups", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputMappingGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingLayout_Statics::NewProp_MappingGroups_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
		nullptr,
		&NewStructOps,
		"InputMappingLayout",
		sizeof(FInputMappingLayout),
		alignof(FInputMappingLayout),
		Z_Construct_UScriptStruct_FInputMappingLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingLayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingLayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingLayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputMappingLayout()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputMappingLayout_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputMappingLayout"), sizeof(FInputMappingLayout), Get_Z_Construct_UScriptStruct_FInputMappingLayout_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputMappingLayout_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputMappingLayout_Hash() { return 1077265737U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
