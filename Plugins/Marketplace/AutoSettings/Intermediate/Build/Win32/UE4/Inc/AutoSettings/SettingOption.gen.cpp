// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/SettingOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingOption() {}
// Cross Module References
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
class UScriptStruct* FSettingOption::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FSettingOption_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettingOption, Z_Construct_UPackage__Script_AutoSettings(), TEXT("SettingOption"), sizeof(FSettingOption), Get_Z_Construct_UScriptStruct_FSettingOption_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<FSettingOption>()
{
	return FSettingOption::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSettingOption(FSettingOption::StaticStruct, TEXT("/Script/AutoSettings"), TEXT("SettingOption"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettings_StaticRegisterNativesFSettingOption
{
	FScriptStruct_AutoSettings_StaticRegisterNativesFSettingOption()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SettingOption")),new UScriptStruct::TCppStructOps<FSettingOption>);
	}
} ScriptStruct_AutoSettings_StaticRegisterNativesFSettingOption;
	struct Z_Construct_UScriptStruct_FSettingOption_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Display label / internal value pair\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/SettingOption.h" },
		{ "ToolTip", "Display label / internal value pair" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSettingOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettingOption>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Option" },
		{ "Comment", "// Internal value that the console variable will be set to - If blank will use the array index of the element\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingOption.h" },
		{ "ToolTip", "Internal value that the console variable will be set to - If blank will use the array index of the element" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingOption, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Option" },
		{ "Comment", "// Display label\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingOption.h" },
		{ "ToolTip", "Display label" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingOption, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettingOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingOption_Statics::NewProp_Label,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettingOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
		nullptr,
		&NewStructOps,
		"SettingOption",
		sizeof(FSettingOption),
		alignof(FSettingOption),
		Z_Construct_UScriptStruct_FSettingOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSettingOption()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSettingOption_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SettingOption"), sizeof(FSettingOption), Get_Z_Construct_UScriptStruct_FSettingOption_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSettingOption_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSettingOption_Hash() { return 630543708U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
