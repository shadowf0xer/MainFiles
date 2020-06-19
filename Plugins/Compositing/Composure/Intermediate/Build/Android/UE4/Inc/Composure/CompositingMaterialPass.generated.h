// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPOSURE_CompositingMaterialPass_generated_h
#error "CompositingMaterialPass.generated.h already included, missing '#pragma once' in CompositingMaterialPass.h"
#endif
#define COMPOSURE_CompositingMaterialPass_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositingMaterial_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__CachedMID() { return STRUCT_OFFSET(FCompositingMaterial, CachedMID); } \
	typedef FCompositingParamPayload Super;


template<> COMPOSURE_API UScriptStruct* StaticStruct<struct FCompositingMaterial>();

#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMPOSURE_API UScriptStruct* StaticStruct<struct FNamedCompMaterialParam>();

#define Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositingParamPayload_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMPOSURE_API UScriptStruct* StaticStruct<struct FCompositingParamPayload>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h


#define FOREACH_ENUM_EPARAMTYPE(op) \
	op(EParamType::UnknownParamType) \
	op(EParamType::ScalarParam) \
	op(EParamType::VectorParam) \
	op(EParamType::TextureParam) \
	op(EParamType::MediaTextureParam) 

enum class EParamType : uint8;
template<> COMPOSURE_API UEnum* StaticEnum<EParamType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
