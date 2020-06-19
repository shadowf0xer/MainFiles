// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FIntPoint;
#ifdef VAFOGOFWAR_VaFogBoundsVolume_generated_h
#error "VaFogBoundsVolume.generated.h already included, missing '#pragma once' in VaFogBoundsVolume.h"
#endif
#define VAFOGOFWAR_VaFogBoundsVolume_generated_h

#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_SPARSE_DATA
#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execScaleDistanceToLayer); \
	DECLARE_FUNCTION(execTransformWorldToLayer); \
	DECLARE_FUNCTION(execGetCellExtent); \
	DECLARE_FUNCTION(execUpdateVolumeTransform);


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScaleDistanceToLayer); \
	DECLARE_FUNCTION(execTransformWorldToLayer); \
	DECLARE_FUNCTION(execGetCellExtent); \
	DECLARE_FUNCTION(execUpdateVolumeTransform);


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVaFogBoundsVolume(); \
	friend struct Z_Construct_UClass_AVaFogBoundsVolume_Statics; \
public: \
	DECLARE_CLASS(AVaFogBoundsVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VaFogOfWar"), NO_API) \
	DECLARE_SERIALIZER(AVaFogBoundsVolume)


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAVaFogBoundsVolume(); \
	friend struct Z_Construct_UClass_AVaFogBoundsVolume_Statics; \
public: \
	DECLARE_CLASS(AVaFogBoundsVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VaFogOfWar"), NO_API) \
	DECLARE_SERIALIZER(AVaFogBoundsVolume)


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVaFogBoundsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVaFogBoundsVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVaFogBoundsVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVaFogBoundsVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVaFogBoundsVolume(AVaFogBoundsVolume&&); \
	NO_API AVaFogBoundsVolume(const AVaFogBoundsVolume&); \
public:


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVaFogBoundsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVaFogBoundsVolume(AVaFogBoundsVolume&&); \
	NO_API AVaFogBoundsVolume(const AVaFogBoundsVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVaFogBoundsVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVaFogBoundsVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVaFogBoundsVolume)


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDebugVolume() { return STRUCT_OFFSET(AVaFogBoundsVolume, bDebugVolume); } \
	FORCEINLINE static uint32 __PPO__DebugTime() { return STRUCT_OFFSET(AVaFogBoundsVolume, DebugTime); }


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_10_PROLOG
#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_SPARSE_DATA \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_RPC_WRAPPERS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_INCLASS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_SPARSE_DATA \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VaFogBoundsVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VAFOGOFWAR_API UClass* StaticClass<class AVaFogBoundsVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogBoundsVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
