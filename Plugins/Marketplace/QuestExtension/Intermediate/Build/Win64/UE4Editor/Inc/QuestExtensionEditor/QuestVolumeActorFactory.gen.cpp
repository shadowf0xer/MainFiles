// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/QuestVolumeActorFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestVolumeActorFactory() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestVolumeActorFactory_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestVolumeActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxVolume();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
// End Cross Module References
	void UQuestVolumeActorFactory::StaticRegisterNativesUQuestVolumeActorFactory()
	{
	}
	UClass* Z_Construct_UClass_UQuestVolumeActorFactory_NoRegister()
	{
		return UQuestVolumeActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UQuestVolumeActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestVolumeActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryBoxVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestVolumeActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Asset/QuestVolumeActorFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/QuestVolumeActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestVolumeActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestVolumeActorFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestVolumeActorFactory_Statics::ClassParams = {
		&UQuestVolumeActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UQuestVolumeActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestVolumeActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestVolumeActorFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestVolumeActorFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestVolumeActorFactory, 2176970643);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UQuestVolumeActorFactory>()
	{
		return UQuestVolumeActorFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestVolumeActorFactory(Z_Construct_UClass_UQuestVolumeActorFactory, &UQuestVolumeActorFactory::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UQuestVolumeActorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestVolumeActorFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
