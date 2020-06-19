// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef EASYMULTISAVE_EMSObject_generated_h
#error "EMSObject.generated.h already included, missing '#pragma once' in EMSObject.h"
#endif
#define EASYMULTISAVE_EMSObject_generated_h

#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_SPARSE_DATA
#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOuterActorEndPlay);


#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOuterActorEndPlay);


#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSObject(); \
	friend struct Z_Construct_UClass_UEMSObject_Statics; \
public: \
	DECLARE_CLASS(UEMSObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), NO_API) \
	DECLARE_SERIALIZER(UEMSObject) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUEMSObject(); \
	friend struct Z_Construct_UClass_UEMSObject_Statics; \
public: \
	DECLARE_CLASS(UEMSObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), NO_API) \
	DECLARE_SERIALIZER(UEMSObject) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEMSObject(UEMSObject&&); \
	NO_API UEMSObject(const UEMSObject&); \
public:


#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEMSObject(UEMSObject&&); \
	NO_API UEMSObject(const UEMSObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSObject)


#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_29_PROLOG
#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_SPARSE_DATA \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_RPC_WRAPPERS \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_INCLASS \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_SPARSE_DATA \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYMULTISAVE_API UClass* StaticClass<class UEMSObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
