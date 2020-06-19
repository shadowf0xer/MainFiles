// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UVoxelMeshImporterInputData;
struct FTransform;
struct FVoxelMeshImporterSettingsBase;
class UVoxelDataAsset;
struct FVoxelMeshImporterSettings;
struct FVoxelMeshImporterRenderTargetCache;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UStaticMesh;
#ifdef VOXEL_VoxelMeshImporter_generated_h
#error "VoxelMeshImporter.generated.h already included, missing '#pragma once' in VoxelMeshImporter.h"
#endif
#define VOXEL_VoxelMeshImporter_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FVoxelMeshImporterSettingsBase Super;


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelMeshImporterSettings>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelMeshImporterSettingsBase>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelMeshImporterRenderTargetCache>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterInputData(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterInputData_Statics; \
public: \
	DECLARE_CLASS(UVoxelMeshImporterInputData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMeshImporterInputData)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterInputData(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterInputData_Statics; \
public: \
	DECLARE_CLASS(UVoxelMeshImporterInputData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMeshImporterInputData)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterInputData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterInputData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterInputData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterInputData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMeshImporterInputData(UVoxelMeshImporterInputData&&); \
	NO_API UVoxelMeshImporterInputData(const UVoxelMeshImporterInputData&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterInputData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMeshImporterInputData(UVoxelMeshImporterInputData&&); \
	NO_API UVoxelMeshImporterInputData(const UVoxelMeshImporterInputData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterInputData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterInputData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterInputData)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_26_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelMeshImporterInputData>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertMeshToVoxels_NoMaterials); \
	DECLARE_FUNCTION(execConvertMeshToVoxels); \
	DECLARE_FUNCTION(execCreateTextureFromMaterial); \
	DECLARE_FUNCTION(execCreateMeshDataFromStaticMesh);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertMeshToVoxels_NoMaterials); \
	DECLARE_FUNCTION(execConvertMeshToVoxels); \
	DECLARE_FUNCTION(execCreateTextureFromMaterial); \
	DECLARE_FUNCTION(execCreateMeshDataFromStaticMesh);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterLibrary(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelMeshImporterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMeshImporterLibrary)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterLibrary(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelMeshImporterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelMeshImporterLibrary)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMeshImporterLibrary(UVoxelMeshImporterLibrary&&); \
	NO_API UVoxelMeshImporterLibrary(const UVoxelMeshImporterLibrary&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelMeshImporterLibrary(UVoxelMeshImporterLibrary&&); \
	NO_API UVoxelMeshImporterLibrary(const UVoxelMeshImporterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterLibrary)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_130_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelMeshImporterLibrary>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelMeshImporter(); \
	friend struct Z_Construct_UClass_AVoxelMeshImporter_Statics; \
public: \
	DECLARE_CLASS(AVoxelMeshImporter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelMeshImporter)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelMeshImporter(); \
	friend struct Z_Construct_UClass_AVoxelMeshImporter_Statics; \
public: \
	DECLARE_CLASS(AVoxelMeshImporter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelMeshImporter)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelMeshImporter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelMeshImporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshImporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshImporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelMeshImporter(AVoxelMeshImporter&&); \
	NO_API AVoxelMeshImporter(const AVoxelMeshImporter&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelMeshImporter(AVoxelMeshImporter&&); \
	NO_API AVoxelMeshImporter(const AVoxelMeshImporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshImporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshImporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelMeshImporter)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AVoxelMeshImporter, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__MaterialInstance() { return STRUCT_OFFSET(AVoxelMeshImporter, MaterialInstance); } \
	FORCEINLINE static uint32 __PPO__CachedBox() { return STRUCT_OFFSET(AVoxelMeshImporter, CachedBox); } \
	FORCEINLINE static uint32 __PPO__CachedStaticMesh() { return STRUCT_OFFSET(AVoxelMeshImporter, CachedStaticMesh); } \
	FORCEINLINE static uint32 __PPO__CachedVertices() { return STRUCT_OFFSET(AVoxelMeshImporter, CachedVertices); } \
	FORCEINLINE static uint32 __PPO__CachedTransform() { return STRUCT_OFFSET(AVoxelMeshImporter, CachedTransform); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_195_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelMeshImporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
