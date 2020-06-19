// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
 class UMaterialInterface;
struct FBodyInstance;
#ifdef VOXEL_VoxelSpawnerActor_generated_h
#error "VoxelSpawnerActor.generated.h already included, missing '#pragma once' in VoxelSpawnerActor.h"
#endif
#define VOXEL_VoxelSpawnerActor_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_RPC_WRAPPERS \
	virtual void SetInstanceRandom_Implementation(float Value); \
	virtual void SetStaticMesh_Implementation(UStaticMesh* Mesh, TMap<int32,UMaterialInterface*> const& SectionsMaterials, FBodyInstance const& CollisionPresets); \
 \
	DECLARE_FUNCTION(execSetInstanceRandom); \
	DECLARE_FUNCTION(execSetStaticMesh);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInstanceRandom); \
	DECLARE_FUNCTION(execSetStaticMesh);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_EVENT_PARMS \
	struct VoxelSpawnerActor_eventSetInstanceRandom_Parms \
	{ \
		float Value; \
	}; \
	struct VoxelSpawnerActor_eventSetStaticMesh_Parms \
	{ \
		UStaticMesh* Mesh; \
		TMap<int32,UMaterialInterface*> SectionsMaterials; \
		FBodyInstance CollisionPresets; \
	};


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_CALLBACK_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelSpawnerActor(); \
	friend struct Z_Construct_UClass_AVoxelSpawnerActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelSpawnerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelSpawnerActor)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelSpawnerActor(); \
	friend struct Z_Construct_UClass_AVoxelSpawnerActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelSpawnerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelSpawnerActor)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelSpawnerActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelSpawnerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelSpawnerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelSpawnerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelSpawnerActor(AVoxelSpawnerActor&&); \
	NO_API AVoxelSpawnerActor(const AVoxelSpawnerActor&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelSpawnerActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelSpawnerActor(AVoxelSpawnerActor&&); \
	NO_API AVoxelSpawnerActor(const AVoxelSpawnerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelSpawnerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelSpawnerActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelSpawnerActor)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_15_PROLOG \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_EVENT_PARMS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelSpawnerActor>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelMeshSpawnerActor(); \
	friend struct Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelMeshSpawnerActor, AVoxelSpawnerActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelMeshSpawnerActor)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelMeshSpawnerActor(); \
	friend struct Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelMeshSpawnerActor, AVoxelSpawnerActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelMeshSpawnerActor)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelMeshSpawnerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelMeshSpawnerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshSpawnerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshSpawnerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelMeshSpawnerActor(AVoxelMeshSpawnerActor&&); \
	NO_API AVoxelMeshSpawnerActor(const AVoxelMeshSpawnerActor&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelMeshSpawnerActor(AVoxelMeshSpawnerActor&&); \
	NO_API AVoxelMeshSpawnerActor(const AVoxelMeshSpawnerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshSpawnerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshSpawnerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelMeshSpawnerActor)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_32_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelMeshSpawnerActor>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelMeshWithPhysicsRelevancySpawnerActor(); \
	friend struct Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelMeshWithPhysicsRelevancySpawnerActor, AVoxelMeshSpawnerActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelMeshWithPhysicsRelevancySpawnerActor)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelMeshWithPhysicsRelevancySpawnerActor(); \
	friend struct Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelMeshWithPhysicsRelevancySpawnerActor, AVoxelMeshSpawnerActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelMeshWithPhysicsRelevancySpawnerActor)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelMeshWithPhysicsRelevancySpawnerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelMeshWithPhysicsRelevancySpawnerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshWithPhysicsRelevancySpawnerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshWithPhysicsRelevancySpawnerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelMeshWithPhysicsRelevancySpawnerActor(AVoxelMeshWithPhysicsRelevancySpawnerActor&&); \
	NO_API AVoxelMeshWithPhysicsRelevancySpawnerActor(const AVoxelMeshWithPhysicsRelevancySpawnerActor&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelMeshWithPhysicsRelevancySpawnerActor(AVoxelMeshWithPhysicsRelevancySpawnerActor&&); \
	NO_API AVoxelMeshWithPhysicsRelevancySpawnerActor(const AVoxelMeshWithPhysicsRelevancySpawnerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshWithPhysicsRelevancySpawnerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshWithPhysicsRelevancySpawnerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelMeshWithPhysicsRelevancySpawnerActor)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_48_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelMeshWithPhysicsRelevancySpawnerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
