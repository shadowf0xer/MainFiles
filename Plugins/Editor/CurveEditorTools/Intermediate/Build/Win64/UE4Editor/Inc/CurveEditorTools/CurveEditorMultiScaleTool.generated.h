// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURVEEDITORTOOLS_CurveEditorMultiScaleTool_generated_h
#error "CurveEditorMultiScaleTool.generated.h already included, missing '#pragma once' in CurveEditorMultiScaleTool.h"
#endif
#define CURVEEDITORTOOLS_CurveEditorMultiScaleTool_generated_h

#define Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics; \
	CURVEEDITORTOOLS_API static class UScriptStruct* StaticStruct();


template<> CURVEEDITORTOOLS_API UScriptStruct* StaticStruct<struct FMultiScaleToolOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h


#define FOREACH_ENUM_EMULTISCALEPIVOTTYPE(op) \
	op(EMultiScalePivotType::Average) \
	op(EMultiScalePivotType::BoundCenter) \
	op(EMultiScalePivotType::FirstKey) \
	op(EMultiScalePivotType::LastKey) 

enum class EMultiScalePivotType : uint8;
template<> CURVEEDITORTOOLS_API UEnum* StaticEnum<EMultiScalePivotType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
