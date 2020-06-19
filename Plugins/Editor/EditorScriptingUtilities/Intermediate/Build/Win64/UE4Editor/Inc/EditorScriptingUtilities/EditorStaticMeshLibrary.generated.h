// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
struct FVector;
struct FRotator;
struct FVector2D;
class UStaticMeshComponent;
enum class EScriptingCollisionShapeType : uint8;
struct FEditorScriptingMeshReductionOptions;
#ifdef EDITORSCRIPTINGUTILITIES_EditorStaticMeshLibrary_generated_h
#error "EditorStaticMeshLibrary.generated.h already included, missing '#pragma once' in EditorStaticMeshLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorStaticMeshLibrary_generated_h

#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingMeshReductionOptions>();

#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingMeshReductionSettings>();

#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_SPARSE_DATA
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateBoxUVChannel); \
	DECLARE_FUNCTION(execGenerateCylindricalUVChannel); \
	DECLARE_FUNCTION(execGeneratePlanarUVChannel); \
	DECLARE_FUNCTION(execRemoveUVChannel); \
	DECLARE_FUNCTION(execInsertUVChannel); \
	DECLARE_FUNCTION(execAddUVChannel); \
	DECLARE_FUNCTION(execGetNumUVChannels); \
	DECLARE_FUNCTION(execSetAllowCPUAccess); \
	DECLARE_FUNCTION(execGetNumberMaterials); \
	DECLARE_FUNCTION(execGetNumberVerts); \
	DECLARE_FUNCTION(execSetGenerateLightmapUVs); \
	DECLARE_FUNCTION(execHasInstanceVertexColors); \
	DECLARE_FUNCTION(execHasVertexColors); \
	DECLARE_FUNCTION(execEnableSectionCastShadow); \
	DECLARE_FUNCTION(execIsSectionCollisionEnabled); \
	DECLARE_FUNCTION(execEnableSectionCollision); \
	DECLARE_FUNCTION(execRemoveCollisions); \
	DECLARE_FUNCTION(execRemoveCollisionsWithNotification); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execGetConvexCollisionCount); \
	DECLARE_FUNCTION(execGetCollisionComplexity); \
	DECLARE_FUNCTION(execGetSimpleCollisionCount); \
	DECLARE_FUNCTION(execAddSimpleCollisions); \
	DECLARE_FUNCTION(execAddSimpleCollisionsWithNotification); \
	DECLARE_FUNCTION(execGetLodScreenSizes); \
	DECLARE_FUNCTION(execRemoveLods); \
	DECLARE_FUNCTION(execGetLodCount); \
	DECLARE_FUNCTION(execSetLodFromStaticMesh); \
	DECLARE_FUNCTION(execSetLods); \
	DECLARE_FUNCTION(execSetLodsWithNotification);


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateBoxUVChannel); \
	DECLARE_FUNCTION(execGenerateCylindricalUVChannel); \
	DECLARE_FUNCTION(execGeneratePlanarUVChannel); \
	DECLARE_FUNCTION(execRemoveUVChannel); \
	DECLARE_FUNCTION(execInsertUVChannel); \
	DECLARE_FUNCTION(execAddUVChannel); \
	DECLARE_FUNCTION(execGetNumUVChannels); \
	DECLARE_FUNCTION(execSetAllowCPUAccess); \
	DECLARE_FUNCTION(execGetNumberMaterials); \
	DECLARE_FUNCTION(execGetNumberVerts); \
	DECLARE_FUNCTION(execSetGenerateLightmapUVs); \
	DECLARE_FUNCTION(execHasInstanceVertexColors); \
	DECLARE_FUNCTION(execHasVertexColors); \
	DECLARE_FUNCTION(execEnableSectionCastShadow); \
	DECLARE_FUNCTION(execIsSectionCollisionEnabled); \
	DECLARE_FUNCTION(execEnableSectionCollision); \
	DECLARE_FUNCTION(execRemoveCollisions); \
	DECLARE_FUNCTION(execRemoveCollisionsWithNotification); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execGetConvexCollisionCount); \
	DECLARE_FUNCTION(execGetCollisionComplexity); \
	DECLARE_FUNCTION(execGetSimpleCollisionCount); \
	DECLARE_FUNCTION(execAddSimpleCollisions); \
	DECLARE_FUNCTION(execAddSimpleCollisionsWithNotification); \
	DECLARE_FUNCTION(execGetLodScreenSizes); \
	DECLARE_FUNCTION(execRemoveLods); \
	DECLARE_FUNCTION(execGetLodCount); \
	DECLARE_FUNCTION(execSetLodFromStaticMesh); \
	DECLARE_FUNCTION(execSetLods); \
	DECLARE_FUNCTION(execSetLodsWithNotification);


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorStaticMeshLibrary(); \
	friend struct Z_Construct_UClass_UEditorStaticMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorStaticMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorStaticMeshLibrary)


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUEditorStaticMeshLibrary(); \
	friend struct Z_Construct_UClass_UEditorStaticMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorStaticMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorStaticMeshLibrary)


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorStaticMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStaticMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorStaticMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStaticMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorStaticMeshLibrary(UEditorStaticMeshLibrary&&); \
	NO_API UEditorStaticMeshLibrary(const UEditorStaticMeshLibrary&); \
public:


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorStaticMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorStaticMeshLibrary(UEditorStaticMeshLibrary&&); \
	NO_API UEditorStaticMeshLibrary(const UEditorStaticMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorStaticMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStaticMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStaticMeshLibrary)


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_74_PROLOG
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_SPARSE_DATA \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_SPARSE_DATA \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorStaticMeshLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h


#define FOREACH_ENUM_ESCRIPTINGCOLLISIONSHAPETYPE(op) \
	op(EScriptingCollisionShapeType::Box) \
	op(EScriptingCollisionShapeType::Sphere) \
	op(EScriptingCollisionShapeType::Capsule) \
	op(EScriptingCollisionShapeType::NDOP10_X) \
	op(EScriptingCollisionShapeType::NDOP10_Y) \
	op(EScriptingCollisionShapeType::NDOP10_Z) \
	op(EScriptingCollisionShapeType::NDOP18) \
	op(EScriptingCollisionShapeType::NDOP26) 

enum class EScriptingCollisionShapeType : uint8;
template<> EDITORSCRIPTINGUTILITIES_API UEnum* StaticEnum<EScriptingCollisionShapeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
