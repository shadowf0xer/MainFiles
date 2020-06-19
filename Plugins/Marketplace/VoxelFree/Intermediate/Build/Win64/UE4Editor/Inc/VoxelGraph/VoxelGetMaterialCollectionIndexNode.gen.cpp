// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGetMaterialCollectionIndexNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGetMaterialCollectionIndexNode() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelAssetPickerNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UVoxelNode_GetMaterialCollectionIndex::StaticRegisterNativesUVoxelNode_GetMaterialCollectionIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_NoRegister()
	{
		return UVoxelNode_GetMaterialCollectionIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelAssetPickerNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::Class_MetaDataParams[] = {
		{ "Category", "Material" },
		{ "Comment", "// Retrieve the index of a material function or a material instance in the voxel world material collection\n" },
		{ "DisplayName", "Get Material Collection Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGetMaterialCollectionIndexNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGetMaterialCollectionIndexNode.h" },
		{ "ToolTip", "Retrieve the index of a material function or a material instance in the voxel world material collection" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGetMaterialCollectionIndexNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GetMaterialCollectionIndex, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetMaterialCollectionIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::ClassParams = {
		&UVoxelNode_GetMaterialCollectionIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetMaterialCollectionIndex, 3917612068);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetMaterialCollectionIndex>()
	{
		return UVoxelNode_GetMaterialCollectionIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetMaterialCollectionIndex(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex, &UVoxelNode_GetMaterialCollectionIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetMaterialCollectionIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetMaterialCollectionIndex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
