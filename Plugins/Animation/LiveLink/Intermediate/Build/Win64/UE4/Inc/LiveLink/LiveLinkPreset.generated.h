// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINK_LiveLinkPreset_generated_h
#error "LiveLinkPreset.generated.h already included, missing '#pragma once' in LiveLinkPreset.h"
#endif
#define LIVELINK_LiveLinkPreset_generated_h

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_SPARSE_DATA
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuildFromClient); \
	DECLARE_FUNCTION(execApplyToClient);


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuildFromClient); \
	DECLARE_FUNCTION(execApplyToClient);


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkPreset(); \
	friend struct Z_Construct_UClass_ULiveLinkPreset_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkPreset)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkPreset(); \
	friend struct Z_Construct_UClass_ULiveLinkPreset_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkPreset)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkPreset(ULiveLinkPreset&&); \
	NO_API ULiveLinkPreset(const ULiveLinkPreset&); \
public:


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkPreset(ULiveLinkPreset&&); \
	NO_API ULiveLinkPreset(const ULiveLinkPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkPreset)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sources() { return STRUCT_OFFSET(ULiveLinkPreset, Sources); } \
	FORCEINLINE static uint32 __PPO__Subjects() { return STRUCT_OFFSET(ULiveLinkPreset, Subjects); }


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_12_PROLOG
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_RPC_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_INCLASS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
