// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPhysicsPartSpawnerInterface() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPositionValueMaterial();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner();
// End Cross Module References
class UScriptStruct* FVoxelPositionValueMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPositionValueMaterial"), sizeof(FVoxelPositionValueMaterial), Get_Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPositionValueMaterial>()
{
	return FVoxelPositionValueMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPositionValueMaterial(FVoxelPositionValueMaterial::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPositionValueMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPositionValueMaterial
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPositionValueMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPositionValueMaterial")),new UScriptStruct::TCppStructOps<FVoxelPositionValueMaterial>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPositionValueMaterial;
	struct Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPositionValueMaterial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPositionValueMaterial, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPositionValueMaterial, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPositionValueMaterial, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPositionValueMaterial",
		sizeof(FVoxelPositionValueMaterial),
		alignof(FVoxelPositionValueMaterial),
		Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPositionValueMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPositionValueMaterial"), sizeof(FVoxelPositionValueMaterial), Get_Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Hash() { return 4293428596U; }
	void UVoxelPhysicsPartSpawnerResult::StaticRegisterNativesUVoxelPhysicsPartSpawnerResult()
	{
	}
	UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister()
	{
		return UVoxelPhysicsPartSpawnerResult::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVoxelPhysicsPartSpawnerResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::ClassParams = {
		&UVoxelPhysicsPartSpawnerResult::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelPhysicsPartSpawnerResult, 100257114);
	template<> VOXEL_API UClass* StaticClass<UVoxelPhysicsPartSpawnerResult>()
	{
		return UVoxelPhysicsPartSpawnerResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelPhysicsPartSpawnerResult(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult, &UVoxelPhysicsPartSpawnerResult::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelPhysicsPartSpawnerResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawnerResult);
	void UVoxelPhysicsPartSpawner::StaticRegisterNativesUVoxelPhysicsPartSpawner()
	{
	}
	UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister()
	{
		return UVoxelPhysicsPartSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVoxelPhysicsPartSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::ClassParams = {
		&UVoxelPhysicsPartSpawner::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelPhysicsPartSpawner, 3024301445);
	template<> VOXEL_API UClass* StaticClass<UVoxelPhysicsPartSpawner>()
	{
		return UVoxelPhysicsPartSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelPhysicsPartSpawner(Z_Construct_UClass_UVoxelPhysicsPartSpawner, &UVoxelPhysicsPartSpawner::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelPhysicsPartSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
