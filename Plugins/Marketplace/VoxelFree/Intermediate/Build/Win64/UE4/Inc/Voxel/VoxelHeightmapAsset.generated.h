// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelHeightmapAsset_generated_h
#error "VoxelHeightmapAsset.generated.h already included, missing '#pragma once' in VoxelHeightmapAsset.h"
#endif
#define VOXEL_VoxelHeightmapAsset_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_714_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelHeightmapImporterWeightmapInfos>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelHeightmapAsset, NO_API)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAsset(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAsset_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAsset, UVoxelTransformableWorldGeneratorWithBounds, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAsset) \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_ARCHIVESERIALIZER


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAsset(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAsset_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAsset, UVoxelTransformableWorldGeneratorWithBounds, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAsset) \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_ARCHIVESERIALIZER


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelHeightmapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelHeightmapAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAsset(UVoxelHeightmapAsset&&); \
	NO_API UVoxelHeightmapAsset(const UVoxelHeightmapAsset&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelHeightmapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAsset(UVoxelHeightmapAsset&&); \
	NO_API UVoxelHeightmapAsset(const UVoxelHeightmapAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelHeightmapAsset)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Width() { return STRUCT_OFFSET(UVoxelHeightmapAsset, Width); } \
	FORCEINLINE static uint32 __PPO__Height() { return STRUCT_OFFSET(UVoxelHeightmapAsset, Height); } \
	FORCEINLINE static uint32 __PPO__VoxelCustomVersion() { return STRUCT_OFFSET(UVoxelHeightmapAsset, VoxelCustomVersion); } \
	FORCEINLINE static uint32 __PPO__MaterialConfigFlag() { return STRUCT_OFFSET(UVoxelHeightmapAsset, MaterialConfigFlag); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_592_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_595_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelHeightmapAsset>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAssetFloat(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAssetFloat, UVoxelHeightmapAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAssetFloat)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAssetFloat(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAssetFloat, UVoxelHeightmapAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAssetFloat)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelHeightmapAssetFloat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelHeightmapAssetFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAssetFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAssetFloat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAssetFloat(UVoxelHeightmapAssetFloat&&); \
	NO_API UVoxelHeightmapAssetFloat(const UVoxelHeightmapAssetFloat&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAssetFloat(UVoxelHeightmapAssetFloat&&); \
	NO_API UVoxelHeightmapAssetFloat(const UVoxelHeightmapAssetFloat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAssetFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAssetFloat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelHeightmapAssetFloat)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_687_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_690_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelHeightmapAssetFloat>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAssetUINT16(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAssetUINT16, UVoxelHeightmapAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAssetUINT16)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelHeightmapAssetUINT16(); \
	friend struct Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics; \
public: \
	DECLARE_CLASS(UVoxelHeightmapAssetUINT16, UVoxelHeightmapAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelHeightmapAssetUINT16)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelHeightmapAssetUINT16(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelHeightmapAssetUINT16) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAssetUINT16); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAssetUINT16); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAssetUINT16(UVoxelHeightmapAssetUINT16&&); \
	NO_API UVoxelHeightmapAssetUINT16(const UVoxelHeightmapAssetUINT16&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelHeightmapAssetUINT16(UVoxelHeightmapAssetUINT16&&); \
	NO_API UVoxelHeightmapAssetUINT16(const UVoxelHeightmapAssetUINT16&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelHeightmapAssetUINT16); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelHeightmapAssetUINT16); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelHeightmapAssetUINT16)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_727_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h_730_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelHeightmapAssetUINT16>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h


#define FOREACH_ENUM_EVOXELHEIGHTMAPIMPORTERMATERIALCONFIG(op) \
	op(EVoxelHeightmapImporterMaterialConfig::RGB) \
	op(EVoxelHeightmapImporterMaterialConfig::FourWayBlend) \
	op(EVoxelHeightmapImporterMaterialConfig::FiveWayBlend) \
	op(EVoxelHeightmapImporterMaterialConfig::SingleIndex) \
	op(EVoxelHeightmapImporterMaterialConfig::MultiIndex) 

enum class EVoxelHeightmapImporterMaterialConfig : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelHeightmapImporterMaterialConfig>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
