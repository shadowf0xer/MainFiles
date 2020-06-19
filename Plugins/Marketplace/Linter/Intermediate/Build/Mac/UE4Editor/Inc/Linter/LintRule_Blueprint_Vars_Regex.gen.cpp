// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_Blueprint_Vars_Regex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_Blueprint_Vars_Regex() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Blueprint_Base();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_Blueprint_Vars_Regex::StaticRegisterNativesULintRule_Blueprint_Vars_Regex()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_NoRegister()
	{
		return ULintRule_Blueprint_Vars_Regex::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMustNotContainRegexPattern_MetaData[];
#endif
		static void NewProp_bMustNotContainRegexPattern_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMustNotContainRegexPattern;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegexPatternString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegexPatternString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLowercaseBPrefixForBooleans_MetaData[];
#endif
		static void NewProp_bUseLowercaseBPrefixForBooleans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLowercaseBPrefixForBooleans;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule_Blueprint_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_Blueprint_Vars_Regex.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Blueprint_Vars_Regex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bMustNotContainRegexPattern_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Blueprint_Vars_Regex.h" },
	};
#endif
	void Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bMustNotContainRegexPattern_SetBit(void* Obj)
	{
		((ULintRule_Blueprint_Vars_Regex*)Obj)->bMustNotContainRegexPattern = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bMustNotContainRegexPattern = { "bMustNotContainRegexPattern", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULintRule_Blueprint_Vars_Regex), &Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bMustNotContainRegexPattern_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bMustNotContainRegexPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bMustNotContainRegexPattern_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_RegexPatternString_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Blueprint_Vars_Regex.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_RegexPatternString = { "RegexPatternString", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Blueprint_Vars_Regex, RegexPatternString), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_RegexPatternString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_RegexPatternString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bUseLowercaseBPrefixForBooleans_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Blueprint_Vars_Regex.h" },
	};
#endif
	void Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bUseLowercaseBPrefixForBooleans_SetBit(void* Obj)
	{
		((ULintRule_Blueprint_Vars_Regex*)Obj)->bUseLowercaseBPrefixForBooleans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bUseLowercaseBPrefixForBooleans = { "bUseLowercaseBPrefixForBooleans", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULintRule_Blueprint_Vars_Regex), &Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bUseLowercaseBPrefixForBooleans_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bUseLowercaseBPrefixForBooleans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bUseLowercaseBPrefixForBooleans_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bMustNotContainRegexPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_RegexPatternString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::NewProp_bUseLowercaseBPrefixForBooleans,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_Blueprint_Vars_Regex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::ClassParams = {
		&ULintRule_Blueprint_Vars_Regex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_Blueprint_Vars_Regex, 1847347292);
	template<> LINTER_API UClass* StaticClass<ULintRule_Blueprint_Vars_Regex>()
	{
		return ULintRule_Blueprint_Vars_Regex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_Blueprint_Vars_Regex(Z_Construct_UClass_ULintRule_Blueprint_Vars_Regex, &ULintRule_Blueprint_Vars_Regex::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_Blueprint_Vars_Regex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_Blueprint_Vars_Regex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
