// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelToolsBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelToolsBase() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelFoliage();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFoliage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// End Cross Module References
class UScriptStruct* FModifiedVoxelFoliage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifiedVoxelFoliage, Z_Construct_UPackage__Script_Voxel(), TEXT("ModifiedVoxelFoliage"), sizeof(FModifiedVoxelFoliage), Get_Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FModifiedVoxelFoliage>()
{
	return FModifiedVoxelFoliage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModifiedVoxelFoliage(FModifiedVoxelFoliage::StaticStruct, TEXT("/Script/Voxel"), TEXT("ModifiedVoxelFoliage"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFModifiedVoxelFoliage
{
	FScriptStruct_Voxel_StaticRegisterNativesFModifiedVoxelFoliage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModifiedVoxelFoliage")),new UScriptStruct::TCppStructOps<FModifiedVoxelFoliage>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFModifiedVoxelFoliage;
	struct Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFoliage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldFoliage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifiedVoxelFoliage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_NewFoliage_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_NewFoliage = { "NewFoliage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelFoliage, NewFoliage), Z_Construct_UScriptStruct_FVoxelFoliage, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_NewFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_NewFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_OldFoliage_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_OldFoliage = { "OldFoliage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelFoliage, OldFoliage), Z_Construct_UScriptStruct_FVoxelFoliage, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_OldFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_OldFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelFoliage, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_NewFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_OldFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"ModifiedVoxelFoliage",
		sizeof(FModifiedVoxelFoliage),
		alignof(FModifiedVoxelFoliage),
		Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelFoliage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModifiedVoxelFoliage"), sizeof(FModifiedVoxelFoliage), Get_Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModifiedVoxelFoliage_Hash() { return 4270499775U; }
class UScriptStruct* FModifiedVoxelMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifiedVoxelMaterial, Z_Construct_UPackage__Script_Voxel(), TEXT("ModifiedVoxelMaterial"), sizeof(FModifiedVoxelMaterial), Get_Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FModifiedVoxelMaterial>()
{
	return FModifiedVoxelMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModifiedVoxelMaterial(FModifiedVoxelMaterial::StaticStruct, TEXT("/Script/Voxel"), TEXT("ModifiedVoxelMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFModifiedVoxelMaterial
{
	FScriptStruct_Voxel_StaticRegisterNativesFModifiedVoxelMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModifiedVoxelMaterial")),new UScriptStruct::TCppStructOps<FModifiedVoxelMaterial>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFModifiedVoxelMaterial;
	struct Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifiedVoxelMaterial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelMaterial, NewMaterial), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial = { "OldMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelMaterial, OldMaterial), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelMaterial, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"ModifiedVoxelMaterial",
		sizeof(FModifiedVoxelMaterial),
		alignof(FModifiedVoxelMaterial),
		Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModifiedVoxelMaterial"), sizeof(FModifiedVoxelMaterial), Get_Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Hash() { return 2906744469U; }
class UScriptStruct* FModifiedVoxelValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FModifiedVoxelValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifiedVoxelValue, Z_Construct_UPackage__Script_Voxel(), TEXT("ModifiedVoxelValue"), sizeof(FModifiedVoxelValue), Get_Z_Construct_UScriptStruct_FModifiedVoxelValue_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FModifiedVoxelValue>()
{
	return FModifiedVoxelValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModifiedVoxelValue(FModifiedVoxelValue::StaticStruct, TEXT("/Script/Voxel"), TEXT("ModifiedVoxelValue"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFModifiedVoxelValue
{
	FScriptStruct_Voxel_StaticRegisterNativesFModifiedVoxelValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModifiedVoxelValue")),new UScriptStruct::TCppStructOps<FModifiedVoxelValue>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFModifiedVoxelValue;
	struct Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifiedVoxelValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelValue, NewValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelValue, OldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModifiedVoxelValue, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"ModifiedVoxelValue",
		sizeof(FModifiedVoxelValue),
		alignof(FModifiedVoxelValue),
		Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModifiedVoxelValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModifiedVoxelValue"), sizeof(FModifiedVoxelValue), Get_Z_Construct_UScriptStruct_FModifiedVoxelValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModifiedVoxelValue_Hash() { return 3359241086U; }
	DEFINE_FUNCTION(UVoxelToolsBase::execGetModifiedVoxelFoliagesBounds)
	{
		P_GET_TARRAY_REF(FModifiedVoxelFoliage,Z_Param_Out_ModifiedVoxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelToolsBase::GetModifiedVoxelFoliagesBounds(Z_Param_Out_ModifiedVoxels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolsBase::execGetModifiedVoxelMaterialsBounds)
	{
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedVoxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelToolsBase::GetModifiedVoxelMaterialsBounds(Z_Param_Out_ModifiedVoxels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelToolsBase::execGetModifiedVoxelValuesBounds)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedVoxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelToolsBase::GetModifiedVoxelValuesBounds(Z_Param_Out_ModifiedVoxels);
		P_NATIVE_END;
	}
	void UVoxelToolsBase::StaticRegisterNativesUVoxelToolsBase()
	{
		UClass* Class = UVoxelToolsBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetModifiedVoxelFoliagesBounds", &UVoxelToolsBase::execGetModifiedVoxelFoliagesBounds },
			{ "GetModifiedVoxelMaterialsBounds", &UVoxelToolsBase::execGetModifiedVoxelMaterialsBounds },
			{ "GetModifiedVoxelValuesBounds", &UVoxelToolsBase::execGetModifiedVoxelValuesBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics
	{
		struct VoxelToolsBase_eventGetModifiedVoxelFoliagesBounds_Parms
		{
			TArray<FModifiedVoxelFoliage> ModifiedVoxels;
			FVoxelIntBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelFoliagesBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::NewProp_ModifiedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelFoliagesBounds_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::NewProp_ModifiedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::NewProp_ModifiedVoxels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelFoliage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::NewProp_ModifiedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::NewProp_ModifiedVoxels_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Base" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolsBase, nullptr, "GetModifiedVoxelFoliagesBounds", nullptr, nullptr, sizeof(VoxelToolsBase_eventGetModifiedVoxelFoliagesBounds_Parms), Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics
	{
		struct VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms
		{
			TArray<FModifiedVoxelMaterial> ModifiedVoxels;
			FVoxelIntBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Base" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolsBase, nullptr, "GetModifiedVoxelMaterialsBounds", nullptr, nullptr, sizeof(VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms), Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics
	{
		struct VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedVoxels;
			FVoxelIntBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Base" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelToolsBase, nullptr, "GetModifiedVoxelValuesBounds", nullptr, nullptr, sizeof(VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms), Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelToolsBase_NoRegister()
	{
		return UVoxelToolsBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelToolsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelToolsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelToolsBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelFoliagesBounds, "GetModifiedVoxelFoliagesBounds" }, // 127843256
		{ &Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds, "GetModifiedVoxelMaterialsBounds" }, // 1461979994
		{ &Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds, "GetModifiedVoxelValuesBounds" }, // 3989526269
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelToolsBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelToolsBase.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolsBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelToolsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolsBase_Statics::ClassParams = {
		&UVoxelToolsBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelToolsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelToolsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelToolsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelToolsBase, 3310171145);
	template<> VOXEL_API UClass* StaticClass<UVoxelToolsBase>()
	{
		return UVoxelToolsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelToolsBase(Z_Construct_UClass_UVoxelToolsBase, &UVoxelToolsBase::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelToolsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
