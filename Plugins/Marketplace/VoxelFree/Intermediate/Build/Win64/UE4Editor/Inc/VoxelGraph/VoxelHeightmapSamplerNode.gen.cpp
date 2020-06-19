// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelHeightmapSamplerNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHeightmapSamplerNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister();
// End Cross Module References
	void UVoxelNode_HeightmapSampler::StaticRegisterNativesUVoxelNode_HeightmapSampler()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler_NoRegister()
	{
		return UVoxelNode_HeightmapSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SamplerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SamplerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapUINT16_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapUINT16;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFloatHeightmap_MetaData[];
#endif
		static void NewProp_bFloatHeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFloatHeightmap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Heightmap" },
		{ "Comment", "// Heightmap sampler\n" },
		{ "DisplayName", "Heightmap Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelHeightmapSamplerNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
		{ "ToolTip", "Heightmap sampler" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType = { "SamplerType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_HeightmapSampler, SamplerType), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "DisplayName", "Heightmap (uint16)" },
		{ "EditCondition", "!bFloatHeightmap" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16 = { "HeightmapUINT16", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_HeightmapSampler, HeightmapUINT16), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "DisplayName", "Heightmap (float)" },
		{ "EditCondition", "bFloatHeightmap" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat = { "HeightmapFloat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_HeightmapSampler, HeightmapFloat), Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_SetBit(void* Obj)
	{
		((UVoxelNode_HeightmapSampler*)Obj)->bFloatHeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap = { "bFloatHeightmap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_HeightmapSampler), &Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_HeightmapSampler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::ClassParams = {
		&UVoxelNode_HeightmapSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_HeightmapSampler, 1335333932);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_HeightmapSampler>()
	{
		return UVoxelNode_HeightmapSampler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_HeightmapSampler(Z_Construct_UClass_UVoxelNode_HeightmapSampler, &UVoxelNode_HeightmapSampler::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_HeightmapSampler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_HeightmapSampler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
