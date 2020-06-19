// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef VAFOGOFWAR_VaFogLayer_generated_h
#error "VaFogLayer.generated.h already included, missing '#pragma once' in VaFogLayer.h"
#endif
#define VAFOGOFWAR_VaFogLayer_generated_h

#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_SPARSE_DATA
#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLocationRevealed);


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLocationRevealed);


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVaFogLayer(); \
	friend struct Z_Construct_UClass_AVaFogLayer_Statics; \
public: \
	DECLARE_CLASS(AVaFogLayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VaFogOfWar"), NO_API) \
	DECLARE_SERIALIZER(AVaFogLayer)


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_INCLASS \
private: \
	static void StaticRegisterNativesAVaFogLayer(); \
	friend struct Z_Construct_UClass_AVaFogLayer_Statics; \
public: \
	DECLARE_CLASS(AVaFogLayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VaFogOfWar"), NO_API) \
	DECLARE_SERIALIZER(AVaFogLayer)


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVaFogLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVaFogLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVaFogLayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVaFogLayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVaFogLayer(AVaFogLayer&&); \
	NO_API AVaFogLayer(const AVaFogLayer&); \
public:


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVaFogLayer(AVaFogLayer&&); \
	NO_API AVaFogLayer(const AVaFogLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVaFogLayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVaFogLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVaFogLayer)


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FogAgents() { return STRUCT_OFFSET(AVaFogLayer, FogAgents); } \
	FORCEINLINE static uint32 __PPO__bDebugAgents() { return STRUCT_OFFSET(AVaFogLayer, bDebugAgents); } \
	FORCEINLINE static uint32 __PPO__DebugAgentsColor() { return STRUCT_OFFSET(AVaFogLayer, DebugAgentsColor); } \
	FORCEINLINE static uint32 __PPO__bDebugBuffers() { return STRUCT_OFFSET(AVaFogLayer, bDebugBuffers); }


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_82_PROLOG
#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_SPARSE_DATA \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_RPC_WRAPPERS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_INCLASS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_SPARSE_DATA \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VAFOGOFWAR_API UClass* StaticClass<class AVaFogLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VaFogOfWar_Source_VaFogOfWar_Public_VaFogLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
