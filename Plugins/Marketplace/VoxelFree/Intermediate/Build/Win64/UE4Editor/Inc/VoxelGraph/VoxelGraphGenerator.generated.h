// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXELGRAPH_VoxelGraphGenerator_generated_h
#error "VoxelGraphGenerator.generated.h already included, missing '#pragma once' in VoxelGraphGenerator.h"
#endif
#define VOXELGRAPH_VoxelGraphGenerator_generated_h

#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGraphGenerator(); \
	friend struct Z_Construct_UClass_UVoxelGraphGenerator_Statics; \
public: \
	DECLARE_CLASS(UVoxelGraphGenerator, UVoxelTransformableWorldGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGraphGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelGraphGenerator*>(this); }


#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelGraphGenerator(); \
	friend struct Z_Construct_UClass_UVoxelGraphGenerator_Statics; \
public: \
	DECLARE_CLASS(UVoxelGraphGenerator, UVoxelTransformableWorldGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGraphGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<UVoxelGraphGenerator*>(this); }


#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGraphGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGraphGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGraphGenerator(UVoxelGraphGenerator&&); \
	NO_API UVoxelGraphGenerator(const UVoxelGraphGenerator&); \
public:


#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGraphGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGraphGenerator(UVoxelGraphGenerator&&); \
	NO_API UVoxelGraphGenerator(const UVoxelGraphGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGraphGenerator)


#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_39_PROLOG
#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_INCLASS \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELGRAPH_API UClass* StaticClass<class UVoxelGraphGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelGraphGenerator_h


#define FOREACH_ENUM_EVOXELGRAPHGENERATORDEBUGLEVEL(op) \
	op(EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining) \
	op(EVoxelGraphGeneratorDebugLevel::AfterMacroInlining) \
	op(EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace) \
	op(EVoxelGraphGeneratorDebugLevel::Output) \
	op(EVoxelGraphGeneratorDebugLevel::Function) \
	op(EVoxelGraphGeneratorDebugLevel::Axis) 

enum class EVoxelGraphGeneratorDebugLevel : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphGeneratorDebugLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
