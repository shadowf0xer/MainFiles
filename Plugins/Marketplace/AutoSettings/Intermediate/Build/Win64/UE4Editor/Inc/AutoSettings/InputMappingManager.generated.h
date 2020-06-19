// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AActor;
struct FInputAxisKeyMapping;
struct FInputActionKeyMapping;
struct FGameplayTag;
struct FInputMappingPreset;
struct FPlayerInputMappings;
#ifdef AUTOSETTINGS_InputMappingManager_generated_h
#error "InputMappingManager.generated.h already included, missing '#pragma once' in InputMappingManager.h"
#endif
#define AUTOSETTINGS_InputMappingManager_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_10_DELEGATE \
struct _Script_AutoSettings_eventMappingsChangedEvent_Parms \
{ \
	APlayerController* Player; \
}; \
static inline void FMappingsChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& MappingsChangedEvent, APlayerController* Player) \
{ \
	_Script_AutoSettings_eventMappingsChangedEvent_Parms Parms; \
	Parms.Player=Player; \
	MappingsChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRegisteredPlayerControllerDestroyed); \
	DECLARE_FUNCTION(execAddPlayerAxisOverride); \
	DECLARE_FUNCTION(execAddPlayerActionOverride); \
	DECLARE_FUNCTION(execGetPlayerAxisMappingStatic); \
	DECLARE_FUNCTION(execGetPlayerActionMappingStatic); \
	DECLARE_FUNCTION(execInitializePlayerInputOverridesStatic); \
	DECLARE_FUNCTION(execAddPlayerAxisOverrideStatic); \
	DECLARE_FUNCTION(execAddPlayerActionOverrideStatic); \
	DECLARE_FUNCTION(execSetPlayerKeyGroupStatic); \
	DECLARE_FUNCTION(execSetPlayerInputPresetByTag); \
	DECLARE_FUNCTION(execSetPlayerInputPresetStatic); \
	DECLARE_FUNCTION(execGetPlayerInputMappingsStatic); \
	DECLARE_FUNCTION(execGetDefaultInputPresets);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRegisteredPlayerControllerDestroyed); \
	DECLARE_FUNCTION(execAddPlayerAxisOverride); \
	DECLARE_FUNCTION(execAddPlayerActionOverride); \
	DECLARE_FUNCTION(execGetPlayerAxisMappingStatic); \
	DECLARE_FUNCTION(execGetPlayerActionMappingStatic); \
	DECLARE_FUNCTION(execInitializePlayerInputOverridesStatic); \
	DECLARE_FUNCTION(execAddPlayerAxisOverrideStatic); \
	DECLARE_FUNCTION(execAddPlayerActionOverrideStatic); \
	DECLARE_FUNCTION(execSetPlayerKeyGroupStatic); \
	DECLARE_FUNCTION(execSetPlayerInputPresetByTag); \
	DECLARE_FUNCTION(execSetPlayerInputPresetStatic); \
	DECLARE_FUNCTION(execGetPlayerInputMappingsStatic); \
	DECLARE_FUNCTION(execGetDefaultInputPresets);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputMappingManager(); \
	friend struct Z_Construct_UClass_UInputMappingManager_Statics; \
public: \
	DECLARE_CLASS(UInputMappingManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UInputMappingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInputMappingManager(); \
	friend struct Z_Construct_UClass_UInputMappingManager_Statics; \
public: \
	DECLARE_CLASS(UInputMappingManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UInputMappingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputMappingManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputMappingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputMappingManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMappingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputMappingManager(UInputMappingManager&&); \
	NO_API UInputMappingManager(const UInputMappingManager&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputMappingManager(UInputMappingManager&&); \
	NO_API UInputMappingManager(const UInputMappingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputMappingManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMappingManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputMappingManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerInputOverrides() { return STRUCT_OFFSET(UInputMappingManager, PlayerInputOverrides); } \
	FORCEINLINE static uint32 __PPO__RegisteredPlayerControllers() { return STRUCT_OFFSET(UInputMappingManager, RegisteredPlayerControllers); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_15_PROLOG
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UInputMappingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_InputMappingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
