// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelOptimizationNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelOptimizationNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Sleep_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Sleep();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeUnion_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeUnion();
// End Cross Module References
	void UVoxelNode_StaticClampFloat::StaticRegisterNativesUVoxelNode_StaticClampFloat()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat_NoRegister()
	{
		return UVoxelNode_StaticClampFloat::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Nodes before this won't be computed for range analysis\n" },
		{ "DisplayName", "Static Clamp" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "Keywords", "range analysis" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Nodes before this won't be computed for range analysis" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Static Clamp" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_StaticClampFloat, Max), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Static Clamp" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_StaticClampFloat, Min), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_StaticClampFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::ClassParams = {
		&UVoxelNode_StaticClampFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_StaticClampFloat, 2289021061);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_StaticClampFloat>()
	{
		return UVoxelNode_StaticClampFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_StaticClampFloat(Z_Construct_UClass_UVoxelNode_StaticClampFloat, &UVoxelNode_StaticClampFloat::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_StaticClampFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_StaticClampFloat);
	void UVoxelNode_RangeAnalysisDebuggerFloat::StaticRegisterNativesUVoxelNode_RangeAnalysisDebuggerFloat()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_NoRegister()
	{
		return UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GraphStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GraphMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GraphMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Use this to debug the range of a value. Will plot the runtime values in a graph\n" },
		{ "DisplayName", "Range Analysis Debugger" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Use this to debug the range of a value. Will plot the runtime values in a graph" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep_MetaData[] = {
		{ "Category", "Graph" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep = { "GraphStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, GraphStep), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax = { "GraphMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, GraphMax), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin = { "GraphMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, GraphMin), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, Max), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, Min), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RangeAnalysisDebuggerFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::ClassParams = {
		&UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_RangeAnalysisDebuggerFloat, 1207977732);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_RangeAnalysisDebuggerFloat>()
	{
		return UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_RangeAnalysisDebuggerFloat(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat, &UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_RangeAnalysisDebuggerFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RangeAnalysisDebuggerFloat);
	void UVoxelNode_Sleep::StaticRegisterNativesUVoxelNode_Sleep()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_Sleep_NoRegister()
	{
		return UVoxelNode_Sleep::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_Sleep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfLoops_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfLoops;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_Sleep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Sleep_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Runs a for loop\n" },
		{ "DisplayName", "Stress" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Runs a for loop" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops = { "NumberOfLoops", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_Sleep, NumberOfLoops), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_Sleep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_Sleep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Sleep_Statics::ClassParams = {
		&UVoxelNode_Sleep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Sleep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_Sleep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_Sleep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_Sleep, 1850880864);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_Sleep>()
	{
		return UVoxelNode_Sleep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_Sleep(Z_Construct_UClass_UVoxelNode_Sleep, &UVoxelNode_Sleep::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_Sleep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_Sleep);
	void UVoxelNode_RangeUnion::StaticRegisterNativesUVoxelNode_RangeUnion()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_RangeUnion_NoRegister()
	{
		return UVoxelNode_RangeUnion::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_RangeUnion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// In range analysis, does the union of the inputs ranges. In other modes, returns 0\n" },
		{ "DisplayName", "Range Union" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "In range analysis, does the union of the inputs ranges. In other modes, returns 0" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RangeUnion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::ClassParams = {
		&UVoxelNode_RangeUnion::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_RangeUnion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_RangeUnion, 318048748);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_RangeUnion>()
	{
		return UVoxelNode_RangeUnion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_RangeUnion(Z_Construct_UClass_UVoxelNode_RangeUnion, &UVoxelNode_RangeUnion::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_RangeUnion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RangeUnion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
