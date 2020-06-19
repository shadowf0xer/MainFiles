// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_StaticMesh_ValidUVs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_StaticMesh_ValidUVs() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_StaticMesh_ValidUVs::StaticRegisterNativesULintRule_StaticMesh_ValidUVs()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_NoRegister()
	{
		return ULintRule_StaticMesh_ValidUVs::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMissingUVs_MetaData[];
#endif
		static void NewProp_bIgnoreMissingUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMissingUVs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_StaticMesh_ValidUVs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_StaticMesh_ValidUVs.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::NewProp_bIgnoreMissingUVs_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_StaticMesh_ValidUVs.h" },
	};
#endif
	void Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::NewProp_bIgnoreMissingUVs_SetBit(void* Obj)
	{
		((ULintRule_StaticMesh_ValidUVs*)Obj)->bIgnoreMissingUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::NewProp_bIgnoreMissingUVs = { "bIgnoreMissingUVs", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULintRule_StaticMesh_ValidUVs), &Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::NewProp_bIgnoreMissingUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::NewProp_bIgnoreMissingUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::NewProp_bIgnoreMissingUVs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::NewProp_bIgnoreMissingUVs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_StaticMesh_ValidUVs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::ClassParams = {
		&ULintRule_StaticMesh_ValidUVs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_StaticMesh_ValidUVs, 359969450);
	template<> LINTER_API UClass* StaticClass<ULintRule_StaticMesh_ValidUVs>()
	{
		return ULintRule_StaticMesh_ValidUVs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_StaticMesh_ValidUVs(Z_Construct_UClass_ULintRule_StaticMesh_ValidUVs, &ULintRule_StaticMesh_ValidUVs::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_StaticMesh_ValidUVs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_StaticMesh_ValidUVs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
