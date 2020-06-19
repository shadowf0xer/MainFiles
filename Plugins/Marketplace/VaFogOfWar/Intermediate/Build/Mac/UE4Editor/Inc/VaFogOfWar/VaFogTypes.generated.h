// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VAFOGOFWAR_VaFogTypes_generated_h
#error "VaFogTypes.generated.h already included, missing '#pragma once' in VaFogTypes.h"
#endif
#define VAFOGOFWAR_VaFogTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogTypes_h


#define FOREACH_ENUM_EVAFOGHEIGHTLEVEL(op) \
	op(EVaFogHeightLevel::HL_INVALID) \
	op(EVaFogHeightLevel::HL_1) \
	op(EVaFogHeightLevel::HL_2) \
	op(EVaFogHeightLevel::HL_3) \
	op(EVaFogHeightLevel::HL_4) \
	op(EVaFogHeightLevel::HL_5) \
	op(EVaFogHeightLevel::HL_6) \
	op(EVaFogHeightLevel::HL_7) \
	op(EVaFogHeightLevel::HL_8) 

enum class EVaFogHeightLevel : uint8;
template<> VAFOGOFWAR_API UEnum* StaticEnum<EVaFogHeightLevel>();

#define FOREACH_ENUM_EVAFOGRADIUSSTRATEGY(op) \
	op(EVaFogRadiusStrategy::Circle) \
	op(EVaFogRadiusStrategy::Square) \
	op(EVaFogRadiusStrategy::SquareStepped) \
	op(EVaFogRadiusStrategy::Max) 

enum class EVaFogRadiusStrategy : uint8;
template<> VAFOGOFWAR_API UEnum* StaticEnum<EVaFogRadiusStrategy>();

#define FOREACH_ENUM_EVAFOGLAYERCHANNEL(op) \
	op(EVaFogLayerChannel::Permanent) \
	op(EVaFogLayerChannel::Scouting) \
	op(EVaFogLayerChannel::Terrain) 

enum class EVaFogLayerChannel : uint8;
template<> VAFOGOFWAR_API UEnum* StaticEnum<EVaFogLayerChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
