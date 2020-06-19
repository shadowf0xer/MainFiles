// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAPREPCORE_DataprepContentConsumer_generated_h
#error "DataprepContentConsumer.generated.h already included, missing '#pragma once' in DataprepContentConsumer.h"
#endif
#define DATAPREPCORE_DataprepContentConsumer_generated_h

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_RPC_WRAPPERS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepConsumerUserData(); \
	friend struct Z_Construct_UClass_UDataprepConsumerUserData_Statics; \
public: \
	DECLARE_CLASS(UDataprepConsumerUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepConsumerUserData)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepConsumerUserData(); \
	friend struct Z_Construct_UClass_UDataprepConsumerUserData_Statics; \
public: \
	DECLARE_CLASS(UDataprepConsumerUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepConsumerUserData)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepConsumerUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepConsumerUserData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepConsumerUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepConsumerUserData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepConsumerUserData(UDataprepConsumerUserData&&); \
	NO_API UDataprepConsumerUserData(const UDataprepConsumerUserData&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepConsumerUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepConsumerUserData(UDataprepConsumerUserData&&); \
	NO_API UDataprepConsumerUserData(const UDataprepConsumerUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepConsumerUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepConsumerUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepConsumerUserData)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Markers() { return STRUCT_OFFSET(UDataprepConsumerUserData, Markers); }


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_19_PROLOG
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepConsumerUserData>();

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTargetContentFolder); \
	DECLARE_FUNCTION(execSetTargetContentFolderAutomated); \
	DECLARE_FUNCTION(execSetTargetContentFolder); \
	DECLARE_FUNCTION(execGetLevelName); \
	DECLARE_FUNCTION(execSetLevelNameAutomated); \
	DECLARE_FUNCTION(execSetLevelName);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTargetContentFolder); \
	DECLARE_FUNCTION(execSetTargetContentFolderAutomated); \
	DECLARE_FUNCTION(execSetTargetContentFolder); \
	DECLARE_FUNCTION(execGetLevelName); \
	DECLARE_FUNCTION(execSetLevelNameAutomated); \
	DECLARE_FUNCTION(execSetLevelName);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepContentConsumer(); \
	friend struct Z_Construct_UClass_UDataprepContentConsumer_Statics; \
public: \
	DECLARE_CLASS(UDataprepContentConsumer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepContentConsumer) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepContentConsumer(); \
	friend struct Z_Construct_UClass_UDataprepContentConsumer_Statics; \
public: \
	DECLARE_CLASS(UDataprepContentConsumer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepContentConsumer) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepContentConsumer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepContentConsumer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepContentConsumer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepContentConsumer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepContentConsumer(UDataprepContentConsumer&&); \
	NO_API UDataprepContentConsumer(const UDataprepContentConsumer&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepContentConsumer(UDataprepContentConsumer&&); \
	NO_API UDataprepContentConsumer(const UDataprepContentConsumer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepContentConsumer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepContentConsumer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataprepContentConsumer)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetContentFolder() { return STRUCT_OFFSET(UDataprepContentConsumer, TargetContentFolder); } \
	FORCEINLINE static uint32 __PPO__LevelName() { return STRUCT_OFFSET(UDataprepContentConsumer, LevelName); }


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_106_PROLOG
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepContentConsumer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
