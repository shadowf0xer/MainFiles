// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/FLowEntryRegexMatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLowEntryRegexMatch() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexMatch();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup();
// End Cross Module References
class UScriptStruct* FLowEntryRegexMatch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOWENTRYEXTENDEDSTANDARDLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FLowEntryRegexMatch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowEntryRegexMatch, Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("LowEntryRegexMatch"), sizeof(FLowEntryRegexMatch), Get_Z_Construct_UScriptStruct_FLowEntryRegexMatch_Hash());
	}
	return Singleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UScriptStruct* StaticStruct<FLowEntryRegexMatch>()
{
	return FLowEntryRegexMatch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLowEntryRegexMatch(FLowEntryRegexMatch::StaticStruct, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("LowEntryRegexMatch"), false, nullptr, nullptr);
static struct FScriptStruct_LowEntryExtendedStandardLibrary_StaticRegisterNativesFLowEntryRegexMatch
{
	FScriptStruct_LowEntryExtendedStandardLibrary_StaticRegisterNativesFLowEntryRegexMatch()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LowEntryRegexMatch")),new UScriptStruct::TCppStructOps<FLowEntryRegexMatch>);
	}
} ScriptStruct_LowEntryExtendedStandardLibrary_StaticRegisterNativesFLowEntryRegexMatch;
	struct Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CaptureGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CaptureGroups_Inner;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowEntryRegexMatch>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* These are the capture group matches of the match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
		{ "ToolTip", "These are the capture group matches of the match." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups = { "CaptureGroups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowEntryRegexMatch, CaptureGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups_Inner = { "CaptureGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLowEntryRegexCaptureGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_Match_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the text of the match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
		{ "ToolTip", "This is the text of the match." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowEntryRegexMatch, Match), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_Match_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_EndIndex_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the end index of the match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
		{ "ToolTip", "This is the end index of the match." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowEntryRegexMatch, EndIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_EndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_EndIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_BeginIndex_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the start index of the match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
		{ "ToolTip", "This is the start index of the match." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_BeginIndex = { "BeginIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowEntryRegexMatch, BeginIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_BeginIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_BeginIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_MatchNumber_MetaData[] = {
		{ "Category", "Low Entry|Extended Standard Library|Utilities|String" },
		{ "Comment", "/**\n\x09* This is the number of the match, starting with 1.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Classes/FLowEntryRegexMatch.h" },
		{ "ToolTip", "This is the number of the match, starting with 1." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_MatchNumber = { "MatchNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowEntryRegexMatch, MatchNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_MatchNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_MatchNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_CaptureGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_Match,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_BeginIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::NewProp_MatchNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
		nullptr,
		&NewStructOps,
		"LowEntryRegexMatch",
		sizeof(FLowEntryRegexMatch),
		alignof(FLowEntryRegexMatch),
		Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLowEntryRegexMatch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLowEntryRegexMatch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LowEntryRegexMatch"), sizeof(FLowEntryRegexMatch), Get_Z_Construct_UScriptStruct_FLowEntryRegexMatch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLowEntryRegexMatch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLowEntryRegexMatch_Hash() { return 3283370925U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
