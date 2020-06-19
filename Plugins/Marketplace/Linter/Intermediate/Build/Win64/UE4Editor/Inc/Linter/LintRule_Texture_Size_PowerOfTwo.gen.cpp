// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_Texture_Size_PowerOfTwo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_Texture_Size_PowerOfTwo() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
// End Cross Module References
	void ULintRule_Texture_Size_PowerOfTwo::StaticRegisterNativesULintRule_Texture_Size_PowerOfTwo()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_NoRegister()
	{
		return ULintRule_Texture_Size_PowerOfTwo::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreTexturesInTheseGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IgnoreTexturesInTheseGroups;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IgnoreTexturesInTheseGroups_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_Texture_Size_PowerOfTwo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Texture_Size_PowerOfTwo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::NewProp_IgnoreTexturesInTheseGroups_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Texture_Size_PowerOfTwo.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::NewProp_IgnoreTexturesInTheseGroups = { "IgnoreTexturesInTheseGroups", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Texture_Size_PowerOfTwo, IgnoreTexturesInTheseGroups), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::NewProp_IgnoreTexturesInTheseGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::NewProp_IgnoreTexturesInTheseGroups_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::NewProp_IgnoreTexturesInTheseGroups_ElementProp = { "IgnoreTexturesInTheseGroups", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::NewProp_IgnoreTexturesInTheseGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::NewProp_IgnoreTexturesInTheseGroups_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_Texture_Size_PowerOfTwo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::ClassParams = {
		&ULintRule_Texture_Size_PowerOfTwo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_Texture_Size_PowerOfTwo, 2242082088);
	template<> LINTER_API UClass* StaticClass<ULintRule_Texture_Size_PowerOfTwo>()
	{
		return ULintRule_Texture_Size_PowerOfTwo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_Texture_Size_PowerOfTwo(Z_Construct_UClass_ULintRule_Texture_Size_PowerOfTwo, &ULintRule_Texture_Size_PowerOfTwo::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_Texture_Size_PowerOfTwo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_Texture_Size_PowerOfTwo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
