// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURVEEDITORTOOLS_CurveEditorTransformTool_generated_h
#error "CurveEditorTransformTool.generated.h already included, missing '#pragma once' in CurveEditorTransformTool.h"
#endif
#define CURVEEDITORTOOLS_CurveEditorTransformTool_generated_h

#define Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformToolOptions_Statics; \
	CURVEEDITORTOOLS_API static class UScriptStruct* StaticStruct();


template<> CURVEEDITORTOOLS_API UScriptStruct* StaticStruct<struct FTransformToolOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h


#define FOREACH_ENUM_ETOOLTRANSFORMINTERPTYPE(op) \
	op(EToolTransformInterpType::Linear) \
	op(EToolTransformInterpType::Sinusoidal) \
	op(EToolTransformInterpType::Cubic) \
	op(EToolTransformInterpType::CircularIn) \
	op(EToolTransformInterpType::CircularOut) \
	op(EToolTransformInterpType::ExpIn) \
	op(EToolTransformInterpType::ExpOut) 

enum class EToolTransformInterpType : uint8;
template<> CURVEEDITORTOOLS_API UEnum* StaticEnum<EToolTransformInterpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
