// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelNode() {}
// Cross Module References
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPin();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphNodeInterface_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphNodeInterface();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelPin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPin, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelPin"), sizeof(FVoxelPin), Get_Z_Construct_UScriptStruct_FVoxelPin_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FVoxelPin>()
{
	return FVoxelPin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPin(FVoxelPin::StaticStruct, TEXT("/Script/VoxelGraph"), TEXT("VoxelPin"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraph_StaticRegisterNativesFVoxelPin
{
	FScriptStruct_VoxelGraph_StaticRegisterNativesFVoxelPin()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPin")),new UScriptStruct::TCppStructOps<FVoxelPin>);
	}
} ScriptStruct_VoxelGraph_StaticRegisterNativesFVoxelPin;
	struct Z_Construct_UScriptStruct_FVoxelPin_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherPinIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OtherPinIds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherPinIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OtherNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_MetaData[] = {
		{ "Comment", "// Used for macros to check that the nodes are the same\n" },
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
		{ "ToolTip", "Used for macros to check that the nodes are the same" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, PinCategory), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds = { "OtherPinIds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, OtherPinIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_Inner = { "OtherPinIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes = { "OtherNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, OtherNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_Inner = { "OtherNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPin, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"VoxelPin",
		sizeof(FVoxelPin),
		alignof(FVoxelPin),
		Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPin"), sizeof(FVoxelPin), Get_Z_Construct_UScriptStruct_FVoxelPin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPin_Hash() { return 4285142090U; }
	void UVoxelGraphNodeInterface::StaticRegisterNativesUVoxelGraphNodeInterface()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphNodeInterface_NoRegister()
	{
		return UVoxelGraphNodeInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphNodeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeAnalysisDebugMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RangeAnalysisDebugMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeAnalysisErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RangeAnalysisErrorMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeAnalysisWarningMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RangeAnalysisWarningMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatsMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DependenciesMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DependenciesMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WarningMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InfoMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisDebugMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisDebugMsg = { "RangeAnalysisDebugMsg", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, RangeAnalysisDebugMsg), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisDebugMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisDebugMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisErrorMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisErrorMsg = { "RangeAnalysisErrorMsg", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, RangeAnalysisErrorMsg), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisErrorMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisErrorMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisWarningMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisWarningMsg = { "RangeAnalysisWarningMsg", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, RangeAnalysisWarningMsg), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisWarningMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisWarningMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_StatsMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_StatsMsg = { "StatsMsg", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, StatsMsg), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_StatsMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_StatsMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_DependenciesMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_DependenciesMsg = { "DependenciesMsg", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, DependenciesMsg), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_DependenciesMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_DependenciesMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg = { "WarningMsg", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, WarningMsg), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg = { "InfoMsg", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, InfoMsg), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisDebugMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisErrorMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_RangeAnalysisWarningMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_StatsMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_DependenciesMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNodeInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::ClassParams = {
		&UVoxelGraphNodeInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphNodeInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphNodeInterface, 691437885);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphNodeInterface>()
	{
		return UVoxelGraphNodeInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphNodeInterface(Z_Construct_UClass_UVoxelGraphNodeInterface, &UVoxelGraphNodeInterface::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphNodeInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNodeInterface);
	void UVoxelNode::StaticRegisterNativesUVoxelNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_NoRegister()
	{
		return UVoxelNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputPinCount;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputPins;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputPins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPins;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPins_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for VoxelNodes\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
		{ "ToolTip", "Base class for VoxelNodes" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount = { "InputPinCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, InputPinCount), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, GraphNode), Z_Construct_UClass_UVoxelGraphNodeInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, Graph), Z_Construct_UClass_UVoxelGraphGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, OutputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_Inner = { "OutputPins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelPin, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins = { "InputPins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode, InputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_Inner = { "InputPins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelPin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Statics::ClassParams = {
		&UVoxelNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode, 2548975066);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode>()
	{
		return UVoxelNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode(Z_Construct_UClass_UVoxelNode, &UVoxelNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
