// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FRotator;
#ifdef TARGETSYSTEM_TargetSystemComponent_generated_h
#error "TargetSystemComponent.generated.h already included, missing '#pragma once' in TargetSystemComponent.h"
#endif
#define TARGETSYSTEM_TargetSystemComponent_generated_h

#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_12_DELEGATE \
struct _Script_TargetSystem_eventComponentSetRotation_Parms \
{ \
	AActor* TargetActor; \
	FRotator ControlRotation; \
}; \
static inline void FComponentSetRotation_DelegateWrapper(const FMulticastScriptDelegate& ComponentSetRotation, AActor* TargetActor, FRotator ControlRotation) \
{ \
	_Script_TargetSystem_eventComponentSetRotation_Parms Parms; \
	Parms.TargetActor=TargetActor; \
	Parms.ControlRotation=ControlRotation; \
	ComponentSetRotation.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_11_DELEGATE \
struct _Script_TargetSystem_eventComponentOnTargetLockedOnOff_Parms \
{ \
	AActor* TargetActor; \
}; \
static inline void FComponentOnTargetLockedOnOff_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnTargetLockedOnOff, AActor* TargetActor) \
{ \
	_Script_TargetSystem_eventComponentOnTargetLockedOnOff_Parms Parms; \
	Parms.TargetActor=TargetActor; \
	ComponentOnTargetLockedOnOff.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_SPARSE_DATA
#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execGetLockedOnTargetActor); \
	DECLARE_FUNCTION(execTargetActorWithAxisInput); \
	DECLARE_FUNCTION(execTargetLockOff); \
	DECLARE_FUNCTION(execTargetActor);


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execGetLockedOnTargetActor); \
	DECLARE_FUNCTION(execTargetActorWithAxisInput); \
	DECLARE_FUNCTION(execTargetLockOff); \
	DECLARE_FUNCTION(execTargetActor);


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetSystemComponent(); \
	friend struct Z_Construct_UClass_UTargetSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetSystem"), NO_API) \
	DECLARE_SERIALIZER(UTargetSystemComponent)


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTargetSystemComponent(); \
	friend struct Z_Construct_UClass_UTargetSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetSystem"), NO_API) \
	DECLARE_SERIALIZER(UTargetSystemComponent)


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetSystemComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetSystemComponent(UTargetSystemComponent&&); \
	NO_API UTargetSystemComponent(const UTargetSystemComponent&); \
public:


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetSystemComponent(UTargetSystemComponent&&); \
	NO_API UTargetSystemComponent(const UTargetSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetSystemComponent)


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterReference() { return STRUCT_OFFSET(UTargetSystemComponent, CharacterReference); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(UTargetSystemComponent, PlayerController); } \
	FORCEINLINE static uint32 __PPO__TargetLockedOnWidgetComponent() { return STRUCT_OFFSET(UTargetSystemComponent, TargetLockedOnWidgetComponent); } \
	FORCEINLINE static uint32 __PPO__LockedOnTargetActor() { return STRUCT_OFFSET(UTargetSystemComponent, LockedOnTargetActor); }


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_14_PROLOG
#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_SPARSE_DATA \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_RPC_WRAPPERS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_INCLASS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_SPARSE_DATA \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETSYSTEM_API UClass* StaticClass<class UTargetSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
