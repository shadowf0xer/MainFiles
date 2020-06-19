// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelLODMaterials.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelLODMaterials() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialsBase();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelLODMaterialCollections::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLODMaterialCollections"), sizeof(FVoxelLODMaterialCollections), Get_Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLODMaterialCollections>()
{
	return FVoxelLODMaterialCollections::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelLODMaterialCollections(FVoxelLODMaterialCollections::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelLODMaterialCollections"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelLODMaterialCollections
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelLODMaterialCollections()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelLODMaterialCollections")),new UScriptStruct::TCppStructOps<FVoxelLODMaterialCollections>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelLODMaterialCollections;
	struct Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLODMaterialCollections>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLODMaterialCollections, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelLODMaterialsBase,
		&NewStructOps,
		"VoxelLODMaterialCollections",
		sizeof(FVoxelLODMaterialCollections),
		alignof(FVoxelLODMaterialCollections),
		Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelLODMaterialCollections"), sizeof(FVoxelLODMaterialCollections), Get_Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Hash() { return 1005108388U; }
class UScriptStruct* FVoxelLODMaterials::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelLODMaterials_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLODMaterials, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLODMaterials"), sizeof(FVoxelLODMaterials), Get_Z_Construct_UScriptStruct_FVoxelLODMaterials_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLODMaterials>()
{
	return FVoxelLODMaterials::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelLODMaterials(FVoxelLODMaterials::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelLODMaterials"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelLODMaterials
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelLODMaterials()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelLODMaterials")),new UScriptStruct::TCppStructOps<FVoxelLODMaterials>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelLODMaterials;
	struct Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLODMaterials>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLODMaterials, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelLODMaterialsBase,
		&NewStructOps,
		"VoxelLODMaterials",
		sizeof(FVoxelLODMaterials),
		alignof(FVoxelLODMaterials),
		Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterials()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelLODMaterials_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelLODMaterials"), sizeof(FVoxelLODMaterials), Get_Z_Construct_UScriptStruct_FVoxelLODMaterials_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelLODMaterials_Hash() { return 1604011599U; }
class UScriptStruct* FVoxelLODMaterialsBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLODMaterialsBase"), sizeof(FVoxelLODMaterialsBase), Get_Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLODMaterialsBase>()
{
	return FVoxelLODMaterialsBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelLODMaterialsBase(FVoxelLODMaterialsBase::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelLODMaterialsBase"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelLODMaterialsBase
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelLODMaterialsBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelLODMaterialsBase")),new UScriptStruct::TCppStructOps<FVoxelLODMaterialsBase>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelLODMaterialsBase;
	struct Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLODMaterialsBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// Inclusive\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
		{ "ToolTip", "Inclusive" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD = { "EndLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLODMaterialsBase, EndLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// Inclusive\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
		{ "ToolTip", "Inclusive" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD = { "StartLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLODMaterialsBase, StartLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelLODMaterialsBase",
		sizeof(FVoxelLODMaterialsBase),
		alignof(FVoxelLODMaterialsBase),
		Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialsBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelLODMaterialsBase"), sizeof(FVoxelLODMaterialsBase), Get_Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Hash() { return 3352236366U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
