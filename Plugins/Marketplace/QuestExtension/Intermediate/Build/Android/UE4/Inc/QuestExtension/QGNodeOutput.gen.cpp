// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/QGNodeOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNodeOutput() {}
// Cross Module References
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQGNodeOutput();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_NoRegister();
// End Cross Module References
class UScriptStruct* FQGNodeOutput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FQGNodeOutput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQGNodeOutput, Z_Construct_UPackage__Script_QuestExtension(), TEXT("QGNodeOutput"), sizeof(FQGNodeOutput), Get_Z_Construct_UScriptStruct_FQGNodeOutput_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FQGNodeOutput>()
{
	return FQGNodeOutput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQGNodeOutput(FQGNodeOutput::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("QGNodeOutput"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFQGNodeOutput
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFQGNodeOutput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QGNodeOutput")),new UScriptStruct::TCppStructOps<FQGNodeOutput>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFQGNodeOutput;
	struct Z_Construct_UScriptStruct_FQGNodeOutput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RejectNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RejectNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExecNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExecNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDisplayName_MetaData[];
#endif
		static void NewProp_bUseDisplayName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQGNodeOutput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Defines an output for a quest group node\n*/" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNodeOutput.h" },
		{ "ToolTip", "Defines an output for a quest group node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQGNodeOutput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_RejectNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNodeOutput.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_RejectNodes = { "RejectNodes", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQGNodeOutput, RejectNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_RejectNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_RejectNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_RejectNodes_Inner = { "RejectNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_ExecNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNodeOutput.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_ExecNodes = { "ExecNodes", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQGNodeOutput, ExecNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_ExecNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_ExecNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_ExecNodes_Inner = { "ExecNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Output" },
		{ "EditCondition", "bUseDisplayName" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNodeOutput.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQGNodeOutput, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_bUseDisplayName_MetaData[] = {
		{ "Category", "Output" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNodeOutput.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_bUseDisplayName_SetBit(void* Obj)
	{
		((FQGNodeOutput*)Obj)->bUseDisplayName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_bUseDisplayName = { "bUseDisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQGNodeOutput), &Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_bUseDisplayName_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_bUseDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_bUseDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNodeOutput.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQGNodeOutput, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQGNodeOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_RejectNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_RejectNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_ExecNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_ExecNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_bUseDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQGNodeOutput_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQGNodeOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"QGNodeOutput",
		sizeof(FQGNodeOutput),
		alignof(FQGNodeOutput),
		Z_Construct_UScriptStruct_FQGNodeOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQGNodeOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQGNodeOutput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQGNodeOutput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QGNodeOutput"), sizeof(FQGNodeOutput), Get_Z_Construct_UScriptStruct_FQGNodeOutput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQGNodeOutput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQGNodeOutput_Hash() { return 2406875098U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
