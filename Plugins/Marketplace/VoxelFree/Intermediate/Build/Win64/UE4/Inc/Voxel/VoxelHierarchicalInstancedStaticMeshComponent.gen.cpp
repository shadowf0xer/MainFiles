// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHierarchicalInstancedStaticMeshComponent() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UVoxelHierarchicalInstancedStaticMeshComponent::StaticRegisterNativesUVoxelHierarchicalInstancedStaticMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister()
	{
		return UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Voxel_DebugMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Voxel_DebugMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Voxel_BuildDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Voxel_BuildDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Need to prefix names with Voxel to avoid collisions with normal HISM\n" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Need to prefix names with Voxel to avoid collisions with normal HISM" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial = { "Voxel_DebugMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHierarchicalInstancedStaticMeshComponent, Voxel_DebugMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// How long to wait for new instances before triggering a new cull tree/render update\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "How long to wait for new instances before triggering a new cull tree/render update" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay = { "Voxel_BuildDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHierarchicalInstancedStaticMeshComponent, Voxel_BuildDelay), METADATA_PARAMS(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHierarchicalInstancedStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::ClassParams = {
		&UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelHierarchicalInstancedStaticMeshComponent, 3926303677);
	template<> VOXEL_API UClass* StaticClass<UVoxelHierarchicalInstancedStaticMeshComponent>()
	{
		return UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelHierarchicalInstancedStaticMeshComponent(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent, &UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelHierarchicalInstancedStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHierarchicalInstancedStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
