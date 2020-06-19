// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelTextureSamplerNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTextureSamplerNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TextureSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TextureSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler();
// End Cross Module References
	void UVoxelNode_TextureSampler::StaticRegisterNativesUVoxelNode_TextureSampler()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_TextureSampler_NoRegister()
	{
		return UVoxelNode_TextureSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_TextureSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBilinearInterpolation_MetaData[];
#endif
		static void NewProp_bBilinearInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBilinearInterpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "// Texture sampler. Inputs are in the texture dimension, not between 0 and 1\n" },
		{ "DisplayName", "Texture Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "Keywords", "constant parameter" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ToolTip", "Texture sampler. Inputs are in the texture dimension, not between 0 and 1" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_TextureSampler, Mode), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit(void* Obj)
	{
		((UVoxelNode_TextureSampler*)Obj)->bBilinearInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation = { "bBilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_TextureSampler), &Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_TextureSampler, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_TextureSampler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::ClassParams = {
		&UVoxelNode_TextureSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_TextureSampler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_TextureSampler, 1378184382);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_TextureSampler>()
	{
		return UVoxelNode_TextureSampler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_TextureSampler(Z_Construct_UClass_UVoxelNode_TextureSampler, &UVoxelNode_TextureSampler::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_TextureSampler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_TextureSampler);
	void UVoxelNode_VoxelTextureSampler::StaticRegisterNativesUVoxelNode_VoxelTextureSampler()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_NoRegister()
	{
		return UVoxelNode_VoxelTextureSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBilinearInterpolation_MetaData[];
#endif
		static void NewProp_bBilinearInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBilinearInterpolation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "// Voxel Texture sampler. Inputs are in the texture dimension, not between 0 and 1\n// The voxel texture can only be set in BP\n// You can create a voxel texture from another graph, or using erosion\n" },
		{ "DisplayName", "Voxel Texture Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "Keywords", "constant parameter" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ToolTip", "Voxel Texture sampler. Inputs are in the texture dimension, not between 0 and 1\nThe voxel texture can only be set in BP\nYou can create a voxel texture from another graph, or using erosion" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_VoxelTextureSampler, Mode), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit(void* Obj)
	{
		((UVoxelNode_VoxelTextureSampler*)Obj)->bBilinearInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation = { "bBilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_VoxelTextureSampler), &Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_VoxelTextureSampler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::ClassParams = {
		&UVoxelNode_VoxelTextureSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_VoxelTextureSampler, 3864646149);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_VoxelTextureSampler>()
	{
		return UVoxelNode_VoxelTextureSampler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_VoxelTextureSampler(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler, &UVoxelNode_VoxelTextureSampler::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_VoxelTextureSampler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_VoxelTextureSampler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
