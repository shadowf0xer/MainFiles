// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_Collection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_Collection() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Collection_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Collection();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_NoRegister();
// End Cross Module References
	void ULintRule_Collection::StaticRegisterNativesULintRule_Collection()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_Collection_NoRegister()
	{
		return ULintRule_Collection::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Collection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubRules;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SubRules_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Collection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Collection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_Collection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Collection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Collection_Statics::NewProp_SubRules_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Collection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULintRule_Collection_Statics::NewProp_SubRules = { "SubRules", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Collection, SubRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULintRule_Collection_Statics::NewProp_SubRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Collection_Statics::NewProp_SubRules_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULintRule_Collection_Statics::NewProp_SubRules_Inner = { "SubRules", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULintRule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_Collection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Collection_Statics::NewProp_SubRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Collection_Statics::NewProp_SubRules_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Collection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_Collection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Collection_Statics::ClassParams = {
		&ULintRule_Collection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_Collection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Collection_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Collection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Collection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_Collection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Collection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_Collection, 2073030243);
	template<> LINTER_API UClass* StaticClass<ULintRule_Collection>()
	{
		return ULintRule_Collection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_Collection(Z_Construct_UClass_ULintRule_Collection, &ULintRule_Collection::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_Collection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_Collection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
