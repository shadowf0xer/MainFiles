// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HTNPLANNER_HTNDomain_generated_h
#error "HTNDomain.generated.h already included, missing '#pragma once' in HTNDomain.h"
#endif
#define HTNPLANNER_HTNDomain_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_HTNDomain_h


#define FOREACH_ENUM_EHTNWORLDSTATEOPERATION(op) \
	op(EHTNWorldStateOperation::Set) \
	op(EHTNWorldStateOperation::Increase) \
	op(EHTNWorldStateOperation::Decrease) 

enum class EHTNWorldStateOperation : uint8;
template<> HTNPLANNER_API UEnum* StaticEnum<EHTNWorldStateOperation>();

#define FOREACH_ENUM_EHTNWORLDSTATECHECK(op) \
	op(EHTNWorldStateCheck::Less) \
	op(EHTNWorldStateCheck::LessOrEqual) \
	op(EHTNWorldStateCheck::Equal) \
	op(EHTNWorldStateCheck::NotEqual) \
	op(EHTNWorldStateCheck::GreaterOrEqual) \
	op(EHTNWorldStateCheck::Greater) \
	op(EHTNWorldStateCheck::IsTrue) 

enum class EHTNWorldStateCheck : uint8;
template<> HTNPLANNER_API UEnum* StaticEnum<EHTNWorldStateCheck>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
