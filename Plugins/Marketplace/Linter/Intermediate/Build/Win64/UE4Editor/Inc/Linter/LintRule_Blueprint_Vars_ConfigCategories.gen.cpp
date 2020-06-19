// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_Blueprint_Vars_ConfigCategories.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_Blueprint_Vars_ConfigCategories() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Blueprint_Base();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_Blueprint_Vars_ConfigCategories::StaticRegisterNativesULintRule_Blueprint_Vars_ConfigCategories()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_NoRegister()
	{
		return ULintRule_Blueprint_Vars_ConfigCategories::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumVariablesToRequireCategorization_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumVariablesToRequireCategorization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule_Blueprint_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_Blueprint_Vars_ConfigCategories.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Blueprint_Vars_ConfigCategories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::NewProp_NumVariablesToRequireCategorization_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Blueprint_Vars_ConfigCategories.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::NewProp_NumVariablesToRequireCategorization = { "NumVariablesToRequireCategorization", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Blueprint_Vars_ConfigCategories, NumVariablesToRequireCategorization), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::NewProp_NumVariablesToRequireCategorization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::NewProp_NumVariablesToRequireCategorization_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::NewProp_NumVariablesToRequireCategorization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_Blueprint_Vars_ConfigCategories>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::ClassParams = {
		&ULintRule_Blueprint_Vars_ConfigCategories::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_Blueprint_Vars_ConfigCategories, 2566933583);
	template<> LINTER_API UClass* StaticClass<ULintRule_Blueprint_Vars_ConfigCategories>()
	{
		return ULintRule_Blueprint_Vars_ConfigCategories::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_Blueprint_Vars_ConfigCategories(Z_Construct_UClass_ULintRule_Blueprint_Vars_ConfigCategories, &ULintRule_Blueprint_Vars_ConfigCategories::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_Blueprint_Vars_ConfigCategories"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_Blueprint_Vars_ConfigCategories);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
