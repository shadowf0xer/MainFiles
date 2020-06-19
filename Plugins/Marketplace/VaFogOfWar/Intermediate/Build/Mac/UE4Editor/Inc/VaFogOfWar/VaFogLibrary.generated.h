// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VAFOGOFWAR_VaFogLibrary_generated_h
#error "VaFogLibrary.generated.h already included, missing '#pragma once' in VaFogLibrary.h"
#endif
#define VAFOGOFWAR_VaFogLibrary_generated_h

#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_SPARSE_DATA
#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsRHINeedsToSwitchVerticalAxis);


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsRHINeedsToSwitchVerticalAxis);


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaFogLibrary(); \
	friend struct Z_Construct_UClass_UVaFogLibrary_Statics; \
public: \
	DECLARE_CLASS(UVaFogLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaFogOfWar"), NO_API) \
	DECLARE_SERIALIZER(UVaFogLibrary)


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVaFogLibrary(); \
	friend struct Z_Construct_UClass_UVaFogLibrary_Statics; \
public: \
	DECLARE_CLASS(UVaFogLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaFogOfWar"), NO_API) \
	DECLARE_SERIALIZER(UVaFogLibrary)


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaFogLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaFogLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaFogLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaFogLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaFogLibrary(UVaFogLibrary&&); \
	NO_API UVaFogLibrary(const UVaFogLibrary&); \
public:


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaFogLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaFogLibrary(UVaFogLibrary&&); \
	NO_API UVaFogLibrary(const UVaFogLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaFogLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaFogLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaFogLibrary)


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_11_PROLOG
#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_SPARSE_DATA \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_RPC_WRAPPERS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_INCLASS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_SPARSE_DATA \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VaFogLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VAFOGOFWAR_API UClass* StaticClass<class UVaFogLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
