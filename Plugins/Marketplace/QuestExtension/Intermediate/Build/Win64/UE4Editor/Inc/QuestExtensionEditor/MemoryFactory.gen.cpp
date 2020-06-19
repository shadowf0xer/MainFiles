// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/MemoryFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemoryFactory() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UMemoryFactory_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UMemoryFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
// End Cross Module References
	void UMemoryFactory::StaticRegisterNativesUMemoryFactory()
	{
	}
	UClass* Z_Construct_UClass_UMemoryFactory_NoRegister()
	{
		return UMemoryFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMemoryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMemoryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMemoryFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asset/MemoryFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/MemoryFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMemoryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMemoryFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMemoryFactory_Statics::ClassParams = {
		&UMemoryFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMemoryFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMemoryFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMemoryFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMemoryFactory, 724546468);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UMemoryFactory>()
	{
		return UMemoryFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMemoryFactory(Z_Construct_UClass_UMemoryFactory, &UMemoryFactory::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UMemoryFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMemoryFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
