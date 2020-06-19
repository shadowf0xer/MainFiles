// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
enum class EDataValidationResult : uint8;
class UObject;
class UEditorValidatorBase;
#ifdef DATAVALIDATION_EditorValidatorSubsystem_generated_h
#error "EditorValidatorSubsystem.generated.h already included, missing '#pragma once' in EditorValidatorSubsystem.h"
#endif
#define DATAVALIDATION_EditorValidatorSubsystem_generated_h

#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_SPARSE_DATA
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_RPC_WRAPPERS
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataValidationSettings(); \
	friend struct Z_Construct_UClass_UDataValidationSettings_Statics; \
public: \
	DECLARE_CLASS(UDataValidationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UDataValidationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUDataValidationSettings(); \
	friend struct Z_Construct_UClass_UDataValidationSettings_Statics; \
public: \
	DECLARE_CLASS(UDataValidationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UDataValidationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataValidationSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataValidationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataValidationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataValidationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataValidationSettings(UDataValidationSettings&&); \
	NO_API UDataValidationSettings(const UDataValidationSettings&); \
public:


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataValidationSettings(UDataValidationSettings&&); \
	NO_API UDataValidationSettings(const UDataValidationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataValidationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataValidationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataValidationSettings)


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_26_PROLOG
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_SPARSE_DATA \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_RPC_WRAPPERS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_INCLASS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_SPARSE_DATA \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UDataValidationSettings>();

#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_SPARSE_DATA
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execValidateAssets); \
	DECLARE_FUNCTION(execIsAssetValid); \
	DECLARE_FUNCTION(execIsObjectValid); \
	DECLARE_FUNCTION(execAddValidator);


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execValidateAssets); \
	DECLARE_FUNCTION(execIsAssetValid); \
	DECLARE_FUNCTION(execIsObjectValid); \
	DECLARE_FUNCTION(execAddValidator);


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidatorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorValidatorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUEditorValidatorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorValidatorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorValidatorSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorValidatorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorValidatorSubsystem(UEditorValidatorSubsystem&&); \
	NO_API UEditorValidatorSubsystem(const UEditorValidatorSubsystem&); \
public:


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorValidatorSubsystem(UEditorValidatorSubsystem&&); \
	NO_API UEditorValidatorSubsystem(const UEditorValidatorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorValidatorSubsystem)


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExcludedDirectories() { return STRUCT_OFFSET(UEditorValidatorSubsystem, ExcludedDirectories); } \
	FORCEINLINE static uint32 __PPO__bValidateOnSave() { return STRUCT_OFFSET(UEditorValidatorSubsystem, bValidateOnSave); } \
	FORCEINLINE static uint32 __PPO__Validators() { return STRUCT_OFFSET(UEditorValidatorSubsystem, Validators); } \
	FORCEINLINE static uint32 __PPO__bValidateAssetsWhileSavingForCook() { return STRUCT_OFFSET(UEditorValidatorSubsystem, bValidateAssetsWhileSavingForCook); } \
	FORCEINLINE static uint32 __PPO__bAllowBlueprintValidators() { return STRUCT_OFFSET(UEditorValidatorSubsystem, bAllowBlueprintValidators); }


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_49_PROLOG
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_SPARSE_DATA \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_RPC_WRAPPERS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_INCLASS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_SPARSE_DATA \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UEditorValidatorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
