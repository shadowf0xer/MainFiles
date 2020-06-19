// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDatasmithActorElement;
enum class EDatasmithActorAttachmentRule : uint8;
class UDatasmithLevelVariantSetsElement;
class UDatasmithObjectElement;
class UDatasmithMetaDataElement;
class UDatasmithPostProcessElement;
class UDatasmithBaseMaterialElement;
class UDatasmithTextureElement;
class UDatasmithCustomActorElement;
enum class EDatasmithActorRemovalRule : uint8;
class UDatasmithCameraActorElement;
class UDatasmithLightActorElement;
class UDatasmithMeshActorElement;
class UDatasmithMeshElement;
#ifdef DATASMITHIMPORTER_DatasmithUSceneElement_generated_h
#error "DatasmithUSceneElement.generated.h already included, missing '#pragma once' in DatasmithUSceneElement.h"
#endif
#define DATASMITHIMPORTER_DatasmithUSceneElement_generated_h

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttachActorToSceneRoot); \
	DECLARE_FUNCTION(execAttachActor); \
	DECLARE_FUNCTION(execRemoveLevelVariantSets); \
	DECLARE_FUNCTION(execGetAllLevelVariantSets); \
	DECLARE_FUNCTION(execCreateLevelVariantSets); \
	DECLARE_FUNCTION(execGetAllObjectsAndValuesForKey); \
	DECLARE_FUNCTION(execGetAllMetaData); \
	DECLARE_FUNCTION(execGetMetaDataKeysAndValuesForValue); \
	DECLARE_FUNCTION(execGetMetaDataValueForKey); \
	DECLARE_FUNCTION(execGetMetaDataForObject); \
	DECLARE_FUNCTION(execGetPostProcess); \
	DECLARE_FUNCTION(execRemoveMaterial); \
	DECLARE_FUNCTION(execGetAllMaterials); \
	DECLARE_FUNCTION(execRemoveTexture); \
	DECLARE_FUNCTION(execGetTextures); \
	DECLARE_FUNCTION(execCreateTexture); \
	DECLARE_FUNCTION(execRemoveCustomActor); \
	DECLARE_FUNCTION(execGetAllCustomActors); \
	DECLARE_FUNCTION(execGetCustomActors); \
	DECLARE_FUNCTION(execRemoveCameraActor); \
	DECLARE_FUNCTION(execGetAllCameraActors); \
	DECLARE_FUNCTION(execGetCameraActors); \
	DECLARE_FUNCTION(execCreateCameraActor); \
	DECLARE_FUNCTION(execRemoveLightActor); \
	DECLARE_FUNCTION(execGetAllLightActors); \
	DECLARE_FUNCTION(execGetLightActors); \
	DECLARE_FUNCTION(execRemoveMeshActor); \
	DECLARE_FUNCTION(execGetAllMeshActors); \
	DECLARE_FUNCTION(execGetMeshActors); \
	DECLARE_FUNCTION(execCreateMeshActor); \
	DECLARE_FUNCTION(execRemoveMesh); \
	DECLARE_FUNCTION(execGetMeshByPathName); \
	DECLARE_FUNCTION(execGetMeshes); \
	DECLARE_FUNCTION(execCreateMesh); \
	DECLARE_FUNCTION(execGetUsePhysicalSky); \
	DECLARE_FUNCTION(execGetExportDuration); \
	DECLARE_FUNCTION(execGetUserOS); \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execGetProductVersion); \
	DECLARE_FUNCTION(execGetProductName); \
	DECLARE_FUNCTION(execGetVendor); \
	DECLARE_FUNCTION(execGetExporterVersion); \
	DECLARE_FUNCTION(execGetHost);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttachActorToSceneRoot); \
	DECLARE_FUNCTION(execAttachActor); \
	DECLARE_FUNCTION(execRemoveLevelVariantSets); \
	DECLARE_FUNCTION(execGetAllLevelVariantSets); \
	DECLARE_FUNCTION(execCreateLevelVariantSets); \
	DECLARE_FUNCTION(execGetAllObjectsAndValuesForKey); \
	DECLARE_FUNCTION(execGetAllMetaData); \
	DECLARE_FUNCTION(execGetMetaDataKeysAndValuesForValue); \
	DECLARE_FUNCTION(execGetMetaDataValueForKey); \
	DECLARE_FUNCTION(execGetMetaDataForObject); \
	DECLARE_FUNCTION(execGetPostProcess); \
	DECLARE_FUNCTION(execRemoveMaterial); \
	DECLARE_FUNCTION(execGetAllMaterials); \
	DECLARE_FUNCTION(execRemoveTexture); \
	DECLARE_FUNCTION(execGetTextures); \
	DECLARE_FUNCTION(execCreateTexture); \
	DECLARE_FUNCTION(execRemoveCustomActor); \
	DECLARE_FUNCTION(execGetAllCustomActors); \
	DECLARE_FUNCTION(execGetCustomActors); \
	DECLARE_FUNCTION(execRemoveCameraActor); \
	DECLARE_FUNCTION(execGetAllCameraActors); \
	DECLARE_FUNCTION(execGetCameraActors); \
	DECLARE_FUNCTION(execCreateCameraActor); \
	DECLARE_FUNCTION(execRemoveLightActor); \
	DECLARE_FUNCTION(execGetAllLightActors); \
	DECLARE_FUNCTION(execGetLightActors); \
	DECLARE_FUNCTION(execRemoveMeshActor); \
	DECLARE_FUNCTION(execGetAllMeshActors); \
	DECLARE_FUNCTION(execGetMeshActors); \
	DECLARE_FUNCTION(execCreateMeshActor); \
	DECLARE_FUNCTION(execRemoveMesh); \
	DECLARE_FUNCTION(execGetMeshByPathName); \
	DECLARE_FUNCTION(execGetMeshes); \
	DECLARE_FUNCTION(execCreateMesh); \
	DECLARE_FUNCTION(execGetUsePhysicalSky); \
	DECLARE_FUNCTION(execGetExportDuration); \
	DECLARE_FUNCTION(execGetUserOS); \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execGetProductVersion); \
	DECLARE_FUNCTION(execGetProductName); \
	DECLARE_FUNCTION(execGetVendor); \
	DECLARE_FUNCTION(execGetExporterVersion); \
	DECLARE_FUNCTION(execGetHost);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithSceneElementBase(); \
	friend struct Z_Construct_UClass_UDatasmithSceneElementBase_Statics; \
public: \
	DECLARE_CLASS(UDatasmithSceneElementBase, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithSceneElementBase)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithSceneElementBase(); \
	friend struct Z_Construct_UClass_UDatasmithSceneElementBase_Statics; \
public: \
	DECLARE_CLASS(UDatasmithSceneElementBase, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithSceneElementBase)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithSceneElementBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithSceneElementBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithSceneElementBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithSceneElementBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithSceneElementBase(UDatasmithSceneElementBase&&); \
	NO_API UDatasmithSceneElementBase(const UDatasmithSceneElementBase&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithSceneElementBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithSceneElementBase(UDatasmithSceneElementBase&&); \
	NO_API UDatasmithSceneElementBase(const UDatasmithSceneElementBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithSceneElementBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithSceneElementBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithSceneElementBase)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_13_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DatasmithSceneElementBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithSceneElementBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
