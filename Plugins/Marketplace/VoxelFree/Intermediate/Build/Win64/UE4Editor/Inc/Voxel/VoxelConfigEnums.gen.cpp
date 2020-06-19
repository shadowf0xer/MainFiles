// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelConfigEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelConfigEnums() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBHardness();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelUVConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNormalConfig();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
// End Cross Module References
	static UEnum* EVoxelRGBHardness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelRGBHardness, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelRGBHardness"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBHardness>()
	{
		return EVoxelRGBHardness_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelRGBHardness(EVoxelRGBHardness_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelRGBHardness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Hash() { return 1331821483U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBHardness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelRGBHardness"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelRGBHardness_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelRGBHardness::FourWayBlend", (int64)EVoxelRGBHardness::FourWayBlend },
				{ "EVoxelRGBHardness::FiveWayBlend", (int64)EVoxelRGBHardness::FiveWayBlend },
				{ "EVoxelRGBHardness::R", (int64)EVoxelRGBHardness::R },
				{ "EVoxelRGBHardness::G", (int64)EVoxelRGBHardness::G },
				{ "EVoxelRGBHardness::B", (int64)EVoxelRGBHardness::B },
				{ "EVoxelRGBHardness::A", (int64)EVoxelRGBHardness::A },
				{ "EVoxelRGBHardness::U0", (int64)EVoxelRGBHardness::U0 },
				{ "EVoxelRGBHardness::U1", (int64)EVoxelRGBHardness::U1 },
				{ "EVoxelRGBHardness::V0", (int64)EVoxelRGBHardness::V0 },
				{ "EVoxelRGBHardness::V1", (int64)EVoxelRGBHardness::V1 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Comment", "// Use the Alpha channel as hardness\n" },
				{ "A.Name", "EVoxelRGBHardness::A" },
				{ "A.ToolTip", "Use the Alpha channel as hardness" },
				{ "B.Comment", "// Use the Blue channel as hardness\n" },
				{ "B.Name", "EVoxelRGBHardness::B" },
				{ "B.ToolTip", "Use the Blue channel as hardness" },
				{ "BlueprintType", "true" },
				{ "FiveWayBlend.Comment", "// Interpret the material as 5 way blend, and use MaterialsHardness\n" },
				{ "FiveWayBlend.Name", "EVoxelRGBHardness::FiveWayBlend" },
				{ "FiveWayBlend.ToolTip", "Interpret the material as 5 way blend, and use MaterialsHardness" },
				{ "FourWayBlend.Comment", "// Interpret the material as 4 way blend, and use MaterialsHardness\n" },
				{ "FourWayBlend.Name", "EVoxelRGBHardness::FourWayBlend" },
				{ "FourWayBlend.ToolTip", "Interpret the material as 4 way blend, and use MaterialsHardness" },
				{ "G.Comment", "// Use the Green channel as hardness\n" },
				{ "G.Name", "EVoxelRGBHardness::G" },
				{ "G.ToolTip", "Use the Green channel as hardness" },
				{ "ModuleRelativePath", "Public/VoxelConfigEnums.h" },
				{ "R.Comment", "// Use the Red channel as hardness\n" },
				{ "R.Name", "EVoxelRGBHardness::R" },
				{ "R.ToolTip", "Use the Red channel as hardness" },
				{ "U0.Comment", "// Use the U0 channel as hardness\n" },
				{ "U0.Name", "EVoxelRGBHardness::U0" },
				{ "U0.ToolTip", "Use the U0 channel as hardness" },
				{ "U1.Comment", "// Use the U1 channel as hardness\n" },
				{ "U1.Name", "EVoxelRGBHardness::U1" },
				{ "U1.ToolTip", "Use the U1 channel as hardness" },
				{ "V0.Comment", "// Use the V0 channel as hardness\n" },
				{ "V0.Name", "EVoxelRGBHardness::V0" },
				{ "V0.ToolTip", "Use the V0 channel as hardness" },
				{ "V1.Comment", "// Use the V1 channel as hardness\n" },
				{ "V1.Name", "EVoxelRGBHardness::V1" },
				{ "V1.ToolTip", "Use the V1 channel as hardness" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelRGBHardness",
				"EVoxelRGBHardness",
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
	static UEnum* EVoxelDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelDataType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelDataType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelDataType>()
	{
		return EVoxelDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelDataType(EVoxelDataType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelDataType_Hash() { return 2455651980U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelDataType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelDataType::Values", (int64)EVoxelDataType::Values },
				{ "EVoxelDataType::Materials", (int64)EVoxelDataType::Materials },
				{ "EVoxelDataType::Foliage", (int64)EVoxelDataType::Foliage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Foliage.Name", "EVoxelDataType::Foliage" },
				{ "Materials.Name", "EVoxelDataType::Materials" },
				{ "ModuleRelativePath", "Public/VoxelConfigEnums.h" },
				{ "Values.Name", "EVoxelDataType::Values" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelDataType",
				"EVoxelDataType",
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
	static UEnum* EVoxelSamplerMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSamplerMode, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSamplerMode"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSamplerMode>()
	{
		return EVoxelSamplerMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSamplerMode(EVoxelSamplerMode_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSamplerMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Hash() { return 1609234187U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSamplerMode"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSamplerMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSamplerMode::Clamp", (int64)EVoxelSamplerMode::Clamp },
				{ "EVoxelSamplerMode::Tile", (int64)EVoxelSamplerMode::Tile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Clamp.Comment", "// Clamp the coordinates\n" },
				{ "Clamp.Name", "EVoxelSamplerMode::Clamp" },
				{ "Clamp.ToolTip", "Clamp the coordinates" },
				{ "ModuleRelativePath", "Public/VoxelConfigEnums.h" },
				{ "Tile.Comment", "// Tile the coordinates\n" },
				{ "Tile.Name", "EVoxelSamplerMode::Tile" },
				{ "Tile.ToolTip", "Tile the coordinates" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSamplerMode",
				"EVoxelSamplerMode",
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
	static UEnum* EVoxelSpawnerActorSpawnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerActorSpawnType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerActorSpawnType>()
	{
		return EVoxelSpawnerActorSpawnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSpawnerActorSpawnType(EVoxelSpawnerActorSpawnType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSpawnerActorSpawnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Hash() { return 665768142U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSpawnerActorSpawnType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSpawnerActorSpawnType::All", (int64)EVoxelSpawnerActorSpawnType::All },
				{ "EVoxelSpawnerActorSpawnType::OnlyFloating", (int64)EVoxelSpawnerActorSpawnType::OnlyFloating },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "// Spawn all spawner actors\n" },
				{ "All.Name", "EVoxelSpawnerActorSpawnType::All" },
				{ "All.ToolTip", "Spawn all spawner actors" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VoxelConfigEnums.h" },
				{ "OnlyFloating.Comment", "// Spawn only floating spawner actors\n" },
				{ "OnlyFloating.Name", "EVoxelSpawnerActorSpawnType::OnlyFloating" },
				{ "OnlyFloating.ToolTip", "Spawn only floating spawner actors" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSpawnerActorSpawnType",
				"EVoxelSpawnerActorSpawnType",
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
	static UEnum* EVoxelRGBA_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelRGBA, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelRGBA"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBA>()
	{
		return EVoxelRGBA_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelRGBA(EVoxelRGBA_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelRGBA"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelRGBA_Hash() { return 798324695U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelRGBA"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelRGBA_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelRGBA::R", (int64)EVoxelRGBA::R },
				{ "EVoxelRGBA::G", (int64)EVoxelRGBA::G },
				{ "EVoxelRGBA::B", (int64)EVoxelRGBA::B },
				{ "EVoxelRGBA::A", (int64)EVoxelRGBA::A },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "EVoxelRGBA::A" },
				{ "B.Name", "EVoxelRGBA::B" },
				{ "BlueprintType", "true" },
				{ "G.Name", "EVoxelRGBA::G" },
				{ "ModuleRelativePath", "Public/VoxelConfigEnums.h" },
				{ "R.Name", "EVoxelRGBA::R" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelRGBA",
				"EVoxelRGBA",
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
	static UEnum* EVoxelUVConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelUVConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelUVConfig"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelUVConfig>()
	{
		return EVoxelUVConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelUVConfig(EVoxelUVConfig_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelUVConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelUVConfig_Hash() { return 896157900U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelUVConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelUVConfig"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelUVConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelUVConfig::GlobalUVs", (int64)EVoxelUVConfig::GlobalUVs },
				{ "EVoxelUVConfig::PackWorldUpInUVs", (int64)EVoxelUVConfig::PackWorldUpInUVs },
				{ "EVoxelUVConfig::PerVoxelUVs", (int64)EVoxelUVConfig::PerVoxelUVs },
				{ "EVoxelUVConfig::Max", (int64)EVoxelUVConfig::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GlobalUVs.DisplayName", "Global UVs" },
				{ "GlobalUVs.Name", "EVoxelUVConfig::GlobalUVs" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "EVoxelUVConfig::Max" },
				{ "ModuleRelativePath", "Public/VoxelConfigEnums.h" },
				{ "PackWorldUpInUVs.DisplayName", "Pack WorldUp in UVs" },
				{ "PackWorldUpInUVs.Name", "EVoxelUVConfig::PackWorldUpInUVs" },
				{ "PerVoxelUVs.Comment", "// In Cubic, per Voxel. In others, per chunk\n" },
				{ "PerVoxelUVs.DisplayName", "Per Voxel/Chunk UVs" },
				{ "PerVoxelUVs.Name", "EVoxelUVConfig::PerVoxelUVs" },
				{ "PerVoxelUVs.ToolTip", "In Cubic, per Voxel. In others, per chunk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelUVConfig",
				"EVoxelUVConfig",
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
	static UEnum* EVoxelMaterialConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMaterialConfig"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelMaterialConfig>()
	{
		return EVoxelMaterialConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelMaterialConfig(EVoxelMaterialConfig_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelMaterialConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Hash() { return 1848617949U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelMaterialConfig"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelMaterialConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelMaterialConfig::RGB", (int64)EVoxelMaterialConfig::RGB },
				{ "EVoxelMaterialConfig::SingleIndex", (int64)EVoxelMaterialConfig::SingleIndex },
				{ "EVoxelMaterialConfig::DoubleIndex_DEPRECATED", (int64)EVoxelMaterialConfig::DoubleIndex_DEPRECATED },
				{ "EVoxelMaterialConfig::MultiIndex", (int64)EVoxelMaterialConfig::MultiIndex },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DoubleIndex_DEPRECATED.Hidden", "" },
				{ "DoubleIndex_DEPRECATED.Name", "EVoxelMaterialConfig::DoubleIndex_DEPRECATED" },
				{ "ModuleRelativePath", "Public/VoxelConfigEnums.h" },
				{ "MultiIndex.Name", "EVoxelMaterialConfig::MultiIndex" },
				{ "RGB.Name", "EVoxelMaterialConfig::RGB" },
				{ "SingleIndex.Name", "EVoxelMaterialConfig::SingleIndex" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelMaterialConfig",
				"EVoxelMaterialConfig",
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
	static UEnum* EVoxelNormalConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelNormalConfig, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelNormalConfig"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelNormalConfig>()
	{
		return EVoxelNormalConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelNormalConfig(EVoxelNormalConfig_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelNormalConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Hash() { return 2279595567U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelNormalConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelNormalConfig"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelNormalConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelNormalConfig::NoNormal", (int64)EVoxelNormalConfig::NoNormal },
				{ "EVoxelNormalConfig::GradientNormal", (int64)EVoxelNormalConfig::GradientNormal },
				{ "EVoxelNormalConfig::MeshNormal", (int64)EVoxelNormalConfig::MeshNormal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GradientNormal.Comment", "// Use the density field gradient as normal. Might have glitches on hard corners which can be quite visible when using triplanar projection\n" },
				{ "GradientNormal.Name", "EVoxelNormalConfig::GradientNormal" },
				{ "GradientNormal.ToolTip", "Use the density field gradient as normal. Might have glitches on hard corners which can be quite visible when using triplanar projection" },
				{ "MeshNormal.Comment", "// Compute the normal from the mesh faces. This will have glitches on chunks borders, Gradient Normal are preferred\n" },
				{ "MeshNormal.Name", "EVoxelNormalConfig::MeshNormal" },
				{ "MeshNormal.ToolTip", "Compute the normal from the mesh faces. This will have glitches on chunks borders, Gradient Normal are preferred" },
				{ "ModuleRelativePath", "Public/VoxelConfigEnums.h" },
				{ "NoNormal.Name", "EVoxelNormalConfig::NoNormal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelNormalConfig",
				"EVoxelNormalConfig",
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
	static UEnum* EVoxelRenderType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelRenderType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelRenderType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelRenderType>()
	{
		return EVoxelRenderType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelRenderType(EVoxelRenderType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelRenderType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelRenderType_Hash() { return 322660234U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelRenderType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelRenderType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelRenderType::MarchingCubes", (int64)EVoxelRenderType::MarchingCubes },
				{ "EVoxelRenderType::Cubic", (int64)EVoxelRenderType::Cubic },
				{ "EVoxelRenderType::SurfaceNets", (int64)EVoxelRenderType::SurfaceNets },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cubic.Name", "EVoxelRenderType::Cubic" },
				{ "MarchingCubes.Name", "EVoxelRenderType::MarchingCubes" },
				{ "ModuleRelativePath", "Public/VoxelConfigEnums.h" },
				{ "SurfaceNets.Comment", "// Surface nets only work well at LOD 0. They will have holes between higher LODs, and the material won't be picked correctly.\n" },
				{ "SurfaceNets.Name", "EVoxelRenderType::SurfaceNets" },
				{ "SurfaceNets.ToolTip", "Surface nets only work well at LOD 0. They will have holes between higher LODs, and the material won't be picked correctly." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelRenderType",
				"EVoxelRenderType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
