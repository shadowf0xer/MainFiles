// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelDataAssetSamplerNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetSamplerNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
// End Cross Module References
	void UVoxelNode_DataAssetSampler::StaticRegisterNativesUVoxelNode_DataAssetSampler()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler_NoRegister()
	{
		return UVoxelNode_DataAssetSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBilinearInterpolation_MetaData[];
#endif
		static void NewProp_bBilinearInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBilinearInterpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Heightmap" },
		{ "Comment", "// Voxel data asset sampler\n" },
		{ "DisplayName", "Data Asset Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "ToolTip", "Voxel data asset sampler" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDataAssetSamplerNode.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_SetBit(void* Obj)
	{
		((UVoxelNode_DataAssetSampler*)Obj)->bBilinearInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation = { "bBilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_DataAssetSampler), &Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDataAssetSamplerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_DataAssetSampler, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_DataAssetSampler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::ClassParams = {
		&UVoxelNode_DataAssetSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_DataAssetSampler, 351273030);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_DataAssetSampler>()
	{
		return UVoxelNode_DataAssetSampler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_DataAssetSampler(Z_Construct_UClass_UVoxelNode_DataAssetSampler, &UVoxelNode_DataAssetSampler::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_DataAssetSampler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_DataAssetSampler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
