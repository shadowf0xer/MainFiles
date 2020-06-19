// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelImporters/VoxelMeshImporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMeshImporter() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettings();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterInputData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelMeshImporterSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMeshImporterSettings"), sizeof(FVoxelMeshImporterSettings), Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMeshImporterSettings>()
{
	return FVoxelMeshImporterSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelMeshImporterSettings(FVoxelMeshImporterSettings::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelMeshImporterSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelMeshImporterSettings
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelMeshImporterSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelMeshImporterSettings")),new UScriptStruct::TCppStructOps<FVoxelMeshImporterSettings>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelMeshImporterSettings;
	struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenderTargetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultiIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetMultiIndex_MetaData[];
#endif
		static void NewProp_bSetMultiIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetMultiIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SingleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetSingleIndex_MetaData[];
#endif
		static void NewProp_bSetSingleIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetSingleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVsMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UVsMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintUVs_MetaData[];
#endif
		static void NewProp_bPaintUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorsMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorsMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintColors_MetaData[];
#endif
		static void NewProp_bPaintColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintColors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMeshImporterSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_RenderTargetSize_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_RenderTargetSize = { "RenderTargetSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterSettings, RenderTargetSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_RenderTargetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_RenderTargetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_MultiIndex_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "EditCondition", "bSetMultiIndex" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_MultiIndex = { "MultiIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterSettings, MultiIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_MultiIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_MultiIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetMultiIndex_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetMultiIndex_SetBit(void* Obj)
	{
		((FVoxelMeshImporterSettings*)Obj)->bSetMultiIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetMultiIndex = { "bSetMultiIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettings), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetMultiIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetMultiIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetMultiIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_SingleIndex_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "EditCondition", "bSetSingleIndex" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_SingleIndex = { "SingleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterSettings, SingleIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_SingleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_SingleIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetSingleIndex_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetSingleIndex_SetBit(void* Obj)
	{
		((FVoxelMeshImporterSettings*)Obj)->bSetSingleIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetSingleIndex = { "bSetSingleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettings), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetSingleIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetSingleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetSingleIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_UVsMaterial_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "EditCondition", "bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_UVsMaterial = { "UVsMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterSettings, UVsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_UVsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_UVsMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintUVs_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// Will sample UVChannelsMaterial at the mesh UVs to get the voxel UVs\n// RG will go in first UV channel, BA in second\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Will sample UVChannelsMaterial at the mesh UVs to get the voxel UVs\nRG will go in first UV channel, BA in second" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintUVs_SetBit(void* Obj)
	{
		((FVoxelMeshImporterSettings*)Obj)->bPaintUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintUVs = { "bPaintUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettings), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_ColorsMaterial_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "EditCondition", "bPaintColors" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_ColorsMaterial = { "ColorsMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterSettings, ColorsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_ColorsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_ColorsMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintColors_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// Will sample ColorsMaterial at the mesh UVs to get the voxel colors\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Will sample ColorsMaterial at the mesh UVs to get the voxel colors" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintColors_SetBit(void* Obj)
	{
		((FVoxelMeshImporterSettings*)Obj)->bPaintColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintColors = { "bPaintColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettings), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintColors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_RenderTargetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_MultiIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetMultiIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_SingleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bSetSingleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_UVsMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_ColorsMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bPaintColors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase,
		&NewStructOps,
		"VoxelMeshImporterSettings",
		sizeof(FVoxelMeshImporterSettings),
		alignof(FVoxelMeshImporterSettings),
		Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelMeshImporterSettings"), sizeof(FVoxelMeshImporterSettings), Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Hash() { return 346110920U; }
class UScriptStruct* FVoxelMeshImporterSettingsBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMeshImporterSettingsBase"), sizeof(FVoxelMeshImporterSettingsBase), Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMeshImporterSettingsBase>()
{
	return FVoxelMeshImporterSettingsBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelMeshImporterSettingsBase(FVoxelMeshImporterSettingsBase::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelMeshImporterSettingsBase"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelMeshImporterSettingsBase
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelMeshImporterSettingsBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelMeshImporterSettingsBase")),new UScriptStruct::TCppStructOps<FVoxelMeshImporterSettingsBase>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelMeshImporterSettingsBase;
	struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeExactDistance_MetaData[];
#endif
		static void NewProp_bComputeExactDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeExactDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceDivisor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceDivisor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVoxelDistanceFromTriangle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxVoxelDistanceFromTriangle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideLeaks_MetaData[];
#endif
		static void NewProp_bHideLeaks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLeaks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMeshImporterSettingsBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bComputeExactDistance_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// If true, will compute the distance of every voxel\n// If false, just set voxels inside the mesh to -1 and voxels outside to 1, \n// with voxels under a distance of MaxVoxelDistanceFromTriangle from the mesh having the exact distance\n// Much faster if false\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "If true, will compute the distance of every voxel\nIf false, just set voxels inside the mesh to -1 and voxels outside to 1,\nwith voxels under a distance of MaxVoxelDistanceFromTriangle from the mesh having the exact distance\nMuch faster if false" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bComputeExactDistance_SetBit(void* Obj)
	{
		((FVoxelMeshImporterSettingsBase*)Obj)->bComputeExactDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bComputeExactDistance = { "bComputeExactDistance", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettingsBase), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bComputeExactDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bComputeExactDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bComputeExactDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceDivisor_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// Increase this if the shadows/normals quality is bad. Might require to increase MaxVoxelDistanceFromTriangle\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Increase this if the shadows/normals quality is bad. Might require to increase MaxVoxelDistanceFromTriangle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceDivisor = { "DistanceDivisor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterSettingsBase, DistanceDivisor), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceDivisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceDivisor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_MaxVoxelDistanceFromTriangle_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "ClampMin", "1" },
		{ "Comment", "// Distance will be exact for voxels under this distance from a triangle\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Distance will be exact for voxels under this distance from a triangle" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_MaxVoxelDistanceFromTriangle = { "MaxVoxelDistanceFromTriangle", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterSettingsBase, MaxVoxelDistanceFromTriangle), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_MaxVoxelDistanceFromTriangle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_MaxVoxelDistanceFromTriangle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceFieldOffset_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// Adds an offset to the distance field: a negative offset will make the volume bigger, a positive one will make it smaller.\n// eg try with -0.5 or 0.5\n// Might need to increase MaxVoxelDistanceFromTriangle if you go beyond -1\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Adds an offset to the distance field: a negative offset will make the volume bigger, a positive one will make it smaller.\neg try with -0.5 or 0.5\nMight need to increase MaxVoxelDistanceFromTriangle if you go beyond -1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceFieldOffset = { "DistanceFieldOffset", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterSettingsBase, DistanceFieldOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceFieldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceFieldOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// If true, will hide leaks by having holes instead\n// If false, leaks will be long tubes going through the entire asset\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "If true, will hide leaks by having holes instead\nIf false, leaks will be long tubes going through the entire asset" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks_SetBit(void* Obj)
	{
		((FVoxelMeshImporterSettingsBase*)Obj)->bHideLeaks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks = { "bHideLeaks", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettingsBase), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterSettingsBase, VoxelSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_VoxelSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bComputeExactDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceDivisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_MaxVoxelDistanceFromTriangle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceFieldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_VoxelSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelMeshImporterSettingsBase",
		sizeof(FVoxelMeshImporterSettingsBase),
		alignof(FVoxelMeshImporterSettingsBase),
		Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelMeshImporterSettingsBase"), sizeof(FVoxelMeshImporterSettingsBase), Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Hash() { return 3326964015U; }
class UScriptStruct* FVoxelMeshImporterRenderTargetCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMeshImporterRenderTargetCache"), sizeof(FVoxelMeshImporterRenderTargetCache), Get_Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMeshImporterRenderTargetCache>()
{
	return FVoxelMeshImporterRenderTargetCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelMeshImporterRenderTargetCache(FVoxelMeshImporterRenderTargetCache::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelMeshImporterRenderTargetCache"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelMeshImporterRenderTargetCache
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelMeshImporterRenderTargetCache()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelMeshImporterRenderTargetCache")),new UScriptStruct::TCppStructOps<FVoxelMeshImporterRenderTargetCache>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelMeshImporterRenderTargetCache;
	struct Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRenderedRenderTargetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastRenderedRenderTargetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRenderedUVsMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastRenderedUVsMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRenderedColorsMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastRenderedColorsMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVsRenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UVsRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorsRenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorsRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMeshImporterRenderTargetCache>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedRenderTargetSize_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedRenderTargetSize = { "LastRenderedRenderTargetSize", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, LastRenderedRenderTargetSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedRenderTargetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedRenderTargetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedUVsMaterial_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedUVsMaterial = { "LastRenderedUVsMaterial", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, LastRenderedUVsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedUVsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedUVsMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedColorsMaterial_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedColorsMaterial = { "LastRenderedColorsMaterial", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, LastRenderedColorsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedColorsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedColorsMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_UVsRenderTarget_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_UVsRenderTarget = { "UVsRenderTarget", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, UVsRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_UVsRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_UVsRenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_ColorsRenderTarget_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_ColorsRenderTarget = { "ColorsRenderTarget", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, ColorsRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_ColorsRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_ColorsRenderTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedRenderTargetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedUVsMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedColorsMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_UVsRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_ColorsRenderTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelMeshImporterRenderTargetCache",
		sizeof(FVoxelMeshImporterRenderTargetCache),
		alignof(FVoxelMeshImporterRenderTargetCache),
		Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelMeshImporterRenderTargetCache"), sizeof(FVoxelMeshImporterRenderTargetCache), Get_Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Hash() { return 2446215832U; }
	void UVoxelMeshImporterInputData::StaticRegisterNativesUVoxelMeshImporterInputData()
	{
	}
	UClass* Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister()
	{
		return UVoxelMeshImporterInputData::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMeshImporterInputData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// We don't want to copy the arrays in the BP, so use an object for that\n" },
		{ "IncludePath", "VoxelImporters/VoxelMeshImporter.h" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "We don't want to copy the arrays in the BP, so use an object for that" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshImporterInputData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::ClassParams = {
		&UVoxelMeshImporterInputData::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMeshImporterInputData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMeshImporterInputData, 2104660661);
	template<> VOXEL_API UClass* StaticClass<UVoxelMeshImporterInputData>()
	{
		return UVoxelMeshImporterInputData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMeshImporterInputData(Z_Construct_UClass_UVoxelMeshImporterInputData, &UVoxelMeshImporterInputData::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMeshImporterInputData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshImporterInputData);
	DEFINE_FUNCTION(UVoxelMeshImporterLibrary::execConvertMeshToVoxels_NoMaterials)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UVoxelMeshImporterInputData,Z_Param_Mesh);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_UBOOL(Z_Param_bSubtractive);
		P_GET_STRUCT(FVoxelMeshImporterSettingsBase,Z_Param_Settings);
		P_GET_OBJECT_REF(UVoxelDataAsset,Z_Param_Out_Asset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLeaks);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelMeshImporterLibrary::ConvertMeshToVoxels_NoMaterials(Z_Param_WorldContextObject,Z_Param_Mesh,Z_Param_Transform,Z_Param_bSubtractive,Z_Param_Settings,Z_Param_Out_Asset,Z_Param_Out_NumLeaks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMeshImporterLibrary::execConvertMeshToVoxels)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UVoxelMeshImporterInputData,Z_Param_Mesh);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_UBOOL(Z_Param_bSubtractive);
		P_GET_STRUCT(FVoxelMeshImporterSettings,Z_Param_Settings);
		P_GET_STRUCT_REF(FVoxelMeshImporterRenderTargetCache,Z_Param_Out_RenderTargetCache);
		P_GET_OBJECT_REF(UVoxelDataAsset,Z_Param_Out_Asset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLeaks);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelMeshImporterLibrary::ConvertMeshToVoxels(Z_Param_WorldContextObject,Z_Param_Mesh,Z_Param_Transform,Z_Param_bSubtractive,Z_Param_Settings,Z_Param_Out_RenderTargetCache,Z_Param_Out_Asset,Z_Param_Out_NumLeaks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMeshImporterLibrary::execCreateTextureFromMaterial)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=UVoxelMeshImporterLibrary::CreateTextureFromMaterial(Z_Param_WorldContextObject,Z_Param_Material,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMeshImporterLibrary::execCreateMeshDataFromStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelMeshImporterInputData**)Z_Param__Result=UVoxelMeshImporterLibrary::CreateMeshDataFromStaticMesh(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	void UVoxelMeshImporterLibrary::StaticRegisterNativesUVoxelMeshImporterLibrary()
	{
		UClass* Class = UVoxelMeshImporterLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertMeshToVoxels", &UVoxelMeshImporterLibrary::execConvertMeshToVoxels },
			{ "ConvertMeshToVoxels_NoMaterials", &UVoxelMeshImporterLibrary::execConvertMeshToVoxels_NoMaterials },
			{ "CreateMeshDataFromStaticMesh", &UVoxelMeshImporterLibrary::execCreateMeshDataFromStaticMesh },
			{ "CreateTextureFromMaterial", &UVoxelMeshImporterLibrary::execCreateTextureFromMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics
	{
		struct VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms
		{
			UObject* WorldContextObject;
			UVoxelMeshImporterInputData* Mesh;
			FTransform Transform;
			bool bSubtractive;
			FVoxelMeshImporterSettings Settings;
			FVoxelMeshImporterRenderTargetCache RenderTargetCache;
			UVoxelDataAsset* Asset;
			int32 NumLeaks;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLeaks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderTargetCache;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static void NewProp_bSubtractive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtractive;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_NumLeaks = { "NumLeaks", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, NumLeaks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_RenderTargetCache = { "RenderTargetCache", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, RenderTargetCache), Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, Settings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettings, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_bSubtractive_SetBit(void* Obj)
	{
		((VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms*)Obj)->bSubtractive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_bSubtractive = { "bSubtractive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms), &Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_bSubtractive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, Mesh), Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_NumLeaks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_RenderTargetCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_bSubtractive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Mesh Importer" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMeshImporterLibrary, nullptr, "ConvertMeshToVoxels", nullptr, nullptr, sizeof(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms), Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics
	{
		struct VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms
		{
			UObject* WorldContextObject;
			UVoxelMeshImporterInputData* Mesh;
			FTransform Transform;
			bool bSubtractive;
			FVoxelMeshImporterSettingsBase Settings;
			UVoxelDataAsset* Asset;
			int32 NumLeaks;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLeaks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static void NewProp_bSubtractive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtractive;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_NumLeaks = { "NumLeaks", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, NumLeaks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, Settings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_bSubtractive_SetBit(void* Obj)
	{
		((VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms*)Obj)->bSubtractive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_bSubtractive = { "bSubtractive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms), &Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_bSubtractive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, Mesh), Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_NumLeaks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_bSubtractive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Mesh Importer" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMeshImporterLibrary, nullptr, "ConvertMeshToVoxels_NoMaterials", nullptr, nullptr, sizeof(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms), Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics
	{
		struct VoxelMeshImporterLibrary_eventCreateMeshDataFromStaticMesh_Parms
		{
			UStaticMesh* StaticMesh;
			UVoxelMeshImporterInputData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateMeshDataFromStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateMeshDataFromStaticMesh_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Mesh Importer" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMeshImporterLibrary, nullptr, "CreateMeshDataFromStaticMesh", nullptr, nullptr, sizeof(VoxelMeshImporterLibrary_eventCreateMeshDataFromStaticMesh_Parms), Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics
	{
		struct VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms
		{
			UObject* WorldContextObject;
			UMaterialInterface* Material;
			int32 Width;
			int32 Height;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Mesh Importer" },
		{ "CPP_Default_Height", "1024" },
		{ "CPP_Default_Width", "1024" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMeshImporterLibrary, nullptr, "CreateTextureFromMaterial", nullptr, nullptr, sizeof(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms), Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary_NoRegister()
	{
		return UVoxelMeshImporterLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels, "ConvertMeshToVoxels" }, // 2828359403
		{ &Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials, "ConvertMeshToVoxels_NoMaterials" }, // 3747318400
		{ &Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh, "CreateMeshDataFromStaticMesh" }, // 724938847
		{ &Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial, "CreateTextureFromMaterial" }, // 1004466575
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelImporters/VoxelMeshImporter.h" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshImporterLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::ClassParams = {
		&UVoxelMeshImporterLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMeshImporterLibrary, 100524751);
	template<> VOXEL_API UClass* StaticClass<UVoxelMeshImporterLibrary>()
	{
		return UVoxelMeshImporterLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMeshImporterLibrary(Z_Construct_UClass_UVoxelMeshImporterLibrary, &UVoxelMeshImporterLibrary::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMeshImporterLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshImporterLibrary);
	void AVoxelMeshImporter::StaticRegisterNativesAVoxelMeshImporter()
	{
	}
	UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister()
	{
		return AVoxelMeshImporter::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelMeshImporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedVertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedVertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedVertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeInMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeInMB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_NumberOfVoxels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SizeZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelMeshImporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor that creates a VoxelDataAsset from a static mesh\n */" },
		{ "HideCategories", "Tick Replication Input Actor Rendering HOLD LOD Cooking" },
		{ "IncludePath", "VoxelImporters/VoxelMeshImporter.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Actor that creates a VoxelDataAsset from a static mesh" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedTransform = { "CachedTransform", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, CachedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices = { "CachedVertices", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, CachedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices_Inner = { "CachedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedStaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedStaticMesh = { "CachedStaticMesh", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, CachedStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedBox_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedBox = { "CachedBox", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, CachedBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeInMB_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeInMB = { "SizeInMB", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, SizeInMB), METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeInMB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_NumberOfVoxels_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_NumberOfVoxels = { "NumberOfVoxels", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, NumberOfVoxels), METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_NumberOfVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_NumberOfVoxels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeZ_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, SizeZ), METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, SizeY), METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, SizeX), METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, Settings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettings, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// The static mesh to import from\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "The static mesh to import from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshImporter, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMeshImporter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeInMB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_NumberOfVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelMeshImporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMeshImporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMeshImporter_Statics::ClassParams = {
		&AVoxelMeshImporter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelMeshImporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshImporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelMeshImporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelMeshImporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelMeshImporter, 2677567492);
	template<> VOXEL_API UClass* StaticClass<AVoxelMeshImporter>()
	{
		return AVoxelMeshImporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelMeshImporter(Z_Construct_UClass_AVoxelMeshImporter, &AVoxelMeshImporter::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelMeshImporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMeshImporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
