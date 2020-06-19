// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/VoxelGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphSchema() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister();
	VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphSchema_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FVoxelGraphSchemaAction_Paste::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_Paste"), sizeof(FVoxelGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_Paste>()
{
	return FVoxelGraphSchemaAction_Paste::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGraphSchemaAction_Paste(FVoxelGraphSchemaAction_Paste::StaticStruct, TEXT("/Script/VoxelGraphEditor"), TEXT("VoxelGraphSchemaAction_Paste"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_Paste
{
	FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_Paste()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGraphSchemaAction_Paste")),new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_Paste>);
	}
} ScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_Paste;
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_Paste>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_Paste",
		sizeof(FVoxelGraphSchemaAction_Paste),
		alignof(FVoxelGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGraphSchemaAction_Paste"), sizeof(FVoxelGraphSchemaAction_Paste), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Hash() { return 1287154876U; }
class UScriptStruct* FVoxelGraphSchemaAction_NewComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewComment"), sizeof(FVoxelGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewComment>()
{
	return FVoxelGraphSchemaAction_NewComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGraphSchemaAction_NewComment(FVoxelGraphSchemaAction_NewComment::StaticStruct, TEXT("/Script/VoxelGraphEditor"), TEXT("VoxelGraphSchemaAction_NewComment"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewComment
{
	FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGraphSchemaAction_NewComment")),new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewComment>);
	}
} ScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewComment;
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewComment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewComment",
		sizeof(FVoxelGraphSchemaAction_NewComment),
		alignof(FVoxelGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGraphSchemaAction_NewComment"), sizeof(FVoxelGraphSchemaAction_NewComment), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Hash() { return 1518132834U; }
class UScriptStruct* FVoxelGraphSchemaAction_NewKnotNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewKnotNode"), sizeof(FVoxelGraphSchemaAction_NewKnotNode), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewKnotNode>()
{
	return FVoxelGraphSchemaAction_NewKnotNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode(FVoxelGraphSchemaAction_NewKnotNode::StaticStruct, TEXT("/Script/VoxelGraphEditor"), TEXT("VoxelGraphSchemaAction_NewKnotNode"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewKnotNode
{
	FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewKnotNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGraphSchemaAction_NewKnotNode")),new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewKnotNode>);
	}
} ScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewKnotNode;
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewKnotNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewKnotNode",
		sizeof(FVoxelGraphSchemaAction_NewKnotNode),
		alignof(FVoxelGraphSchemaAction_NewKnotNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGraphSchemaAction_NewKnotNode"), sizeof(FVoxelGraphSchemaAction_NewKnotNode), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Hash() { return 940209704U; }
class UScriptStruct* FVoxelGraphSchemaAction_NewSetterNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewSetterNode"), sizeof(FVoxelGraphSchemaAction_NewSetterNode), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewSetterNode>()
{
	return FVoxelGraphSchemaAction_NewSetterNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode(FVoxelGraphSchemaAction_NewSetterNode::StaticStruct, TEXT("/Script/VoxelGraphEditor"), TEXT("VoxelGraphSchemaAction_NewSetterNode"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewSetterNode
{
	FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewSetterNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGraphSchemaAction_NewSetterNode")),new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewSetterNode>);
	}
} ScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewSetterNode;
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewSetterNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewSetterNode, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewSetterNode",
		sizeof(FVoxelGraphSchemaAction_NewSetterNode),
		alignof(FVoxelGraphSchemaAction_NewSetterNode),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGraphSchemaAction_NewSetterNode"), sizeof(FVoxelGraphSchemaAction_NewSetterNode), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Hash() { return 4038303106U; }
class UScriptStruct* FVoxelGraphSchemaAction_NewLocalVariableUsage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewLocalVariableUsage"), sizeof(FVoxelGraphSchemaAction_NewLocalVariableUsage), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewLocalVariableUsage>()
{
	return FVoxelGraphSchemaAction_NewLocalVariableUsage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage(FVoxelGraphSchemaAction_NewLocalVariableUsage::StaticStruct, TEXT("/Script/VoxelGraphEditor"), TEXT("VoxelGraphSchemaAction_NewLocalVariableUsage"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewLocalVariableUsage
{
	FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewLocalVariableUsage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGraphSchemaAction_NewLocalVariableUsage")),new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewLocalVariableUsage>);
	}
} ScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewLocalVariableUsage;
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Declaration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewLocalVariableUsage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewLocalVariableUsage, Declaration), Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewLocalVariableUsage",
		sizeof(FVoxelGraphSchemaAction_NewLocalVariableUsage),
		alignof(FVoxelGraphSchemaAction_NewLocalVariableUsage),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGraphSchemaAction_NewLocalVariableUsage"), sizeof(FVoxelGraphSchemaAction_NewLocalVariableUsage), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Hash() { return 2249288818U; }
class UScriptStruct* FVoxelGraphSchemaAction_NewLocalVariableDeclaration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewLocalVariableDeclaration"), sizeof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewLocalVariableDeclaration>()
{
	return FVoxelGraphSchemaAction_NewLocalVariableDeclaration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration(FVoxelGraphSchemaAction_NewLocalVariableDeclaration::StaticStruct, TEXT("/Script/VoxelGraphEditor"), TEXT("VoxelGraphSchemaAction_NewLocalVariableDeclaration"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewLocalVariableDeclaration
{
	FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewLocalVariableDeclaration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGraphSchemaAction_NewLocalVariableDeclaration")),new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewLocalVariableDeclaration>);
	}
} ScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewLocalVariableDeclaration;
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PinCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PinCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewLocalVariableDeclaration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewLocalVariableDeclaration, PinCategory), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewLocalVariableDeclaration",
		sizeof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration),
		alignof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGraphSchemaAction_NewLocalVariableDeclaration"), sizeof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Hash() { return 305868171U; }
class UScriptStruct* FVoxelGraphSchemaAction_NewMacroNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewMacroNode"), sizeof(FVoxelGraphSchemaAction_NewMacroNode), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewMacroNode>()
{
	return FVoxelGraphSchemaAction_NewMacroNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode(FVoxelGraphSchemaAction_NewMacroNode::StaticStruct, TEXT("/Script/VoxelGraphEditor"), TEXT("VoxelGraphSchemaAction_NewMacroNode"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewMacroNode
{
	FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewMacroNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGraphSchemaAction_NewMacroNode")),new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewMacroNode>);
	}
} ScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewMacroNode;
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Macro;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewMacroNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewMacroNode, Macro), Z_Construct_UClass_UVoxelGraphMacro_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewMacroNode",
		sizeof(FVoxelGraphSchemaAction_NewMacroNode),
		alignof(FVoxelGraphSchemaAction_NewMacroNode),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGraphSchemaAction_NewMacroNode"), sizeof(FVoxelGraphSchemaAction_NewMacroNode), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Hash() { return 2035242987U; }
class UScriptStruct* FVoxelGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPHEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewNode"), sizeof(FVoxelGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPHEDITOR_API UScriptStruct* StaticStruct<FVoxelGraphSchemaAction_NewNode>()
{
	return FVoxelGraphSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGraphSchemaAction_NewNode(FVoxelGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/VoxelGraphEditor"), TEXT("VoxelGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewNode
{
	FScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewNode>);
	}
} ScriptStruct_VoxelGraphEditor_StaticRegisterNativesFVoxelGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelNodeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_VoxelNodeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass_MetaData[] = {
		{ "Comment", "/** Class of node we want to create */" },
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
		{ "ToolTip", "Class of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass = { "VoxelNodeClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewNode, VoxelNodeClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VoxelGraphSchemaAction_NewNode",
		sizeof(FVoxelGraphSchemaAction_NewNode),
		alignof(FVoxelGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraphEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGraphSchemaAction_NewNode"), sizeof(FVoxelGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Hash() { return 3319569681U; }
	void UVoxelGraphSchema::StaticRegisterNativesUVoxelGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphSchema_NoRegister()
	{
		return UVoxelGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphSchema.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphSchema_Statics::ClassParams = {
		&UVoxelGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphSchema, 3357370277);
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UVoxelGraphSchema>()
	{
		return UVoxelGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphSchema(Z_Construct_UClass_UVoxelGraphSchema, &UVoxelGraphSchema::StaticClass, TEXT("/Script/VoxelGraphEditor"), TEXT("UVoxelGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
