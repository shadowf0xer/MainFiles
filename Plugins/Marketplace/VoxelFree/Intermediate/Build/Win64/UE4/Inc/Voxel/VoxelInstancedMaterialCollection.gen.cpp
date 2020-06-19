// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelInstancedMaterialCollection() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollection_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollection();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance();
// End Cross Module References
class UScriptStruct* FVoxelInstancedMaterialCollectionLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInstancedMaterialCollectionLayer"), sizeof(FVoxelInstancedMaterialCollectionLayer), Get_Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelInstancedMaterialCollectionLayer>()
{
	return FVoxelInstancedMaterialCollectionLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer(FVoxelInstancedMaterialCollectionLayer::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelInstancedMaterialCollectionLayer"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelInstancedMaterialCollectionLayer
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelInstancedMaterialCollectionLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelInstancedMaterialCollectionLayer")),new UScriptStruct::TCppStructOps<FVoxelInstancedMaterialCollectionLayer>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelInstancedMaterialCollectionLayer;
	struct Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInstancedMaterialCollectionLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerMaterialInstance_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerMaterialInstance = { "LayerMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMaterialCollectionLayer, LayerMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMaterialCollectionLayer, LayerIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::NewProp_LayerIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelInstancedMaterialCollectionLayer",
		sizeof(FVoxelInstancedMaterialCollectionLayer),
		alignof(FVoxelInstancedMaterialCollectionLayer),
		Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelInstancedMaterialCollectionLayer"), sizeof(FVoxelInstancedMaterialCollectionLayer), Get_Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer_Hash() { return 1572615139U; }
	void UVoxelInstancedMaterialCollectionTemplates::StaticRegisterNativesUVoxelInstancedMaterialCollectionTemplates()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_NoRegister()
	{
		return UVoxelInstancedMaterialCollectionTemplates::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template6x_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template6x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template5x_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template5x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template4x_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template4x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template3x_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template3x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template2x_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template2x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template1x_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template1x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template6x_MetaData[] = {
		{ "Category", "Generated Templates" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template6x = { "Template6x", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollectionTemplates, Template6x), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template6x_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template6x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template5x_MetaData[] = {
		{ "Category", "Generated Templates" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template5x = { "Template5x", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollectionTemplates, Template5x), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template5x_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template5x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template4x_MetaData[] = {
		{ "Category", "Generated Templates" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template4x = { "Template4x", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollectionTemplates, Template4x), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template4x_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template4x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template3x_MetaData[] = {
		{ "Category", "Generated Templates" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template3x = { "Template3x", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollectionTemplates, Template3x), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template3x_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template3x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template2x_MetaData[] = {
		{ "Category", "Generated Templates" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template2x = { "Template2x", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollectionTemplates, Template2x), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template2x_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template2x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template1x_MetaData[] = {
		{ "Category", "Generated Templates" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template1x = { "Template1x", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollectionTemplates, Template1x), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template1x_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template1x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollectionTemplates, Template), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template6x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template5x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template4x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template3x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template2x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template1x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::NewProp_Template,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionTemplates>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::ClassParams = {
		&UVoxelInstancedMaterialCollectionTemplates::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInstancedMaterialCollectionTemplates, 585050838);
	template<> VOXEL_API UClass* StaticClass<UVoxelInstancedMaterialCollectionTemplates>()
	{
		return UVoxelInstancedMaterialCollectionTemplates::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInstancedMaterialCollectionTemplates(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates, &UVoxelInstancedMaterialCollectionTemplates::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelInstancedMaterialCollectionTemplates"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionTemplates);
	void UVoxelInstancedMaterialCollection::StaticRegisterNativesUVoxelInstancedMaterialCollection()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollection_NoRegister()
	{
		return UVoxelInstancedMaterialCollection::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Templates_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Templates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParametersPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParametersPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Redirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Redirects;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Redirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMaterialsToBlendAtOnce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMaterialsToBlendAtOnce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCachedMaterialCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollection, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelInstancedMaterialCollectionLayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Templates_MetaData[] = {
		{ "Category", "Templates" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Templates = { "Templates", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollection, Templates), Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplates_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Templates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Templates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_ParametersPrefix_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Parameters prefix in the template: eg, if VOXELPARAM_, VOXELPARAM_0:SomeParameterName will be set\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
		{ "ToolTip", "Parameters prefix in the template: eg, if VOXELPARAM_, VOXELPARAM_0:SomeParameterName will be set" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_ParametersPrefix = { "ParametersPrefix", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollection, ParametersPrefix), METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_ParametersPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_ParametersPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Redirects_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// For example: If \" Sides\" is a redirect and there's a \"Normal Sides\" parameter not overriden, the value of the \"Normal\" parameter will be used instead\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
		{ "ToolTip", "For example: If \" Sides\" is a redirect and there's a \"Normal Sides\" parameter not overriden, the value of the \"Normal\" parameter will be used instead" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Redirects = { "Redirects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollection, Redirects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Redirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Redirects_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Redirects_Inner = { "Redirects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "6" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
		{ "UIMax", "6" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce = { "MaxMaterialsToBlendAtOnce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollection, MaxMaterialsToBlendAtOnce), METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Layers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Templates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_ParametersPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Redirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_Redirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::ClassParams = {
		&UVoxelInstancedMaterialCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInstancedMaterialCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInstancedMaterialCollection, 3904257680);
	template<> VOXEL_API UClass* StaticClass<UVoxelInstancedMaterialCollection>()
	{
		return UVoxelInstancedMaterialCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInstancedMaterialCollection(Z_Construct_UClass_UVoxelInstancedMaterialCollection, &UVoxelInstancedMaterialCollection::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelInstancedMaterialCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollection);
	void UVoxelInstancedMaterialCollectionInstance::StaticRegisterNativesUVoxelInstancedMaterialCollectionInstance()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_NoRegister()
	{
		return UVoxelInstancedMaterialCollectionInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayersSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayersSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelInstancedMaterialCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Use to share layers across multiple collections - eg to enable/disable tessellation\n" },
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
		{ "ToolTip", "Use to share layers across multiple collections - eg to enable/disable tessellation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::NewProp_LayersSource_MetaData[] = {
		{ "Category", "Instance" },
		{ "Comment", "// The layers will be copied from this collection\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelInstancedMaterialCollection.h" },
		{ "ToolTip", "The layers will be copied from this collection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::NewProp_LayersSource = { "LayersSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInstancedMaterialCollectionInstance, LayersSource), Z_Construct_UClass_UVoxelInstancedMaterialCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::NewProp_LayersSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::NewProp_LayersSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::NewProp_LayersSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::ClassParams = {
		&UVoxelInstancedMaterialCollectionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInstancedMaterialCollectionInstance, 3688728047);
	template<> VOXEL_API UClass* StaticClass<UVoxelInstancedMaterialCollectionInstance>()
	{
		return UVoxelInstancedMaterialCollectionInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInstancedMaterialCollectionInstance(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstance, &UVoxelInstancedMaterialCollectionInstance::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelInstancedMaterialCollectionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
