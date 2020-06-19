// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/SlotDataFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataFactory() {}
// Cross Module References
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USlotDataFactory_NoRegister();
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USlotDataFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SaveExtensionEditor();
// End Cross Module References
	void USlotDataFactory::StaticRegisterNativesUSlotDataFactory()
	{
	}
	UClass* Z_Construct_UClass_USlotDataFactory_NoRegister()
	{
		return USlotDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asset/SlotDataFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/SlotDataFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotDataFactory_Statics::ClassParams = {
		&USlotDataFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlotDataFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotDataFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotDataFactory, 2362014004);
	template<> SAVEEXTENSIONEDITOR_API UClass* StaticClass<USlotDataFactory>()
	{
		return USlotDataFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotDataFactory(Z_Construct_UClass_USlotDataFactory, &USlotDataFactory::StaticClass, TEXT("/Script/SaveExtensionEditor"), TEXT("USlotDataFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
