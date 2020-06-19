// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_ParticleSystem_EmitterNameRegex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_ParticleSystem_EmitterNameRegex() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_ParticleSystem_EmitterNameRegex::StaticRegisterNativesULintRule_ParticleSystem_EmitterNameRegex()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_NoRegister()
	{
		return ULintRule_ParticleSystem_EmitterNameRegex::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonConformingRecommendedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NonConformingRecommendedAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisallowedRecommendedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisallowedRecommendedAction;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinEmittersNeededToEnforce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinEmittersNeededToEnforce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_ParticleSystem_EmitterNameRegex.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_ParticleSystem_EmitterNameRegex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_NonConformingRecommendedAction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_ParticleSystem_EmitterNameRegex.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_NonConformingRecommendedAction = { "NonConformingRecommendedAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_ParticleSystem_EmitterNameRegex, NonConformingRecommendedAction), METADATA_PARAMS(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_NonConformingRecommendedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_NonConformingRecommendedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_DisallowedRecommendedAction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_ParticleSystem_EmitterNameRegex.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_DisallowedRecommendedAction = { "DisallowedRecommendedAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_ParticleSystem_EmitterNameRegex, DisallowedRecommendedAction), METADATA_PARAMS(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_DisallowedRecommendedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_DisallowedRecommendedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_bMustNotContainRegexPattern_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_ParticleSystem_EmitterNameRegex.h" },
	};
#endif
	void Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_bMustNotContainRegexPattern_SetBit(void* Obj)
	{
		((ULintRule_ParticleSystem_EmitterNameRegex*)Obj)->bMustNotContainRegexPattern = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_bMustNotContainRegexPattern = { "bMustNotContainRegexPattern", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULintRule_ParticleSystem_EmitterNameRegex), &Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_bMustNotContainRegexPattern_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_bMustNotContainRegexPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_bMustNotContainRegexPattern_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_RegexPatternString_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_ParticleSystem_EmitterNameRegex.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_RegexPatternString = { "RegexPatternString", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_ParticleSystem_EmitterNameRegex, RegexPatternString), METADATA_PARAMS(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_RegexPatternString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_RegexPatternString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_MinEmittersNeededToEnforce_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_ParticleSystem_EmitterNameRegex.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_MinEmittersNeededToEnforce = { "MinEmittersNeededToEnforce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_ParticleSystem_EmitterNameRegex, MinEmittersNeededToEnforce), METADATA_PARAMS(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_MinEmittersNeededToEnforce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_MinEmittersNeededToEnforce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_NonConformingRecommendedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_DisallowedRecommendedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_bMustNotContainRegexPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_RegexPatternString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::NewProp_MinEmittersNeededToEnforce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_ParticleSystem_EmitterNameRegex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::ClassParams = {
		&ULintRule_ParticleSystem_EmitterNameRegex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_ParticleSystem_EmitterNameRegex, 2416884584);
	template<> LINTER_API UClass* StaticClass<ULintRule_ParticleSystem_EmitterNameRegex>()
	{
		return ULintRule_ParticleSystem_EmitterNameRegex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_ParticleSystem_EmitterNameRegex(Z_Construct_UClass_ULintRule_ParticleSystem_EmitterNameRegex, &ULintRule_ParticleSystem_EmitterNameRegex::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_ParticleSystem_EmitterNameRegex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_ParticleSystem_EmitterNameRegex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
