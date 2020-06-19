// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelInvokerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelInvokerSettings() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInvokerSettings();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// End Cross Module References
class UScriptStruct* FVoxelInvokerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelInvokerSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInvokerSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInvokerSettings"), sizeof(FVoxelInvokerSettings), Get_Z_Construct_UScriptStruct_FVoxelInvokerSettings_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelInvokerSettings>()
{
	return FVoxelInvokerSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelInvokerSettings(FVoxelInvokerSettings::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelInvokerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelInvokerSettings
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelInvokerSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelInvokerSettings")),new UScriptStruct::TCppStructOps<FVoxelInvokerSettings>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelInvokerSettings;
	struct Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavmeshBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavmeshBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForNavmesh_MetaData[];
#endif
		static void NewProp_bUseForNavmesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForNavmesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionsBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionsBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForCollisions_MetaData[];
#endif
		static void NewProp_bUseForCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODToSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForLOD_MetaData[];
#endif
		static void NewProp_bUseForLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInvokerSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds = { "NavmeshBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInvokerSettings, NavmeshBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_SetBit(void* Obj)
	{
		((FVoxelInvokerSettings*)Obj)->bUseForNavmesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh = { "bUseForNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInvokerSettings), &Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds = { "CollisionsBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInvokerSettings, CollisionsBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_SetBit(void* Obj)
	{
		((FVoxelInvokerSettings*)Obj)->bUseForCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions = { "bUseForCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInvokerSettings), &Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds = { "LODBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInvokerSettings, LODBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet = { "LODToSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInvokerSettings, LODToSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_SetBit(void* Obj)
	{
		((FVoxelInvokerSettings*)Obj)->bUseForLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD = { "bUseForLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInvokerSettings), &Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelInvokerSettings",
		sizeof(FVoxelInvokerSettings),
		alignof(FVoxelInvokerSettings),
		Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelInvokerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelInvokerSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelInvokerSettings"), sizeof(FVoxelInvokerSettings), Get_Z_Construct_UScriptStruct_FVoxelInvokerSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelInvokerSettings_Hash() { return 2830602755U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
