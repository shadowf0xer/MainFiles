// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAVALIDATION_DataValidationManager_generated_h
#error "DataValidationManager.generated.h already included, missing '#pragma once' in DataValidationManager.h"
#endif
#define DATAVALIDATION_DataValidationManager_generated_h

#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_SPARSE_DATA
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_RPC_WRAPPERS
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_DataValidationManager(); \
	friend struct Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_DataValidationManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_DataValidationManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_DataValidationManager(); \
	friend struct Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_DataValidationManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_DataValidationManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_DataValidationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_DataValidationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_DataValidationManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_DataValidationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_DataValidationManager(UDEPRECATED_DataValidationManager&&); \
	NO_API UDEPRECATED_DataValidationManager(const UDEPRECATED_DataValidationManager&); \
public:


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_DataValidationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_DataValidationManager(UDEPRECATED_DataValidationManager&&); \
	NO_API UDEPRECATED_DataValidationManager(const UDEPRECATED_DataValidationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_DataValidationManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_DataValidationManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_DataValidationManager)


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExcludedDirectories() { return STRUCT_OFFSET(UDEPRECATED_DataValidationManager, ExcludedDirectories); } \
	FORCEINLINE static uint32 __PPO__bValidateOnSave() { return STRUCT_OFFSET(UDEPRECATED_DataValidationManager, bValidateOnSave); } \
	FORCEINLINE static uint32 __PPO__DataValidationManagerClassName() { return STRUCT_OFFSET(UDEPRECATED_DataValidationManager, DataValidationManagerClassName); }


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_21_PROLOG
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_SPARSE_DATA \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_RPC_WRAPPERS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_INCLASS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_SPARSE_DATA \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataValidationManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UDEPRECATED_DataValidationManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
