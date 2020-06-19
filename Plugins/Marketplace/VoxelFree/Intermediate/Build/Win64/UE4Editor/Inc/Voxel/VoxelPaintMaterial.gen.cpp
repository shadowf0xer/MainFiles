// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelPaintMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPaintMaterial() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EVoxelPaintMaterialType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelPaintMaterialType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelPaintMaterialType>()
	{
		return EVoxelPaintMaterialType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelPaintMaterialType(EVoxelPaintMaterialType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelPaintMaterialType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Hash() { return 3366849924U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelPaintMaterialType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelPaintMaterialType::Color", (int64)EVoxelPaintMaterialType::Color },
				{ "EVoxelPaintMaterialType::FiveWayBlend", (int64)EVoxelPaintMaterialType::FiveWayBlend },
				{ "EVoxelPaintMaterialType::SingleIndex", (int64)EVoxelPaintMaterialType::SingleIndex },
				{ "EVoxelPaintMaterialType::MultiIndex", (int64)EVoxelPaintMaterialType::MultiIndex },
				{ "EVoxelPaintMaterialType::MultiIndexWetness", (int64)EVoxelPaintMaterialType::MultiIndexWetness },
				{ "EVoxelPaintMaterialType::MultiIndexRaw", (int64)EVoxelPaintMaterialType::MultiIndexRaw },
				{ "EVoxelPaintMaterialType::UV", (int64)EVoxelPaintMaterialType::UV },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Color.Name", "EVoxelPaintMaterialType::Color" },
				{ "FiveWayBlend.Name", "EVoxelPaintMaterialType::FiveWayBlend" },
				{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
				{ "MultiIndex.Name", "EVoxelPaintMaterialType::MultiIndex" },
				{ "MultiIndexRaw.Name", "EVoxelPaintMaterialType::MultiIndexRaw" },
				{ "MultiIndexWetness.Name", "EVoxelPaintMaterialType::MultiIndexWetness" },
				{ "SingleIndex.Name", "EVoxelPaintMaterialType::SingleIndex" },
				{ "UV.Name", "EVoxelPaintMaterialType::UV" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelPaintMaterialType",
				"EVoxelPaintMaterialType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVoxelPaintMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterial, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterial"), sizeof(FVoxelPaintMaterial), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterial>()
{
	return FVoxelPaintMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPaintMaterial(FVoxelPaintMaterial::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPaintMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterial
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPaintMaterial")),new UScriptStruct::TCppStructOps<FVoxelPaintMaterial>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterial;
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiveWayBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FiveWayBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiIndexRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MultiIndexRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiIndexWetness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MultiIndexWetness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MultiIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterialCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialConfigToRestrictTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialConfigToRestrictTo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialConfigToRestrictTo_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestrictType_MetaData[];
#endif
		static void NewProp_bRestrictType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictType;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend = { "FiveWayBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, FiveWayBlend), Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, UV), Z_Construct_UScriptStruct_FVoxelPaintMaterialUV, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw = { "MultiIndexRaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MultiIndexRaw), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness = { "MultiIndexWetness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MultiIndexWetness), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex = { "MultiIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MultiIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex = { "SingleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, SingleIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, Color), Z_Construct_UScriptStruct_FVoxelPaintMaterialColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, Type), Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection = { "PreviewMaterialCollection", nullptr, (EPropertyFlags)0x0010000800002001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, PreviewMaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo = { "MaterialConfigToRestrictTo", nullptr, (EPropertyFlags)0x0010000800002001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MaterialConfigToRestrictTo), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_SetBit(void* Obj)
	{
		((FVoxelPaintMaterial*)Obj)->bRestrictType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType = { "bRestrictType", nullptr, (EPropertyFlags)0x0010000800002001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterial), &Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_Underlying,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterial",
		sizeof(FVoxelPaintMaterial),
		alignof(FVoxelPaintMaterial),
		Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPaintMaterial"), sizeof(FVoxelPaintMaterial), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_Hash() { return 3419275219U; }
class UScriptStruct* FVoxelPaintMaterialUV::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialUV"), sizeof(FVoxelPaintMaterialUV), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialUV>()
{
	return FVoxelPaintMaterialUV::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPaintMaterialUV(FVoxelPaintMaterialUV::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPaintMaterialUV"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialUV
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialUV()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPaintMaterialUV")),new UScriptStruct::TCppStructOps<FVoxelPaintMaterialUV>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialUV;
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintV_MetaData[];
#endif
		static void NewProp_bPaintV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintU_MetaData[];
#endif
		static void NewProp_bPaintU_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialUV>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialUV*)Obj)->bPaintV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV = { "bPaintV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialUV), &Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialUV*)Obj)->bPaintU = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU = { "bPaintU", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialUV), &Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialUV, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialUV, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialUV",
		sizeof(FVoxelPaintMaterialUV),
		alignof(FVoxelPaintMaterialUV),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPaintMaterialUV"), sizeof(FVoxelPaintMaterialUV), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Hash() { return 2026066556U; }
class UScriptStruct* FVoxelPaintMaterialMultiIndexRaw::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialMultiIndexRaw"), sizeof(FVoxelPaintMaterialMultiIndexRaw), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialMultiIndexRaw>()
{
	return FVoxelPaintMaterialMultiIndexRaw::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw(FVoxelPaintMaterialMultiIndexRaw::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPaintMaterialMultiIndexRaw"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialMultiIndexRaw
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialMultiIndexRaw()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPaintMaterialMultiIndexRaw")),new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndexRaw>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialMultiIndexRaw;
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Channel3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Channel2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Channel1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Channel0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndexRaw>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3 = { "Strength3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength3), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3 = { "Channel3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel3), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2 = { "Strength2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength2), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2 = { "Channel2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel2), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1 = { "Strength1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength1), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1 = { "Channel1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel1), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0 = { "Strength0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength0), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0 = { "Channel0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel0), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialMultiIndexRaw",
		sizeof(FVoxelPaintMaterialMultiIndexRaw),
		alignof(FVoxelPaintMaterialMultiIndexRaw),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPaintMaterialMultiIndexRaw"), sizeof(FVoxelPaintMaterialMultiIndexRaw), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Hash() { return 3306504140U; }
class UScriptStruct* FVoxelPaintMaterialMultiIndexWetness::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialMultiIndexWetness"), sizeof(FVoxelPaintMaterialMultiIndexWetness), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialMultiIndexWetness>()
{
	return FVoxelPaintMaterialMultiIndexWetness::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness(FVoxelPaintMaterialMultiIndexWetness::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPaintMaterialMultiIndexWetness"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialMultiIndexWetness
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialMultiIndexWetness()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPaintMaterialMultiIndexWetness")),new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndexWetness>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialMultiIndexWetness;
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndexWetness>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexWetness, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialMultiIndexWetness",
		sizeof(FVoxelPaintMaterialMultiIndexWetness),
		alignof(FVoxelPaintMaterialMultiIndexWetness),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPaintMaterialMultiIndexWetness"), sizeof(FVoxelPaintMaterialMultiIndexWetness), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Hash() { return 2928824698U; }
class UScriptStruct* FVoxelPaintMaterialMultiIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialMultiIndex"), sizeof(FVoxelPaintMaterialMultiIndex), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialMultiIndex>()
{
	return FVoxelPaintMaterialMultiIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPaintMaterialMultiIndex(FVoxelPaintMaterialMultiIndex::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPaintMaterialMultiIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialMultiIndex
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialMultiIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPaintMaterialMultiIndex")),new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndex>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialMultiIndex;
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LockedChannels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockedChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// These channels will have their strength locked, and will stay the same\n// Useful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "These channels will have their strength locked, and will stay the same\nUseful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels = { "LockedChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndex, LockedChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_Inner = { "LockedChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndex, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndex, Channel), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialMultiIndex",
		sizeof(FVoxelPaintMaterialMultiIndex),
		alignof(FVoxelPaintMaterialMultiIndex),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPaintMaterialMultiIndex"), sizeof(FVoxelPaintMaterialMultiIndex), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Hash() { return 3637851164U; }
class UScriptStruct* FVoxelPaintMaterialSingleIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialSingleIndex"), sizeof(FVoxelPaintMaterialSingleIndex), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialSingleIndex>()
{
	return FVoxelPaintMaterialSingleIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPaintMaterialSingleIndex(FVoxelPaintMaterialSingleIndex::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPaintMaterialSingleIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialSingleIndex
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialSingleIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPaintMaterialSingleIndex")),new UScriptStruct::TCppStructOps<FVoxelPaintMaterialSingleIndex>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialSingleIndex;
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialSingleIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialSingleIndex, Channel), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialSingleIndex",
		sizeof(FVoxelPaintMaterialSingleIndex),
		alignof(FVoxelPaintMaterialSingleIndex),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPaintMaterialSingleIndex"), sizeof(FVoxelPaintMaterialSingleIndex), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Hash() { return 1962217769U; }
class UScriptStruct* FVoxelPaintMaterialFiveWayBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialFiveWayBlend"), sizeof(FVoxelPaintMaterialFiveWayBlend), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialFiveWayBlend>()
{
	return FVoxelPaintMaterialFiveWayBlend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend(FVoxelPaintMaterialFiveWayBlend::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPaintMaterialFiveWayBlend"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialFiveWayBlend
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialFiveWayBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPaintMaterialFiveWayBlend")),new UScriptStruct::TCppStructOps<FVoxelPaintMaterialFiveWayBlend>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialFiveWayBlend;
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFourWayBlend_MetaData[];
#endif
		static void NewProp_bFourWayBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFourWayBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LockedChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialFiveWayBlend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If true, will ignore Alpha\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "If true, will ignore Alpha" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialFiveWayBlend*)Obj)->bFourWayBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend = { "bFourWayBlend", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialFiveWayBlend), &Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// These channels will have their strength locked, and will stay the same\n// Useful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "These channels will have their strength locked, and will stay the same\nUseful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels = { "LockedChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialFiveWayBlend, LockedChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_Inner = { "LockedChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialFiveWayBlend, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "// Between 0 and 4. 1,2,3,4 => R,G,B,A. 0 => material displayed by default\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "Between 0 and 4. 1,2,3,4 => R,G,B,A. 0 => material displayed by default" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialFiveWayBlend, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialFiveWayBlend",
		sizeof(FVoxelPaintMaterialFiveWayBlend),
		alignof(FVoxelPaintMaterialFiveWayBlend),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPaintMaterialFiveWayBlend"), sizeof(FVoxelPaintMaterialFiveWayBlend), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Hash() { return 1142418215U; }
class UScriptStruct* FVoxelPaintMaterialColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialColor"), sizeof(FVoxelPaintMaterialColor), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterialColor>()
{
	return FVoxelPaintMaterialColor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPaintMaterialColor(FVoxelPaintMaterialColor::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPaintMaterialColor"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialColor
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPaintMaterialColor")),new UScriptStruct::TCppStructOps<FVoxelPaintMaterialColor>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterialColor;
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintA_MetaData[];
#endif
		static void NewProp_bPaintA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintB_MetaData[];
#endif
		static void NewProp_bPaintB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintG_MetaData[];
#endif
		static void NewProp_bPaintG_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintR_MetaData[];
#endif
		static void NewProp_bPaintR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialColor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialColor*)Obj)->bPaintA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA = { "bPaintA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialColor*)Obj)->bPaintB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB = { "bPaintB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialColor*)Obj)->bPaintG = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG = { "bPaintG", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_SetBit(void* Obj)
	{
		((FVoxelPaintMaterialColor*)Obj)->bPaintR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR = { "bPaintR", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterialColor, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterialColor",
		sizeof(FVoxelPaintMaterialColor),
		alignof(FVoxelPaintMaterialColor),
		Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPaintMaterialColor"), sizeof(FVoxelPaintMaterialColor), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Hash() { return 636204011U; }
class UScriptStruct* FVoxelPaintMaterial_MaterialCollectionChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterial_MaterialCollectionChannel"), sizeof(FVoxelPaintMaterial_MaterialCollectionChannel), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPaintMaterial_MaterialCollectionChannel>()
{
	return FVoxelPaintMaterial_MaterialCollectionChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel(FVoxelPaintMaterial_MaterialCollectionChannel::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPaintMaterial_MaterialCollectionChannel"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterial_MaterialCollectionChannel
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterial_MaterialCollectionChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPaintMaterial_MaterialCollectionChannel")),new UScriptStruct::TCppStructOps<FVoxelPaintMaterial_MaterialCollectionChannel>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPaintMaterial_MaterialCollectionChannel;
	struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterial_MaterialCollectionChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPaintMaterial_MaterialCollectionChannel, Channel), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPaintMaterial_MaterialCollectionChannel",
		sizeof(FVoxelPaintMaterial_MaterialCollectionChannel),
		alignof(FVoxelPaintMaterial_MaterialCollectionChannel),
		Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPaintMaterial_MaterialCollectionChannel"), sizeof(FVoxelPaintMaterial_MaterialCollectionChannel), Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Hash() { return 3844780953U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
