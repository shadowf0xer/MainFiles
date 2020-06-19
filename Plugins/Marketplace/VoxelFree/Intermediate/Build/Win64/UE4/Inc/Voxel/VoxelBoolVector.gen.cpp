// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelBoolVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBoolVector() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBoolVector();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
class UScriptStruct* FVoxelBoolVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelBoolVector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBoolVector, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelBoolVector"), sizeof(FVoxelBoolVector), Get_Z_Construct_UScriptStruct_FVoxelBoolVector_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelBoolVector>()
{
	return FVoxelBoolVector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelBoolVector(FVoxelBoolVector::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelBoolVector"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelBoolVector
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelBoolVector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelBoolVector")),new UScriptStruct::TCppStructOps<FVoxelBoolVector>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelBoolVector;
	struct Z_Construct_UScriptStruct_FVoxelBoolVector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[];
#endif
		static void NewProp_bZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[];
#endif
		static void NewProp_bY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[];
#endif
		static void NewProp_bX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBoolVector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((FVoxelBoolVector*)Obj)->bZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelBoolVector), &Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((FVoxelBoolVector*)Obj)->bY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelBoolVector), &Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((FVoxelBoolVector*)Obj)->bX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelBoolVector), &Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelBoolVector",
		sizeof(FVoxelBoolVector),
		alignof(FVoxelBoolVector),
		Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelBoolVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelBoolVector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelBoolVector"), sizeof(FVoxelBoolVector), Get_Z_Construct_UScriptStruct_FVoxelBoolVector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelBoolVector_Hash() { return 1255606237U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
