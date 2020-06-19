// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerInputMappings;
struct FInputMappingPreset;
#ifdef AUTOSETTINGS_AutoSettingsPlayer_generated_h
#error "AutoSettingsPlayer.generated.h already included, missing '#pragma once' in AutoSettingsPlayer.h"
#endif
#define AUTOSETTINGS_AutoSettingsPlayer_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_RPC_WRAPPERS \
	virtual void SaveInputMappings_Implementation(FPlayerInputMappings InputMappings) {}; \
	virtual bool GetInputMappings_Implementation(FPlayerInputMappings& InputMappings) const { return false; }; \
	virtual FInputMappingPreset GetDefaultInputMappingPreset_Implementation() const { return FInputMappingPreset(); }; \
	virtual FString GetUniquePlayerIdentifier_Implementation() const { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execSaveInputMappings); \
	DECLARE_FUNCTION(execGetInputMappings); \
	DECLARE_FUNCTION(execGetDefaultInputMappingPreset); \
	DECLARE_FUNCTION(execGetUniquePlayerIdentifier);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveInputMappings); \
	DECLARE_FUNCTION(execGetInputMappings); \
	DECLARE_FUNCTION(execGetDefaultInputMappingPreset); \
	DECLARE_FUNCTION(execGetUniquePlayerIdentifier);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_EVENT_PARMS \
	struct AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms \
	{ \
		FInputMappingPreset ReturnValue; \
	}; \
	struct AutoSettingsPlayer_eventGetInputMappings_Parms \
	{ \
		FPlayerInputMappings InputMappings; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AutoSettingsPlayer_eventGetInputMappings_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct AutoSettingsPlayer_eventSaveInputMappings_Parms \
	{ \
		FPlayerInputMappings InputMappings; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOSETTINGS_API UAutoSettingsPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSettingsPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOSETTINGS_API, UAutoSettingsPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSettingsPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUTOSETTINGS_API UAutoSettingsPlayer(UAutoSettingsPlayer&&); \
	AUTOSETTINGS_API UAutoSettingsPlayer(const UAutoSettingsPlayer&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOSETTINGS_API UAutoSettingsPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUTOSETTINGS_API UAutoSettingsPlayer(UAutoSettingsPlayer&&); \
	AUTOSETTINGS_API UAutoSettingsPlayer(const UAutoSettingsPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOSETTINGS_API, UAutoSettingsPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSettingsPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSettingsPlayer)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAutoSettingsPlayer(); \
	friend struct Z_Construct_UClass_UAutoSettingsPlayer_Statics; \
public: \
	DECLARE_CLASS(UAutoSettingsPlayer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AutoSettings"), AUTOSETTINGS_API) \
	DECLARE_SERIALIZER(UAutoSettingsPlayer)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAutoSettingsPlayer() {} \
public: \
	typedef UAutoSettingsPlayer UClassType; \
	typedef IAutoSettingsPlayer ThisClass; \
	static FInputMappingPreset Execute_GetDefaultInputMappingPreset(const UObject* O); \
	static bool Execute_GetInputMappings(const UObject* O, FPlayerInputMappings& InputMappings); \
	static FString Execute_GetUniquePlayerIdentifier(const UObject* O); \
	static void Execute_SaveInputMappings(UObject* O, FPlayerInputMappings InputMappings); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IAutoSettingsPlayer() {} \
public: \
	typedef UAutoSettingsPlayer UClassType; \
	typedef IAutoSettingsPlayer ThisClass; \
	static FInputMappingPreset Execute_GetDefaultInputMappingPreset(const UObject* O); \
	static bool Execute_GetInputMappings(const UObject* O, FPlayerInputMappings& InputMappings); \
	static FString Execute_GetUniquePlayerIdentifier(const UObject* O); \
	static void Execute_SaveInputMappings(UObject* O, FPlayerInputMappings InputMappings); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_11_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UAutoSettingsPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
