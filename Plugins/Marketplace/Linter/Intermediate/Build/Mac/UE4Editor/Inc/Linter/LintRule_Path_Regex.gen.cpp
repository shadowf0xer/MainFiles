// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_Path_Regex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_Path_Regex() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Path_Regex_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Path_Regex();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_Path_Regex::StaticRegisterNativesULintRule_Path_Regex()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_Path_Regex_NoRegister()
	{
		return ULintRule_Path_Regex::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Path_Regex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonConformingPathElementRecommendedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NonConformingPathElementRecommendedAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisallowedPathElementRecommendedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisallowedPathElementRecommendedAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonConformingWholePathRecommendedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NonConformingWholePathRecommendedAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisallowedWholePathRecommendedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisallowedWholePathRecommendedAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckPerPathElement_MetaData[];
#endif
		static void NewProp_bCheckPerPathElement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckPerPathElement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMustNotContainRegexPattern_MetaData[];
#endif
		static void NewProp_bMustNotContainRegexPattern_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMustNotContainRegexPattern;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegexPatternString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegexPatternString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Path_Regex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_Regex_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_Path_Regex.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_Regex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingPathElementRecommendedAction_MetaData[] = {
		{ "Category", "Settings|Path Element" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_Regex.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingPathElementRecommendedAction = { "NonConformingPathElementRecommendedAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Path_Regex, NonConformingPathElementRecommendedAction), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingPathElementRecommendedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingPathElementRecommendedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedPathElementRecommendedAction_MetaData[] = {
		{ "Category", "Settings|Path Element" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_Regex.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedPathElementRecommendedAction = { "DisallowedPathElementRecommendedAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Path_Regex, DisallowedPathElementRecommendedAction), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedPathElementRecommendedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedPathElementRecommendedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingWholePathRecommendedAction_MetaData[] = {
		{ "Category", "Settings|Whole Path" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_Regex.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingWholePathRecommendedAction = { "NonConformingWholePathRecommendedAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Path_Regex, NonConformingWholePathRecommendedAction), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingWholePathRecommendedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingWholePathRecommendedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedWholePathRecommendedAction_MetaData[] = {
		{ "Category", "Settings|Whole Path" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_Regex.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedWholePathRecommendedAction = { "DisallowedWholePathRecommendedAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Path_Regex, DisallowedWholePathRecommendedAction), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedWholePathRecommendedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedWholePathRecommendedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bCheckPerPathElement_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_Regex.h" },
	};
#endif
	void Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bCheckPerPathElement_SetBit(void* Obj)
	{
		((ULintRule_Path_Regex*)Obj)->bCheckPerPathElement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bCheckPerPathElement = { "bCheckPerPathElement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULintRule_Path_Regex), &Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bCheckPerPathElement_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bCheckPerPathElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bCheckPerPathElement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bMustNotContainRegexPattern_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_Regex.h" },
	};
#endif
	void Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bMustNotContainRegexPattern_SetBit(void* Obj)
	{
		((ULintRule_Path_Regex*)Obj)->bMustNotContainRegexPattern = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bMustNotContainRegexPattern = { "bMustNotContainRegexPattern", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULintRule_Path_Regex), &Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bMustNotContainRegexPattern_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bMustNotContainRegexPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bMustNotContainRegexPattern_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_RegexPatternString_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_Regex.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_RegexPatternString = { "RegexPatternString", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Path_Regex, RegexPatternString), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_RegexPatternString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_RegexPatternString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_Path_Regex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingPathElementRecommendedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedPathElementRecommendedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_NonConformingWholePathRecommendedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_DisallowedWholePathRecommendedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bCheckPerPathElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_bMustNotContainRegexPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_Regex_Statics::NewProp_RegexPatternString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Path_Regex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_Path_Regex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Path_Regex_Statics::ClassParams = {
		&ULintRule_Path_Regex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_Path_Regex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_Regex_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_Regex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_Regex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_Path_Regex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Path_Regex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_Path_Regex, 1387575261);
	template<> LINTER_API UClass* StaticClass<ULintRule_Path_Regex>()
	{
		return ULintRule_Path_Regex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_Path_Regex(Z_Construct_UClass_ULintRule_Path_Regex, &ULintRule_Path_Regex::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_Path_Regex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_Path_Regex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
