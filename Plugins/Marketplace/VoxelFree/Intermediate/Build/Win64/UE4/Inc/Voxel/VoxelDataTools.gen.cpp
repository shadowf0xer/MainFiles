// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelDataTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataTools() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelValueMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
// End Cross Module References
class UScriptStruct* FVoxelFindClosestNonEmptyVoxelResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFindClosestNonEmptyVoxelResult"), sizeof(FVoxelFindClosestNonEmptyVoxelResult), Get_Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelFindClosestNonEmptyVoxelResult>()
{
	return FVoxelFindClosestNonEmptyVoxelResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult(FVoxelFindClosestNonEmptyVoxelResult::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelFindClosestNonEmptyVoxelResult"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelFindClosestNonEmptyVoxelResult
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelFindClosestNonEmptyVoxelResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelFindClosestNonEmptyVoxelResult")),new UScriptStruct::TCppStructOps<FVoxelFindClosestNonEmptyVoxelResult>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelFindClosestNonEmptyVoxelResult;
	struct Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFindClosestNonEmptyVoxelResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFindClosestNonEmptyVoxelResult, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelFindClosestNonEmptyVoxelResult, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FVoxelFindClosestNonEmptyVoxelResult*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelFindClosestNonEmptyVoxelResult), &Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelFindClosestNonEmptyVoxelResult",
		sizeof(FVoxelFindClosestNonEmptyVoxelResult),
		alignof(FVoxelFindClosestNonEmptyVoxelResult),
		Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelFindClosestNonEmptyVoxelResult"), sizeof(FVoxelFindClosestNonEmptyVoxelResult), Get_Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Hash() { return 3668609359U; }
class UScriptStruct* FVoxelDataMemoryUsageInMB::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelDataMemoryUsageInMB"), sizeof(FVoxelDataMemoryUsageInMB), Get_Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelDataMemoryUsageInMB>()
{
	return FVoxelDataMemoryUsageInMB::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelDataMemoryUsageInMB(FVoxelDataMemoryUsageInMB::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelDataMemoryUsageInMB"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelDataMemoryUsageInMB
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelDataMemoryUsageInMB()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelDataMemoryUsageInMB")),new UScriptStruct::TCppStructOps<FVoxelDataMemoryUsageInMB>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelDataMemoryUsageInMB;
	struct Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedFoliage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyFoliage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirtyFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirtyMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirtyValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelDataMemoryUsageInMB>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedFoliage_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedFoliage = { "CachedFoliage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, CachedFoliage), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyFoliage_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyFoliage = { "DirtyFoliage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, DirtyFoliage), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedMaterials_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedMaterials = { "CachedMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, CachedMaterials), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyMaterials_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyMaterials = { "DirtyMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, DirtyMaterials), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedValues_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedValues = { "CachedValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, CachedValues), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyValues_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyValues = { "DirtyValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, DirtyValues), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelDataMemoryUsageInMB",
		sizeof(FVoxelDataMemoryUsageInMB),
		alignof(FVoxelDataMemoryUsageInMB),
		Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelDataMemoryUsageInMB"), sizeof(FVoxelDataMemoryUsageInMB), Get_Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Hash() { return 3091007036U; }
class UScriptStruct* FVoxelValueMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelValueMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelValueMaterial, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelValueMaterial"), sizeof(FVoxelValueMaterial), Get_Z_Construct_UScriptStruct_FVoxelValueMaterial_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelValueMaterial>()
{
	return FVoxelValueMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelValueMaterial(FVoxelValueMaterial::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelValueMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelValueMaterial
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelValueMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelValueMaterial")),new UScriptStruct::TCppStructOps<FVoxelValueMaterial>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelValueMaterial;
	struct Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelValueMaterial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelValueMaterial, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelValueMaterial, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelValueMaterial, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelValueMaterial",
		sizeof(FVoxelValueMaterial),
		alignof(FVoxelValueMaterial),
		Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelValueMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelValueMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelValueMaterial"), sizeof(FVoxelValueMaterial), Get_Z_Construct_UScriptStruct_FVoxelValueMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelValueMaterial_Hash() { return 23369704U; }
	DEFINE_FUNCTION(UVoxelDataTools::execFindClosestNonEmptyVoxelAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelFindClosestNonEmptyVoxelResult,Z_Param_Out_Result);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::FindClosestNonEmptyVoxelAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Result,Z_Param_World,Z_Param_Position,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execFindClosestNonEmptyVoxel)
	{
		P_GET_STRUCT_REF(FVoxelFindClosestNonEmptyVoxelResult,Z_Param_Out_Result);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::FindClosestNonEmptyVoxel(Z_Param_Out_Result,Z_Param_World,Z_Param_Position,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execLevelAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bAdditive);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::LevelAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_Height,Z_Param_Falloff,Z_Param_bAdditive,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execLevel)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bAdditive);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::Level(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_Height,Z_Param_Falloff,Z_Param_bAdditive,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execSetBoxAsDirtyAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bDirtyValues);
		P_GET_UBOOL(Z_Param_bDirtyMaterials);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::SetBoxAsDirtyAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bDirtyValues,Z_Param_bDirtyMaterials,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execSetBoxAsDirty)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bDirtyValues);
		P_GET_UBOOL(Z_Param_bDirtyMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::SetBoxAsDirty(Z_Param_World,Z_Param_Bounds,Z_Param_bDirtyValues,Z_Param_bDirtyMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCheckIfSameAsGeneratorAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CheckIfSameAsGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCheckIfSameAsGenerator)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CheckIfSameAsGenerator(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execRoundToGeneratorAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bPreserveNormals);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::RoundToGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bPreserveNormals,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execRoundToGenerator)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bPreserveNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::RoundToGenerator(Z_Param_World,Z_Param_Bounds,Z_Param_bPreserveNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCompressIntoHeightmap)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelHeightmapAsset,Z_Param_HeightmapAsset);
		P_GET_UBOOL(Z_Param_bHeightmapAssetMatchesWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CompressIntoHeightmap(Z_Param_World,Z_Param_HeightmapAsset,Z_Param_bHeightmapAssetMatchesWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCheckForSingleMaterialsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CheckForSingleMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCheckForSingleMaterials)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CheckForSingleMaterials(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCheckForSingleValuesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CheckForSingleValuesAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCheckForSingleValues)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CheckForSingleValues(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execClearCachedMaterialsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::ClearCachedMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execClearCachedMaterials)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::ClearCachedMaterials(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execClearCachedValuesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::ClearCachedValuesAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execClearCachedValues)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::ClearCachedValues(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetDataMemoryUsageInMB)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelDataMemoryUsageInMB*)Z_Param__Result=UVoxelDataTools::GetDataMemoryUsageInMB(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetVoxelsValueAndMaterialAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FVoxelValueMaterial,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_TARRAY_REF(FIntVector,Z_Param_Out_Positions);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetVoxelsValueAndMaterialAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Voxels,Z_Param_World,Z_Param_Out_Positions,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetVoxelsValueAndMaterial)
	{
		P_GET_TARRAY_REF(FVoxelValueMaterial,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_TARRAY_REF(FIntVector,Z_Param_Out_Positions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetVoxelsValueAndMaterial(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Out_Positions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execClearUnusedMaterialsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::ClearUnusedMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execClearUnusedMaterials)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::ClearUnusedMaterials(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execRoundVoxelsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::RoundVoxelsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execRoundVoxels)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::RoundVoxels(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execLoadFromCompressedSave)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_Save);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelDataTools::LoadFromCompressedSave(Z_Param_World,Z_Param_Out_Save);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execLoadFromSave)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_Save);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelDataTools::LoadFromSave(Z_Param_World,Z_Param_Out_Save);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetCompressedSaveAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_OutSave);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetCompressedSaveAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Out_OutSave,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetSaveAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_OutSave);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetSaveAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Out_OutSave,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetCompressedSave)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_OutSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetCompressedSave(Z_Param_World,Z_Param_Out_OutSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetSave)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_OutSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetSave(Z_Param_World,Z_Param_Out_OutSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCacheMaterialsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CacheMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCacheValuesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CacheValuesAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execSetMaterialAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::SetMaterialAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Material,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetMaterialAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelMaterial,Z_Param_Out_Material);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetMaterialAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Material,Z_Param_World,Z_Param_Position,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execSetValueAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::SetValueAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Value,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetValueAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetValueAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Value,Z_Param_World,Z_Param_Position,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCacheMaterials)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CacheMaterials(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execCacheValues)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::CacheValues(Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execSetMaterial)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::SetMaterial(Z_Param_World,Z_Param_Position,Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetMaterial)
	{
		P_GET_STRUCT_REF(FVoxelMaterial,Z_Param_Out_Material);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetMaterial(Z_Param_Out_Material,Z_Param_World,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execSetValue)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::SetValue(Z_Param_World,Z_Param_Position,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetInterpolatedValue)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetInterpolatedValue(Z_Param_Out_Value,Z_Param_World,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataTools::execGetValue)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FIntVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDataTools::GetValue(Z_Param_Out_Value,Z_Param_World,Z_Param_Position);
		P_NATIVE_END;
	}
	void UVoxelDataTools::StaticRegisterNativesUVoxelDataTools()
	{
		UClass* Class = UVoxelDataTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CacheMaterials", &UVoxelDataTools::execCacheMaterials },
			{ "CacheMaterialsAsync", &UVoxelDataTools::execCacheMaterialsAsync },
			{ "CacheValues", &UVoxelDataTools::execCacheValues },
			{ "CacheValuesAsync", &UVoxelDataTools::execCacheValuesAsync },
			{ "CheckForSingleMaterials", &UVoxelDataTools::execCheckForSingleMaterials },
			{ "CheckForSingleMaterialsAsync", &UVoxelDataTools::execCheckForSingleMaterialsAsync },
			{ "CheckForSingleValues", &UVoxelDataTools::execCheckForSingleValues },
			{ "CheckForSingleValuesAsync", &UVoxelDataTools::execCheckForSingleValuesAsync },
			{ "CheckIfSameAsGenerator", &UVoxelDataTools::execCheckIfSameAsGenerator },
			{ "CheckIfSameAsGeneratorAsync", &UVoxelDataTools::execCheckIfSameAsGeneratorAsync },
			{ "ClearCachedMaterials", &UVoxelDataTools::execClearCachedMaterials },
			{ "ClearCachedMaterialsAsync", &UVoxelDataTools::execClearCachedMaterialsAsync },
			{ "ClearCachedValues", &UVoxelDataTools::execClearCachedValues },
			{ "ClearCachedValuesAsync", &UVoxelDataTools::execClearCachedValuesAsync },
			{ "ClearUnusedMaterials", &UVoxelDataTools::execClearUnusedMaterials },
			{ "ClearUnusedMaterialsAsync", &UVoxelDataTools::execClearUnusedMaterialsAsync },
			{ "CompressIntoHeightmap", &UVoxelDataTools::execCompressIntoHeightmap },
			{ "FindClosestNonEmptyVoxel", &UVoxelDataTools::execFindClosestNonEmptyVoxel },
			{ "FindClosestNonEmptyVoxelAsync", &UVoxelDataTools::execFindClosestNonEmptyVoxelAsync },
			{ "GetCompressedSave", &UVoxelDataTools::execGetCompressedSave },
			{ "GetCompressedSaveAsync", &UVoxelDataTools::execGetCompressedSaveAsync },
			{ "GetDataMemoryUsageInMB", &UVoxelDataTools::execGetDataMemoryUsageInMB },
			{ "GetInterpolatedValue", &UVoxelDataTools::execGetInterpolatedValue },
			{ "GetMaterial", &UVoxelDataTools::execGetMaterial },
			{ "GetMaterialAsync", &UVoxelDataTools::execGetMaterialAsync },
			{ "GetSave", &UVoxelDataTools::execGetSave },
			{ "GetSaveAsync", &UVoxelDataTools::execGetSaveAsync },
			{ "GetValue", &UVoxelDataTools::execGetValue },
			{ "GetValueAsync", &UVoxelDataTools::execGetValueAsync },
			{ "GetVoxelsValueAndMaterial", &UVoxelDataTools::execGetVoxelsValueAndMaterial },
			{ "GetVoxelsValueAndMaterialAsync", &UVoxelDataTools::execGetVoxelsValueAndMaterialAsync },
			{ "Level", &UVoxelDataTools::execLevel },
			{ "LevelAsync", &UVoxelDataTools::execLevelAsync },
			{ "LoadFromCompressedSave", &UVoxelDataTools::execLoadFromCompressedSave },
			{ "LoadFromSave", &UVoxelDataTools::execLoadFromSave },
			{ "RoundToGenerator", &UVoxelDataTools::execRoundToGenerator },
			{ "RoundToGeneratorAsync", &UVoxelDataTools::execRoundToGeneratorAsync },
			{ "RoundVoxels", &UVoxelDataTools::execRoundVoxels },
			{ "RoundVoxelsAsync", &UVoxelDataTools::execRoundVoxelsAsync },
			{ "SetBoxAsDirty", &UVoxelDataTools::execSetBoxAsDirty },
			{ "SetBoxAsDirtyAsync", &UVoxelDataTools::execSetBoxAsDirtyAsync },
			{ "SetMaterial", &UVoxelDataTools::execSetMaterial },
			{ "SetMaterialAsync", &UVoxelDataTools::execSetMaterialAsync },
			{ "SetValue", &UVoxelDataTools::execSetValue },
			{ "SetValueAsync", &UVoxelDataTools::execSetValueAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics
	{
		struct VoxelDataTools_eventCacheMaterials_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterials_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Cache" },
		{ "Comment", "// Cache the materials in the bounds\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Cache the materials in the bounds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CacheMaterials", nullptr, nullptr, sizeof(VoxelDataTools_eventCacheMaterials_Parms), Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CacheMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics
	{
		struct VoxelDataTools_eventCacheMaterialsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventCacheMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventCacheMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterialsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterialsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data|Cache" },
		{ "Comment", "// Cache the materials in the bounds\n" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Cache the materials in the bounds" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CacheMaterialsAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventCacheMaterialsAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics
	{
		struct VoxelDataTools_eventCacheValues_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValues_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Cache" },
		{ "Comment", "// Cache the values in the bounds\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Cache the values in the bounds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CacheValues", nullptr, nullptr, sizeof(VoxelDataTools_eventCacheValues_Parms), Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CacheValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics
	{
		struct VoxelDataTools_eventCacheValuesAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventCacheValuesAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventCacheValuesAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValuesAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValuesAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValuesAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValuesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data|Cache" },
		{ "Comment", "// Cache the values in the bounds\n" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Cache the values in the bounds" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CacheValuesAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventCacheValuesAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics
	{
		struct VoxelDataTools_eventCheckForSingleMaterials_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterials_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckForSingleMaterials", nullptr, nullptr, sizeof(VoxelDataTools_eventCheckForSingleMaterials_Parms), Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics
	{
		struct VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckForSingleMaterialsAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics
	{
		struct VoxelDataTools_eventCheckForSingleValues_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValues_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckForSingleValues", nullptr, nullptr, sizeof(VoxelDataTools_eventCheckForSingleValues_Parms), Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics
	{
		struct VoxelDataTools_eventCheckForSingleValuesAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventCheckForSingleValuesAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventCheckForSingleValuesAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValuesAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValuesAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValuesAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValuesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckForSingleValuesAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventCheckForSingleValuesAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics
	{
		struct VoxelDataTools_eventCheckIfSameAsGenerator_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGenerator_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGenerator_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Will undirty the chunks identical to the generator\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Will undirty the chunks identical to the generator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckIfSameAsGenerator", nullptr, nullptr, sizeof(VoxelDataTools_eventCheckIfSameAsGenerator_Parms), Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics
	{
		struct VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Will undirty the chunks identical to the generator\n" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Will undirty the chunks identical to the generator" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckIfSameAsGeneratorAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics
	{
		struct VoxelDataTools_eventClearCachedMaterials_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterials_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Cache" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearCachedMaterials", nullptr, nullptr, sizeof(VoxelDataTools_eventClearCachedMaterials_Parms), Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics
	{
		struct VoxelDataTools_eventClearCachedMaterialsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventClearCachedMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventClearCachedMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterialsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterialsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data|Cache" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearCachedMaterialsAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventClearCachedMaterialsAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics
	{
		struct VoxelDataTools_eventClearCachedValues_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValues_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Cache" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearCachedValues", nullptr, nullptr, sizeof(VoxelDataTools_eventClearCachedValues_Parms), Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics
	{
		struct VoxelDataTools_eventClearCachedValuesAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventClearCachedValuesAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventClearCachedValuesAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValuesAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValuesAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValuesAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValuesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data|Cache" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearCachedValuesAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventClearCachedValuesAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics
	{
		struct VoxelDataTools_eventClearUnusedMaterials_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterials_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "// Remove materials that do not affect the surface. Same visual result but will lead to better compression.\n// Digging will look different.\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Remove materials that do not affect the surface. Same visual result but will lead to better compression.\nDigging will look different." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearUnusedMaterials", nullptr, nullptr, sizeof(VoxelDataTools_eventClearUnusedMaterials_Parms), Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics
	{
		struct VoxelDataTools_eventClearUnusedMaterialsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventClearUnusedMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "// Remove materials that do not affect the surface. Same visual result but will lead to better compression.\n// Digging will look different.\n" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Remove materials that do not affect the surface. Same visual result but will lead to better compression.\nDigging will look different." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearUnusedMaterialsAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics
	{
		struct VoxelDataTools_eventCompressIntoHeightmap_Parms
		{
			AVoxelWorld* World;
			UVoxelHeightmapAsset* HeightmapAsset;
			bool bHeightmapAssetMatchesWorld;
		};
		static void NewProp_bHeightmapAssetMatchesWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHeightmapAssetMatchesWorld;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_bHeightmapAssetMatchesWorld_SetBit(void* Obj)
	{
		((VoxelDataTools_eventCompressIntoHeightmap_Parms*)Obj)->bHeightmapAssetMatchesWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_bHeightmapAssetMatchesWorld = { "bHeightmapAssetMatchesWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventCompressIntoHeightmap_Parms), &Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_bHeightmapAssetMatchesWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_HeightmapAsset = { "HeightmapAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCompressIntoHeightmap_Parms, HeightmapAsset), Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventCompressIntoHeightmap_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_bHeightmapAssetMatchesWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_HeightmapAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "Comment", "/**\n\x09 * If the voxel world world generator is a heightmap or if an heightmap asset is provided,\n\x09 * will update the heightmap to the max Z surface in the voxel world\n\x09 * Will not edit the data: RoundToGenerator should be called after for best results\n\x09 */" },
		{ "CPP_Default_bHeightmapAssetMatchesWorld", "false" },
		{ "CPP_Default_HeightmapAsset", "None" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "If the voxel world world generator is a heightmap or if an heightmap asset is provided,\nwill update the heightmap to the max Z surface in the voxel world\nWill not edit the data: RoundToGenerator should be called after for best results" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CompressIntoHeightmap", nullptr, nullptr, sizeof(VoxelDataTools_eventCompressIntoHeightmap_Parms), Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics
	{
		struct VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms
		{
			FVoxelFindClosestNonEmptyVoxelResult Result;
			AVoxelWorld* World;
			FVector Position;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms), &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms, Result), Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Finds the closest voxel to Position that is not empty\n\x09 * This is useful to do edits, or to query the material at a position\n\x09 *\n\x09 * @param\x09\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09\x09Position\x09\x09\x09\x09The position, in world space if bConvertToVoxelSpace is true\n\x09 * @param\x09\x09""bConvertToVoxelSpace\x09If true, will convert Position to voxel space. If false, assumes it's already in voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Finds the closest voxel to Position that is not empty\nThis is useful to do edits, or to query the material at a position\n\n@param               World                                   The voxel world\n@param               Position                                The position, in world space if bConvertToVoxelSpace is true\n@param               bConvertToVoxelSpace    If true, will convert Position to voxel space. If false, assumes it's already in voxels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "FindClosestNonEmptyVoxel", nullptr, nullptr, sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms), Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics
	{
		struct VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelFindClosestNonEmptyVoxelResult Result;
			AVoxelWorld* World;
			FVector Position;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, Result), Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Finds the closest voxel to Position that is not empty\n\x09 * This is useful to do edits, or to query the material at a position\n\x09 *\n\x09 * @param\x09\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09\x09Position\x09\x09\x09\x09The position, in world space if bConvertToVoxelSpace is true\n\x09 * @param\x09\x09""bConvertToVoxelSpace\x09If true, will convert Position to voxel space. If false, assumes it's already in voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Finds the closest voxel to Position that is not empty\nThis is useful to do edits, or to query the material at a position\n\n@param               World                                   The voxel world\n@param               Position                                The position, in world space if bConvertToVoxelSpace is true\n@param               bConvertToVoxelSpace    If true, will convert Position to voxel space. If false, assumes it's already in voxels" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "FindClosestNonEmptyVoxelAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics
	{
		struct VoxelDataTools_eventGetCompressedSave_Parms
		{
			AVoxelWorld* World;
			FVoxelCompressedWorldSave OutSave;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::NewProp_OutSave = { "OutSave", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSave_Parms, OutSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::NewProp_OutSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Get a save of the world and compress it\n\x09 * @param\x09World\x09\x09The voxel world\n\x09 * @param\x09OutSave\x09\x09The compressed save\x09\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Get a save of the world and compress it\n@param       World           The voxel world\n@param       OutSave         The compressed save" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetCompressedSave", nullptr, nullptr, sizeof(VoxelDataTools_eventGetCompressedSave_Parms), Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics
	{
		struct VoxelDataTools_eventGetCompressedSaveAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelCompressedWorldSave OutSave;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventGetCompressedSaveAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetCompressedSaveAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_OutSave = { "OutSave", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSaveAsync_Parms, OutSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSaveAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSaveAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSaveAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_OutSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Get a save of the world and compress it\n\x09 * @param\x09World\x09\x09The voxel world\n\x09 * @param\x09OutSave\x09\x09The compressed save\x09\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Get a save of the world and compress it\n@param       World           The voxel world\n@param       OutSave         The compressed save" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetCompressedSaveAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventGetCompressedSaveAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics
	{
		struct VoxelDataTools_eventGetDataMemoryUsageInMB_Parms
		{
			AVoxelWorld* World;
			FVoxelDataMemoryUsageInMB ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetDataMemoryUsageInMB_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetDataMemoryUsageInMB_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetDataMemoryUsageInMB", nullptr, nullptr, sizeof(VoxelDataTools_eventGetDataMemoryUsageInMB_Parms), Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics
	{
		struct VoxelDataTools_eventGetInterpolatedValue_Parms
		{
			float Value;
			AVoxelWorld* World;
			FVector Position;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetInterpolatedValue_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetInterpolatedValue_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetInterpolatedValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Get the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Get Interpolated Density" },
		{ "Keywords", "density" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Get the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetInterpolatedValue", nullptr, nullptr, sizeof(VoxelDataTools_eventGetInterpolatedValue_Parms), Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics
	{
		struct VoxelDataTools_eventGetMaterial_Parms
		{
			FVoxelMaterial Material;
			AVoxelWorld* World;
			FIntVector Position;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterial_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterial_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Get the material at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Get the material at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetMaterial", nullptr, nullptr, sizeof(VoxelDataTools_eventGetMaterial_Parms), Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics
	{
		struct VoxelDataTools_eventGetMaterialAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelMaterial Material;
			AVoxelWorld* World;
			FIntVector Position;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventGetMaterialAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetMaterialAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Get the material at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Get the material at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetMaterialAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventGetMaterialAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics
	{
		struct VoxelDataTools_eventGetSave_Parms
		{
			AVoxelWorld* World;
			FVoxelUncompressedWorldSave OutSave;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::NewProp_OutSave = { "OutSave", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSave_Parms, OutSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::NewProp_OutSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Get a save of the world\n\x09 * @param\x09World\x09\x09The voxel world\n\x09 * @param\x09OutSave\x09\x09The save\x09\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Get a save of the world\n@param       World           The voxel world\n@param       OutSave         The save" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetSave", nullptr, nullptr, sizeof(VoxelDataTools_eventGetSave_Parms), Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics
	{
		struct VoxelDataTools_eventGetSaveAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelUncompressedWorldSave OutSave;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventGetSaveAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetSaveAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_OutSave = { "OutSave", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSaveAsync_Parms, OutSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSaveAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSaveAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSaveAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_OutSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Get a save of the world\n\x09 * @param\x09World\x09\x09The voxel world\n\x09 * @param\x09OutSave\x09\x09The save\x09\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Get a save of the world\n@param       World           The voxel world\n@param       OutSave         The save" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetSaveAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventGetSaveAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics
	{
		struct VoxelDataTools_eventGetValue_Parms
		{
			float Value;
			AVoxelWorld* World;
			FIntVector Position;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValue_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValue_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Get the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Get Density" },
		{ "Keywords", "density" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Get the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetValue", nullptr, nullptr, sizeof(VoxelDataTools_eventGetValue_Parms), Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics
	{
		struct VoxelDataTools_eventGetValueAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			float Value;
			AVoxelWorld* World;
			FIntVector Position;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventGetValueAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetValueAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Get the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Get Density Async" },
		{ "Keywords", "density" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Get the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetValueAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventGetValueAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetValueAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics
	{
		struct VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms
		{
			TArray<FVoxelValueMaterial> Voxels;
			AVoxelWorld* World;
			TArray<FIntVector> Positions;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms, Voxels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Voxels_Inner = { "Voxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelValueMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Voxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Voxels_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "// Read a large number of voxels at a time\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Read a large number of voxels at a time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetVoxelsValueAndMaterial", nullptr, nullptr, sizeof(VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms), Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics
	{
		struct VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FVoxelValueMaterial> Voxels;
			AVoxelWorld* World;
			TArray<FIntVector> Positions;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, Voxels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Voxels_Inner = { "Voxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelValueMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Voxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Voxels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "// Read a large number of voxels at a time, asynchronously\n" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Read a large number of voxels at a time, asynchronously" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetVoxelsValueAndMaterialAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_Level_Statics
	{
		struct VoxelDataTools_eventLevel_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float Height;
			float Falloff;
			bool bAdditive;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelDataTools_eventLevel_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventLevel_Parms), &Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_bAdditive_SetBit(void* Obj)
	{
		((VoxelDataTools_eventLevel_Parms*)Obj)->bAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventLevel_Parms), &Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevel_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevel_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevel_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevel_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_Level_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_bAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_Level_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_Level_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "// Falloff: between 0 and 1\n" },
		{ "CPP_Default_bAdditive", "false" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Falloff: between 0 and 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_Level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "Level", nullptr, nullptr, sizeof(VoxelDataTools_eventLevel_Parms), Z_Construct_UFunction_UVoxelDataTools_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_Level_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_Level_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_Level_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_Level()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_Level_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics
	{
		struct VoxelDataTools_eventLevelAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float Height;
			float Falloff;
			bool bAdditive;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventLevelAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventLevelAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelDataTools_eventLevelAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventLevelAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bAdditive_SetBit(void* Obj)
	{
		((VoxelDataTools_eventLevelAsync_Parms*)Obj)->bAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventLevelAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevelAsync_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevelAsync_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevelAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevelAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevelAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevelAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLevelAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_bAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "// Falloff: between 0 and 1\n" },
		{ "CPP_Default_bAdditive", "false" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Falloff: between 0 and 1" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "LevelAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventLevelAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_LevelAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_LevelAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics
	{
		struct VoxelDataTools_eventLoadFromCompressedSave_Parms
		{
			AVoxelWorld* World;
			FVoxelCompressedWorldSave Save;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Save_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Save;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelDataTools_eventLoadFromCompressedSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventLoadFromCompressedSave_Parms), &Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_Save_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLoadFromCompressedSave_Parms, Save), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_Save_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_Save_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLoadFromCompressedSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_Save,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Load from a compressed save\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Save\x09\x09\x09The compressed save to load from\n\x09 * @return\x09If the load was successful\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Load from a compressed save\n@param       World                   The voxel world\n@param       Save                    The compressed save to load from\n@return      If the load was successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "LoadFromCompressedSave", nullptr, nullptr, sizeof(VoxelDataTools_eventLoadFromCompressedSave_Parms), Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics
	{
		struct VoxelDataTools_eventLoadFromSave_Parms
		{
			AVoxelWorld* World;
			FVoxelUncompressedWorldSave Save;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Save_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Save;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelDataTools_eventLoadFromSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventLoadFromSave_Parms), &Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_Save_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLoadFromSave_Parms, Save), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_Save_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_Save_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventLoadFromSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_Save,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Load from a save\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Save\x09\x09\x09The save to load from\n\x09 * @return\x09If the load was successful\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Load from a save\n@param       World                   The voxel world\n@param       Save                    The save to load from\n@return      If the load was successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "LoadFromSave", nullptr, nullptr, sizeof(VoxelDataTools_eventLoadFromSave_Parms), Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_LoadFromSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics
	{
		struct VoxelDataTools_eventRoundToGenerator_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bPreserveNormals;
		};
		static void NewProp_bPreserveNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveNormals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_bPreserveNormals_SetBit(void* Obj)
	{
		((VoxelDataTools_eventRoundToGenerator_Parms*)Obj)->bPreserveNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_bPreserveNormals = { "bPreserveNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventRoundToGenerator_Parms), &Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_bPreserveNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGenerator_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGenerator_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_bPreserveNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Will revert the values who don't have a voxel neighbor with a different sign from the generator value\n// Will ignore items when computing generator values\n" },
		{ "CPP_Default_bPreserveNormals", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Will revert the values who don't have a voxel neighbor with a different sign from the generator value\nWill ignore items when computing generator values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "RoundToGenerator", nullptr, nullptr, sizeof(VoxelDataTools_eventRoundToGenerator_Parms), Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics
	{
		struct VoxelDataTools_eventRoundToGeneratorAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bPreserveNormals;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bPreserveNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveNormals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventRoundToGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventRoundToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bPreserveNormals_SetBit(void* Obj)
	{
		((VoxelDataTools_eventRoundToGeneratorAsync_Parms*)Obj)->bPreserveNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bPreserveNormals = { "bPreserveNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventRoundToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bPreserveNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGeneratorAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGeneratorAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bPreserveNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
		{ "Comment", "// Will revert the values who don't have a voxel neighbor with a different sign from the generator value\n// Will ignore items when computing generator values\n" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bPreserveNormals", "true" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Will revert the values who don't have a voxel neighbor with a different sign from the generator value\nWill ignore items when computing generator values" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "RoundToGeneratorAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventRoundToGeneratorAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics
	{
		struct VoxelDataTools_eventRoundVoxels_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxels_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "// Round voxels that don't have an impact on the surface. Same visual result but will lead to better compression\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Round voxels that don't have an impact on the surface. Same visual result but will lead to better compression" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "RoundVoxels", nullptr, nullptr, sizeof(VoxelDataTools_eventRoundVoxels_Parms), Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_RoundVoxels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics
	{
		struct VoxelDataTools_eventRoundVoxelsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventRoundVoxelsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventRoundVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxelsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxelsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxelsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxelsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "// Round voxels that don't have an impact on the surface. Same visual result but will lead to better compression\n" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Round voxels that don't have an impact on the surface. Same visual result but will lead to better compression" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "RoundVoxelsAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventRoundVoxelsAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics
	{
		struct VoxelDataTools_eventSetBoxAsDirty_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bDirtyValues;
			bool bDirtyMaterials;
		};
		static void NewProp_bDirtyMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirtyMaterials;
		static void NewProp_bDirtyValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirtyValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyMaterials_SetBit(void* Obj)
	{
		((VoxelDataTools_eventSetBoxAsDirty_Parms*)Obj)->bDirtyMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyMaterials = { "bDirtyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirty_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyValues_SetBit(void* Obj)
	{
		((VoxelDataTools_eventSetBoxAsDirty_Parms*)Obj)->bDirtyValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyValues = { "bDirtyValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirty_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirty_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirty_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "CPP_Default_bDirtyMaterials", "true" },
		{ "CPP_Default_bDirtyValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetBoxAsDirty", nullptr, nullptr, sizeof(VoxelDataTools_eventSetBoxAsDirty_Parms), Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics
	{
		struct VoxelDataTools_eventSetBoxAsDirtyAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bDirtyValues;
			bool bDirtyMaterials;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bDirtyMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirtyMaterials;
		static void NewProp_bDirtyValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirtyValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventSetBoxAsDirtyAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyMaterials_SetBit(void* Obj)
	{
		((VoxelDataTools_eventSetBoxAsDirtyAsync_Parms*)Obj)->bDirtyMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyMaterials = { "bDirtyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyValues_SetBit(void* Obj)
	{
		((VoxelDataTools_eventSetBoxAsDirtyAsync_Parms*)Obj)->bDirtyValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyValues = { "bDirtyValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
		{ "CPP_Default_bDirtyMaterials", "true" },
		{ "CPP_Default_bDirtyValues", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetBoxAsDirtyAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics
	{
		struct VoxelDataTools_eventSetMaterial_Parms
		{
			AVoxelWorld* World;
			FIntVector Position;
			FVoxelMaterial Material;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterial_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterial_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Set the material at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 * @param\x09Material\x09\x09Material to set\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Set the material at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n@param       Material                Material to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetMaterial", nullptr, nullptr, sizeof(VoxelDataTools_eventSetMaterial_Parms), Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics
	{
		struct VoxelDataTools_eventSetMaterialAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FIntVector Position;
			FVoxelMaterial Material;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventSetMaterialAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetMaterialAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Set the material at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 * @param\x09Material\x09\x09Material to set\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Set the material at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n@param       Material                Material to set" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetMaterialAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventSetMaterialAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics
	{
		struct VoxelDataTools_eventSetValue_Parms
		{
			AVoxelWorld* World;
			FIntVector Position;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValue_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValue_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Set the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 * @param\x09Value\x09\x09\x09""Density to set\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Set Density" },
		{ "Keywords", "density" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Set the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n@param       Value                   Density to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetValue", nullptr, nullptr, sizeof(VoxelDataTools_eventSetValue_Parms), Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics
	{
		struct VoxelDataTools_eventSetValueAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FIntVector Position;
			float Value;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelDataTools_eventSetValueAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetValueAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
		{ "Comment", "/**\n\x09 * Set the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 * @param\x09Value\x09\x09\x09""Density to set\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Set Density Async" },
		{ "Keywords", "density" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "ToolTip", "Set the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n@param       Value                   Density to set" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetValueAsync", nullptr, nullptr, sizeof(VoxelDataTools_eventSetValueAsync_Parms), Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataTools_SetValueAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelDataTools_NoRegister()
	{
		return UVoxelDataTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelDataTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelDataTools_CacheMaterials, "CacheMaterials" }, // 2970001078
		{ &Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync, "CacheMaterialsAsync" }, // 3817048702
		{ &Z_Construct_UFunction_UVoxelDataTools_CacheValues, "CacheValues" }, // 687115882
		{ &Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync, "CacheValuesAsync" }, // 2360671820
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials, "CheckForSingleMaterials" }, // 2050387984
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync, "CheckForSingleMaterialsAsync" }, // 3959441624
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues, "CheckForSingleValues" }, // 3750483482
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync, "CheckForSingleValuesAsync" }, // 866805766
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator, "CheckIfSameAsGenerator" }, // 1854967548
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync, "CheckIfSameAsGeneratorAsync" }, // 1999518494
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials, "ClearCachedMaterials" }, // 1938371994
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync, "ClearCachedMaterialsAsync" }, // 597952712
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues, "ClearCachedValues" }, // 3179159211
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync, "ClearCachedValuesAsync" }, // 3760005428
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials, "ClearUnusedMaterials" }, // 4241510723
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync, "ClearUnusedMaterialsAsync" }, // 1073172671
		{ &Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap, "CompressIntoHeightmap" }, // 82929805
		{ &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel, "FindClosestNonEmptyVoxel" }, // 4269873703
		{ &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync, "FindClosestNonEmptyVoxelAsync" }, // 3112730366
		{ &Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave, "GetCompressedSave" }, // 2482817004
		{ &Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync, "GetCompressedSaveAsync" }, // 1022553639
		{ &Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB, "GetDataMemoryUsageInMB" }, // 1463460399
		{ &Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue, "GetInterpolatedValue" }, // 2373910436
		{ &Z_Construct_UFunction_UVoxelDataTools_GetMaterial, "GetMaterial" }, // 362154173
		{ &Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync, "GetMaterialAsync" }, // 862069224
		{ &Z_Construct_UFunction_UVoxelDataTools_GetSave, "GetSave" }, // 1283154251
		{ &Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync, "GetSaveAsync" }, // 1508816689
		{ &Z_Construct_UFunction_UVoxelDataTools_GetValue, "GetValue" }, // 2539298119
		{ &Z_Construct_UFunction_UVoxelDataTools_GetValueAsync, "GetValueAsync" }, // 4047297066
		{ &Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial, "GetVoxelsValueAndMaterial" }, // 113103617
		{ &Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync, "GetVoxelsValueAndMaterialAsync" }, // 550707337
		{ &Z_Construct_UFunction_UVoxelDataTools_Level, "Level" }, // 3998964715
		{ &Z_Construct_UFunction_UVoxelDataTools_LevelAsync, "LevelAsync" }, // 227628729
		{ &Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave, "LoadFromCompressedSave" }, // 2847560529
		{ &Z_Construct_UFunction_UVoxelDataTools_LoadFromSave, "LoadFromSave" }, // 2776608577
		{ &Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator, "RoundToGenerator" }, // 556826990
		{ &Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync, "RoundToGeneratorAsync" }, // 4258042610
		{ &Z_Construct_UFunction_UVoxelDataTools_RoundVoxels, "RoundVoxels" }, // 637874422
		{ &Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync, "RoundVoxelsAsync" }, // 1364536719
		{ &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty, "SetBoxAsDirty" }, // 3907662689
		{ &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync, "SetBoxAsDirtyAsync" }, // 2222587365
		{ &Z_Construct_UFunction_UVoxelDataTools_SetMaterial, "SetMaterial" }, // 3702456486
		{ &Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync, "SetMaterialAsync" }, // 654330680
		{ &Z_Construct_UFunction_UVoxelDataTools_SetValue, "SetValue" }, // 2144845249
		{ &Z_Construct_UFunction_UVoxelDataTools_SetValueAsync, "SetValueAsync" }, // 3373399655
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelDataTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataTools_Statics::ClassParams = {
		&UVoxelDataTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDataTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDataTools, 2063618085);
	template<> VOXEL_API UClass* StaticClass<UVoxelDataTools>()
	{
		return UVoxelDataTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDataTools(Z_Construct_UClass_UVoxelDataTools, &UVoxelDataTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelDataTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
