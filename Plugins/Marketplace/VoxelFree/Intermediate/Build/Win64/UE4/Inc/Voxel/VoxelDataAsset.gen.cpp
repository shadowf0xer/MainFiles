// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelAssets/VoxelDataAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataAsset() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EVoxelDataAssetImportSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelDataAssetImportSource"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelDataAssetImportSource>()
	{
		return EVoxelDataAssetImportSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelDataAssetImportSource(EVoxelDataAssetImportSource_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelDataAssetImportSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Hash() { return 2826156200U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelDataAssetImportSource"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelDataAssetImportSource::None", (int64)EVoxelDataAssetImportSource::None },
				{ "EVoxelDataAssetImportSource::MagicaVox", (int64)EVoxelDataAssetImportSource::MagicaVox },
				{ "EVoxelDataAssetImportSource::RawVox", (int64)EVoxelDataAssetImportSource::RawVox },
				{ "EVoxelDataAssetImportSource::Mesh", (int64)EVoxelDataAssetImportSource::Mesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MagicaVox.Name", "EVoxelDataAssetImportSource::MagicaVox" },
				{ "Mesh.Name", "EVoxelDataAssetImportSource::Mesh" },
				{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
				{ "None.Name", "EVoxelDataAssetImportSource::None" },
				{ "RawVox.Name", "EVoxelDataAssetImportSource::RawVox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelDataAssetImportSource",
				"EVoxelDataAssetImportSource",
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
	DEFINE_FUNCTION(UVoxelDataAsset::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDataAsset::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	void UVoxelDataAsset::StaticRegisterNativesUVoxelDataAsset()
	{
		UClass* Class = UVoxelDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBounds", &UVoxelDataAsset::execGetBounds },
			{ "GetSize", &UVoxelDataAsset::execGetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics
	{
		struct VoxelDataAsset_eventGetBounds_Parms
		{
			FVoxelIntBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataAsset_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataAsset, nullptr, "GetBounds", nullptr, nullptr, sizeof(VoxelDataAsset_eventGetBounds_Parms), Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataAsset_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics
	{
		struct VoxelDataAsset_eventGetSize_Parms
		{
			FIntVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDataAsset_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDataAsset, nullptr, "GetSize", nullptr, nullptr, sizeof(VoxelDataAsset_eventGetSize_Parms), Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDataAsset_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister()
	{
		return UVoxelDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelWorldTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorldTemplate;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueConfigFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ValueConfigFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelCustomVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoxelCustomVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressedSizeInMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressedSizeInMB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncompressedSizeInMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UncompressedSizeInMB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubtractiveAsset_MetaData[];
#endif
		static void NewProp_bSubtractiveAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtractiveAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelDataAsset_GetBounds, "GetBounds" }, // 3929024618
		{ &Z_Construct_UFunction_UVoxelDataAsset_GetSize, "GetSize" }, // 3750451924
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Data Asset stores the values of every voxel inside it\n */" },
		{ "IncludePath", "VoxelAssets/VoxelDataAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
		{ "ToolTip", "A Data Asset stores the values of every voxel inside it" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate = { "VoxelWorldTemplate", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, VoxelWorldTemplate), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0040000c00000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, ThumbnailSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_Inner = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag = { "MaterialConfigFlag", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, MaterialConfigFlag), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag = { "ValueConfigFlag", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, ValueConfigFlag), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion = { "VoxelCustomVersion", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, VoxelCustomVersion), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, Source), Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB = { "CompressedSizeInMB", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, CompressedSizeInMB), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB = { "UncompressedSizeInMB", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, UncompressedSizeInMB), METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAsset, PositionOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, asset can be used to make holes in the world\n" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
		{ "ToolTip", "If true, asset can be used to make holes in the world" },
	};
#endif
	void Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_SetBit(void* Obj)
	{
		((UVoxelDataAsset*)Obj)->bSubtractiveAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset = { "bSubtractiveAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDataAsset), &Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAsset_Statics::ClassParams = {
		&UVoxelDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDataAsset, 939813924);
	template<> VOXEL_API UClass* StaticClass<UVoxelDataAsset>()
	{
		return UVoxelDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDataAsset(Z_Construct_UClass_UVoxelDataAsset, &UVoxelDataAsset::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelDataAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
