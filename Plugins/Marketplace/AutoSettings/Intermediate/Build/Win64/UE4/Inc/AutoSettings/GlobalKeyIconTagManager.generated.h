// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
struct FGameplayTagContainer;
class UTexture;
#ifdef AUTOSETTINGS_GlobalKeyIconTagManager_generated_h
#error "GlobalKeyIconTagManager.generated.h already included, missing '#pragma once' in GlobalKeyIconTagManager.h"
#endif
#define AUTOSETTINGS_GlobalKeyIconTagManager_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_9_DELEGATE \
static inline void FGlobalKeyIconTagsModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& GlobalKeyIconTagsModifiedEvent) \
{ \
	GlobalKeyIconTagsModifiedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIconForKey); \
	DECLARE_FUNCTION(execSetGlobalKeyIconTags);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIconForKey); \
	DECLARE_FUNCTION(execSetGlobalKeyIconTags);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGlobalKeyIconTagManager(); \
	friend struct Z_Construct_UClass_UGlobalKeyIconTagManager_Statics; \
public: \
	DECLARE_CLASS(UGlobalKeyIconTagManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UGlobalKeyIconTagManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGlobalKeyIconTagManager(); \
	friend struct Z_Construct_UClass_UGlobalKeyIconTagManager_Statics; \
public: \
	DECLARE_CLASS(UGlobalKeyIconTagManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UGlobalKeyIconTagManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlobalKeyIconTagManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlobalKeyIconTagManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalKeyIconTagManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalKeyIconTagManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGlobalKeyIconTagManager(UGlobalKeyIconTagManager&&); \
	NO_API UGlobalKeyIconTagManager(const UGlobalKeyIconTagManager&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlobalKeyIconTagManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGlobalKeyIconTagManager(UGlobalKeyIconTagManager&&); \
	NO_API UGlobalKeyIconTagManager(const UGlobalKeyIconTagManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalKeyIconTagManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalKeyIconTagManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlobalKeyIconTagManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GlobalKeyIconTags() { return STRUCT_OFFSET(UGlobalKeyIconTagManager, GlobalKeyIconTags); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_15_PROLOG
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UGlobalKeyIconTagManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_GlobalKeyIconTagManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
