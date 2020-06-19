// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/ConditionGraph/ConditionGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionGraphSchema() {}
// Cross Module References
	QUESTEXTENSIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste();
	UPackage* Z_Construct_UPackage__Script_QuestExtensionEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	QUESTEXTENSIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment();
	QUESTEXTENSIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected();
	QUESTEXTENSIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UConditionGraphSchema_NoRegister();
	QUESTEXTENSIONEDITOR_API UClass* Z_Construct_UClass_UConditionGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FConditionGraphSchemaAction_Paste::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste, Z_Construct_UPackage__Script_QuestExtensionEditor(), TEXT("ConditionGraphSchemaAction_Paste"), sizeof(FConditionGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSIONEDITOR_API UScriptStruct* StaticStruct<FConditionGraphSchemaAction_Paste>()
{
	return FConditionGraphSchemaAction_Paste::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConditionGraphSchemaAction_Paste(FConditionGraphSchemaAction_Paste::StaticStruct, TEXT("/Script/QuestExtensionEditor"), TEXT("ConditionGraphSchemaAction_Paste"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_Paste
{
	FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_Paste()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConditionGraphSchemaAction_Paste")),new UScriptStruct::TCppStructOps<FConditionGraphSchemaAction_Paste>);
	}
} ScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_Paste;
	struct Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraphSchema.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionGraphSchemaAction_Paste>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ConditionGraphSchemaAction_Paste",
		sizeof(FConditionGraphSchemaAction_Paste),
		alignof(FConditionGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtensionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConditionGraphSchemaAction_Paste"), sizeof(FConditionGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_Paste_Hash() { return 993241869U; }
class UScriptStruct* FConditionGraphSchemaAction_NewComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment, Z_Construct_UPackage__Script_QuestExtensionEditor(), TEXT("ConditionGraphSchemaAction_NewComment"), sizeof(FConditionGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSIONEDITOR_API UScriptStruct* StaticStruct<FConditionGraphSchemaAction_NewComment>()
{
	return FConditionGraphSchemaAction_NewComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConditionGraphSchemaAction_NewComment(FConditionGraphSchemaAction_NewComment::StaticStruct, TEXT("/Script/QuestExtensionEditor"), TEXT("ConditionGraphSchemaAction_NewComment"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_NewComment
{
	FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_NewComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConditionGraphSchemaAction_NewComment")),new UScriptStruct::TCppStructOps<FConditionGraphSchemaAction_NewComment>);
	}
} ScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_NewComment;
	struct Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraphSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionGraphSchemaAction_NewComment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ConditionGraphSchemaAction_NewComment",
		sizeof(FConditionGraphSchemaAction_NewComment),
		alignof(FConditionGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtensionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConditionGraphSchemaAction_NewComment"), sizeof(FConditionGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewComment_Hash() { return 1360970525U; }
class UScriptStruct* FConditionGraphSchemaAction_NewFromSelected::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected, Z_Construct_UPackage__Script_QuestExtensionEditor(), TEXT("ConditionGraphSchemaAction_NewFromSelected"), sizeof(FConditionGraphSchemaAction_NewFromSelected), Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSIONEDITOR_API UScriptStruct* StaticStruct<FConditionGraphSchemaAction_NewFromSelected>()
{
	return FConditionGraphSchemaAction_NewFromSelected::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected(FConditionGraphSchemaAction_NewFromSelected::StaticStruct, TEXT("/Script/QuestExtensionEditor"), TEXT("ConditionGraphSchemaAction_NewFromSelected"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_NewFromSelected
{
	FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_NewFromSelected()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConditionGraphSchemaAction_NewFromSelected")),new UScriptStruct::TCppStructOps<FConditionGraphSchemaAction_NewFromSelected>);
	}
} ScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_NewFromSelected;
	struct Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add nodes to the graph based on selected objects*/" },
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraphSchema.h" },
		{ "ToolTip", "Action to add nodes to the graph based on selected objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionGraphSchemaAction_NewFromSelected>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
		Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode,
		&NewStructOps,
		"ConditionGraphSchemaAction_NewFromSelected",
		sizeof(FConditionGraphSchemaAction_NewFromSelected),
		alignof(FConditionGraphSchemaAction_NewFromSelected),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtensionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConditionGraphSchemaAction_NewFromSelected"), sizeof(FConditionGraphSchemaAction_NewFromSelected), Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewFromSelected_Hash() { return 3151663611U; }
class UScriptStruct* FConditionGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_QuestExtensionEditor(), TEXT("ConditionGraphSchemaAction_NewNode"), sizeof(FConditionGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSIONEDITOR_API UScriptStruct* StaticStruct<FConditionGraphSchemaAction_NewNode>()
{
	return FConditionGraphSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConditionGraphSchemaAction_NewNode(FConditionGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/QuestExtensionEditor"), TEXT("ConditionGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_NewNode
{
	FScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConditionGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FConditionGraphSchemaAction_NewNode>);
	}
} ScriptStruct_QuestExtensionEditor_StaticRegisterNativesFConditionGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConditionClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::NewProp_ConditionClass_MetaData[] = {
		{ "Comment", "/** Class of node we want to create */" },
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraphSchema.h" },
		{ "ToolTip", "Class of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::NewProp_ConditionClass = { "ConditionClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionGraphSchemaAction_NewNode, ConditionClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::NewProp_ConditionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::NewProp_ConditionClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::NewProp_ConditionClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ConditionGraphSchemaAction_NewNode",
		sizeof(FConditionGraphSchemaAction_NewNode),
		alignof(FConditionGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtensionEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConditionGraphSchemaAction_NewNode"), sizeof(FConditionGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConditionGraphSchemaAction_NewNode_Hash() { return 2562331367U; }
	void UConditionGraphSchema::StaticRegisterNativesUConditionGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UConditionGraphSchema_NoRegister()
	{
		return UConditionGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UConditionGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConditionGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtensionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConditionGraph/ConditionGraphSchema.h" },
		{ "ModuleRelativePath", "Public/ConditionGraph/ConditionGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConditionGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConditionGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConditionGraphSchema_Statics::ClassParams = {
		&UConditionGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConditionGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConditionGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConditionGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConditionGraphSchema, 3027275609);
	template<> QUESTEXTENSIONEDITOR_API UClass* StaticClass<UConditionGraphSchema>()
	{
		return UConditionGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConditionGraphSchema(Z_Construct_UClass_UConditionGraphSchema, &UConditionGraphSchema::StaticClass, TEXT("/Script/QuestExtensionEditor"), TEXT("UConditionGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConditionGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
