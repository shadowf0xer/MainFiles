// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/SavePresetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavePresetFactory() {}
// Cross Module References
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USavePresetFactory_NoRegister();
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USavePresetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SaveExtensionEditor();
// End Cross Module References
	void USavePresetFactory::StaticRegisterNativesUSavePresetFactory()
	{
	}
	UClass* Z_Construct_UClass_USavePresetFactory_NoRegister()
	{
		return USavePresetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USavePresetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USavePresetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePresetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asset/SavePresetFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/SavePresetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavePresetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavePresetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USavePresetFactory_Statics::ClassParams = {
		&USavePresetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USavePresetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USavePresetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USavePresetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USavePresetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USavePresetFactory, 2545791119);
	template<> SAVEEXTENSIONEDITOR_API UClass* StaticClass<USavePresetFactory>()
	{
		return USavePresetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USavePresetFactory(Z_Construct_UClass_USavePresetFactory, &USavePresetFactory::StaticClass, TEXT("/Script/SaveExtensionEditor"), TEXT("USavePresetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USavePresetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
