// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelVDB/Public/VoxelVDBAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelVDBAsset() {}
// Cross Module References
	VOXELVDB_API UEnum* Z_Construct_UEnum_VoxelVDB_EVoxelVDBChannel();
	UPackage* Z_Construct_UPackage__Script_VoxelVDB();
	VOXELVDB_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig();
	VOXELVDB_API UClass* Z_Construct_UClass_UVoxelVDBAsset_NoRegister();
	VOXELVDB_API UClass* Z_Construct_UClass_UVoxelVDBAsset();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// End Cross Module References
	static UEnum* EVoxelVDBChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelVDB_EVoxelVDBChannel, Z_Construct_UPackage__Script_VoxelVDB(), TEXT("EVoxelVDBChannel"));
		}
		return Singleton;
	}
	template<> VOXELVDB_API UEnum* StaticEnum<EVoxelVDBChannel>()
	{
		return EVoxelVDBChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelVDBChannel(EVoxelVDBChannel_StaticEnum, TEXT("/Script/VoxelVDB"), TEXT("EVoxelVDBChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelVDB_EVoxelVDBChannel_Hash() { return 664625027U; }
	UEnum* Z_Construct_UEnum_VoxelVDB_EVoxelVDBChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelVDB();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelVDBChannel"), 0, Get_Z_Construct_UEnum_VoxelVDB_EVoxelVDBChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelVDBChannel::Density", (int64)EVoxelVDBChannel::Density },
				{ "EVoxelVDBChannel::R", (int64)EVoxelVDBChannel::R },
				{ "EVoxelVDBChannel::G", (int64)EVoxelVDBChannel::G },
				{ "EVoxelVDBChannel::B", (int64)EVoxelVDBChannel::B },
				{ "EVoxelVDBChannel::A", (int64)EVoxelVDBChannel::A },
				{ "EVoxelVDBChannel::U0", (int64)EVoxelVDBChannel::U0 },
				{ "EVoxelVDBChannel::U1", (int64)EVoxelVDBChannel::U1 },
				{ "EVoxelVDBChannel::U2", (int64)EVoxelVDBChannel::U2 },
				{ "EVoxelVDBChannel::U3", (int64)EVoxelVDBChannel::U3 },
				{ "EVoxelVDBChannel::V0", (int64)EVoxelVDBChannel::V0 },
				{ "EVoxelVDBChannel::V1", (int64)EVoxelVDBChannel::V1 },
				{ "EVoxelVDBChannel::V2", (int64)EVoxelVDBChannel::V2 },
				{ "EVoxelVDBChannel::V3", (int64)EVoxelVDBChannel::V3 },
				{ "EVoxelVDBChannel::Max", (int64)EVoxelVDBChannel::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "EVoxelVDBChannel::A" },
				{ "B.Name", "EVoxelVDBChannel::B" },
				{ "Density.Name", "EVoxelVDBChannel::Density" },
				{ "G.Name", "EVoxelVDBChannel::G" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "EVoxelVDBChannel::Max" },
				{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
				{ "R.Name", "EVoxelVDBChannel::R" },
				{ "U0.Name", "EVoxelVDBChannel::U0" },
				{ "U1.Name", "EVoxelVDBChannel::U1" },
				{ "U2.Name", "EVoxelVDBChannel::U2" },
				{ "U3.Name", "EVoxelVDBChannel::U3" },
				{ "V0.Name", "EVoxelVDBChannel::V0" },
				{ "V1.Name", "EVoxelVDBChannel::V1" },
				{ "V2.Name", "EVoxelVDBChannel::V2" },
				{ "V3.Name", "EVoxelVDBChannel::V3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelVDB,
				nullptr,
				"EVoxelVDBChannel",
				"EVoxelVDBChannel",
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
class UScriptStruct* FVoxelVDBImportChannelConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELVDB_API uint32 Get_Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig, Z_Construct_UPackage__Script_VoxelVDB(), TEXT("VoxelVDBImportChannelConfig"), sizeof(FVoxelVDBImportChannelConfig), Get_Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Hash());
	}
	return Singleton;
}
template<> VOXELVDB_API UScriptStruct* StaticStruct<FVoxelVDBImportChannelConfig>()
{
	return FVoxelVDBImportChannelConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelVDBImportChannelConfig(FVoxelVDBImportChannelConfig::StaticStruct, TEXT("/Script/VoxelVDB"), TEXT("VoxelVDBImportChannelConfig"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelVDB_StaticRegisterNativesFVoxelVDBImportChannelConfig
{
	FScriptStruct_VoxelVDB_StaticRegisterNativesFVoxelVDBImportChannelConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelVDBImportChannelConfig")),new UScriptStruct::TCppStructOps<FVoxelVDBImportChannelConfig>);
	}
} ScriptStruct_VoxelVDB_StaticRegisterNativesFVoxelVDBImportChannelConfig;
	struct Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoMinMax_MetaData[];
#endif
		static void NewProp_bAutoMinMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetChannel;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetChannel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelVDBImportChannelConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Min/Max, used to normalize the input data. Min = 0 and Max = 1 does nothing.\n// Result = (Value - Min) / (Max - Min)\n" },
		{ "EditCondition", "!bNormalize" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
		{ "ToolTip", "Min/Max, used to normalize the input data. Min = 0 and Max = 1 does nothing.\nResult = (Value - Min) / (Max - Min)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelVDBImportChannelConfig, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Min/Max, used to normalize the input data. Min = 0 and Max = 1 does nothing.\n// Result = (Value - Min) / (Max - Min)\n" },
		{ "EditCondition", "!bNormalize" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
		{ "ToolTip", "Min/Max, used to normalize the input data. Min = 0 and Max = 1 does nothing.\nResult = (Value - Min) / (Max - Min)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelVDBImportChannelConfig, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_bAutoMinMax_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If true, will automatically assign the Min/Max used for normalization to the min & max of the input data\n" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
		{ "ToolTip", "If true, will automatically assign the Min/Max used for normalization to the min & max of the input data" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_bAutoMinMax_SetBit(void* Obj)
	{
		((FVoxelVDBImportChannelConfig*)Obj)->bAutoMinMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_bAutoMinMax = { "bAutoMinMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelVDBImportChannelConfig), &Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_bAutoMinMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_bAutoMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_bAutoMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_TargetChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_TargetChannel = { "TargetChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelVDBImportChannelConfig, TargetChannel), Z_Construct_UEnum_VoxelVDB_EVoxelVDBChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_TargetChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_TargetChannel_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_TargetChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_bAutoMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_TargetChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::NewProp_TargetChannel_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelVDB,
		nullptr,
		&NewStructOps,
		"VoxelVDBImportChannelConfig",
		sizeof(FVoxelVDBImportChannelConfig),
		alignof(FVoxelVDBImportChannelConfig),
		Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelVDB();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelVDBImportChannelConfig"), sizeof(FVoxelVDBImportChannelConfig), Get_Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig_Hash() { return 639746197U; }
	void UVoxelVDBAsset::StaticRegisterNativesUVoxelVDBAsset()
	{
	}
	UClass* Z_Construct_UClass_UVoxelVDBAsset_NoRegister()
	{
		return UVoxelVDBAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelVDBAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelCustomVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoxelCustomVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ChannelConfigs;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChannelConfigs_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelConfigs_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemorySizeInMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemorySizeInMB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelVDBAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelVDB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelVDBAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelVDBAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_VoxelCustomVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_VoxelCustomVersion = { "VoxelCustomVersion", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelVDBAsset, VoxelCustomVersion), METADATA_PARAMS(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_VoxelCustomVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_VoxelCustomVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ChannelConfigs_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ChannelConfigs = { "ChannelConfigs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelVDBAsset, ChannelConfigs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ChannelConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ChannelConfigs_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ChannelConfigs_Key_KeyProp = { "ChannelConfigs_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ChannelConfigs_ValueProp = { "ChannelConfigs", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ImportPath_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelVDBAsset, ImportPath), METADATA_PARAMS(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ImportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_MemorySizeInMB_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_MemorySizeInMB = { "MemorySizeInMB", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelVDBAsset, MemorySizeInMB), METADATA_PARAMS(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_MemorySizeInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_MemorySizeInMB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Public/VoxelVDBAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelVDBAsset, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelVDBAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_VoxelCustomVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ChannelConfigs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ChannelConfigs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ChannelConfigs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_ImportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_MemorySizeInMB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelVDBAsset_Statics::NewProp_Bounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelVDBAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelVDBAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelVDBAsset_Statics::ClassParams = {
		&UVoxelVDBAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelVDBAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBAsset_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelVDBAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelVDBAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelVDBAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelVDBAsset, 574883511);
	template<> VOXELVDB_API UClass* StaticClass<UVoxelVDBAsset>()
	{
		return UVoxelVDBAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelVDBAsset(Z_Construct_UClass_UVoxelVDBAsset, &UVoxelVDBAsset::StaticClass, TEXT("/Script/VoxelVDB"), TEXT("UVoxelVDBAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelVDBAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelVDBAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
