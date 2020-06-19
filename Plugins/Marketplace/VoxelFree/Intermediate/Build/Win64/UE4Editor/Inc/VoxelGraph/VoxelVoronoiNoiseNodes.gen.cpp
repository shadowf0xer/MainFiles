// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelVoronoiNoiseNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelVoronoiNoiseNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise();
// End Cross Module References
	void UVoxelNode_VoronoiNoiseBase::StaticRegisterNativesUVoxelNode_VoronoiNoiseBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_NoRegister()
	{
		return UVoxelNode_VoronoiNoiseBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dimension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeNeighbors_MetaData[];
#endif
		static void NewProp_bComputeNeighbors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeNeighbors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_VoronoiNoiseBase, Dimension), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_MetaData[] = {
		{ "Category", "Voronoi settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_SetBit(void* Obj)
	{
		((UVoxelNode_VoronoiNoiseBase*)Obj)->bComputeNeighbors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors = { "bComputeNeighbors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_VoronoiNoiseBase), &Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_VoronoiNoiseBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::ClassParams = {
		&UVoxelNode_VoronoiNoiseBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_VoronoiNoiseBase, 3237457372);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_VoronoiNoiseBase>()
	{
		return UVoxelNode_VoronoiNoiseBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_VoronoiNoiseBase(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase, &UVoxelNode_VoronoiNoiseBase::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_VoronoiNoiseBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_VoronoiNoiseBase);
	void UVoxelNode_2DVoronoiNoise::StaticRegisterNativesUVoxelNode_2DVoronoiNoise()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_NoRegister()
	{
		return UVoxelNode_2DVoronoiNoise::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|Voronoi Noise" },
		{ "Comment", "// 2D Voronoi Noise\n" },
		{ "DisplayName", "2D Voronoi Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ToolTip", "2D Voronoi Noise" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DVoronoiNoise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::ClassParams = {
		&UVoxelNode_2DVoronoiNoise::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_2DVoronoiNoise, 1921853347);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DVoronoiNoise>()
	{
		return UVoxelNode_2DVoronoiNoise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_2DVoronoiNoise(Z_Construct_UClass_UVoxelNode_2DVoronoiNoise, &UVoxelNode_2DVoronoiNoise::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_2DVoronoiNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DVoronoiNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
