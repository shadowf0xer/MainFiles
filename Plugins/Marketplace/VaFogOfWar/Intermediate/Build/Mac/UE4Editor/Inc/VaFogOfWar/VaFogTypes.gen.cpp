// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaFogOfWar/Public/VaFogTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaFogTypes() {}
// Cross Module References
	VAFOGOFWAR_API UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel();
	UPackage* Z_Construct_UPackage__Script_VaFogOfWar();
	VAFOGOFWAR_API UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogRadiusStrategy();
	VAFOGOFWAR_API UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogLayerChannel();
// End Cross Module References
	static UEnum* EVaFogHeightLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel, Z_Construct_UPackage__Script_VaFogOfWar(), TEXT("EVaFogHeightLevel"));
		}
		return Singleton;
	}
	template<> VAFOGOFWAR_API UEnum* StaticEnum<EVaFogHeightLevel>()
	{
		return EVaFogHeightLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaFogHeightLevel(EVaFogHeightLevel_StaticEnum, TEXT("/Script/VaFogOfWar"), TEXT("EVaFogHeightLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel_Hash() { return 1124056870U; }
	UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaFogOfWar();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaFogHeightLevel"), 0, Get_Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVaFogHeightLevel::HL_INVALID", (int64)EVaFogHeightLevel::HL_INVALID },
				{ "EVaFogHeightLevel::HL_1", (int64)EVaFogHeightLevel::HL_1 },
				{ "EVaFogHeightLevel::HL_2", (int64)EVaFogHeightLevel::HL_2 },
				{ "EVaFogHeightLevel::HL_3", (int64)EVaFogHeightLevel::HL_3 },
				{ "EVaFogHeightLevel::HL_4", (int64)EVaFogHeightLevel::HL_4 },
				{ "EVaFogHeightLevel::HL_5", (int64)EVaFogHeightLevel::HL_5 },
				{ "EVaFogHeightLevel::HL_6", (int64)EVaFogHeightLevel::HL_6 },
				{ "EVaFogHeightLevel::HL_7", (int64)EVaFogHeightLevel::HL_7 },
				{ "EVaFogHeightLevel::HL_8", (int64)EVaFogHeightLevel::HL_8 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** \n * There are six different height levels that have gameplay relevance. One height level can be connected to another by a stair (passable) or a cliff (obstructed).\n */// clang-format off\n" },
				{ "HL_1.Hidden", "" },
				{ "HL_1.Name", "EVaFogHeightLevel::HL_1" },
				{ "HL_2.DisplayName", "River" },
				{ "HL_2.Name", "EVaFogHeightLevel::HL_2" },
				{ "HL_3.Comment", "// River\n" },
				{ "HL_3.DisplayName", "Lowground" },
				{ "HL_3.Name", "EVaFogHeightLevel::HL_3" },
				{ "HL_3.ToolTip", "River" },
				{ "HL_4.Comment", "// Lowground\n" },
				{ "HL_4.DisplayName", "Highground" },
				{ "HL_4.Name", "EVaFogHeightLevel::HL_4" },
				{ "HL_4.ToolTip", "Lowground" },
				{ "HL_5.Comment", "// Highground\n" },
				{ "HL_5.DisplayName", "Elevated" },
				{ "HL_5.Name", "EVaFogHeightLevel::HL_5" },
				{ "HL_5.ToolTip", "Highground" },
				{ "HL_6.Comment", "// Elevated\n" },
				{ "HL_6.DisplayName", "Cliffs" },
				{ "HL_6.Name", "EVaFogHeightLevel::HL_6" },
				{ "HL_6.ToolTip", "Elevated" },
				{ "HL_7.Comment", "// Cliffs\n" },
				{ "HL_7.DisplayName", "Valley" },
				{ "HL_7.Name", "EVaFogHeightLevel::HL_7" },
				{ "HL_7.ToolTip", "Cliffs" },
				{ "HL_8.Comment", "// Valley\n" },
				{ "HL_8.Hidden", "" },
				{ "HL_8.Name", "EVaFogHeightLevel::HL_8" },
				{ "HL_8.ToolTip", "Valley" },
				{ "HL_INVALID.Hidden", "" },
				{ "HL_INVALID.Name", "EVaFogHeightLevel::HL_INVALID" },
				{ "ModuleRelativePath", "Public/VaFogTypes.h" },
				{ "ToolTip", "There are six different height levels that have gameplay relevance. One height level can be connected to another by a stair (passable) or a cliff (obstructed).\n // clang-format off" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaFogOfWar,
				nullptr,
				"EVaFogHeightLevel",
				"EVaFogHeightLevel",
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
	static UEnum* EVaFogRadiusStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaFogOfWar_EVaFogRadiusStrategy, Z_Construct_UPackage__Script_VaFogOfWar(), TEXT("EVaFogRadiusStrategy"));
		}
		return Singleton;
	}
	template<> VAFOGOFWAR_API UEnum* StaticEnum<EVaFogRadiusStrategy>()
	{
		return EVaFogRadiusStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaFogRadiusStrategy(EVaFogRadiusStrategy_StaticEnum, TEXT("/Script/VaFogOfWar"), TEXT("EVaFogRadiusStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaFogOfWar_EVaFogRadiusStrategy_Hash() { return 632737012U; }
	UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogRadiusStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaFogOfWar();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaFogRadiusStrategy"), 0, Get_Z_Construct_UEnum_VaFogOfWar_EVaFogRadiusStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVaFogRadiusStrategy::Circle", (int64)EVaFogRadiusStrategy::Circle },
				{ "EVaFogRadiusStrategy::Square", (int64)EVaFogRadiusStrategy::Square },
				{ "EVaFogRadiusStrategy::SquareStepped", (int64)EVaFogRadiusStrategy::SquareStepped },
				{ "EVaFogRadiusStrategy::Max", (int64)EVaFogRadiusStrategy::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Circle.Name", "EVaFogRadiusStrategy::Circle" },
				{ "Max.Comment", "// Radius treated as diameter (used for obstalces mostly)\n" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "EVaFogRadiusStrategy::Max" },
				{ "Max.ToolTip", "Radius treated as diameter (used for obstalces mostly)" },
				{ "ModuleRelativePath", "Public/VaFogTypes.h" },
				{ "Square.Name", "EVaFogRadiusStrategy::Square" },
				{ "SquareStepped.Name", "EVaFogRadiusStrategy::SquareStepped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaFogOfWar,
				nullptr,
				"EVaFogRadiusStrategy",
				"EVaFogRadiusStrategy",
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
	static UEnum* EVaFogLayerChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaFogOfWar_EVaFogLayerChannel, Z_Construct_UPackage__Script_VaFogOfWar(), TEXT("EVaFogLayerChannel"));
		}
		return Singleton;
	}
	template<> VAFOGOFWAR_API UEnum* StaticEnum<EVaFogLayerChannel>()
	{
		return EVaFogLayerChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaFogLayerChannel(EVaFogLayerChannel_StaticEnum, TEXT("/Script/VaFogOfWar"), TEXT("EVaFogLayerChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaFogOfWar_EVaFogLayerChannel_Hash() { return 1686798406U; }
	UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogLayerChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaFogOfWar();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaFogLayerChannel"), 0, Get_Z_Construct_UEnum_VaFogOfWar_EVaFogLayerChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVaFogLayerChannel::Permanent", (int64)EVaFogLayerChannel::Permanent },
				{ "EVaFogLayerChannel::Scouting", (int64)EVaFogLayerChannel::Scouting },
				{ "EVaFogLayerChannel::Terrain", (int64)EVaFogLayerChannel::Terrain },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VaFogTypes.h" },
				{ "Permanent.Comment", "/** \"Black\" fog of war */" },
				{ "Permanent.Name", "EVaFogLayerChannel::Permanent" },
				{ "Permanent.ToolTip", "\"Black\" fog of war" },
				{ "Scouting.Comment", "/** \"Grey\" fog of war */" },
				{ "Scouting.Name", "EVaFogLayerChannel::Scouting" },
				{ "Scouting.ToolTip", "\"Grey\" fog of war" },
				{ "Terrain.Comment", "/** Vision obstacles */" },
				{ "Terrain.Name", "EVaFogLayerChannel::Terrain" },
				{ "Terrain.ToolTip", "Vision obstacles" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaFogOfWar,
				nullptr,
				"EVaFogLayerChannel",
				"EVaFogLayerChannel",
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
