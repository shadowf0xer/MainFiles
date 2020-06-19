// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONSEDITOR_ActionReflection_generated_h
#error "ActionReflection.generated.h already included, missing '#pragma once' in ActionReflection.h"
#endif
#define ACTIONSEDITOR_ActionReflection_generated_h

#define HostProject_Plugins_ActionsExtension_Source_Editor_Private_Nodes_ActionReflection_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionProperties_Statics; \
	ACTIONSEDITOR_API static class UScriptStruct* StaticStruct();


template<> ACTIONSEDITOR_API UScriptStruct* StaticStruct<struct FActionProperties>();

#define HostProject_Plugins_ActionsExtension_Source_Editor_Private_Nodes_ActionReflection_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVariableActionProperty_Statics; \
	ACTIONSEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseActionProperty Super;


template<> ACTIONSEDITOR_API UScriptStruct* StaticStruct<struct FVariableActionProperty>();

#define HostProject_Plugins_ActionsExtension_Source_Editor_Private_Nodes_ActionReflection_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDelegateActionProperty_Statics; \
	ACTIONSEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseActionProperty Super;


template<> ACTIONSEDITOR_API UScriptStruct* StaticStruct<struct FDelegateActionProperty>();

#define HostProject_Plugins_ActionsExtension_Source_Editor_Private_Nodes_ActionReflection_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBaseActionProperty_Statics; \
	ACTIONSEDITOR_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Property() { return STRUCT_OFFSET(FBaseActionProperty, Property); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(FBaseActionProperty, Name); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(FBaseActionProperty, Type); }


template<> ACTIONSEDITOR_API UScriptStruct* StaticStruct<struct FBaseActionProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ActionsExtension_Source_Editor_Private_Nodes_ActionReflection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
