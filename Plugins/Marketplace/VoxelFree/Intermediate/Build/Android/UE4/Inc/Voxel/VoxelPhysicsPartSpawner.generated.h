// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
#ifdef VOXEL_VoxelPhysicsPartSpawner_generated_h
#error "VoxelPhysicsPartSpawner.generated.h already included, missing '#pragma once' in VoxelPhysicsPartSpawner.h"
#endif
#define VOXEL_VoxelPhysicsPartSpawner_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_39_DELEGATE \
struct VoxelPhysicsPartSpawner_VoxelWorlds_eventConfigureVoxelWorld_Parms \
{ \
	AVoxelWorld* VoxelWorld; \
}; \
static inline void FConfigureVoxelWorld_DelegateWrapper(const FScriptDelegate& ConfigureVoxelWorld, AVoxelWorld* VoxelWorld) \
{ \
	VoxelPhysicsPartSpawner_VoxelWorlds_eventConfigureVoxelWorld_Parms Parms; \
	Parms.VoxelWorld=VoxelWorld; \
	ConfigureVoxelWorld.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_VoxelWorlds(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawnerResult_VoxelWorlds, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawnerResult_VoxelWorlds) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawnerResult_VoxelWorlds*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_VoxelWorlds(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawnerResult_VoxelWorlds, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawnerResult_VoxelWorlds) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawnerResult_VoxelWorlds*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawnerResult_VoxelWorlds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawnerResult_VoxelWorlds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawnerResult_VoxelWorlds); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawnerResult_VoxelWorlds); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawnerResult_VoxelWorlds(UVoxelPhysicsPartSpawnerResult_VoxelWorlds&&); \
	NO_API UVoxelPhysicsPartSpawnerResult_VoxelWorlds(const UVoxelPhysicsPartSpawnerResult_VoxelWorlds&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawnerResult_VoxelWorlds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawnerResult_VoxelWorlds(UVoxelPhysicsPartSpawnerResult_VoxelWorlds&&); \
	NO_API UVoxelPhysicsPartSpawnerResult_VoxelWorlds(const UVoxelPhysicsPartSpawnerResult_VoxelWorlds&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawnerResult_VoxelWorlds); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawnerResult_VoxelWorlds); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawnerResult_VoxelWorlds)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_17_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelPhysicsPartSpawnerResult_VoxelWorlds>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawner_VoxelWorlds(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawner_VoxelWorlds, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawner_VoxelWorlds) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawner_VoxelWorlds*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawner_VoxelWorlds(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawner_VoxelWorlds, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawner_VoxelWorlds) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawner_VoxelWorlds*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawner_VoxelWorlds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawner_VoxelWorlds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawner_VoxelWorlds); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawner_VoxelWorlds); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawner_VoxelWorlds(UVoxelPhysicsPartSpawner_VoxelWorlds&&); \
	NO_API UVoxelPhysicsPartSpawner_VoxelWorlds(const UVoxelPhysicsPartSpawner_VoxelWorlds&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawner_VoxelWorlds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawner_VoxelWorlds(UVoxelPhysicsPartSpawner_VoxelWorlds&&); \
	NO_API UVoxelPhysicsPartSpawner_VoxelWorlds(const UVoxelPhysicsPartSpawner_VoxelWorlds&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawner_VoxelWorlds); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawner_VoxelWorlds); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawner_VoxelWorlds)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_33_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelPhysicsPartSpawner_VoxelWorlds>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_Cubes(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawnerResult_Cubes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawnerResult_Cubes) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawnerResult_Cubes*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_Cubes(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawnerResult_Cubes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawnerResult_Cubes) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawnerResult_Cubes*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawnerResult_Cubes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawnerResult_Cubes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawnerResult_Cubes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawnerResult_Cubes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawnerResult_Cubes(UVoxelPhysicsPartSpawnerResult_Cubes&&); \
	NO_API UVoxelPhysicsPartSpawnerResult_Cubes(const UVoxelPhysicsPartSpawnerResult_Cubes&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawnerResult_Cubes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawnerResult_Cubes(UVoxelPhysicsPartSpawnerResult_Cubes&&); \
	NO_API UVoxelPhysicsPartSpawnerResult_Cubes(const UVoxelPhysicsPartSpawnerResult_Cubes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawnerResult_Cubes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawnerResult_Cubes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawnerResult_Cubes)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_52_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelPhysicsPartSpawnerResult_Cubes>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawner_Cubes(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawner_Cubes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawner_Cubes) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawner_Cubes*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawner_Cubes(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawner_Cubes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawner_Cubes) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawner_Cubes*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawner_Cubes(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawner_Cubes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawner_Cubes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawner_Cubes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawner_Cubes(UVoxelPhysicsPartSpawner_Cubes&&); \
	NO_API UVoxelPhysicsPartSpawner_Cubes(const UVoxelPhysicsPartSpawner_Cubes&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawner_Cubes(UVoxelPhysicsPartSpawner_Cubes&&); \
	NO_API UVoxelPhysicsPartSpawner_Cubes(const UVoxelPhysicsPartSpawner_Cubes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawner_Cubes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawner_Cubes); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawner_Cubes)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_66_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelPhysicsPartSpawner_Cubes>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_GetVoxels(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawnerResult_GetVoxels, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawnerResult_GetVoxels) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawnerResult_GetVoxels*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_GetVoxels(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawnerResult_GetVoxels, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawnerResult_GetVoxels) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawnerResult_GetVoxels*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawnerResult_GetVoxels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawnerResult_GetVoxels) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawnerResult_GetVoxels); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawnerResult_GetVoxels); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawnerResult_GetVoxels(UVoxelPhysicsPartSpawnerResult_GetVoxels&&); \
	NO_API UVoxelPhysicsPartSpawnerResult_GetVoxels(const UVoxelPhysicsPartSpawnerResult_GetVoxels&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawnerResult_GetVoxels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawnerResult_GetVoxels(UVoxelPhysicsPartSpawnerResult_GetVoxels&&); \
	NO_API UVoxelPhysicsPartSpawnerResult_GetVoxels(const UVoxelPhysicsPartSpawnerResult_GetVoxels&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawnerResult_GetVoxels); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawnerResult_GetVoxels); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawnerResult_GetVoxels)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_89_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelPhysicsPartSpawnerResult_GetVoxels>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawner_GetVoxels(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawner_GetVoxels, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawner_GetVoxels) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawner_GetVoxels*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsPartSpawner_GetVoxels(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics; \
public: \
	DECLARE_CLASS(UVoxelPhysicsPartSpawner_GetVoxels, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelPhysicsPartSpawner_GetVoxels) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelPhysicsPartSpawner_GetVoxels*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawner_GetVoxels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawner_GetVoxels) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawner_GetVoxels); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawner_GetVoxels); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawner_GetVoxels(UVoxelPhysicsPartSpawner_GetVoxels&&); \
	NO_API UVoxelPhysicsPartSpawner_GetVoxels(const UVoxelPhysicsPartSpawner_GetVoxels&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsPartSpawner_GetVoxels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelPhysicsPartSpawner_GetVoxels(UVoxelPhysicsPartSpawner_GetVoxels&&); \
	NO_API UVoxelPhysicsPartSpawner_GetVoxels(const UVoxelPhysicsPartSpawner_GetVoxels&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsPartSpawner_GetVoxels); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsPartSpawner_GetVoxels); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsPartSpawner_GetVoxels)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_101_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelPhysicsPartSpawner_GetVoxels>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
