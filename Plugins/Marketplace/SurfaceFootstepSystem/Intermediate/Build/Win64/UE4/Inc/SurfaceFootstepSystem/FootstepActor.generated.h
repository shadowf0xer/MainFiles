// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURFACEFOOTSTEPSYSTEM_FootstepActor_generated_h
#error "FootstepActor.generated.h already included, missing '#pragma once' in FootstepActor.h"
#endif
#define SURFACEFOOTSTEPSYSTEM_FootstepActor_generated_h

#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_SPARSE_DATA
#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_RPC_WRAPPERS
#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFootstepActor(); \
	friend struct Z_Construct_UClass_AFootstepActor_Statics; \
public: \
	DECLARE_CLASS(AFootstepActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurfaceFootstepSystem"), NO_API) \
	DECLARE_SERIALIZER(AFootstepActor)


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFootstepActor(); \
	friend struct Z_Construct_UClass_AFootstepActor_Statics; \
public: \
	DECLARE_CLASS(AFootstepActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurfaceFootstepSystem"), NO_API) \
	DECLARE_SERIALIZER(AFootstepActor)


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFootstepActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFootstepActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFootstepActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFootstepActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFootstepActor(AFootstepActor&&); \
	NO_API AFootstepActor(const AFootstepActor&); \
public:


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFootstepActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFootstepActor(AFootstepActor&&); \
	NO_API AFootstepActor(const AFootstepActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFootstepActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFootstepActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFootstepActor)


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(AFootstepActor, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__ParticleComponent() { return STRUCT_OFFSET(AFootstepActor, ParticleComponent); } \
	FORCEINLINE static uint32 __PPO__NiagaraComponent() { return STRUCT_OFFSET(AFootstepActor, NiagaraComponent); }


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_19_PROLOG
#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_SPARSE_DATA \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_RPC_WRAPPERS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_INCLASS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_SPARSE_DATA \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FootstepActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURFACEFOOTSTEPSYSTEM_API UClass* StaticClass<class AFootstepActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
