// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelAssets/VoxelHeightmapAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHeightmapAsset() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAsset();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16();
// End Cross Module References
	static UEnum* EVoxelHeightmapImporterMaterialConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelHeightmapImporterMaterialConfig"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelHeightmapImporterMaterialConfig>()
	{
		return EVoxelHeightmapImporterMaterialConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelHeightmapImporterMaterialConfig(EVoxelHeightmapImporterMaterialConfig_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelHeightmapImporterMaterialConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Hash() { return 4070829713U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelHeightmapImporterMaterialConfig"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelHeightmapImporterMaterialConfig::RGB", (int64)EVoxelHeightmapImporterMaterialConfig::RGB },
				{ "EVoxelHeightmapImporterMaterialConfig::FourWayBlend", (int64)EVoxelHeightmapImporterMaterialConfig::FourWayBlend },
				{ "EVoxelHeightmapImporterMaterialConfig::FiveWayBlend", (int64)EVoxelHeightmapImporterMaterialConfig::FiveWayBlend },
				{ "EVoxelHeightmapImporterMaterialConfig::SingleIndex", (int64)EVoxelHeightmapImporterMaterialConfig::SingleIndex },
				{ "EVoxelHeightmapImporterMaterialConfig::MultiIndex", (int64)EVoxelHeightmapImporterMaterialConfig::MultiIndex },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FiveWayBlend.Name", "EVoxelHeightmapImporterMaterialConfig::FiveWayBlend" },
				{ "FourWayBlend.Name", "EVoxelHeightmapImporterMaterialConfig::FourWayBlend" },
				{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
				{ "MultiIndex.Name", "EVoxelHeightmapImporterMaterialConfig::MultiIndex" },
				{ "RGB.Name", "EVoxelHeightmapImporterMaterialConfig::RGB" },
				{ "SingleIndex.Name", "EVoxelHeightmapImporterMaterialConfig::SingleIndex" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelHeightmapImporterMaterialConfig",
				"EVoxelHeightmapImporterMaterialConfig",
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
class UScriptStruct* FVoxelHeightmapImporterWeightmapInfos::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelHeightmapImporterWeightmapInfos"), sizeof(FVoxelHeightmapImporterWeightmapInfos), Get_Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelHeightmapImporterWeightmapInfos>()
{
	return FVoxelHeightmapImporterWeightmapInfos::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos(FVoxelHeightmapImporterWeightmapInfos::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelHeightmapImporterWeightmapInfos"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelHeightmapImporterWeightmapInfos
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelHeightmapImporterWeightmapInfos()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelHeightmapImporterWeightmapInfos")),new UScriptStruct::TCppStructOps<FVoxelHeightmapImporterWeightmapInfos>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelHeightmapImporterWeightmapInfos;
	struct Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Layer_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelHeightmapImporterWeightmapInfos>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHeightmapImporterWeightmapInfos, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHeightmapImporterWeightmapInfos, Layer), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// The weightmap\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "The weightmap" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelHeightmapImporterWeightmapInfos, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelHeightmapImporterWeightmapInfos",
		sizeof(FVoxelHeightmapImporterWeightmapInfos),
		alignof(FVoxelHeightmapImporterWeightmapInfos),
		Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelHeightmapImporterWeightmapInfos"), sizeof(FVoxelHeightmapImporterWeightmapInfos), Get_Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Hash() { return 3283325899U; }
	DEFINE_FUNCTION(UVoxelHeightmapAsset::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelHeightmapAsset::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	void UVoxelHeightmapAsset::StaticRegisterNativesUVoxelHeightmapAsset()
	{
		UClass* Class = UVoxelHeightmapAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeight", &UVoxelHeightmapAsset::execGetHeight },
			{ "GetWidth", &UVoxelHeightmapAsset::execGetWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics
	{
		struct VoxelHeightmapAsset_eventGetHeight_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHeightmapAsset_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Heightmap Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelHeightmapAsset, nullptr, "GetHeight", nullptr, nullptr, sizeof(VoxelHeightmapAsset_eventGetHeight_Parms), Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics
	{
		struct VoxelHeightmapAsset_eventGetWidth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHeightmapAsset_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Heightmap Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelHeightmapAsset, nullptr, "GetWidth", nullptr, nullptr, sizeof(VoxelHeightmapAsset_eventGetWidth_Parms), Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister()
	{
		return UVoxelHeightmapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHeightmapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThumbnailSave;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailSave_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialConfigFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaterialConfigFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelCustomVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoxelCustomVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditionalThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfiniteExtent_MetaData[];
#endif
		static void NewProp_bInfiniteExtent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfiniteExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHeightmapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelHeightmapAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight, "GetHeight" }, // 3235067665
		{ &Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth, "GetWidth" }, // 3618612523
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Asset that holds 2D information.\n */" },
		{ "IncludePath", "VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "Asset that holds 2D information." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0040000c00000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, ThumbnailSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_Inner = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag = { "MaterialConfigFlag", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, MaterialConfigFlag), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion = { "VoxelCustomVersion", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, VoxelCustomVersion), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Heightmap Info" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Heightmap Info" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Width), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Heightmap World Generator Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "// Higher precision can improve render quality, but voxel values are lower (hardness not constant)\n// Set this to the max delta height you can have between 2 adjacent pixels, in voxels\n// Need to be increased if the shadows/normals aren't nice, and decreased if the edit speed isn't coherent\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "Higher precision can improve render quality, but voxel values are lower (hardness not constant)\nSet this to the max delta height you can have between 2 adjacent pixels, in voxels\nNeed to be increased if the shadows/normals aren't nice, and decreased if the edit speed isn't coherent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Precision), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness_MetaData[] = {
		{ "Category", "Heightmap World Generator Settings" },
		{ "Comment", "// Additional thickness in voxels below the heightmap\n" },
		{ "EditCondition", "!bInfiniteExtent" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "Additional thickness in voxels below the heightmap" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness = { "AdditionalThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, AdditionalThickness), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_MetaData[] = {
		{ "Category", "Heightmap World Generator Settings" },
		{ "Comment", "// If false, will have meshes on the sides. If true, will extend infinitely.\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "If false, will have meshes on the sides. If true, will extend infinitely." },
	};
#endif
	void Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_SetBit(void* Obj)
	{
		((UVoxelHeightmapAsset*)Obj)->bInfiniteExtent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent = { "bInfiniteExtent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelHeightmapAsset), &Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset_MetaData[] = {
		{ "Category", "Heightmap Asset Settings" },
		{ "Comment", "// In voxels, applied after Z Scale\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "In voxels, applied after Z Scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, HeightOffset), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale_MetaData[] = {
		{ "Category", "Heightmap Asset Settings" },
		{ "Comment", "// Height multiplier\n" },
		{ "DisplayName", "Z Scale" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "Height multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale = { "HeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, HeightScale), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Heightmap Asset Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// XY Scale of the heightmap\n" },
		{ "DisplayName", "XY Scale" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ToolTip", "XY Scale of the heightmap" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHeightmapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::ClassParams = {
		&UVoxelHeightmapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHeightmapAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelHeightmapAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelHeightmapAsset, 159594547);
	template<> VOXEL_API UClass* StaticClass<UVoxelHeightmapAsset>()
	{
		return UVoxelHeightmapAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelHeightmapAsset(Z_Construct_UClass_UVoxelHeightmapAsset, &UVoxelHeightmapAsset::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelHeightmapAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelHeightmapAsset)
	void UVoxelHeightmapAssetFloat::StaticRegisterNativesUVoxelHeightmapAssetFloat()
	{
	}
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister()
	{
		return UVoxelHeightmapAssetFloat::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelHeightmapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::ClassParams = {
		&UVoxelHeightmapAssetFloat::StaticClass,
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
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelHeightmapAssetFloat, 1966735324);
	template<> VOXEL_API UClass* StaticClass<UVoxelHeightmapAssetFloat>()
	{
		return UVoxelHeightmapAssetFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelHeightmapAssetFloat(Z_Construct_UClass_UVoxelHeightmapAssetFloat, &UVoxelHeightmapAssetFloat::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelHeightmapAssetFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetFloat);
	void UVoxelHeightmapAssetUINT16::StaticRegisterNativesUVoxelHeightmapAssetUINT16()
	{
	}
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister()
	{
		return UVoxelHeightmapAssetUINT16::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapsInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightmapsInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightmapsInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weightmaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Weightmaps;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Weightmaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heightmap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Heightmap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelHeightmapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, WeightmapsInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_Inner = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps = { "Weightmaps", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, Weightmaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_Inner = { "Weightmaps", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap = { "Heightmap", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, Heightmap), METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetUINT16>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::ClassParams = {
		&UVoxelHeightmapAssetUINT16::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelHeightmapAssetUINT16, 3037874869);
	template<> VOXEL_API UClass* StaticClass<UVoxelHeightmapAssetUINT16>()
	{
		return UVoxelHeightmapAssetUINT16::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelHeightmapAssetUINT16(Z_Construct_UClass_UVoxelHeightmapAssetUINT16, &UVoxelHeightmapAssetUINT16::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelHeightmapAssetUINT16"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetUINT16);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
