// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinterNamingConventionInfo;
#ifdef LINTER_LinterNamingConvention_generated_h
#error "LinterNamingConvention.generated.h already included, missing '#pragma once' in LinterNamingConvention.h"
#endif
#define LINTER_LinterNamingConvention_generated_h

#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LINTER_API UScriptStruct* StaticStruct<struct FLinterNamingConventionInfo>();

#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_SPARSE_DATA
#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSortConventions); \
	DECLARE_FUNCTION(execGetNamingConventionsForClassVariant);


#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSortConventions); \
	DECLARE_FUNCTION(execGetNamingConventionsForClassVariant);


#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinterNamingConvention(); \
	friend struct Z_Construct_UClass_ULinterNamingConvention_Statics; \
public: \
	DECLARE_CLASS(ULinterNamingConvention, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Linter"), NO_API) \
	DECLARE_SERIALIZER(ULinterNamingConvention)


#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_INCLASS \
private: \
	static void StaticRegisterNativesULinterNamingConvention(); \
	friend struct Z_Construct_UClass_ULinterNamingConvention_Statics; \
public: \
	DECLARE_CLASS(ULinterNamingConvention, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Linter"), NO_API) \
	DECLARE_SERIALIZER(ULinterNamingConvention)


#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinterNamingConvention(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinterNamingConvention) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinterNamingConvention); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinterNamingConvention); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinterNamingConvention(ULinterNamingConvention&&); \
	NO_API ULinterNamingConvention(const ULinterNamingConvention&); \
public:


#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinterNamingConvention(ULinterNamingConvention&&); \
	NO_API ULinterNamingConvention(const ULinterNamingConvention&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinterNamingConvention); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinterNamingConvention); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinterNamingConvention)


#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_59_PROLOG
#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_SPARSE_DATA \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_RPC_WRAPPERS \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_INCLASS \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_SPARSE_DATA \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINTER_API UClass* StaticClass<class ULinterNamingConvention>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Linter_Source_Linter_Public_LinterNamingConvention_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
