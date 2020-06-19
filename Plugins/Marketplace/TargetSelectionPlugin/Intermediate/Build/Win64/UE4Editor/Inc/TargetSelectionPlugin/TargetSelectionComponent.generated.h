// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USphereComponent;
struct FKey;
class UInterface;
#ifdef TARGETSELECTIONPLUGIN_TargetSelectionComponent_generated_h
#error "TargetSelectionComponent.generated.h already included, missing '#pragma once' in TargetSelectionComponent.h"
#endif
#define TARGETSELECTIONPLUGIN_TargetSelectionComponent_generated_h

#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_20_DELEGATE \
struct _Script_TargetSelectionPlugin_eventOnSwitchActorS_Parms \
{ \
	AActor* ObservedActorNow; \
}; \
static inline void FOnSwitchActorS_DelegateWrapper(const FMulticastScriptDelegate& OnSwitchActorS, AActor* ObservedActorNow) \
{ \
	_Script_TargetSelectionPlugin_eventOnSwitchActorS_Parms Parms; \
	Parms.ObservedActorNow=ObservedActorNow; \
	OnSwitchActorS.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_15_DELEGATE \
struct _Script_TargetSelectionPlugin_eventOnStateOfTargetSelection_Parms \
{ \
	bool bIsEnableTargetSelection; \
}; \
static inline void FOnStateOfTargetSelection_DelegateWrapper(const FMulticastScriptDelegate& OnStateOfTargetSelection, bool bIsEnableTargetSelection) \
{ \
	_Script_TargetSelectionPlugin_eventOnStateOfTargetSelection_Parms Parms; \
	Parms.bIsEnableTargetSelection=bIsEnableTargetSelection ? true : false; \
	OnStateOfTargetSelection.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_SPARSE_DATA
#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetObservedActorByIndex); \
	DECLARE_FUNCTION(execSetObservedActorByPointer); \
	DECLARE_FUNCTION(execGetIsCustomArray); \
	DECLARE_FUNCTION(execGetIsWatchingNow); \
	DECLARE_FUNCTION(execGetTargetSelectionCollision); \
	DECLARE_FUNCTION(execGetObservedActorsArr); \
	DECLARE_FUNCTION(execGetIndexOfCurrentObservedActor); \
	DECLARE_FUNCTION(execGetObservedActor); \
	DECLARE_FUNCTION(execAddActor); \
	DECLARE_FUNCTION(execRemoveAndSwitchActors); \
	DECLARE_FUNCTION(execOffWatchingActors); \
	DECLARE_FUNCTION(execWatchActors_CustomArray); \
	DECLARE_FUNCTION(execWatchActors_OneFilter_Interface); \
	DECLARE_FUNCTION(execWatchActors);


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetObservedActorByIndex); \
	DECLARE_FUNCTION(execSetObservedActorByPointer); \
	DECLARE_FUNCTION(execGetIsCustomArray); \
	DECLARE_FUNCTION(execGetIsWatchingNow); \
	DECLARE_FUNCTION(execGetTargetSelectionCollision); \
	DECLARE_FUNCTION(execGetObservedActorsArr); \
	DECLARE_FUNCTION(execGetIndexOfCurrentObservedActor); \
	DECLARE_FUNCTION(execGetObservedActor); \
	DECLARE_FUNCTION(execAddActor); \
	DECLARE_FUNCTION(execRemoveAndSwitchActors); \
	DECLARE_FUNCTION(execOffWatchingActors); \
	DECLARE_FUNCTION(execWatchActors_CustomArray); \
	DECLARE_FUNCTION(execWatchActors_OneFilter_Interface); \
	DECLARE_FUNCTION(execWatchActors);


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetSelectionComponent(); \
	friend struct Z_Construct_UClass_UTargetSelectionComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetSelectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetSelectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTargetSelectionComponent)


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTargetSelectionComponent(); \
	friend struct Z_Construct_UClass_UTargetSelectionComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetSelectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetSelectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTargetSelectionComponent)


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetSelectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetSelectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetSelectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetSelectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetSelectionComponent(UTargetSelectionComponent&&); \
	NO_API UTargetSelectionComponent(const UTargetSelectionComponent&); \
public:


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetSelectionComponent(UTargetSelectionComponent&&); \
	NO_API UTargetSelectionComponent(const UTargetSelectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetSelectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetSelectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetSelectionComponent)


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObservedActor() { return STRUCT_OFFSET(UTargetSelectionComponent, ObservedActor); } \
	FORCEINLINE static uint32 __PPO__IndexOfCurrentObservedActor() { return STRUCT_OFFSET(UTargetSelectionComponent, IndexOfCurrentObservedActor); } \
	FORCEINLINE static uint32 __PPO__ObservedActorsArr() { return STRUCT_OFFSET(UTargetSelectionComponent, ObservedActorsArr); } \
	FORCEINLINE static uint32 __PPO__TargetSelectionCollision() { return STRUCT_OFFSET(UTargetSelectionComponent, TargetSelectionCollision); } \
	FORCEINLINE static uint32 __PPO__bIsWatchingNow() { return STRUCT_OFFSET(UTargetSelectionComponent, bIsWatchingNow); } \
	FORCEINLINE static uint32 __PPO__bIsCustomArray() { return STRUCT_OFFSET(UTargetSelectionComponent, bIsCustomArray); }


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_23_PROLOG
#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_SPARSE_DATA \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_RPC_WRAPPERS \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_INCLASS \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_SPARSE_DATA \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETSELECTIONPLUGIN_API UClass* StaticClass<class UTargetSelectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TargetSelectionPlugin_Source_TargetSelectionPlugin_Public_TargetSelectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
