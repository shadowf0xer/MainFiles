// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Classes/ReimportSubstanceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSubstanceFactory() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceFactory_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceFactory();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void UReimportSubstanceFactory::StaticRegisterNativesUReimportSubstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportSubstanceFactory_NoRegister()
	{
		return UReimportSubstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportSubstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportSubstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubstanceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSubstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//NOTE:: Function definitions located in SubstanceFactory.cpp\n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ReimportSubstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/ReimportSubstanceFactory.h" },
		{ "ToolTip", "NOTE:: Function definitions located in SubstanceFactory.cpp" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportSubstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportSubstanceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportSubstanceFactory_Statics::ClassParams = {
		&UReimportSubstanceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportSubstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSubstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportSubstanceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportSubstanceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportSubstanceFactory, 3894669197);
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<UReimportSubstanceFactory>()
	{
		return UReimportSubstanceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportSubstanceFactory(Z_Construct_UClass_UReimportSubstanceFactory, &UReimportSubstanceFactory::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("UReimportSubstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSubstanceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
