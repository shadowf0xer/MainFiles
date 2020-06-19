// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHEDITOR_OverlayComponent_generated_h
#error "OverlayComponent.generated.h already included, missing '#pragma once' in OverlayComponent.h"
#endif
#define MESHEDITOR_OverlayComponent_generated_h

#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverlayTriangleID_Statics; \
	MESHEDITOR_API static class UScriptStruct* StaticStruct();


template<> MESHEDITOR_API UScriptStruct* StaticStruct<struct FOverlayTriangleID>();

#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverlayPointID_Statics; \
	MESHEDITOR_API static class UScriptStruct* StaticStruct();


template<> MESHEDITOR_API UScriptStruct* StaticStruct<struct FOverlayPointID>();

#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverlayLineID_Statics; \
	MESHEDITOR_API static class UScriptStruct* StaticStruct();


template<> MESHEDITOR_API UScriptStruct* StaticStruct<struct FOverlayLineID>();

#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverlayTriangle_Statics; \
	MESHEDITOR_API static class UScriptStruct* StaticStruct();


template<> MESHEDITOR_API UScriptStruct* StaticStruct<struct FOverlayTriangle>();

#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverlayTriangleVertex_Statics; \
	MESHEDITOR_API static class UScriptStruct* StaticStruct();


template<> MESHEDITOR_API UScriptStruct* StaticStruct<struct FOverlayTriangleVertex>();

#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverlayPoint_Statics; \
	MESHEDITOR_API static class UScriptStruct* StaticStruct();


template<> MESHEDITOR_API UScriptStruct* StaticStruct<struct FOverlayPoint>();

#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverlayLine_Statics; \
	MESHEDITOR_API static class UScriptStruct* StaticStruct();


template<> MESHEDITOR_API UScriptStruct* StaticStruct<struct FOverlayLine>();

#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_SPARSE_DATA
#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_RPC_WRAPPERS
#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlayComponent(); \
	friend struct Z_Construct_UClass_UOverlayComponent_Statics; \
public: \
	DECLARE_CLASS(UOverlayComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshEditor"), NO_API) \
	DECLARE_SERIALIZER(UOverlayComponent)


#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_INCLASS \
private: \
	static void StaticRegisterNativesUOverlayComponent(); \
	friend struct Z_Construct_UClass_UOverlayComponent_Statics; \
public: \
	DECLARE_CLASS(UOverlayComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshEditor"), NO_API) \
	DECLARE_SERIALIZER(UOverlayComponent)


#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlayComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlayComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlayComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlayComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlayComponent(UOverlayComponent&&); \
	NO_API UOverlayComponent(const UOverlayComponent&); \
public:


#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlayComponent(UOverlayComponent&&); \
	NO_API UOverlayComponent(const UOverlayComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlayComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlayComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlayComponent)


#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LineMaterial() { return STRUCT_OFFSET(UOverlayComponent, LineMaterial); } \
	FORCEINLINE static uint32 __PPO__PointMaterial() { return STRUCT_OFFSET(UOverlayComponent, PointMaterial); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(UOverlayComponent, Bounds); } \
	FORCEINLINE static uint32 __PPO__bBoundsDirty() { return STRUCT_OFFSET(UOverlayComponent, bBoundsDirty); }


#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_191_PROLOG
#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_SPARSE_DATA \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_RPC_WRAPPERS \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_INCLASS \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_SPARSE_DATA \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHEDITOR_API UClass* StaticClass<class UOverlayComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_MeshEditor_Source_MeshEditor_Public_OverlayComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
