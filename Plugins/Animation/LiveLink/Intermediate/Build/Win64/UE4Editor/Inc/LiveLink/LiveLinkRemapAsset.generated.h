// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef LIVELINK_LiveLinkRemapAsset_generated_h
#error "LiveLinkRemapAsset.generated.h already included, missing '#pragma once' in LiveLinkRemapAsset.h"
#endif
#define LIVELINK_LiveLinkRemapAsset_generated_h

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_SPARSE_DATA
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_RPC_WRAPPERS \
	virtual void RemapCurveElements_Implementation(TMap<FName,float>& CurveItems) const; \
	virtual FName GetRemappedCurveName_Implementation(FName CurveName) const; \
	virtual FName GetRemappedBoneName_Implementation(FName BoneName) const; \
 \
	DECLARE_FUNCTION(execRemapCurveElements); \
	DECLARE_FUNCTION(execGetRemappedCurveName); \
	DECLARE_FUNCTION(execGetRemappedBoneName);


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemapCurveElements_Implementation(TMap<FName,float>& CurveItems) const; \
	virtual FName GetRemappedCurveName_Implementation(FName CurveName) const; \
	virtual FName GetRemappedBoneName_Implementation(FName BoneName) const; \
 \
	DECLARE_FUNCTION(execRemapCurveElements); \
	DECLARE_FUNCTION(execGetRemappedCurveName); \
	DECLARE_FUNCTION(execGetRemappedBoneName);


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_EVENT_PARMS \
	struct LiveLinkRemapAsset_eventGetRemappedBoneName_Parms \
	{ \
		FName BoneName; \
		FName ReturnValue; \
	}; \
	struct LiveLinkRemapAsset_eventGetRemappedCurveName_Parms \
	{ \
		FName CurveName; \
		FName ReturnValue; \
	}; \
	struct LiveLinkRemapAsset_eventRemapCurveElements_Parms \
	{ \
		TMap<FName,float> CurveItems; \
	};


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_CALLBACK_WRAPPERS
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkRemapAsset(); \
	friend struct Z_Construct_UClass_ULiveLinkRemapAsset_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkRemapAsset, ULiveLinkRetargetAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkRemapAsset)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkRemapAsset(); \
	friend struct Z_Construct_UClass_ULiveLinkRemapAsset_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkRemapAsset, ULiveLinkRetargetAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkRemapAsset)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkRemapAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkRemapAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkRemapAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkRemapAsset(ULiveLinkRemapAsset&&); \
	NO_API ULiveLinkRemapAsset(const ULiveLinkRemapAsset&); \
public:


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkRemapAsset(ULiveLinkRemapAsset&&); \
	NO_API ULiveLinkRemapAsset(const ULiveLinkRemapAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkRemapAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkRemapAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkRemapAsset)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_10_PROLOG \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_EVENT_PARMS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_RPC_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_CALLBACK_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_INCLASS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_CALLBACK_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LiveLinkRemapAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkRemapAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRemapAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
