// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LinterSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinterSettings() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULinterSettings_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULinterSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Linter();
	LINTER_API UClass* Z_Construct_UClass_ULintRuleSet_NoRegister();
// End Cross Module References
	void ULinterSettings::StaticRegisterNativesULinterSettings()
	{
	}
	UClass* Z_Construct_UClass_ULinterSettings_NoRegister()
	{
		return ULinterSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULinterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLintRuleSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLintRuleSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinterSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the Linter plugin.\n*/" },
		{ "IncludePath", "LinterSettings.h" },
		{ "ModuleRelativePath", "Public/LinterSettings.h" },
		{ "ToolTip", "Implements the settings for the Linter plugin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinterSettings_Statics::NewProp_DefaultLintRuleSet_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LinterSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULinterSettings_Statics::NewProp_DefaultLintRuleSet = { "DefaultLintRuleSet", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULinterSettings, DefaultLintRuleSet), Z_Construct_UClass_ULintRuleSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULinterSettings_Statics::NewProp_DefaultLintRuleSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinterSettings_Statics::NewProp_DefaultLintRuleSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULinterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinterSettings_Statics::NewProp_DefaultLintRuleSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinterSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULinterSettings_Statics::ClassParams = {
		&ULinterSettings::StaticClass,
		"Linter",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULinterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULinterSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULinterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULinterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinterSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULinterSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULinterSettings, 1149655089);
	template<> LINTER_API UClass* StaticClass<ULinterSettings>()
	{
		return ULinterSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULinterSettings(Z_Construct_UClass_ULinterSettings, &ULinterSettings::StaticClass, TEXT("/Script/Linter"), TEXT("ULinterSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinterSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
