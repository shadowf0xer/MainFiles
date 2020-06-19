// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/ConditionGraph/ConditionGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionGraphNode() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UConditionGraphNode_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UConditionGraphNode();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UConditionGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
// End Cross Module References
	void UConditionGraphNode::StaticRegisterNativesUConditionGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UConditionGraphNode_NoRegister()
	{
		return UConditionGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UConditionGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConditionNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConditionGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConditionGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConditionGraph/ConditionGraphNode.h" },
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_ConditionNode_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/** The Condition Node this represents */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraphNode.h" },
		{ "ToolTip", "The Condition Node this represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_ConditionNode = { "ConditionNode", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConditionGraphNode, ConditionNode), Z_Construct_UClass_UQuestCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_ConditionNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_ConditionNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_NodeBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_NodeBlueprint = { "NodeBlueprint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConditionGraphNode, NodeBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_NodeBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_NodeBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConditionGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_ConditionNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionGraphNode_Statics::NewProp_NodeBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConditionGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConditionGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConditionGraphNode_Statics::ClassParams = {
		&UConditionGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConditionGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConditionGraphNode_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConditionGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConditionGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConditionGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConditionGraphNode, 1419967615);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UConditionGraphNode>()
	{
		return UConditionGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConditionGraphNode(Z_Construct_UClass_UConditionGraphNode, &UConditionGraphNode::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UConditionGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConditionGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
