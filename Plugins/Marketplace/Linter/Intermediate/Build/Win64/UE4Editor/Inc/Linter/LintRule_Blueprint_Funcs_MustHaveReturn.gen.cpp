// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_Blueprint_Funcs_MustHaveReturn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_Blueprint_Funcs_MustHaveReturn() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Blueprint_Base();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_Blueprint_Funcs_MustHaveReturn::StaticRegisterNativesULintRule_Blueprint_Funcs_MustHaveReturn()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_NoRegister()
	{
		return ULintRule_Blueprint_Funcs_MustHaveReturn::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule_Blueprint_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_Blueprint_Funcs_MustHaveReturn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Blueprint_Funcs_MustHaveReturn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_Blueprint_Funcs_MustHaveReturn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_Statics::ClassParams = {
		&ULintRule_Blueprint_Funcs_MustHaveReturn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_Blueprint_Funcs_MustHaveReturn, 3875299076);
	template<> LINTER_API UClass* StaticClass<ULintRule_Blueprint_Funcs_MustHaveReturn>()
	{
		return ULintRule_Blueprint_Funcs_MustHaveReturn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn(Z_Construct_UClass_ULintRule_Blueprint_Funcs_MustHaveReturn, &ULintRule_Blueprint_Funcs_MustHaveReturn::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_Blueprint_Funcs_MustHaveReturn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_Blueprint_Funcs_MustHaveReturn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif