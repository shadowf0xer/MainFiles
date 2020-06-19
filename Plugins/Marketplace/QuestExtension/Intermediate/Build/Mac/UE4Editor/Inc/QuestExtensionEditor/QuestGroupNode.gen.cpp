// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/QuestGraph/QuestGroupNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGroupNode() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupNode_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupNode();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupNode_Base();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
// End Cross Module References
	void UQuestGroupNode::StaticRegisterNativesUQuestGroupNode()
	{
	}
	UClass* Z_Construct_UClass_UQuestGroupNode_NoRegister()
	{
		return UQuestGroupNode::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGroupNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGroupNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestGroupNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroupNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestGraph/QuestGroupNode.h" },
		{ "ModuleRelativePath", "Public/QuestGraph/QuestGroupNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_QuestNode_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/** The SoundNode this represents */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestGraph/QuestGroupNode.h" },
		{ "ToolTip", "The SoundNode this represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_QuestNode = { "QuestNode", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestGroupNode, QuestNode), Z_Construct_UClass_UQGNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_QuestNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_QuestNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_NodeBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestGraph/QuestGroupNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_NodeBlueprint = { "NodeBlueprint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestGroupNode, NodeBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_NodeBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_NodeBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestGroupNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_QuestNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGroupNode_Statics::NewProp_NodeBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGroupNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGroupNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestGroupNode_Statics::ClassParams = {
		&UQuestGroupNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestGroupNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupNode_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestGroupNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGroupNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestGroupNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestGroupNode, 663833675);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UQuestGroupNode>()
	{
		return UQuestGroupNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestGroupNode(Z_Construct_UClass_UQuestGroupNode, &UQuestGroupNode::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UQuestGroupNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGroupNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
