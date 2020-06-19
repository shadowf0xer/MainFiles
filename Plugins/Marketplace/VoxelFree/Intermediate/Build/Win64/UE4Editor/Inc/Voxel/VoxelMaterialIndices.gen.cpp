// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelMaterialIndices.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMaterialIndices() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialIndices();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
class UScriptStruct* FVoxelMaterialIndices::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelMaterialIndices_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMaterialIndices, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMaterialIndices"), sizeof(FVoxelMaterialIndices), Get_Z_Construct_UScriptStruct_FVoxelMaterialIndices_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelMaterialIndices>()
{
	return FVoxelMaterialIndices::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelMaterialIndices(FVoxelMaterialIndices::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelMaterialIndices"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelMaterialIndices
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelMaterialIndices()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelMaterialIndices")),new UScriptStruct::TCppStructOps<FVoxelMaterialIndices>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelMaterialIndices;
	struct Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UStruct to use it in TMap for GC\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMaterialIndices.h" },
		{ "ToolTip", "UStruct to use it in TMap for GC" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMaterialIndices>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelMaterialIndices",
		sizeof(FVoxelMaterialIndices),
		alignof(FVoxelMaterialIndices),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialIndices()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelMaterialIndices_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelMaterialIndices"), sizeof(FVoxelMaterialIndices), Get_Z_Construct_UScriptStruct_FVoxelMaterialIndices_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelMaterialIndices_Hash() { return 3424495873U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
