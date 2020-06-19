// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_SoundWave_SampleRate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_SoundWave_SampleRate() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_SoundWave_SampleRate_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_SoundWave_SampleRate();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_SoundWave_SampleRate::StaticRegisterNativesULintRule_SoundWave_SampleRate()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_SoundWave_SampleRate_NoRegister()
	{
		return ULintRule_SoundWave_SampleRate::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidSampleRates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidSampleRates;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValidSampleRates_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_SoundWave_SampleRate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_SoundWave_SampleRate.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::NewProp_ValidSampleRates_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_SoundWave_SampleRate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::NewProp_ValidSampleRates = { "ValidSampleRates", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_SoundWave_SampleRate, ValidSampleRates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::NewProp_ValidSampleRates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::NewProp_ValidSampleRates_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::NewProp_ValidSampleRates_Inner = { "ValidSampleRates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::NewProp_ValidSampleRates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::NewProp_ValidSampleRates_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_SoundWave_SampleRate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::ClassParams = {
		&ULintRule_SoundWave_SampleRate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_SoundWave_SampleRate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_SoundWave_SampleRate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_SoundWave_SampleRate, 1650093472);
	template<> LINTER_API UClass* StaticClass<ULintRule_SoundWave_SampleRate>()
	{
		return ULintRule_SoundWave_SampleRate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_SoundWave_SampleRate(Z_Construct_UClass_ULintRule_SoundWave_SampleRate, &ULintRule_SoundWave_SampleRate::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_SoundWave_SampleRate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_SoundWave_SampleRate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
