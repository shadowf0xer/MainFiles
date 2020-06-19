// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/QuestGraph/QuestGroupNode_Root.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGroupNode_Root() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupNode_Root_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupNode_Root();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupNode_Base();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
// End Cross Module References
	void UQuestGroupNode_Root::StaticRegisterNativesUQuestGroupNode_Root()
	{
	}
	UClass* Z_Construct_UClass_UQuestGroupNode_Root_NoRegister()
	{
		return UQuestGroupNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGroupNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGroupNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestGroupNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroupNode_Root_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestGraph/QuestGroupNode_Root.h" },
		{ "ModuleRelativePath", "Public/QuestGraph/QuestGroupNode_Root.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGroupNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGroupNode_Root>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestGroupNode_Root_Statics::ClassParams = {
		&UQuestGroupNode_Root::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestGroupNode_Root_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGroupNode_Root()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestGroupNode_Root_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestGroupNode_Root, 3540970833);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UQuestGroupNode_Root>()
	{
		return UQuestGroupNode_Root::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestGroupNode_Root(Z_Construct_UClass_UQuestGroupNode_Root, &UQuestGroupNode_Root::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UQuestGroupNode_Root"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGroupNode_Root);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
