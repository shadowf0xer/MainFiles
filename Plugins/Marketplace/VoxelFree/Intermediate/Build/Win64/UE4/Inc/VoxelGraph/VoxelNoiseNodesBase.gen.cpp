// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelNoiseNodesBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelNoiseNodesBase() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelRange();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EInterp();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EFractalType();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IQNoiseBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IQNoiseBase();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DIQNoiseBase();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DIQNoiseBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UVoxelNode_NoiseNode::StaticRegisterNativesUVoxelNode_NoiseNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_NoiseNode_NoRegister()
	{
		return UVoxelNode_NoiseNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_NoiseNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputRanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputRanges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputRanges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumberOfSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges_MetaData[] = {
		{ "Category", "Range analysis settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges = { "OutputRanges", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_NoiseNode, OutputRanges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges_Inner = { "OutputRanges", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelRange, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_NumberOfSamples_MetaData[] = {
		{ "Category", "Range analysis settings" },
		{ "Comment", "// To find the output range, NumberOfSamples random samples are computed on start.\n// Increase this if the output range is too irregular, and if you start to see holes in your terrain\n// Increasing it will add a significant (async) cost in graphs\n// Free when compiled to C++\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "To find the output range, NumberOfSamples random samples are computed on start.\nIncrease this if the output range is too irregular, and if you start to see holes in your terrain\nIncreasing it will add a significant (async) cost in graphs\nFree when compiled to C++" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_NumberOfSamples = { "NumberOfSamples", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_NoiseNode, NumberOfSamples), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_NumberOfSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_NumberOfSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_NoiseNode, Interpolation), Z_Construct_UEnum_VoxelGraph_EInterp, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise settings" },
		{ "Comment", "// Do not use here, exposed as pin now\n" },
		{ "DisplayName", "Old Frequency" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "Do not use here, exposed as pin now" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_NoiseNode, Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Frequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_NumberOfSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Frequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_NoiseNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::ClassParams = {
		&UVoxelNode_NoiseNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_NoiseNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_NoiseNode, 301204029);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_NoiseNode>()
	{
		return UVoxelNode_NoiseNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_NoiseNode(Z_Construct_UClass_UVoxelNode_NoiseNode, &UVoxelNode_NoiseNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_NoiseNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_NoiseNode);
	void UVoxelNode_NoiseNodeFractal::StaticRegisterNativesUVoxelNode_NoiseNodeFractal()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_NoRegister()
	{
		return UVoxelNode_NoiseNodeFractal::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODToOctavesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LODToOctavesMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LODToOctavesMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODToOctavesMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FractalType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FractalType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FractalType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FractalGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FractalGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FractalLacunarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FractalLacunarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FractalOctaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FractalOctaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_MetaData[] = {
		{ "Category", "LOD settings" },
		{ "Comment", "// To use lower quality noise for far LODs\n" },
		{ "DisplayName", "LOD to Octaves map" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "To use lower quality noise for far LODs" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap = { "LODToOctavesMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, LODToOctavesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_Key_KeyProp = { "LODToOctavesMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_ValueProp = { "LODToOctavesMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType_MetaData[] = {
		{ "Category", "Fractal Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType = { "FractalType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, FractalType), Z_Construct_UEnum_VoxelGraph_EFractalType, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalGain_MetaData[] = {
		{ "Category", "Fractal Noise settings" },
		{ "Comment", "// A multiplier that determines how quickly the amplitudes diminish for each successive octave\n// The amplitude of each successive octave is equal to the product of the previous octave's amplitude and the gain value. Increasing the gain produces \"rougher\" Perlin noise.\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "A multiplier that determines how quickly the amplitudes diminish for each successive octave\nThe amplitude of each successive octave is equal to the product of the previous octave's amplitude and the gain value. Increasing the gain produces \"rougher\" Perlin noise." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalGain = { "FractalGain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, FractalGain), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalLacunarity_MetaData[] = {
		{ "Category", "Fractal Noise settings" },
		{ "Comment", "// A multiplier that determines how quickly the frequency increases for each successive octave\n// The frequency of each successive octave is equal to the product of the previous octave's frequency and the lacunarity value.\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "A multiplier that determines how quickly the frequency increases for each successive octave\nThe frequency of each successive octave is equal to the product of the previous octave's frequency and the lacunarity value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalLacunarity = { "FractalLacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, FractalLacunarity), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalLacunarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalOctaves_MetaData[] = {
		{ "Category", "Fractal Noise settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalOctaves = { "FractalOctaves", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, FractalOctaves), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalOctaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalOctaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalLacunarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalOctaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_NoiseNodeFractal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::ClassParams = {
		&UVoxelNode_NoiseNodeFractal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_NoiseNodeFractal, 1982615316);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_NoiseNodeFractal>()
	{
		return UVoxelNode_NoiseNodeFractal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_NoiseNodeFractal(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal, &UVoxelNode_NoiseNodeFractal::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_NoiseNodeFractal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_NoiseNodeFractal);
	void UVoxelNode_NoiseNodeWithDerivative::StaticRegisterNativesUVoxelNode_NoiseNodeWithDerivative()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_NoRegister()
	{
		return UVoxelNode_NoiseNodeWithDerivative::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeDerivative_MetaData[];
#endif
		static void NewProp_bComputeDerivative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeDerivative;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative_MetaData[] = {
		{ "Category", "Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative_SetBit(void* Obj)
	{
		((UVoxelNode_NoiseNodeWithDerivative*)Obj)->bComputeDerivative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative = { "bComputeDerivative", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_NoiseNodeWithDerivative), &Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_NoiseNodeWithDerivative>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::ClassParams = {
		&UVoxelNode_NoiseNodeWithDerivative::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_NoiseNodeWithDerivative, 295032335);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_NoiseNodeWithDerivative>()
	{
		return UVoxelNode_NoiseNodeWithDerivative::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_NoiseNodeWithDerivative(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative, &UVoxelNode_NoiseNodeWithDerivative::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_NoiseNodeWithDerivative"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_NoiseNodeWithDerivative);
	void UVoxelNode_NoiseNodeWithDerivativeFractal::StaticRegisterNativesUVoxelNode_NoiseNodeWithDerivativeFractal()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_NoRegister()
	{
		return UVoxelNode_NoiseNodeWithDerivativeFractal::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeDerivative_MetaData[];
#endif
		static void NewProp_bComputeDerivative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeDerivative;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeFractal,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative_MetaData[] = {
		{ "Category", "Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative_SetBit(void* Obj)
	{
		((UVoxelNode_NoiseNodeWithDerivativeFractal*)Obj)->bComputeDerivative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative = { "bComputeDerivative", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_NoiseNodeWithDerivativeFractal), &Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_NoiseNodeWithDerivativeFractal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::ClassParams = {
		&UVoxelNode_NoiseNodeWithDerivativeFractal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_NoiseNodeWithDerivativeFractal, 291662928);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_NoiseNodeWithDerivativeFractal>()
	{
		return UVoxelNode_NoiseNodeWithDerivativeFractal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal, &UVoxelNode_NoiseNodeWithDerivativeFractal::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_NoiseNodeWithDerivativeFractal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_NoiseNodeWithDerivativeFractal);
	void UVoxelNode_IQNoiseBase::StaticRegisterNativesUVoxelNode_IQNoiseBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_IQNoiseBase_NoRegister()
	{
		return UVoxelNode_IQNoiseBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IQNoiseBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::ClassParams = {
		&UVoxelNode_IQNoiseBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_IQNoiseBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_IQNoiseBase, 1143217799);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_IQNoiseBase>()
	{
		return UVoxelNode_IQNoiseBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_IQNoiseBase(Z_Construct_UClass_UVoxelNode_IQNoiseBase, &UVoxelNode_IQNoiseBase::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_IQNoiseBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IQNoiseBase);
	void UVoxelNode_2DIQNoiseBase::StaticRegisterNativesUVoxelNode_2DIQNoiseBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_NoRegister()
	{
		return UVoxelNode_2DIQNoiseBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_IQNoiseBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "IQ Noise settings" },
		{ "Comment", "// Rotation (in degrees) applied to the position between each octave\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "Rotation (in degrees) applied to the position between each octave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_2DIQNoiseBase, Rotation), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::NewProp_Rotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DIQNoiseBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::ClassParams = {
		&UVoxelNode_2DIQNoiseBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DIQNoiseBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_2DIQNoiseBase, 1149415282);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DIQNoiseBase>()
	{
		return UVoxelNode_2DIQNoiseBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_2DIQNoiseBase(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase, &UVoxelNode_2DIQNoiseBase::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_2DIQNoiseBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DIQNoiseBase);
	void UVoxelNode_3DIQNoiseBase::StaticRegisterNativesUVoxelNode_3DIQNoiseBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_NoRegister()
	{
		return UVoxelNode_3DIQNoiseBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_IQNoiseBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "IQ Noise settings" },
		{ "Comment", "// Rotation (in degrees) applied to the position between each octave\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "Rotation (in degrees) applied to the position between each octave" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_3DIQNoiseBase, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::NewProp_Rotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_3DIQNoiseBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::ClassParams = {
		&UVoxelNode_3DIQNoiseBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_3DIQNoiseBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_3DIQNoiseBase, 304984776);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_3DIQNoiseBase>()
	{
		return UVoxelNode_3DIQNoiseBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_3DIQNoiseBase(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase, &UVoxelNode_3DIQNoiseBase::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_3DIQNoiseBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_3DIQNoiseBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
