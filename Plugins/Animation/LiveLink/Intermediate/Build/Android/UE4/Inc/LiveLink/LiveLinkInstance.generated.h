// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINK_LiveLinkInstance_generated_h
#error "LiveLinkInstance.generated.h already included, missing '#pragma once' in LiveLinkInstance.h"
#endif
#define LIVELINK_LiveLinkInstance_generated_h

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> LIVELINK_API UScriptStruct* StaticStruct<struct FLiveLinkInstanceProxy>();

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_SPARSE_DATA
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_RPC_WRAPPERS
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkInstance(); \
	friend struct Z_Construct_UClass_ULiveLinkInstance_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkInstance)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkInstance(); \
	friend struct Z_Construct_UClass_ULiveLinkInstance_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkInstance)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkInstance(ULiveLinkInstance&&); \
	NO_API ULiveLinkInstance(const ULiveLinkInstance&); \
public:


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkInstance(ULiveLinkInstance&&); \
	NO_API ULiveLinkInstance(const ULiveLinkInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkInstance)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentRetargetAsset() { return STRUCT_OFFSET(ULiveLinkInstance, CurrentRetargetAsset); }


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_40_PROLOG
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_RPC_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_INCLASS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LiveLinkInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
