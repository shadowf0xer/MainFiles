// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/FLowEntryRegexCaptureGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLowEntryRegexCaptureGroup() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
class UScriptStruct* FLowEntryRegexCaptureGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOWENTRYEXTENDEDSTANDARDLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup, Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("LowEntryRegexCaptureGroup"), sizeof(FLowEntryRegexCaptureGroup), Get_Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Hash());
	}
	return Singleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UScriptStruct* StaticStruct<FLowEntryRegexCaptureGroup>()
{
	return FLowEntryRegexCaptureGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLowEntryRegexCaptureGroup(FLowEntryRegexCaptureGroup::StaticStruct, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("LowEntryRegexCaptureGroup"), false, nullptr, nullptr);
static struct FScriptStruct_LowEntryExtendedStandardLibrary_StaticRegisterNativesFLowEntryRegexCaptureGroup
{
	FScriptStruct_LowEntryExtendedStandardLibrary_StaticRegisterNativesFLowEntryRegexCaptureGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LowEntryRegexCaptureGroup")),new UScriptStruct::TCppStructOps<FLowEntryRegexCaptureGroup>);
	}
} ScriptStruct_LowEntryExtendedStandardLibrary_StaticRegisterNativesFLowEntryRegexCaptureGroup;
	struct Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Match;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeginIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureGroupNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CaptureGroupNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowEntryRegexCaptureGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_Match_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the text of the capture group match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
		{ "ToolTip", "This is the text of the capture group match." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowEntryRegexCaptureGroup, Match), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_Match_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_EndIndex_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the end index of the capture group match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
		{ "ToolTip", "This is the end index of the capture group match." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowEntryRegexCaptureGroup, EndIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_EndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_EndIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_BeginIndex_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the start index of the capture group match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
		{ "ToolTip", "This is the start index of the capture group match." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowEntryRegexCaptureGroup, BeginIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_BeginIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_BeginIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_CaptureGroupNumber_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the number of the capture group, starting with 1.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexCaptureGroup.h" },
		{ "ToolTip", "This is the number of the capture group, starting with 1." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_CaptureGroupNumber = { "CaptureGroupNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowEntryRegexCaptureGroup, CaptureGroupNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_CaptureGroupNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_CaptureGroupNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_Match,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_BeginIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::NewProp_CaptureGroupNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
		nullptr,
		&NewStructOps,
		"LowEntryRegexCaptureGroup",
		sizeof(FLowEntryRegexCaptureGroup),
		alignof(FLowEntryRegexCaptureGroup),
		Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LowEntryRegexCaptureGroup"), sizeof(FLowEntryRegexCaptureGroup), Get_Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup_Hash() { return 3985994671U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
