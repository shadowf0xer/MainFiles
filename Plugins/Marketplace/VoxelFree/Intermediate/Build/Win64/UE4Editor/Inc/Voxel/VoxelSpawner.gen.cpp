// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawner() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnersSave();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FVoxelSpawnersSave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnersSave_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnersSave, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnersSave"), sizeof(FVoxelSpawnersSave), Get_Z_Construct_UScriptStruct_FVoxelSpawnersSave_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnersSave>()
{
	return FVoxelSpawnersSave::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnersSave(FVoxelSpawnersSave::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnersSave"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnersSave
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnersSave()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnersSave")),new UScriptStruct::TCppStructOps<FVoxelSpawnersSave>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnersSave;
	struct Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnersSave>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnersSave",
		sizeof(FVoxelSpawnersSave),
		alignof(FVoxelSpawnersSave),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnersSave()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnersSave_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnersSave"), sizeof(FVoxelSpawnersSave), Get_Z_Construct_UScriptStruct_FVoxelSpawnersSave_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnersSave_Hash() { return 450386061U; }
	void UVoxelSpawner::StaticRegisterNativesUVoxelSpawner()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister()
	{
		return UVoxelSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SeedOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenInstancesInVoxel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceBetweenInstancesInVoxel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride_MetaData[] = {
		{ "Comment", "// Use this if you create the spawner at runtime\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
		{ "ToolTip", "Use this if you create the spawner at runtime" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride = { "SeedOverride", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawner, SeedOverride), METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Average distance between the instances, in voxels\n// Num Instances = Area in voxels / Square(DistanceBetweenInstancesInVoxel)\n// Not a density because the values would be too small to store in a float\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
		{ "ToolTip", "Average distance between the instances, in voxels\nNum Instances = Area in voxels / Square(DistanceBetweenInstancesInVoxel)\nNot a density because the values would be too small to store in a float" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel = { "DistanceBetweenInstancesInVoxel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawner, DistanceBetweenInstancesInVoxel), METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawner_Statics::ClassParams = {
		&UVoxelSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSpawner, 3273684074);
	template<> VOXEL_API UClass* StaticClass<UVoxelSpawner>()
	{
		return UVoxelSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSpawner(Z_Construct_UClass_UVoxelSpawner, &UVoxelSpawner::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
