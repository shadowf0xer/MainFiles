// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelPlaceableItemsNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemsNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelNode_PerlinWormDistance::StaticRegisterNativesUVoxelNode_PerlinWormDistance()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance_NoRegister()
	{
		return UVoxelNode_PerlinWormDistance::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::Class_MetaDataParams[] = {
		{ "Category", "Placeable Items" },
		{ "Comment", "// Return 0 when outside a worm, and the distance to the closest wall when inside\n// X Y Z inputs must be relatively close to the real XYZ, else the wrong worms will be used\n" },
		{ "DisplayName", "Perlin Worm Distance" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "ToolTip", "Return 0 when outside a worm, and the distance to the closest wall when inside\nX Y Z inputs must be relatively close to the real XYZ, else the wrong worms will be used" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_PerlinWormDistance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::ClassParams = {
		&UVoxelNode_PerlinWormDistance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_PerlinWormDistance, 3151835836);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_PerlinWormDistance>()
	{
		return UVoxelNode_PerlinWormDistance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_PerlinWormDistance(Z_Construct_UClass_UVoxelNode_PerlinWormDistance, &UVoxelNode_PerlinWormDistance::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_PerlinWormDistance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_PerlinWormDistance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
