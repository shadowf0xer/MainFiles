// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/FactionInfoAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionInfoAssetFactory() {}
// Cross Module References
	FACTIONSEDITOR_API UClass* Z_Construct_UClass_UFactionInfoAssetFactory_NoRegister();
	FACTIONSEDITOR_API UClass* Z_Construct_UClass_UFactionInfoAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FactionsEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTIONS_API UClass* Z_Construct_UClass_UFactionInfoAsset_NoRegister();
// End Cross Module References
	void UFactionInfoAssetFactory::StaticRegisterNativesUFactionInfoAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UFactionInfoAssetFactory_NoRegister()
	{
		return UFactionInfoAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFactionInfoAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFactionInfoAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactionsEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactionInfoAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asset/FactionInfoAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/FactionInfoAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactionInfoAssetFactory_Statics::NewProp_AssetClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Asset/FactionInfoAssetFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFactionInfoAssetFactory_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactionInfoAssetFactory, AssetClass), Z_Construct_UClass_UFactionInfoAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFactionInfoAssetFactory_Statics::NewProp_AssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactionInfoAssetFactory_Statics::NewProp_AssetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFactionInfoAssetFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionInfoAssetFactory_Statics::NewProp_AssetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFactionInfoAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactionInfoAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFactionInfoAssetFactory_Statics::ClassParams = {
		&UFactionInfoAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFactionInfoAssetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFactionInfoAssetFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFactionInfoAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFactionInfoAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFactionInfoAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFactionInfoAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFactionInfoAssetFactory, 1623368458);
	template<> FACTIONSEDITOR_API UClass* StaticClass<UFactionInfoAssetFactory>()
	{
		return UFactionInfoAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFactionInfoAssetFactory(Z_Construct_UClass_UFactionInfoAssetFactory, &UFactionInfoAssetFactory::StaticClass, TEXT("/Script/FactionsEditor"), TEXT("UFactionInfoAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionInfoAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
