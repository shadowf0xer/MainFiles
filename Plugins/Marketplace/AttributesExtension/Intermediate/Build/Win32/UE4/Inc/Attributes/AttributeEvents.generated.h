// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttributeChangeInfo;
#ifdef ATTRIBUTES_AttributeEvents_generated_h
#error "AttributeEvents.generated.h already included, missing '#pragma once' in AttributeEvents.h"
#endif
#define ATTRIBUTES_AttributeEvents_generated_h

#define HostProject_Plugins_AttributesExtension_Source_Attributes_Public_AttributeEvents_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeChangeInfo_Statics; \
	ATTRIBUTES_API static class UScriptStruct* StaticStruct();


template<> ATTRIBUTES_API UScriptStruct* StaticStruct<struct FAttributeChangeInfo>();

#define HostProject_Plugins_AttributesExtension_Source_Attributes_Public_AttributeEvents_h_44_DELEGATE \
struct _Script_Attributes_eventInt32ModifiedMCDelegate_Parms \
{ \
	int32 LastValue; \
	FAttributeChangeInfo Modification; \
}; \
static inline void FInt32ModifiedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& Int32ModifiedMCDelegate, int32 LastValue, FAttributeChangeInfo const& Modification) \
{ \
	_Script_Attributes_eventInt32ModifiedMCDelegate_Parms Parms; \
	Parms.LastValue=LastValue; \
	Parms.Modification=Modification; \
	Int32ModifiedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AttributesExtension_Source_Attributes_Public_AttributeEvents_h_43_DELEGATE \
struct _Script_Attributes_eventInt32ModifiedDelegate_Parms \
{ \
	int32 LastValue; \
	FAttributeChangeInfo Modification; \
}; \
static inline void FInt32ModifiedDelegate_DelegateWrapper(const FScriptDelegate& Int32ModifiedDelegate, int32 LastValue, FAttributeChangeInfo const& Modification) \
{ \
	_Script_Attributes_eventInt32ModifiedDelegate_Parms Parms; \
	Parms.LastValue=LastValue; \
	Parms.Modification=Modification; \
	Int32ModifiedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AttributesExtension_Source_Attributes_Public_AttributeEvents_h_41_DELEGATE \
struct _Script_Attributes_eventFloatModifiedMCDelegate_Parms \
{ \
	float LastValue; \
	FAttributeChangeInfo Modification; \
}; \
static inline void FFloatModifiedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& FloatModifiedMCDelegate, float LastValue, FAttributeChangeInfo const& Modification) \
{ \
	_Script_Attributes_eventFloatModifiedMCDelegate_Parms Parms; \
	Parms.LastValue=LastValue; \
	Parms.Modification=Modification; \
	FloatModifiedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AttributesExtension_Source_Attributes_Public_AttributeEvents_h_40_DELEGATE \
struct _Script_Attributes_eventFloatModifiedDelegate_Parms \
{ \
	float LastValue; \
	FAttributeChangeInfo Modification; \
}; \
static inline void FFloatModifiedDelegate_DelegateWrapper(const FScriptDelegate& FloatModifiedDelegate, float LastValue, FAttributeChangeInfo const& Modification) \
{ \
	_Script_Attributes_eventFloatModifiedDelegate_Parms Parms; \
	Parms.LastValue=LastValue; \
	Parms.Modification=Modification; \
	FloatModifiedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AttributesExtension_Source_Attributes_Public_AttributeEvents_h


#define FOREACH_ENUM_EATTRIBUTEOPERATION(op) \
	op(EAttributeOperation::None) \
	op(EAttributeOperation::BaseValueChanged) \
	op(EAttributeOperation::AddedMod) \
	op(EAttributeOperation::RemovedMod) \
	op(EAttributeOperation::RemovedAllMods) \
	op(EAttributeOperation::RemovedCategory) 

enum class EAttributeOperation : uint8;
template<> ATTRIBUTES_API UEnum* StaticEnum<EAttributeOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
