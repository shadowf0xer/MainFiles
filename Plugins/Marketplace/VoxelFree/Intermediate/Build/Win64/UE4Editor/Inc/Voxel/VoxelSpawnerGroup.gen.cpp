// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawnerGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerGroup() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerGroup_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerGroup();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner();
// End Cross Module References
class UScriptStruct* FVoxelSpawnerGroupChild::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerGroupChild"), sizeof(FVoxelSpawnerGroupChild), Get_Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerGroupChild>()
{
	return FVoxelSpawnerGroupChild::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerGroupChild(FVoxelSpawnerGroupChild::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerGroupChild"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerGroupChild
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerGroupChild()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerGroupChild")),new UScriptStruct::TCppStructOps<FVoxelSpawnerGroupChild>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerGroupChild;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Probability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerGroupChild>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerGroupChild, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerGroupChild, Spawner), Z_Construct_UClass_UVoxelSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerGroupChild",
		sizeof(FVoxelSpawnerGroupChild),
		alignof(FVoxelSpawnerGroupChild),
		Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerGroupChild"), sizeof(FVoxelSpawnerGroupChild), Get_Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Hash() { return 3186176151U; }
	void UVoxelSpawnerGroup::StaticRegisterNativesUVoxelSpawnerGroup()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSpawnerGroup_NoRegister()
	{
		return UVoxelSpawnerGroup::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSpawnerGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalizeProbabilitiesOnEdit_MetaData[];
#endif
		static void NewProp_bNormalizeProbabilitiesOnEdit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalizeProbabilitiesOnEdit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSpawnerGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerGroup.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawnerGroup, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Probabilities do not need to be normalized, although it might be harder to understand what's happening if they're not\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
		{ "ToolTip", "Probabilities do not need to be normalized, although it might be harder to understand what's happening if they're not" },
	};
#endif
	void Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_SetBit(void* Obj)
	{
		((UVoxelSpawnerGroup*)Obj)->bNormalizeProbabilitiesOnEdit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit = { "bNormalizeProbabilitiesOnEdit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSpawnerGroup), &Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSpawnerGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::ClassParams = {
		&UVoxelSpawnerGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSpawnerGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSpawnerGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSpawnerGroup, 2521103541);
	template<> VOXEL_API UClass* StaticClass<UVoxelSpawnerGroup>()
	{
		return UVoxelSpawnerGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSpawnerGroup(Z_Construct_UClass_UVoxelSpawnerGroup, &UVoxelSpawnerGroup::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSpawnerGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
