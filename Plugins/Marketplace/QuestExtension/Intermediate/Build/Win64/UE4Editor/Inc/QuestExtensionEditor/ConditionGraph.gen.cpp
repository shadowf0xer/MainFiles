// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/ConditionGraph/ConditionGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionGraph() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UConditionGraph_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UConditionGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
// End Cross Module References
	void UConditionGraph::StaticRegisterNativesUConditionGraph()
	{
	}
	UClass* Z_Construct_UClass_UConditionGraph_NoRegister()
	{
		return UConditionGraph::StaticClass();
	}
	struct Z_Construct_UClass_UConditionGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConditionGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConditionGraph/ConditionGraph.h" },
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionGraph_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UConditionGraph_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConditionGraph, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UConditionGraph_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionGraph_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConditionGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionGraph_Statics::NewProp_PropertyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConditionGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConditionGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConditionGraph_Statics::ClassParams = {
		&UConditionGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConditionGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConditionGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConditionGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConditionGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConditionGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConditionGraph, 1412267016);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UConditionGraph>()
	{
		return UConditionGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConditionGraph(Z_Construct_UClass_UConditionGraph, &UConditionGraph::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UConditionGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConditionGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
