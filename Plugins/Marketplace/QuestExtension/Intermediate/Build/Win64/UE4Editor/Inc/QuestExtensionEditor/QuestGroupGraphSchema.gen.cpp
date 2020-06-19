// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/QuestGraph/QuestGroupGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGroupGraphSchema() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	QUESTEXTENSIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment();
	QUESTEXTENSIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected();
	QUESTEXTENSIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupGraphSchema_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UQuestGroupGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FQuestGroupGraphSchemaAction_Paste::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste, Z_Construct_UPackage__Script_QuestExtensionEditor(), TEXT("QuestGroupGraphSchemaAction_Paste"), sizeof(FQuestGroupGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSIONEDITOR_API UScriptStruct* StaticStruct<FQuestGroupGraphSchemaAction_Paste>()
{
	return FQuestGroupGraphSchemaAction_Paste::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste(FQuestGroupGraphSchemaAction_Paste::StaticStruct, TEXT("/Script/QuestExtensionEditor"), TEXT("QuestGroupGraphSchemaAction_Paste"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_Paste
{
	FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_Paste()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestGroupGraphSchemaAction_Paste")),new UScriptStruct::TCppStructOps<FQuestGroupGraphSchemaAction_Paste>);
	}
} ScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_Paste;
	struct Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
		{ "ModuleRelativePath", "Private/QuestGraph/QuestGroupGraphSchema.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestGroupGraphSchemaAction_Paste>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"QuestGroupGraphSchemaAction_Paste",
		sizeof(FQuestGroupGraphSchemaAction_Paste),
		alignof(FQuestGroupGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtensionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestGroupGraphSchemaAction_Paste"), sizeof(FQuestGroupGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_Paste_Hash() { return 1285572202U; }
class UScriptStruct* FQuestGroupGraphSchemaAction_NewComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment, Z_Construct_UPackage__Script_QuestExtensionEditor(), TEXT("QuestGroupGraphSchemaAction_NewComment"), sizeof(FQuestGroupGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSIONEDITOR_API UScriptStruct* StaticStruct<FQuestGroupGraphSchemaAction_NewComment>()
{
	return FQuestGroupGraphSchemaAction_NewComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment(FQuestGroupGraphSchemaAction_NewComment::StaticStruct, TEXT("/Script/QuestExtensionEditor"), TEXT("QuestGroupGraphSchemaAction_NewComment"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_NewComment
{
	FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_NewComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestGroupGraphSchemaAction_NewComment")),new UScriptStruct::TCppStructOps<FQuestGroupGraphSchemaAction_NewComment>);
	}
} ScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_NewComment;
	struct Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Private/QuestGraph/QuestGroupGraphSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestGroupGraphSchemaAction_NewComment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"QuestGroupGraphSchemaAction_NewComment",
		sizeof(FQuestGroupGraphSchemaAction_NewComment),
		alignof(FQuestGroupGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtensionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestGroupGraphSchemaAction_NewComment"), sizeof(FQuestGroupGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewComment_Hash() { return 2845408495U; }
class UScriptStruct* FQuestGroupGraphSchemaAction_NewFromSelected::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected, Z_Construct_UPackage__Script_QuestExtensionEditor(), TEXT("QuestGroupGraphSchemaAction_NewFromSelected"), sizeof(FQuestGroupGraphSchemaAction_NewFromSelected), Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSIONEDITOR_API UScriptStruct* StaticStruct<FQuestGroupGraphSchemaAction_NewFromSelected>()
{
	return FQuestGroupGraphSchemaAction_NewFromSelected::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected(FQuestGroupGraphSchemaAction_NewFromSelected::StaticStruct, TEXT("/Script/QuestExtensionEditor"), TEXT("QuestGroupGraphSchemaAction_NewFromSelected"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_NewFromSelected
{
	FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_NewFromSelected()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestGroupGraphSchemaAction_NewFromSelected")),new UScriptStruct::TCppStructOps<FQuestGroupGraphSchemaAction_NewFromSelected>);
	}
} ScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_NewFromSelected;
	struct Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add nodes to the graph based on selected objects*/" },
		{ "ModuleRelativePath", "Private/QuestGraph/QuestGroupGraphSchema.h" },
		{ "ToolTip", "Action to add nodes to the graph based on selected objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestGroupGraphSchemaAction_NewFromSelected>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
		Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode,
		&NewStructOps,
		"QuestGroupGraphSchemaAction_NewFromSelected",
		sizeof(FQuestGroupGraphSchemaAction_NewFromSelected),
		alignof(FQuestGroupGraphSchemaAction_NewFromSelected),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtensionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestGroupGraphSchemaAction_NewFromSelected"), sizeof(FQuestGroupGraphSchemaAction_NewFromSelected), Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewFromSelected_Hash() { return 3180574105U; }
class UScriptStruct* FQuestGroupGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_QuestExtensionEditor(), TEXT("QuestGroupGraphSchemaAction_NewNode"), sizeof(FQuestGroupGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSIONEDITOR_API UScriptStruct* StaticStruct<FQuestGroupGraphSchemaAction_NewNode>()
{
	return FQuestGroupGraphSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode(FQuestGroupGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/QuestExtensionEditor"), TEXT("QuestGroupGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_NewNode
{
	FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestGroupGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FQuestGroupGraphSchemaAction_NewNode>);
	}
} ScriptStruct_QuestExtensionEditor_StaticRegisterNativesFQuestGroupGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QGNodeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_QGNodeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/QuestGraph/QuestGroupGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestGroupGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::NewProp_QGNodeClass_MetaData[] = {
		{ "Comment", "/** Class of node we want to create */" },
		{ "ModuleRelativePath", "Private/QuestGraph/QuestGroupGraphSchema.h" },
		{ "ToolTip", "Class of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::NewProp_QGNodeClass = { "QGNodeClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestGroupGraphSchemaAction_NewNode, QGNodeClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::NewProp_QGNodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::NewProp_QGNodeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::NewProp_QGNodeClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"QuestGroupGraphSchemaAction_NewNode",
		sizeof(FQuestGroupGraphSchemaAction_NewNode),
		alignof(FQuestGroupGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtensionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestGroupGraphSchemaAction_NewNode"), sizeof(FQuestGroupGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestGroupGraphSchemaAction_NewNode_Hash() { return 2733631340U; }
	void UQuestGroupGraphSchema::StaticRegisterNativesUQuestGroupGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UQuestGroupGraphSchema_NoRegister()
	{
		return UQuestGroupGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGroupGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGroupGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroupGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestGraph/QuestGroupGraphSchema.h" },
		{ "ModuleRelativePath", "Private/QuestGraph/QuestGroupGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGroupGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGroupGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestGroupGraphSchema_Statics::ClassParams = {
		&UQuestGroupGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestGroupGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroupGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGroupGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestGroupGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestGroupGraphSchema, 738354967);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UQuestGroupGraphSchema>()
	{
		return UQuestGroupGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestGroupGraphSchema(Z_Construct_UClass_UQuestGroupGraphSchema, &UQuestGroupGraphSchema::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UQuestGroupGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGroupGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
