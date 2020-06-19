// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGraphMacro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphMacro() {}
// Cross Module References
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphMacroPin();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroNode();
// End Cross Module References
class UScriptStruct* FVoxelGraphMacroPin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphMacroPin, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelGraphMacroPin"), sizeof(FVoxelGraphMacroPin), Get_Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FVoxelGraphMacroPin>()
{
	return FVoxelGraphMacroPin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelGraphMacroPin(FVoxelGraphMacroPin::StaticStruct, TEXT("/Script/VoxelGraph"), TEXT("VoxelGraphMacroPin"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraph_StaticRegisterNativesFVoxelGraphMacroPin
{
	FScriptStruct_VoxelGraph_StaticRegisterNativesFVoxelGraphMacroPin()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelGraphMacroPin")),new UScriptStruct::TCppStructOps<FVoxelGraphMacroPin>);
	}
} ScriptStruct_VoxelGraph_StaticRegisterNativesFVoxelGraphMacroPin;
	struct Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomDefaultValue_MetaData[];
#endif
		static void NewProp_bCustomDefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphMacroPin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_SetBit(void* Obj)
	{
		((FVoxelGraphMacroPin*)Obj)->bCustomDefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue = { "bCustomDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelGraphMacroPin), &Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditCondition", "bCustomDefaultValue" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, Category), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"VoxelGraphMacroPin",
		sizeof(FVoxelGraphMacroPin),
		alignof(FVoxelGraphMacroPin),
		Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphMacroPin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelGraphMacroPin"), sizeof(FVoxelGraphMacroPin), Get_Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Hash() { return 2154857380U; }
	void UVoxelGraphMacroInputOutputNode::StaticRegisterNativesUVoxelGraphMacroInputOutputNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_NoRegister()
	{
		return UVoxelGraphMacroInputOutputNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Macro;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pins;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pins_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacroInputOutputNode, Macro), Z_Construct_UClass_UVoxelGraphMacro_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins = { "Pins", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacroInputOutputNode, Pins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_Inner = { "Pins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelGraphMacroPin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroInputOutputNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::ClassParams = {
		&UVoxelGraphMacroInputOutputNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphMacroInputOutputNode, 3416404880);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacroInputOutputNode>()
	{
		return UVoxelGraphMacroInputOutputNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphMacroInputOutputNode(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode, &UVoxelGraphMacroInputOutputNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphMacroInputOutputNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroInputOutputNode);
	void UVoxelGraphMacroInputNode::StaticRegisterNativesUVoxelGraphMacroInputNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister()
	{
		return UVoxelGraphMacroInputNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphMacroInputOutputNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Input" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroInputNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::ClassParams = {
		&UVoxelGraphMacroInputNode::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphMacroInputNode, 2589773007);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacroInputNode>()
	{
		return UVoxelGraphMacroInputNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphMacroInputNode(Z_Construct_UClass_UVoxelGraphMacroInputNode, &UVoxelGraphMacroInputNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphMacroInputNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroInputNode);
	void UVoxelGraphMacroOutputNode::StaticRegisterNativesUVoxelGraphMacroOutputNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister()
	{
		return UVoxelGraphMacroOutputNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphMacroInputOutputNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroOutputNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::ClassParams = {
		&UVoxelGraphMacroOutputNode::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphMacroOutputNode, 1223020553);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacroOutputNode>()
	{
		return UVoxelGraphMacroOutputNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphMacroOutputNode(Z_Construct_UClass_UVoxelGraphMacroOutputNode, &UVoxelGraphMacroOutputNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphMacroOutputNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroOutputNode);
	void UVoxelGraphMacro::StaticRegisterNativesUVoxelGraphMacro()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister()
	{
		return UVoxelGraphMacro::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInContextMenu_MetaData[];
#endif
		static void NewProp_bShowInContextMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInContextMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A graph macro\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ToolTip", "A graph macro" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode = { "OutputNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, OutputNode), Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode = { "InputNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, InputNode), Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_SetBit(void* Obj)
	{
		((UVoxelGraphMacro*)Obj)->bShowInContextMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu = { "bShowInContextMenu", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphMacro), &Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "Comment", "// If empty the asset name is used\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ToolTip", "If empty the asset name is used" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName = { "CustomName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, CustomName), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "Comment", "// If empty the Macro Nodes category is used\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ToolTip", "If empty the Macro Nodes category is used" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory = { "CustomCategory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, CustomCategory), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, Keywords), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "Comment", "// Shift+Enter for new line\n" },
		{ "DisplayName", "Tooltip (Shift+Enter for new line)" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Shift+Enter for new line" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacro, Tooltip), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacro_Statics::ClassParams = {
		&UVoxelGraphMacro::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphMacro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphMacro, 2508806034);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacro>()
	{
		return UVoxelGraphMacro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphMacro(Z_Construct_UClass_UVoxelGraphMacro, &UVoxelGraphMacro::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphMacro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacro);
	void UVoxelGraphMacroNode::StaticRegisterNativesUVoxelGraphMacroNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphMacroNode_NoRegister()
	{
		return UVoxelGraphMacroNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphMacroNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Macro;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphMacroNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphMacroNode, Macro), Z_Construct_UClass_UVoxelGraphMacro_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphMacroNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroNode_Statics::ClassParams = {
		&UVoxelGraphMacroNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers),
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphMacroNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphMacroNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphMacroNode, 2662521091);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphMacroNode>()
	{
		return UVoxelGraphMacroNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphMacroNode(Z_Construct_UClass_UVoxelGraphMacroNode, &UVoxelGraphMacroNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphMacroNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
