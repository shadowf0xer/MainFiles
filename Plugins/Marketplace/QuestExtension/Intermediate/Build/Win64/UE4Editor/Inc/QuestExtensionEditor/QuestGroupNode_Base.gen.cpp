// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/QuestGraph/QuestGroupNode_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGroupNode_Base() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupNode_Base_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupNode_Base();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
// End Cross Module References
	void UQuestGroupNode_Base::StaticRegisterNativesUQuestGroupNode_Base()
	{
	}
	UClass* Z_Construct_UClass_UQuestGroupNode_Base_NoRegister()
	{
		return UQuestGroupNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGroupNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGroupNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroupNode_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestGraph/QuestGroupNode_Base.h" },
		{ "ModuleRelativePath", "Public/QuestGraph/QuestGroupNode_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGroupNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGroupNode_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestGroupNode_Base_Statics::ClassParams = {
		&UQuestGroupNode_Base::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestGroupNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGroupNode_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestGroupNode_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestGroupNode_Base, 3808955080);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UQuestGroupNode_Base>()
	{
		return UQuestGroupNode_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestGroupNode_Base(Z_Construct_UClass_UQuestGroupNode_Base, &UQuestGroupNode_Base::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UQuestGroupNode_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGroupNode_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
