// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCLIENT_ConcertClientVRPresenceActor_generated_h
#error "ConcertClientVRPresenceActor.generated.h already included, missing '#pragma once' in ConcertClientVRPresenceActor.h"
#endif
#define CONCERTSYNCCLIENT_ConcertClientVRPresenceActor_generated_h

#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_SPARSE_DATA
#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_RPC_WRAPPERS
#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConcertClientVRPresenceActor(); \
	friend struct Z_Construct_UClass_AConcertClientVRPresenceActor_Statics; \
public: \
	DECLARE_CLASS(AConcertClientVRPresenceActor, AConcertClientPresenceActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertSyncClient"), NO_API) \
	DECLARE_SERIALIZER(AConcertClientVRPresenceActor)


#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAConcertClientVRPresenceActor(); \
	friend struct Z_Construct_UClass_AConcertClientVRPresenceActor_Statics; \
public: \
	DECLARE_CLASS(AConcertClientVRPresenceActor, AConcertClientPresenceActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertSyncClient"), NO_API) \
	DECLARE_SERIALIZER(AConcertClientVRPresenceActor)


#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConcertClientVRPresenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConcertClientVRPresenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConcertClientVRPresenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConcertClientVRPresenceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConcertClientVRPresenceActor(AConcertClientVRPresenceActor&&); \
	NO_API AConcertClientVRPresenceActor(const AConcertClientVRPresenceActor&); \
public:


#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConcertClientVRPresenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConcertClientVRPresenceActor(AConcertClientVRPresenceActor&&); \
	NO_API AConcertClientVRPresenceActor(const AConcertClientVRPresenceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConcertClientVRPresenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConcertClientVRPresenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConcertClientVRPresenceActor)


#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LeftLaserSplineComponent() { return STRUCT_OFFSET(AConcertClientVRPresenceActor, LeftLaserSplineComponent); } \
	FORCEINLINE static uint32 __PPO__LeftLaserSplineMeshComponents() { return STRUCT_OFFSET(AConcertClientVRPresenceActor, LeftLaserSplineMeshComponents); } \
	FORCEINLINE static uint32 __PPO__RightLaserSplineComponent() { return STRUCT_OFFSET(AConcertClientVRPresenceActor, RightLaserSplineComponent); } \
	FORCEINLINE static uint32 __PPO__RightLaserSplineMeshComponents() { return STRUCT_OFFSET(AConcertClientVRPresenceActor, RightLaserSplineMeshComponents); } \
	FORCEINLINE static uint32 __PPO__bIsLeftControllerVisible() { return STRUCT_OFFSET(AConcertClientVRPresenceActor, bIsLeftControllerVisible); } \
	FORCEINLINE static uint32 __PPO__bIsRightControllerVisible() { return STRUCT_OFFSET(AConcertClientVRPresenceActor, bIsRightControllerVisible); } \
	FORCEINLINE static uint32 __PPO__bIsLeftLaserVisible() { return STRUCT_OFFSET(AConcertClientVRPresenceActor, bIsLeftLaserVisible); } \
	FORCEINLINE static uint32 __PPO__bIsRightLaserVisible() { return STRUCT_OFFSET(AConcertClientVRPresenceActor, bIsRightLaserVisible); }


#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_14_PROLOG
#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_SPARSE_DATA \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_RPC_WRAPPERS \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_INCLASS \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_SPARSE_DATA \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ConcertClientVRPresenceActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONCERTSYNCCLIENT_API UClass* StaticClass<class AConcertClientVRPresenceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
