// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FComponentClassFilter;
struct FActorClassFilter;
#ifdef SAVEEXTENSION_SavePreset_generated_h
#error "SavePreset.generated.h already included, missing '#pragma once' in SavePreset.h"
#endif
#define SAVEEXTENSION_SavePreset_generated_h

#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_SPARSE_DATA
#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetComponentFilter); \
	DECLARE_FUNCTION(execGetActorFilter);


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetComponentFilter); \
	DECLARE_FUNCTION(execGetActorFilter);


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSavePreset(); \
	friend struct Z_Construct_UClass_USavePreset_Statics; \
public: \
	DECLARE_CLASS(USavePreset, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USavePreset) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUSavePreset(); \
	friend struct Z_Construct_UClass_USavePreset_Statics; \
public: \
	DECLARE_CLASS(USavePreset, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USavePreset) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USavePreset(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USavePreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USavePreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USavePreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USavePreset(USavePreset&&); \
	NO_API USavePreset(const USavePreset&); \
public:


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USavePreset(USavePreset&&); \
	NO_API USavePreset(const USavePreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USavePreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USavePreset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USavePreset)


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSaveAndLoadSublevels() { return STRUCT_OFFSET(USavePreset, bSaveAndLoadSublevels); }


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_30_PROLOG
#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_SPARSE_DATA \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_RPC_WRAPPERS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_INCLASS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_SPARSE_DATA \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEEXTENSION_API UClass* StaticClass<class USavePreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h


#define FOREACH_ENUM_ESAVEASYNCMODE(op) \
	op(ESaveASyncMode::OnlySync) \
	op(ESaveASyncMode::LoadAsync) \
	op(ESaveASyncMode::SaveAsync) \
	op(ESaveASyncMode::SaveAndLoadAsync) 

enum class ESaveASyncMode : uint8;
template<> SAVEEXTENSION_API UEnum* StaticEnum<ESaveASyncMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
