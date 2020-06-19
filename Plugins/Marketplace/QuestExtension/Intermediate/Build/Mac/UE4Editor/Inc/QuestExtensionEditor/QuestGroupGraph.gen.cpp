// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/QuestGraph/QuestGroupGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGroupGraph() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupGraph_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
// End Cross Module References
	void UQuestGroupGraph::StaticRegisterNativesUQuestGroupGraph()
	{
	}
	UClass* Z_Construct_UClass_UQuestGroupGraph_NoRegister()
	{
		return UQuestGroupGraph::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGroupGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGroupGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroupGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestGraph/QuestGroupGraph.h" },
		{ "ModuleRelativePath", "Public/QuestGraph/QuestGroupGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGroupGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGroupGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestGroupGraph_Statics::ClassParams = {
		&UQuestGroupGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestGroupGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGroupGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestGroupGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestGroupGraph, 2211197236);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UQuestGroupGraph>()
	{
		return UQuestGroupGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestGroupGraph(Z_Construct_UClass_UQuestGroupGraph, &UQuestGroupGraph::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UQuestGroupGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGroupGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
