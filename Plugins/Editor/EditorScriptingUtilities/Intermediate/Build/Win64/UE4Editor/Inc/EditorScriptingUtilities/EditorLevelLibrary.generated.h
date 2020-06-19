// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStaticMeshActor;
struct FEditorScriptingCreateProxyMeshActorOptions;
struct FEditorScriptingMergeStaticMeshActorsOptions;
struct FEditorScriptingJoinStaticMeshActorsOptions;
class AActor;
class UStaticMesh;
class UStaticMeshComponent;
class UMaterialInterface;
class UMeshComponent;
class UWorld;
struct FVector;
struct FRotator;
class UObject;
class UActorComponent;
#ifdef EDITORSCRIPTINGUTILITIES_EditorLevelLibrary_generated_h
#error "EditorLevelLibrary.generated.h already included, missing '#pragma once' in EditorLevelLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorLevelLibrary_generated_h

#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorScriptingJoinStaticMeshActorsOptions Super;


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingCreateProxyMeshActorOptions>();

#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorScriptingJoinStaticMeshActorsOptions Super;


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingMergeStaticMeshActorsOptions>();

#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingJoinStaticMeshActorsOptions>();

#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_SPARSE_DATA
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyMeshActor); \
	DECLARE_FUNCTION(execMergeStaticMeshActors); \
	DECLARE_FUNCTION(execJoinStaticMeshActors); \
	DECLARE_FUNCTION(execConvertActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshesOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshes); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterialsOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterials); \
	DECLARE_FUNCTION(execSetCurrentLevelByName); \
	DECLARE_FUNCTION(execSaveAllDirtyLevels); \
	DECLARE_FUNCTION(execSaveCurrentLevel); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execNewLevelFromTemplate); \
	DECLARE_FUNCTION(execNewLevel); \
	DECLARE_FUNCTION(execGetGameWorld); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execDestroyActor); \
	DECLARE_FUNCTION(execSpawnActorFromClass); \
	DECLARE_FUNCTION(execSpawnActorFromObject); \
	DECLARE_FUNCTION(execEditorSetGameView); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execSetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execGetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execEjectPilotLevelActor); \
	DECLARE_FUNCTION(execPilotLevelActor); \
	DECLARE_FUNCTION(execSetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetAllLevelActorsComponents); \
	DECLARE_FUNCTION(execGetAllLevelActors);


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyMeshActor); \
	DECLARE_FUNCTION(execMergeStaticMeshActors); \
	DECLARE_FUNCTION(execJoinStaticMeshActors); \
	DECLARE_FUNCTION(execConvertActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshesOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshes); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterialsOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterials); \
	DECLARE_FUNCTION(execSetCurrentLevelByName); \
	DECLARE_FUNCTION(execSaveAllDirtyLevels); \
	DECLARE_FUNCTION(execSaveCurrentLevel); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execNewLevelFromTemplate); \
	DECLARE_FUNCTION(execNewLevel); \
	DECLARE_FUNCTION(execGetGameWorld); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execDestroyActor); \
	DECLARE_FUNCTION(execSpawnActorFromClass); \
	DECLARE_FUNCTION(execSpawnActorFromObject); \
	DECLARE_FUNCTION(execEditorSetGameView); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execSetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execGetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execEjectPilotLevelActor); \
	DECLARE_FUNCTION(execPilotLevelActor); \
	DECLARE_FUNCTION(execSetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetAllLevelActorsComponents); \
	DECLARE_FUNCTION(execGetAllLevelActors);


#if WITH_EDITOR
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditorInvalidateViewports); \
	DECLARE_FUNCTION(execEditorPlaySimulate);


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditorInvalidateViewports); \
	DECLARE_FUNCTION(execEditorPlaySimulate);


#else
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorLevelLibrary(); \
	friend struct Z_Construct_UClass_UEditorLevelLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorLevelLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorLevelLibrary)


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUEditorLevelLibrary(); \
	friend struct Z_Construct_UClass_UEditorLevelLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorLevelLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorLevelLibrary)


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLevelLibrary(UEditorLevelLibrary&&); \
	NO_API UEditorLevelLibrary(const UEditorLevelLibrary&); \
public:


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLevelLibrary(UEditorLevelLibrary&&); \
	NO_API UEditorLevelLibrary(const UEditorLevelLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelLibrary)


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_81_PROLOG
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_SPARSE_DATA \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_RPC_WRAPPERS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_INCLASS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_SPARSE_DATA \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorLevelLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
