// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/QuestGroupFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGroupFactory() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupFactory_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuest_NoRegister();
// End Cross Module References
	void UQuestGroupFactory::StaticRegisterNativesUQuestGroupFactory()
	{
	}
	UClass* Z_Construct_UClass_UQuestGroupFactory_NoRegister()
	{
		return UQuestGroupFactory::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGroupFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_QuestClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGroupFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroupFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asset/QuestGroupFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/QuestGroupFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroupFactory_Statics::NewProp_QuestClass_MetaData[] = {
		{ "Category", "ItemAsset" },
		{ "ModuleRelativePath", "Private/Asset/QuestGroupFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestGroupFactory_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestGroupFactory, QuestClass), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UQuestGroupFactory_Statics::NewProp_QuestClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupFactory_Statics::NewProp_QuestClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestGroupFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGroupFactory_Statics::NewProp_QuestClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGroupFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGroupFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestGroupFactory_Statics::ClassParams = {
		&UQuestGroupFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestGroupFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestGroupFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGroupFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestGroupFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestGroupFactory, 2167898395);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UQuestGroupFactory>()
	{
		return UQuestGroupFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestGroupFactory(Z_Construct_UClass_UQuestGroupFactory, &UQuestGroupFactory::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UQuestGroupFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGroupFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
