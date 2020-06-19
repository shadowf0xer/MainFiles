// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_Texture_Size_NotTooBig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_Texture_Size_NotTooBig() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_Texture_Size_NotTooBig::StaticRegisterNativesULintRule_Texture_Size_NotTooBig()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_NoRegister()
	{
		return ULintRule_Texture_Size_NotTooBig::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTextureSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTextureSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTextureSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTextureSizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_Texture_Size_NotTooBig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Texture_Size_NotTooBig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Texture_Size_NotTooBig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeY = { "MaxTextureSizeY", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Texture_Size_NotTooBig, MaxTextureSizeY), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeX_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Texture_Size_NotTooBig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeX = { "MaxTextureSizeX", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Texture_Size_NotTooBig, MaxTextureSizeX), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::NewProp_MaxTextureSizeX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_Texture_Size_NotTooBig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::ClassParams = {
		&ULintRule_Texture_Size_NotTooBig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_Texture_Size_NotTooBig, 1735231750);
	template<> LINTER_API UClass* StaticClass<ULintRule_Texture_Size_NotTooBig>()
	{
		return ULintRule_Texture_Size_NotTooBig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_Texture_Size_NotTooBig(Z_Construct_UClass_ULintRule_Texture_Size_NotTooBig, &ULintRule_Texture_Size_NotTooBig::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_Texture_Size_NotTooBig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_Texture_Size_NotTooBig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
