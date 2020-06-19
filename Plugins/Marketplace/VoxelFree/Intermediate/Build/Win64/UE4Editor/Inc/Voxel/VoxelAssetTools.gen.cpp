// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelAssetTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAssetTools() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPlaceableItemReference();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
// End Cross Module References
	static UEnum* EVoxelAssetMergeMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelAssetMergeMode"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelAssetMergeMode>()
	{
		return EVoxelAssetMergeMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelAssetMergeMode(EVoxelAssetMergeMode_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelAssetMergeMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Hash() { return 3606288838U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelAssetMergeMode"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelAssetMergeMode::AllValues", (int64)EVoxelAssetMergeMode::AllValues },
				{ "EVoxelAssetMergeMode::AllMaterials", (int64)EVoxelAssetMergeMode::AllMaterials },
				{ "EVoxelAssetMergeMode::AllValuesAndAllMaterials", (int64)EVoxelAssetMergeMode::AllValuesAndAllMaterials },
				{ "EVoxelAssetMergeMode::InnerValues", (int64)EVoxelAssetMergeMode::InnerValues },
				{ "EVoxelAssetMergeMode::InnerMaterials", (int64)EVoxelAssetMergeMode::InnerMaterials },
				{ "EVoxelAssetMergeMode::InnerValuesAndInnerMaterials", (int64)EVoxelAssetMergeMode::InnerValuesAndInnerMaterials },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllMaterials.Comment", "// Import all materials. Import no values\n" },
				{ "AllMaterials.Name", "EVoxelAssetMergeMode::AllMaterials" },
				{ "AllMaterials.ToolTip", "Import all materials. Import no values" },
				{ "AllValues.Comment", "// Import all values. Import no materials\n" },
				{ "AllValues.Name", "EVoxelAssetMergeMode::AllValues" },
				{ "AllValues.ToolTip", "Import all values. Import no materials" },
				{ "AllValuesAndAllMaterials.Comment", "// Import all values and all materials\n" },
				{ "AllValuesAndAllMaterials.Name", "EVoxelAssetMergeMode::AllValuesAndAllMaterials" },
				{ "AllValuesAndAllMaterials.ToolTip", "Import all values and all materials" },
				{ "BlueprintType", "true" },
				{ "InnerMaterials.Comment", "// Import materials that are \"inside\" the asset. Import no values.\n" },
				{ "InnerMaterials.Name", "EVoxelAssetMergeMode::InnerMaterials" },
				{ "InnerMaterials.ToolTip", "Import materials that are \"inside\" the asset. Import no values." },
				{ "InnerValues.Comment", "// Import values that are \"inside\" the asset. Import no materials.\n" },
				{ "InnerValues.Name", "EVoxelAssetMergeMode::InnerValues" },
				{ "InnerValues.ToolTip", "Import values that are \"inside\" the asset. Import no materials." },
				{ "InnerValuesAndInnerMaterials.Comment", "// Import values and materials that are \"inside\" the asset.\n" },
				{ "InnerValuesAndInnerMaterials.Name", "EVoxelAssetMergeMode::InnerValuesAndInnerMaterials" },
				{ "InnerValuesAndInnerMaterials.ToolTip", "Import values and materials that are \"inside\" the asset." },
				{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelAssetMergeMode",
				"EVoxelAssetMergeMode",
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
class UScriptStruct* FVoxelPlaceableItemReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPlaceableItemReference, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPlaceableItemReference"), sizeof(FVoxelPlaceableItemReference), Get_Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelPlaceableItemReference>()
{
	return FVoxelPlaceableItemReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPlaceableItemReference(FVoxelPlaceableItemReference::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelPlaceableItemReference"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelPlaceableItemReference
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelPlaceableItemReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPlaceableItemReference")),new UScriptStruct::TCppStructOps<FVoxelPlaceableItemReference>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelPlaceableItemReference;
	struct Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPlaceableItemReference>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelPlaceableItemReference",
		sizeof(FVoxelPlaceableItemReference),
		alignof(FVoxelPlaceableItemReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPlaceableItemReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPlaceableItemReference"), sizeof(FVoxelPlaceableItemReference), Get_Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Hash() { return 1743777697U; }
	DEFINE_FUNCTION(UVoxelAssetTools::execRemovePlaceableItem)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelPlaceableItemReference,Z_Param_Reference);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Error);
		P_GET_UBOOL(Z_Param_bResetOverlappingChunksData);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelAssetTools::RemovePlaceableItem(Z_Param_World,Z_Param_Reference,Z_Param_Out_Error,Z_Param_bResetOverlappingChunksData,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execAddDisableEditsBoxAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelPlaceableItemReference,Z_Param_Out_Reference);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::AddDisableEditsBoxAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Reference,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execAddDisableEditsBox)
	{
		P_GET_STRUCT_REF(FVoxelPlaceableItemReference,Z_Param_Out_Reference);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::AddDisableEditsBox(Z_Param_Out_Reference,Z_Param_World,Z_Param_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execCreateDataAssetFromWorldSection)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bCopyMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoxelDataAsset**)Z_Param__Result=UVoxelAssetTools::CreateDataAssetFromWorldSection(Z_Param_World,Z_Param_Bounds,Z_Param_bCopyMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execSetDataAssetMaterial)
	{
		P_GET_OBJECT(UVoxelDataAsset,Z_Param_Asset);
		P_GET_OBJECT_REF(UVoxelDataAsset,Z_Param_Out_NewAsset);
		P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::SetDataAssetMaterial(Z_Param_Asset,Z_Param_Out_NewAsset,Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execInvertDataAsset)
	{
		P_GET_OBJECT(UVoxelDataAsset,Z_Param_Asset);
		P_GET_OBJECT_REF(UVoxelDataAsset,Z_Param_Out_InvertedAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::InvertDataAsset(Z_Param_Asset,Z_Param_Out_InvertedAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportDataAssetFastAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelDataAsset,Z_Param_Asset);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_ENUM(EVoxelAssetMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportDataAssetFastAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Asset,Z_Param_Position,EVoxelAssetMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportDataAssetFast)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelDataAsset,Z_Param_Asset);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_ENUM(EVoxelAssetMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportDataAssetFast(Z_Param_World,Z_Param_Asset,Z_Param_Position,EVoxelAssetMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportAssetAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableWorldGenerator,Z_Param_Asset);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bSubtractive);
		P_GET_ENUM(EVoxelAssetMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportAssetAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Asset,Z_Param_Out_Seeds,Z_Param_Transform,Z_Param_Bounds,Z_Param_bSubtractive,EVoxelAssetMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportAsset)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableWorldGenerator,Z_Param_Asset);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bSubtractive);
		P_GET_ENUM(EVoxelAssetMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportAsset(Z_Param_World,Z_Param_Asset,Z_Param_Out_Seeds,Z_Param_Transform,Z_Param_Bounds,Z_Param_bSubtractive,EVoxelAssetMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportModifierAssetAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableWorldGenerator,Z_Param_Asset);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bModifyValues);
		P_GET_UBOOL(Z_Param_bModifyMaterials);
		P_GET_UBOOL(Z_Param_bLockEntireWorld);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportModifierAssetAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Asset,Z_Param_Out_Seeds,Z_Param_Transform,Z_Param_Bounds,Z_Param_bModifyValues,Z_Param_bModifyMaterials,Z_Param_bLockEntireWorld,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportModifierAsset)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableWorldGenerator,Z_Param_Asset);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bModifyValues);
		P_GET_UBOOL(Z_Param_bModifyMaterials);
		P_GET_UBOOL(Z_Param_bLockEntireWorld);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportModifierAsset(Z_Param_World,Z_Param_Asset,Z_Param_Out_Seeds,Z_Param_Transform,Z_Param_Bounds,Z_Param_bModifyValues,Z_Param_bModifyMaterials,Z_Param_bLockEntireWorld,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportAssetAsReferenceAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelPlaceableItemReference,Z_Param_Out_Reference);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableWorldGenerator,Z_Param_Asset);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportAssetAsReferenceAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Reference,Z_Param_World,Z_Param_Asset,Z_Param_Out_Seeds,Z_Param_Transform,Z_Param_Bounds,Z_Param_Priority,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelAssetTools::execImportAssetAsReference)
	{
		P_GET_STRUCT_REF(FVoxelPlaceableItemReference,Z_Param_Out_Reference);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_OBJECT(UVoxelTransformableWorldGenerator,Z_Param_Asset);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bUpdateRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelAssetTools::ImportAssetAsReference(Z_Param_Out_Reference,Z_Param_World,Z_Param_Asset,Z_Param_Out_Seeds,Z_Param_Transform,Z_Param_Bounds,Z_Param_Priority,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
		P_NATIVE_END;
	}
	void UVoxelAssetTools::StaticRegisterNativesUVoxelAssetTools()
	{
		UClass* Class = UVoxelAssetTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDisableEditsBox", &UVoxelAssetTools::execAddDisableEditsBox },
			{ "AddDisableEditsBoxAsync", &UVoxelAssetTools::execAddDisableEditsBoxAsync },
			{ "CreateDataAssetFromWorldSection", &UVoxelAssetTools::execCreateDataAssetFromWorldSection },
			{ "ImportAsset", &UVoxelAssetTools::execImportAsset },
			{ "ImportAssetAsReference", &UVoxelAssetTools::execImportAssetAsReference },
			{ "ImportAssetAsReferenceAsync", &UVoxelAssetTools::execImportAssetAsReferenceAsync },
			{ "ImportAssetAsync", &UVoxelAssetTools::execImportAssetAsync },
			{ "ImportDataAssetFast", &UVoxelAssetTools::execImportDataAssetFast },
			{ "ImportDataAssetFastAsync", &UVoxelAssetTools::execImportDataAssetFastAsync },
			{ "ImportModifierAsset", &UVoxelAssetTools::execImportModifierAsset },
			{ "ImportModifierAssetAsync", &UVoxelAssetTools::execImportModifierAssetAsync },
			{ "InvertDataAsset", &UVoxelAssetTools::execInvertDataAsset },
			{ "RemovePlaceableItem", &UVoxelAssetTools::execRemovePlaceableItem },
			{ "SetDataAssetMaterial", &UVoxelAssetTools::execSetDataAssetMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics
	{
		struct VoxelAssetTools_eventAddDisableEditsBox_Parms
		{
			FVoxelPlaceableItemReference Reference;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBox_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBox_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBox_Parms, Reference), Z_Construct_UScriptStruct_FVoxelPlaceableItemReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::NewProp_Reference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a disable edits box to the world\n\x09 * @param\x09World\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Bounds\x09\x09\x09The bounds of the box in voxel space\n\x09 */" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a disable edits box to the world\n@param       World                   The voxel world to edit\n@param       Bounds                  The bounds of the box in voxel space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "AddDisableEditsBox", nullptr, nullptr, sizeof(VoxelAssetTools_eventAddDisableEditsBox_Parms), Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics
	{
		struct VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelPlaceableItemReference Reference;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, Reference), Z_Construct_UScriptStruct_FVoxelPlaceableItemReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_Reference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a disable edits box to the world\n\x09 * Runs asynchronously\n\x09 * @param\x09World\x09The voxel world to edit\n\x09 * @param\x09""Bounds\x09The bounds of the box in voxel space\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a disable edits box to the world\nRuns asynchronously\n@param       World   The voxel world to edit\n@param       Bounds  The bounds of the box in voxel space" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "AddDisableEditsBoxAsync", nullptr, nullptr, sizeof(VoxelAssetTools_eventAddDisableEditsBoxAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics
	{
		struct VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bCopyMaterials;
			UVoxelDataAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bCopyMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms, ReturnValue), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_bCopyMaterials_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms*)Obj)->bCopyMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_bCopyMaterials = { "bCopyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms), &Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_bCopyMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_bCopyMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "CreateDataAssetFromWorldSection", nullptr, nullptr, sizeof(VoxelAssetTools_eventCreateDataAssetFromWorldSection_Parms), Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics
	{
		struct VoxelAssetTools_eventImportAsset_Parms
		{
			AVoxelWorld* World;
			UVoxelTransformableWorldGenerator* Asset;
			TMap<FName,int32> Seeds;
			FTransform Transform;
			FVoxelIntBox Bounds;
			bool bSubtractive;
			EVoxelAssetMergeMode MergeMode;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static void NewProp_bSubtractive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtractive;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAsset_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bSubtractive_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAsset_Parms*)Obj)->bSubtractive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bSubtractive = { "bSubtractive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bSubtractive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, Asset), Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAsset_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_MergeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_MergeMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_bSubtractive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSetAllMaterials, bConvertToVoxelSpace" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Will not provide the Previous World Generator, so won't work with graphs that use it!\n\x09 * Unlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Seeds\x09\x09\x09\x09\x09""By default, the asset uses the Voxel World seeds. You can override them here.\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09""bSubtractive\x09\x09\x09If false, the inner values are the full ones. If true, the inner values are the empty ones.\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How the values and materials of the asset should be merged with existing ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bSubtractive", "false" },
		{ "CPP_Default_MergeMode", "InnerValuesAndInnerMaterials" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nWill not provide the Previous World Generator, so won't work with graphs that use it!\nUnlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Seeds                                   By default, the asset uses the Voxel World seeds. You can override them here.\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n@param       bSubtractive                    If false, the inner values are the full ones. If true, the inner values are the empty ones.\n@param       MergeMode                               How the values and materials of the asset should be merged with existing ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportAsset", nullptr, nullptr, sizeof(VoxelAssetTools_eventImportAsset_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics
	{
		struct VoxelAssetTools_eventImportAssetAsReference_Parms
		{
			FVoxelPlaceableItemReference Reference;
			AVoxelWorld* World;
			UVoxelTransformableWorldGenerator* Asset;
			TMap<FName,int32> Seeds;
			FTransform Transform;
			FVoxelIntBox Bounds;
			int32 Priority;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
		};
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReference_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReference_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReference_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReference_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Asset), Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReference_Parms, Reference), Z_Construct_UScriptStruct_FVoxelPlaceableItemReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::NewProp_Reference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bUpdateRender" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Cheap, unless there are edited voxels in the zone the asset is imported in\n\x09 * Will provide the PreviousWorldGenerator to voxel graphs\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Seeds\x09\x09\x09\x09\x09""By default, the asset uses the Voxel World seeds. You can override them here.\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09Priority\x09\x09\x09\x09Priority of the asset: the higher priority ones will be on top of lower priority ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 * @param\x09""bUpdateRender\x09\x09\x09If the render should be updated. Not needed if done right after creating the world\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nCheap, unless there are edited voxels in the zone the asset is imported in\nWill provide the PreviousWorldGenerator to voxel graphs\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Seeds                                   By default, the asset uses the Voxel World seeds. You can override them here.\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n@param       Priority                                Priority of the asset: the higher priority ones will be on top of lower priority ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space\n@param       bUpdateRender                   If the render should be updated. Not needed if done right after creating the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportAssetAsReference", nullptr, nullptr, sizeof(VoxelAssetTools_eventImportAssetAsReference_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics
	{
		struct VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelPlaceableItemReference Reference;
			AVoxelWorld* World;
			UVoxelTransformableWorldGenerator* Asset;
			TMap<FName,int32> Seeds;
			FTransform Transform;
			FVoxelIntBox Bounds;
			int32 Priority;
			bool bConvertToVoxelSpace;
			bool bUpdateRender;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Asset), Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, Reference), Z_Construct_UScriptStruct_FVoxelPlaceableItemReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_Reference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Cheap, unless there are edited voxels in the zone the asset is imported in\n\x09 * Will provide the PreviousWorldGenerator to voxel graphs\n\x09 * Runs asynchronously\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Seeds\x09\x09\x09\x09\x09""By default, the asset uses the Voxel World seeds. You can override them here.\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09Priority\x09\x09\x09\x09Priority of the asset: the higher priority ones will be on top of lower priority ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 * @param\x09""bUpdateRender\x09\x09\x09If the render should be updated. Not needed if done right after creating the world\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nCheap, unless there are edited voxels in the zone the asset is imported in\nWill provide the PreviousWorldGenerator to voxel graphs\nRuns asynchronously\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Seeds                                   By default, the asset uses the Voxel World seeds. You can override them here.\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n@param       Priority                                Priority of the asset: the higher priority ones will be on top of lower priority ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space\n@param       bUpdateRender                   If the render should be updated. Not needed if done right after creating the world" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportAssetAsReferenceAsync", nullptr, nullptr, sizeof(VoxelAssetTools_eventImportAssetAsReferenceAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics
	{
		struct VoxelAssetTools_eventImportAssetAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			UVoxelTransformableWorldGenerator* Asset;
			TMap<FName,int32> Seeds;
			FTransform Transform;
			FVoxelIntBox Bounds;
			bool bSubtractive;
			EVoxelAssetMergeMode MergeMode;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static void NewProp_bSubtractive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtractive;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bSubtractive_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportAssetAsync_Parms*)Obj)->bSubtractive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bSubtractive = { "bSubtractive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bSubtractive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, Asset), Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportAssetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_MergeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_MergeMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_bSubtractive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSetAllMaterials, bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Will not provide the Previous World Generator, so won't work with graphs that use it!\n\x09 * Unlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Seeds\x09\x09\x09\x09\x09""By default, the asset uses the Voxel World seeds. You can override them here.\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09""bSubtractive\x09\x09\x09If false, the inner values are the full ones. If true, the inner values are the empty ones.\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How the values and materials of the asset should be merged with existing ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bSubtractive", "false" },
		{ "CPP_Default_MergeMode", "InnerValuesAndInnerMaterials" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nWill not provide the Previous World Generator, so won't work with graphs that use it!\nUnlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Seeds                                   By default, the asset uses the Voxel World seeds. You can override them here.\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n@param       bSubtractive                    If false, the inner values are the full ones. If true, the inner values are the empty ones.\n@param       MergeMode                               How the values and materials of the asset should be merged with existing ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportAssetAsync", nullptr, nullptr, sizeof(VoxelAssetTools_eventImportAssetAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics
	{
		struct VoxelAssetTools_eventImportDataAssetFast_Parms
		{
			AVoxelWorld* World;
			UVoxelDataAsset* Asset;
			FVector Position;
			EVoxelAssetMergeMode MergeMode;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportDataAssetFast_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportDataAssetFast_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFast_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFast_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFast_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFast_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_MergeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_MergeMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSetAllMaterials, bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Specialization of ImportAsset for data assets with no scale nor rotation\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How the values and materials of the asset should be merged with existing ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_MergeMode", "InnerValuesAndInnerMaterials" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Specialization of ImportAsset for data assets with no scale nor rotation\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Position                                The position of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       MergeMode                               How the values and materials of the asset should be merged with existing ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportDataAssetFast", nullptr, nullptr, sizeof(VoxelAssetTools_eventImportDataAssetFast_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics
	{
		struct VoxelAssetTools_eventImportDataAssetFastAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			UVoxelDataAsset* Asset;
			FVector Position;
			EVoxelAssetMergeMode MergeMode;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportDataAssetFastAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportDataAssetFastAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportDataAssetFastAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportDataAssetFastAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportDataAssetFastAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_MergeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_MergeMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSetAllMaterials, bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Specialization of ImportAsset for data assets with no scale nor rotation\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How the values and materials of the asset should be merged with existing ones\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_MergeMode", "InnerValuesAndInnerMaterials" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Specialization of ImportAsset for data assets with no scale nor rotation\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Position                                The position of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       MergeMode                               How the values and materials of the asset should be merged with existing ones\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportDataAssetFastAsync", nullptr, nullptr, sizeof(VoxelAssetTools_eventImportDataAssetFastAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics
	{
		struct VoxelAssetTools_eventImportModifierAsset_Parms
		{
			AVoxelWorld* World;
			UVoxelTransformableWorldGenerator* Asset;
			TMap<FName,int32> Seeds;
			FTransform Transform;
			FVoxelIntBox Bounds;
			bool bModifyValues;
			bool bModifyMaterials;
			bool bLockEntireWorld;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bLockEntireWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockEntireWorld;
		static void NewProp_bModifyMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifyMaterials;
		static void NewProp_bModifyValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifyValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAsset_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bLockEntireWorld_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAsset_Parms*)Obj)->bLockEntireWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bLockEntireWorld = { "bLockEntireWorld", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bLockEntireWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyMaterials_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAsset_Parms*)Obj)->bModifyMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyMaterials = { "bModifyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyValues_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAsset_Parms*)Obj)->bModifyValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyValues = { "bModifyValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAsset_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAsset_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAsset_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAsset_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAsset_Parms, Asset), Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAsset_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bLockEntireWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_bModifyValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bLockEntireWorld, bConvertToVoxelSpace" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel modifier asset to the world. Should be a graph asset.\n\x09 * Unlike ImportAsset, this WILL provide the Previous World Generator to the graph, so you can access the existing voxel value\n\x09 * Unlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Seeds\x09\x09\x09\x09\x09""By default, the asset uses the Voxel World seeds. You can override them here.\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bLockEntireWorld", "true" },
		{ "CPP_Default_bModifyMaterials", "true" },
		{ "CPP_Default_bModifyValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel modifier asset to the world. Should be a graph asset.\nUnlike ImportAsset, this WILL provide the Previous World Generator to the graph, so you can access the existing voxel value\nUnlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Seeds                                   By default, the asset uses the Voxel World seeds. You can override them here.\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportModifierAsset", nullptr, nullptr, sizeof(VoxelAssetTools_eventImportModifierAsset_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics
	{
		struct VoxelAssetTools_eventImportModifierAssetAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			UVoxelTransformableWorldGenerator* Asset;
			TMap<FName,int32> Seeds;
			FTransform Transform;
			FVoxelIntBox Bounds;
			bool bModifyValues;
			bool bModifyMaterials;
			bool bLockEntireWorld;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bLockEntireWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockEntireWorld;
		static void NewProp_bModifyMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifyMaterials;
		static void NewProp_bModifyValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifyValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bLockEntireWorld_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bLockEntireWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bLockEntireWorld = { "bLockEntireWorld", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bLockEntireWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyMaterials_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bModifyMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyMaterials = { "bModifyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyValues_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventImportModifierAssetAsync_Parms*)Obj)->bModifyValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyValues = { "bModifyValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, Asset), Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventImportModifierAssetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bLockEntireWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_bModifyValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bLockEntireWorld, bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\n\x09 * Will not provide the Previous World Generator, so won't work with graphs that use it!\n\x09 * Unlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09""Asset\x09\x09\x09\x09\x09The asset to import\n\x09 * @param\x09Seeds\x09\x09\x09\x09\x09""By default, the asset uses the Voxel World seeds. You can override them here.\n\x09 * @param\x09Transform\x09\x09\x09\x09The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the transform is in world space. If false, it's in voxel space\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bLockEntireWorld", "true" },
		{ "CPP_Default_bModifyMaterials", "true" },
		{ "CPP_Default_bModifyValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Add a voxel asset to the world: can be a data asset (eg imported from a mesh), or a graph asset\nWill not provide the Previous World Generator, so won't work with graphs that use it!\nUnlike ImportAssetAsReference, this one copies the asset data into the world. Can be expensive for large assets. Use this if your asset is relatively small\n@param       World                                   The voxel world to edit\n@param       Asset                                   The asset to import\n@param       Seeds                                   By default, the asset uses the Voxel World seeds. You can override them here.\n@param       Transform                               The transform of the asset: in world space, unless ConvertToVoxelSpace is false\n@param       Bounds                                  The bounds of the asset in voxel space. If the asset is a VoxelTransformableWorldGeneratorWithBounds, they will be set automatically if not provided\n@param       bConvertToVoxelSpace    If true, the transform is in world space. If false, it's in voxel space" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "ImportModifierAssetAsync", nullptr, nullptr, sizeof(VoxelAssetTools_eventImportModifierAssetAsync_Parms), Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics
	{
		struct VoxelAssetTools_eventInvertDataAsset_Parms
		{
			UVoxelDataAsset* Asset;
			UVoxelDataAsset* InvertedAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvertedAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::NewProp_InvertedAsset = { "InvertedAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventInvertDataAsset_Parms, InvertedAsset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventInvertDataAsset_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::NewProp_InvertedAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "InvertDataAsset", nullptr, nullptr, sizeof(VoxelAssetTools_eventInvertDataAsset_Parms), Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics
	{
		struct VoxelAssetTools_eventRemovePlaceableItem_Parms
		{
			AVoxelWorld* World;
			FVoxelPlaceableItemReference Reference;
			FString Error;
			bool bResetOverlappingChunksData;
			bool bUpdateRender;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bUpdateRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
		static void NewProp_bResetOverlappingChunksData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetOverlappingChunksData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventRemovePlaceableItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventRemovePlaceableItem_Parms), &Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventRemovePlaceableItem_Parms*)Obj)->bUpdateRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventRemovePlaceableItem_Parms), &Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_bResetOverlappingChunksData_SetBit(void* Obj)
	{
		((VoxelAssetTools_eventRemovePlaceableItem_Parms*)Obj)->bResetOverlappingChunksData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_bResetOverlappingChunksData = { "bResetOverlappingChunksData", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelAssetTools_eventRemovePlaceableItem_Parms), &Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_bResetOverlappingChunksData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventRemovePlaceableItem_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventRemovePlaceableItem_Parms, Reference), Z_Construct_UScriptStruct_FVoxelPlaceableItemReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventRemovePlaceableItem_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_bUpdateRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_bResetOverlappingChunksData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_Reference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bResetOverlappingChunksData, bUpdateRender" },
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "Comment", "/**\n\x09 * Remove a placeable item (voxel asset or disable edit box) from the voxel world\n\x09 * @param\x09World\x09\x09\x09\x09\x09\x09The voxel world to edit\n\x09 * @param\x09Reference\x09\x09\x09\x09\x09The reference to the placeable item\n\x09 * @param\x09""bResetOverlappingChunksData\x09""By default, manually edited (= dirty) chunks affected by the item are kept as-is, as it's not possible to remove the item while keeping the other edits that happened to that chunk.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09""Enabling this option will reset such chunks instead, removing any other edit applied to them\n\x09 * @param\x09""bUpdateRender\x09\x09\x09\x09If the render should be updated. Not needed if a disable edits box\n\x09 * @param\x09""Error\x09\x09\x09\x09\x09\x09""Error if unsuccessful\n\x09 */" },
		{ "CPP_Default_bResetOverlappingChunksData", "false" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "Keywords", "Disable edits box import voxel asset actor" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
		{ "ToolTip", "Remove a placeable item (voxel asset or disable edit box) from the voxel world\n@param       World                                           The voxel world to edit\n@param       Reference                                       The reference to the placeable item\n@param       bResetOverlappingChunksData     By default, manually edited (= dirty) chunks affected by the item are kept as-is, as it's not possible to remove the item while keeping the other edits that happened to that chunk.\n                                                                             Enabling this option will reset such chunks instead, removing any other edit applied to them\n@param       bUpdateRender                           If the render should be updated. Not needed if a disable edits box\n@param       Error                                           Error if unsuccessful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "RemovePlaceableItem", nullptr, nullptr, sizeof(VoxelAssetTools_eventRemovePlaceableItem_Parms), Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics
	{
		struct VoxelAssetTools_eventSetDataAssetMaterial_Parms
		{
			UVoxelDataAsset* Asset;
			UVoxelDataAsset* NewAsset;
			FVoxelMaterial Material;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventSetDataAssetMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventSetDataAssetMaterial_Parms, NewAsset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelAssetTools_eventSetDataAssetMaterial_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_NewAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Asset Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelAssetTools, nullptr, "SetDataAssetMaterial", nullptr, nullptr, sizeof(VoxelAssetTools_eventSetDataAssetMaterial_Parms), Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelAssetTools_NoRegister()
	{
		return UVoxelAssetTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelAssetTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelAssetTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelAssetTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBox, "AddDisableEditsBox" }, // 3307928799
		{ &Z_Construct_UFunction_UVoxelAssetTools_AddDisableEditsBoxAsync, "AddDisableEditsBoxAsync" }, // 1933420782
		{ &Z_Construct_UFunction_UVoxelAssetTools_CreateDataAssetFromWorldSection, "CreateDataAssetFromWorldSection" }, // 1804759945
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportAsset, "ImportAsset" }, // 227251630
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReference, "ImportAssetAsReference" }, // 3054853796
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsReferenceAsync, "ImportAssetAsReferenceAsync" }, // 2258879308
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportAssetAsync, "ImportAssetAsync" }, // 692908811
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFast, "ImportDataAssetFast" }, // 817822757
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportDataAssetFastAsync, "ImportDataAssetFastAsync" }, // 2091273398
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAsset, "ImportModifierAsset" }, // 844582834
		{ &Z_Construct_UFunction_UVoxelAssetTools_ImportModifierAssetAsync, "ImportModifierAssetAsync" }, // 2903548586
		{ &Z_Construct_UFunction_UVoxelAssetTools_InvertDataAsset, "InvertDataAsset" }, // 3800419681
		{ &Z_Construct_UFunction_UVoxelAssetTools_RemovePlaceableItem, "RemovePlaceableItem" }, // 304683932
		{ &Z_Construct_UFunction_UVoxelAssetTools_SetDataAssetMaterial, "SetDataAssetMaterial" }, // 3316132690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelAssetTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelAssetTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelAssetTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetTools_Statics::ClassParams = {
		&UVoxelAssetTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelAssetTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelAssetTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelAssetTools, 2140559637);
	template<> VOXEL_API UClass* StaticClass<UVoxelAssetTools>()
	{
		return UVoxelAssetTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelAssetTools(Z_Construct_UClass_UVoxelAssetTools, &UVoxelAssetTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelAssetTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
