// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ATTRIBUTES_AttrModifier_generated_h
#error "AttrModifier.generated.h already included, missing '#pragma once' in AttrModifier.h"
#endif
#define ATTRIBUTES_AttrModifier_generated_h

#define HostProject_Plugins_AttributesExtension_Source_Attributes_Public_AttrModifier_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttrModifier_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Guid() { return STRUCT_OFFSET(FAttrModifier, Guid); } \
	FORCEINLINE static uint32 __PPO__bNetDirty_Guid() { return STRUCT_OFFSET(FAttrModifier, bNetDirty_Guid); }


template<> ATTRIBUTES_API UScriptStruct* StaticStruct<struct FAttrModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AttributesExtension_Source_Attributes_Public_AttrModifier_h


#define FOREACH_ENUM_EMODIFIERMASK(op) \
	op(EModifierMask::Increment) \
	op(EModifierMask::LastMultiplier) \
	op(EModifierMask::BaseMultiplier) 

enum class EModifierMask : uint8;
template<> ATTRIBUTES_API UEnum* StaticEnum<EModifierMask>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
