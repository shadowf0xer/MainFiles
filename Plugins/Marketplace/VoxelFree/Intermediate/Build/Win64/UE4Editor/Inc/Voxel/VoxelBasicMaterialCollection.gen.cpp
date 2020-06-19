// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBasicMaterialCollection() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
// End Cross Module References
class UScriptStruct* FVoxelBasicMaterialCollectionLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelBasicMaterialCollectionLayer"), sizeof(FVoxelBasicMaterialCollectionLayer), Get_Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelBasicMaterialCollectionLayer>()
{
	return FVoxelBasicMaterialCollectionLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelBasicMaterialCollectionLayer(FVoxelBasicMaterialCollectionLayer::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelBasicMaterialCollectionLayer"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelBasicMaterialCollectionLayer
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelBasicMaterialCollectionLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelBasicMaterialCollectionLayer")),new UScriptStruct::TCppStructOps<FVoxelBasicMaterialCollectionLayer>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelBasicMaterialCollectionLayer;
	struct Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBasicMaterialCollectionLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial = { "LayerMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelBasicMaterialCollectionLayer, LayerMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelBasicMaterialCollectionLayer, LayerIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelBasicMaterialCollectionLayer",
		sizeof(FVoxelBasicMaterialCollectionLayer),
		alignof(FVoxelBasicMaterialCollectionLayer),
		Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelBasicMaterialCollectionLayer"), sizeof(FVoxelBasicMaterialCollectionLayer), Get_Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Hash() { return 139637472U; }
	void UVoxelBasicMaterialCollection::StaticRegisterNativesUVoxelBasicMaterialCollection()
	{
	}
	UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection_NoRegister()
	{
		return UVoxelBasicMaterialCollection::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialCollectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Material collection that does not generate any blending and is just a list of materials\n" },
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
		{ "ToolTip", "Material collection that does not generate any blending and is just a list of materials" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelBasicMaterialCollection, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBasicMaterialCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::ClassParams = {
		&UVoxelBasicMaterialCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBasicMaterialCollection, 1063570984);
	template<> VOXEL_API UClass* StaticClass<UVoxelBasicMaterialCollection>()
	{
		return UVoxelBasicMaterialCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBasicMaterialCollection(Z_Construct_UClass_UVoxelBasicMaterialCollection, &UVoxelBasicMaterialCollection::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelBasicMaterialCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBasicMaterialCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
