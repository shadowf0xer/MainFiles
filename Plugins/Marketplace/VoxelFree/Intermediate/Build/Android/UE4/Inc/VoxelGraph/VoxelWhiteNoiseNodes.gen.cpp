// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelWhiteNoiseNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWhiteNoiseNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise();
// End Cross Module References
	void UVoxelNode_2DWhiteNoise::StaticRegisterNativesUVoxelNode_2DWhiteNoise()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise_NoRegister()
	{
		return UVoxelNode_2DWhiteNoise::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|White Noise" },
		{ "Comment", "// 2D White Noise\n" },
		{ "DisplayName", "2D White Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ToolTip", "2D White Noise" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DWhiteNoise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::ClassParams = {
		&UVoxelNode_2DWhiteNoise::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_2DWhiteNoise, 1089431116);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_2DWhiteNoise>()
	{
		return UVoxelNode_2DWhiteNoise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_2DWhiteNoise(Z_Construct_UClass_UVoxelNode_2DWhiteNoise, &UVoxelNode_2DWhiteNoise::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_2DWhiteNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DWhiteNoise);
	void UVoxelNode_3DWhiteNoise::StaticRegisterNativesUVoxelNode_3DWhiteNoise()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise_NoRegister()
	{
		return UVoxelNode_3DWhiteNoise::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::Class_MetaDataParams[] = {
		{ "Category", "Noise|White Noise" },
		{ "Comment", "// 3D White Noise\n" },
		{ "DisplayName", "3D White Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ToolTip", "3D White Noise" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_3DWhiteNoise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::ClassParams = {
		&UVoxelNode_3DWhiteNoise::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_3DWhiteNoise, 3841542083);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_3DWhiteNoise>()
	{
		return UVoxelNode_3DWhiteNoise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_3DWhiteNoise(Z_Construct_UClass_UVoxelNode_3DWhiteNoise, &UVoxelNode_3DWhiteNoise::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_3DWhiteNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_3DWhiteNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
