// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDatasmithKeyValuePropertyType : uint8;
class UDatasmithActorElement;
struct FQuat;
struct FVector;
class UDatasmithMeshElement;
class UDatasmithMaterialIDElement;
struct FLinearColor;
class UDatasmithPostProcessElement;
class UDatasmithKeyValueProperty;
enum class EDatasmithColorSpace : uint8;
enum class EDatasmithTextureMode : uint8;
class UDatasmithObjectElement;
enum class EDatasmithPropertyCategory : uint8;
struct FIntPoint;
struct FVector2D;
struct FVector4;
struct FColor;
struct FRotator;
class UDatasmithBasePropertyCaptureElement;
class UDatasmithObjectPropertyCaptureElement;
class UDatasmithPropertyCaptureElement;
class UDatasmithActorBindingElement;
class UDatasmithVariantElement;
class UDatasmithVariantSetElement;
#ifdef DATASMITHIMPORTER_DatasmithUObjectElements_generated_h
#error "DatasmithUObjectElements.generated.h already included, missing '#pragma once' in DatasmithUObjectElements.h"
#endif
#define DATASMITHIMPORTER_DatasmithUObjectElements_generated_h

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsElementValid); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execGetElementName);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsElementValid); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execGetElementName);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithObjectElement(); \
	friend struct Z_Construct_UClass_UDatasmithObjectElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithObjectElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithObjectElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithObjectElement(); \
	friend struct Z_Construct_UClass_UDatasmithObjectElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithObjectElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithObjectElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithObjectElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithObjectElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithObjectElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithObjectElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithObjectElement(UDatasmithObjectElement&&); \
	NO_API UDatasmithObjectElement(const UDatasmithObjectElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithObjectElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithObjectElement(UDatasmithObjectElement&&); \
	NO_API UDatasmithObjectElement(const UDatasmithObjectElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithObjectElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithObjectElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithObjectElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_17_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithObjectElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetPropertyType); \
	DECLARE_FUNCTION(execGetPropertyType);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetPropertyType); \
	DECLARE_FUNCTION(execGetPropertyType);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithKeyValueProperty(); \
	friend struct Z_Construct_UClass_UDatasmithKeyValueProperty_Statics; \
public: \
	DECLARE_CLASS(UDatasmithKeyValueProperty, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithKeyValueProperty)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithKeyValueProperty(); \
	friend struct Z_Construct_UClass_UDatasmithKeyValueProperty_Statics; \
public: \
	DECLARE_CLASS(UDatasmithKeyValueProperty, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithKeyValueProperty)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithKeyValueProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithKeyValueProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithKeyValueProperty); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithKeyValueProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithKeyValueProperty(UDatasmithKeyValueProperty&&); \
	NO_API UDatasmithKeyValueProperty(const UDatasmithKeyValueProperty&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithKeyValueProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithKeyValueProperty(UDatasmithKeyValueProperty&&); \
	NO_API UDatasmithKeyValueProperty(const UDatasmithKeyValueProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithKeyValueProperty); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithKeyValueProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithKeyValueProperty)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_51_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithKeyValueProperty>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetChildrenCount); \
	DECLARE_FUNCTION(execAddChild); \
	DECLARE_FUNCTION(execSetTags); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execSetLayer); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetTranslation); \
	DECLARE_FUNCTION(execGetTranslation);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetChildrenCount); \
	DECLARE_FUNCTION(execAddChild); \
	DECLARE_FUNCTION(execSetTags); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execSetLayer); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetTranslation); \
	DECLARE_FUNCTION(execGetTranslation);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithActorElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithActorElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithActorElement(UDatasmithActorElement&&); \
	NO_API UDatasmithActorElement(const UDatasmithActorElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithActorElement(UDatasmithActorElement&&); \
	NO_API UDatasmithActorElement(const UDatasmithActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithActorElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_90_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithActorElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetLightmapSourceUV); \
	DECLARE_FUNCTION(execGetLightmapSourceUV); \
	DECLARE_FUNCTION(execSetLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execGetLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execGetLightMapArea); \
	DECLARE_FUNCTION(execGetBoundingBoxSize); \
	DECLARE_FUNCTION(execGetBoundingBoxDepth); \
	DECLARE_FUNCTION(execGetBoundingBoxHeight); \
	DECLARE_FUNCTION(execGetBoundingBoxWidth); \
	DECLARE_FUNCTION(execGetFile);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetLightmapSourceUV); \
	DECLARE_FUNCTION(execGetLightmapSourceUV); \
	DECLARE_FUNCTION(execSetLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execGetLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execGetLightMapArea); \
	DECLARE_FUNCTION(execGetBoundingBoxSize); \
	DECLARE_FUNCTION(execGetBoundingBoxDepth); \
	DECLARE_FUNCTION(execGetBoundingBoxHeight); \
	DECLARE_FUNCTION(execGetBoundingBoxWidth); \
	DECLARE_FUNCTION(execGetFile);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithMeshElement(); \
	friend struct Z_Construct_UClass_UDatasmithMeshElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMeshElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMeshElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithMeshElement(); \
	friend struct Z_Construct_UClass_UDatasmithMeshElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMeshElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMeshElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMeshElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMeshElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMeshElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMeshElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMeshElement(UDatasmithMeshElement&&); \
	NO_API UDatasmithMeshElement(const UDatasmithMeshElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMeshElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMeshElement(UDatasmithMeshElement&&); \
	NO_API UDatasmithMeshElement(const UDatasmithMeshElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMeshElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMeshElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMeshElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_168_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithMeshElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoundingBoxSize); \
	DECLARE_FUNCTION(execGetMeshElement); \
	DECLARE_FUNCTION(execSetStaticMeshPathName); \
	DECLARE_FUNCTION(execGetStaticMeshPathName); \
	DECLARE_FUNCTION(execRemoveMaterialOverride); \
	DECLARE_FUNCTION(execGetMaterials); \
	DECLARE_FUNCTION(execGetMaterialOverridesCount); \
	DECLARE_FUNCTION(execAddMaterialOverride);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoundingBoxSize); \
	DECLARE_FUNCTION(execGetMeshElement); \
	DECLARE_FUNCTION(execSetStaticMeshPathName); \
	DECLARE_FUNCTION(execGetStaticMeshPathName); \
	DECLARE_FUNCTION(execRemoveMaterialOverride); \
	DECLARE_FUNCTION(execGetMaterials); \
	DECLARE_FUNCTION(execGetMaterialOverridesCount); \
	DECLARE_FUNCTION(execAddMaterialOverride);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithMeshActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithMeshActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMeshActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMeshActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithMeshActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithMeshActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMeshActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMeshActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMeshActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMeshActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMeshActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMeshActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMeshActorElement(UDatasmithMeshActorElement&&); \
	NO_API UDatasmithMeshActorElement(const UDatasmithMeshActorElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMeshActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMeshActorElement(UDatasmithMeshActorElement&&); \
	NO_API UDatasmithMeshActorElement(const UDatasmithMeshActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMeshActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMeshActorElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMeshActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_243_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithMeshActorElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUseIesBrightness); \
	DECLARE_FUNCTION(execGetUseIesBrightness); \
	DECLARE_FUNCTION(execSetIesBrightnessScale); \
	DECLARE_FUNCTION(execGetIesBrightnessScale); \
	DECLARE_FUNCTION(execSetUseIes); \
	DECLARE_FUNCTION(execGetUseIes); \
	DECLARE_FUNCTION(execSetIesFile); \
	DECLARE_FUNCTION(execGetIesFile); \
	DECLARE_FUNCTION(execSetUseTemperature); \
	DECLARE_FUNCTION(execGetUseTemperature); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execGetTemperature); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetIntensity); \
	DECLARE_FUNCTION(execGetIntensity); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUseIesBrightness); \
	DECLARE_FUNCTION(execGetUseIesBrightness); \
	DECLARE_FUNCTION(execSetIesBrightnessScale); \
	DECLARE_FUNCTION(execGetIesBrightnessScale); \
	DECLARE_FUNCTION(execSetUseIes); \
	DECLARE_FUNCTION(execGetUseIes); \
	DECLARE_FUNCTION(execSetIesFile); \
	DECLARE_FUNCTION(execGetIesFile); \
	DECLARE_FUNCTION(execSetUseTemperature); \
	DECLARE_FUNCTION(execGetUseTemperature); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execGetTemperature); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetIntensity); \
	DECLARE_FUNCTION(execGetIntensity); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithLightActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithLightActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithLightActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithLightActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithLightActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithLightActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithLightActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithLightActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithLightActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithLightActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithLightActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithLightActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithLightActorElement(UDatasmithLightActorElement&&); \
	NO_API UDatasmithLightActorElement(const UDatasmithLightActorElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithLightActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithLightActorElement(UDatasmithLightActorElement&&); \
	NO_API UDatasmithLightActorElement(const UDatasmithLightActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithLightActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithLightActorElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithLightActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_308_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithLightActorElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLookAtAllowRoll); \
	DECLARE_FUNCTION(execGetLookAtAllowRoll); \
	DECLARE_FUNCTION(execSetLookAtActor); \
	DECLARE_FUNCTION(execGetLookAtActor); \
	DECLARE_FUNCTION(execGetPostProcess); \
	DECLARE_FUNCTION(execSetFocalLength); \
	DECLARE_FUNCTION(execGetFocalLength); \
	DECLARE_FUNCTION(execSetFStop); \
	DECLARE_FUNCTION(execGetFStop); \
	DECLARE_FUNCTION(execSetFocusDistance); \
	DECLARE_FUNCTION(execGetFocusDistance); \
	DECLARE_FUNCTION(execSetSensorAspectRatio); \
	DECLARE_FUNCTION(execGetSensorAspectRatio); \
	DECLARE_FUNCTION(execSetSensorWidth); \
	DECLARE_FUNCTION(execGetSensorWidth);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLookAtAllowRoll); \
	DECLARE_FUNCTION(execGetLookAtAllowRoll); \
	DECLARE_FUNCTION(execSetLookAtActor); \
	DECLARE_FUNCTION(execGetLookAtActor); \
	DECLARE_FUNCTION(execGetPostProcess); \
	DECLARE_FUNCTION(execSetFocalLength); \
	DECLARE_FUNCTION(execGetFocalLength); \
	DECLARE_FUNCTION(execSetFStop); \
	DECLARE_FUNCTION(execGetFStop); \
	DECLARE_FUNCTION(execSetFocusDistance); \
	DECLARE_FUNCTION(execGetFocusDistance); \
	DECLARE_FUNCTION(execSetSensorAspectRatio); \
	DECLARE_FUNCTION(execGetSensorAspectRatio); \
	DECLARE_FUNCTION(execSetSensorWidth); \
	DECLARE_FUNCTION(execGetSensorWidth);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithCameraActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithCameraActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithCameraActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithCameraActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithCameraActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithCameraActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithCameraActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithCameraActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithCameraActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCameraActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithCameraActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCameraActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithCameraActorElement(UDatasmithCameraActorElement&&); \
	NO_API UDatasmithCameraActorElement(const UDatasmithCameraActorElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithCameraActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithCameraActorElement(UDatasmithCameraActorElement&&); \
	NO_API UDatasmithCameraActorElement(const UDatasmithCameraActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithCameraActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCameraActorElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCameraActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_404_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithCameraActorElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execAddProperty); \
	DECLARE_FUNCTION(execGetPropertyByName); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execGetPropertiesCount); \
	DECLARE_FUNCTION(execSetClassOrPathName); \
	DECLARE_FUNCTION(execGetClassOrPathName);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execAddProperty); \
	DECLARE_FUNCTION(execGetPropertyByName); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execGetPropertiesCount); \
	DECLARE_FUNCTION(execSetClassOrPathName); \
	DECLARE_FUNCTION(execGetClassOrPathName);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithCustomActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithCustomActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithCustomActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithCustomActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithCustomActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithCustomActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithCustomActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithCustomActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithCustomActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCustomActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithCustomActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCustomActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithCustomActorElement(UDatasmithCustomActorElement&&); \
	NO_API UDatasmithCustomActorElement(const UDatasmithCustomActorElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithCustomActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithCustomActorElement(UDatasmithCustomActorElement&&); \
	NO_API UDatasmithCustomActorElement(const UDatasmithCustomActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithCustomActorElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCustomActorElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCustomActorElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_487_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithCustomActorElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_RPC_WRAPPERS
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithBaseMaterialElement(); \
	friend struct Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithBaseMaterialElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithBaseMaterialElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithBaseMaterialElement(); \
	friend struct Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithBaseMaterialElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithBaseMaterialElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithBaseMaterialElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithBaseMaterialElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithBaseMaterialElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithBaseMaterialElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithBaseMaterialElement(UDatasmithBaseMaterialElement&&); \
	NO_API UDatasmithBaseMaterialElement(const UDatasmithBaseMaterialElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithBaseMaterialElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithBaseMaterialElement(UDatasmithBaseMaterialElement&&); \
	NO_API UDatasmithBaseMaterialElement(const UDatasmithBaseMaterialElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithBaseMaterialElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithBaseMaterialElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithBaseMaterialElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_542_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_545_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithBaseMaterialElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetId);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetId);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithMaterialIDElement(); \
	friend struct Z_Construct_UClass_UDatasmithMaterialIDElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMaterialIDElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMaterialIDElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithMaterialIDElement(); \
	friend struct Z_Construct_UClass_UDatasmithMaterialIDElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMaterialIDElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMaterialIDElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMaterialIDElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMaterialIDElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMaterialIDElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMaterialIDElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMaterialIDElement(UDatasmithMaterialIDElement&&); \
	NO_API UDatasmithMaterialIDElement(const UDatasmithMaterialIDElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMaterialIDElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMaterialIDElement(UDatasmithMaterialIDElement&&); \
	NO_API UDatasmithMaterialIDElement(const UDatasmithMaterialIDElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMaterialIDElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMaterialIDElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMaterialIDElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_564_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_567_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithMaterialIDElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCameraShutterSpeed); \
	DECLARE_FUNCTION(execGetCameraShutterSpeed); \
	DECLARE_FUNCTION(execSetCameraISO); \
	DECLARE_FUNCTION(execGetCameraISO); \
	DECLARE_FUNCTION(execSetSaturation); \
	DECLARE_FUNCTION(execGetSaturation); \
	DECLARE_FUNCTION(execSetMotionBlur); \
	DECLARE_FUNCTION(execGetMotionBlur); \
	DECLARE_FUNCTION(execSetDof); \
	DECLARE_FUNCTION(execGetDof); \
	DECLARE_FUNCTION(execSetVignette); \
	DECLARE_FUNCTION(execGetVignette); \
	DECLARE_FUNCTION(execSetColorFilter); \
	DECLARE_FUNCTION(execGetColorFilter); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execGetTemperature);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCameraShutterSpeed); \
	DECLARE_FUNCTION(execGetCameraShutterSpeed); \
	DECLARE_FUNCTION(execSetCameraISO); \
	DECLARE_FUNCTION(execGetCameraISO); \
	DECLARE_FUNCTION(execSetSaturation); \
	DECLARE_FUNCTION(execGetSaturation); \
	DECLARE_FUNCTION(execSetMotionBlur); \
	DECLARE_FUNCTION(execGetMotionBlur); \
	DECLARE_FUNCTION(execSetDof); \
	DECLARE_FUNCTION(execGetDof); \
	DECLARE_FUNCTION(execSetVignette); \
	DECLARE_FUNCTION(execGetVignette); \
	DECLARE_FUNCTION(execSetColorFilter); \
	DECLARE_FUNCTION(execGetColorFilter); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execGetTemperature);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithPostProcessElement(); \
	friend struct Z_Construct_UClass_UDatasmithPostProcessElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithPostProcessElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithPostProcessElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithPostProcessElement(); \
	friend struct Z_Construct_UClass_UDatasmithPostProcessElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithPostProcessElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithPostProcessElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithPostProcessElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithPostProcessElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithPostProcessElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithPostProcessElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithPostProcessElement(UDatasmithPostProcessElement&&); \
	NO_API UDatasmithPostProcessElement(const UDatasmithPostProcessElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithPostProcessElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithPostProcessElement(UDatasmithPostProcessElement&&); \
	NO_API UDatasmithPostProcessElement(const UDatasmithPostProcessElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithPostProcessElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithPostProcessElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithPostProcessElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_591_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_594_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithPostProcessElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetColorSpace); \
	DECLARE_FUNCTION(execGetColorSpace); \
	DECLARE_FUNCTION(execSetRGBCurve); \
	DECLARE_FUNCTION(execGetRGBCurve); \
	DECLARE_FUNCTION(execSetAllowResize); \
	DECLARE_FUNCTION(execGetAllowResize); \
	DECLARE_FUNCTION(execSetTextureMode); \
	DECLARE_FUNCTION(execGetTextureMode); \
	DECLARE_FUNCTION(execSetFile); \
	DECLARE_FUNCTION(execGetFile);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColorSpace); \
	DECLARE_FUNCTION(execGetColorSpace); \
	DECLARE_FUNCTION(execSetRGBCurve); \
	DECLARE_FUNCTION(execGetRGBCurve); \
	DECLARE_FUNCTION(execSetAllowResize); \
	DECLARE_FUNCTION(execGetAllowResize); \
	DECLARE_FUNCTION(execSetTextureMode); \
	DECLARE_FUNCTION(execGetTextureMode); \
	DECLARE_FUNCTION(execSetFile); \
	DECLARE_FUNCTION(execGetFile);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithTextureElement(); \
	friend struct Z_Construct_UClass_UDatasmithTextureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithTextureElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithTextureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithTextureElement(); \
	friend struct Z_Construct_UClass_UDatasmithTextureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithTextureElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithTextureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithTextureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithTextureElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithTextureElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithTextureElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithTextureElement(UDatasmithTextureElement&&); \
	NO_API UDatasmithTextureElement(const UDatasmithTextureElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithTextureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithTextureElement(UDatasmithTextureElement&&); \
	NO_API UDatasmithTextureElement(const UDatasmithTextureElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithTextureElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithTextureElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithTextureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_679_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_682_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithTextureElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProperties); \
	DECLARE_FUNCTION(execGetAssociatedElement); \
	DECLARE_FUNCTION(execGetPropertyByName); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execGetPropertiesCount);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProperties); \
	DECLARE_FUNCTION(execGetAssociatedElement); \
	DECLARE_FUNCTION(execGetPropertyByName); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execGetPropertiesCount);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithMetaDataElement(); \
	friend struct Z_Construct_UClass_UDatasmithMetaDataElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMetaDataElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMetaDataElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithMetaDataElement(); \
	friend struct Z_Construct_UClass_UDatasmithMetaDataElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMetaDataElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMetaDataElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMetaDataElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMetaDataElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMetaDataElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMetaDataElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMetaDataElement(UDatasmithMetaDataElement&&); \
	NO_API UDatasmithMetaDataElement(const UDatasmithMetaDataElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMetaDataElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMetaDataElement(UDatasmithMetaDataElement&&); \
	NO_API UDatasmithMetaDataElement(const UDatasmithMetaDataElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMetaDataElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMetaDataElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMetaDataElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_742_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_745_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithMetaDataElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execSetCategory); \
	DECLARE_FUNCTION(execGetPropertyPath); \
	DECLARE_FUNCTION(execSetPropertyPath);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execSetCategory); \
	DECLARE_FUNCTION(execGetPropertyPath); \
	DECLARE_FUNCTION(execSetPropertyPath);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithBasePropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithBasePropertyCaptureElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithBasePropertyCaptureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithBasePropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithBasePropertyCaptureElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithBasePropertyCaptureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithBasePropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithBasePropertyCaptureElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithBasePropertyCaptureElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithBasePropertyCaptureElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithBasePropertyCaptureElement(UDatasmithBasePropertyCaptureElement&&); \
	NO_API UDatasmithBasePropertyCaptureElement(const UDatasmithBasePropertyCaptureElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithBasePropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithBasePropertyCaptureElement(UDatasmithBasePropertyCaptureElement&&); \
	NO_API UDatasmithBasePropertyCaptureElement(const UDatasmithBasePropertyCaptureElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithBasePropertyCaptureElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithBasePropertyCaptureElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithBasePropertyCaptureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_789_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_792_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithBasePropertyCaptureElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValueIntPoint); \
	DECLARE_FUNCTION(execGetValueIntPoint); \
	DECLARE_FUNCTION(execSetValueVector2D); \
	DECLARE_FUNCTION(execGetValueVector2D); \
	DECLARE_FUNCTION(execSetValueVector4); \
	DECLARE_FUNCTION(execGetValueVector4); \
	DECLARE_FUNCTION(execSetValueQuat); \
	DECLARE_FUNCTION(execGetValueQuat); \
	DECLARE_FUNCTION(execSetValueVector); \
	DECLARE_FUNCTION(execGetValueVector); \
	DECLARE_FUNCTION(execSetValueLinearColor); \
	DECLARE_FUNCTION(execGetValueLinearColor); \
	DECLARE_FUNCTION(execSetValueColor); \
	DECLARE_FUNCTION(execGetValueColor); \
	DECLARE_FUNCTION(execSetValueRotator); \
	DECLARE_FUNCTION(execGetValueRotator); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execSetValueInt); \
	DECLARE_FUNCTION(execGetValueInt); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetValueBool);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValueIntPoint); \
	DECLARE_FUNCTION(execGetValueIntPoint); \
	DECLARE_FUNCTION(execSetValueVector2D); \
	DECLARE_FUNCTION(execGetValueVector2D); \
	DECLARE_FUNCTION(execSetValueVector4); \
	DECLARE_FUNCTION(execGetValueVector4); \
	DECLARE_FUNCTION(execSetValueQuat); \
	DECLARE_FUNCTION(execGetValueQuat); \
	DECLARE_FUNCTION(execSetValueVector); \
	DECLARE_FUNCTION(execGetValueVector); \
	DECLARE_FUNCTION(execSetValueLinearColor); \
	DECLARE_FUNCTION(execGetValueLinearColor); \
	DECLARE_FUNCTION(execSetValueColor); \
	DECLARE_FUNCTION(execGetValueColor); \
	DECLARE_FUNCTION(execSetValueRotator); \
	DECLARE_FUNCTION(execGetValueRotator); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execSetValueInt); \
	DECLARE_FUNCTION(execGetValueInt); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetValueBool);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithPropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithPropertyCaptureElement, UDatasmithBasePropertyCaptureElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithPropertyCaptureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithPropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithPropertyCaptureElement, UDatasmithBasePropertyCaptureElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithPropertyCaptureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithPropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithPropertyCaptureElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithPropertyCaptureElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithPropertyCaptureElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithPropertyCaptureElement(UDatasmithPropertyCaptureElement&&); \
	NO_API UDatasmithPropertyCaptureElement(const UDatasmithPropertyCaptureElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithPropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithPropertyCaptureElement(UDatasmithPropertyCaptureElement&&); \
	NO_API UDatasmithPropertyCaptureElement(const UDatasmithPropertyCaptureElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithPropertyCaptureElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithPropertyCaptureElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithPropertyCaptureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_825_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_828_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithPropertyCaptureElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRecordedObject); \
	DECLARE_FUNCTION(execSetRecordedObject);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRecordedObject); \
	DECLARE_FUNCTION(execSetRecordedObject);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithObjectPropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithObjectPropertyCaptureElement, UDatasmithBasePropertyCaptureElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithObjectPropertyCaptureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithObjectPropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithObjectPropertyCaptureElement, UDatasmithBasePropertyCaptureElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithObjectPropertyCaptureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithObjectPropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithObjectPropertyCaptureElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithObjectPropertyCaptureElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithObjectPropertyCaptureElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithObjectPropertyCaptureElement(UDatasmithObjectPropertyCaptureElement&&); \
	NO_API UDatasmithObjectPropertyCaptureElement(const UDatasmithObjectPropertyCaptureElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithObjectPropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithObjectPropertyCaptureElement(UDatasmithObjectPropertyCaptureElement&&); \
	NO_API UDatasmithObjectPropertyCaptureElement(const UDatasmithObjectPropertyCaptureElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithObjectPropertyCaptureElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithObjectPropertyCaptureElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithObjectPropertyCaptureElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_971_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_974_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithObjectPropertyCaptureElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemovePropertyCapture); \
	DECLARE_FUNCTION(execGetPropertyCapture); \
	DECLARE_FUNCTION(execGetPropertyCapturesCount); \
	DECLARE_FUNCTION(execAddPropertyCapture); \
	DECLARE_FUNCTION(execCreateObjectPropertyCapture); \
	DECLARE_FUNCTION(execCreatePropertyCapture); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execSetActor);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemovePropertyCapture); \
	DECLARE_FUNCTION(execGetPropertyCapture); \
	DECLARE_FUNCTION(execGetPropertyCapturesCount); \
	DECLARE_FUNCTION(execAddPropertyCapture); \
	DECLARE_FUNCTION(execCreateObjectPropertyCapture); \
	DECLARE_FUNCTION(execCreatePropertyCapture); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execSetActor);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithActorBindingElement(); \
	friend struct Z_Construct_UClass_UDatasmithActorBindingElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithActorBindingElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithActorBindingElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithActorBindingElement(); \
	friend struct Z_Construct_UClass_UDatasmithActorBindingElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithActorBindingElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithActorBindingElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithActorBindingElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithActorBindingElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithActorBindingElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithActorBindingElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithActorBindingElement(UDatasmithActorBindingElement&&); \
	NO_API UDatasmithActorBindingElement(const UDatasmithActorBindingElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithActorBindingElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithActorBindingElement(UDatasmithActorBindingElement&&); \
	NO_API UDatasmithActorBindingElement(const UDatasmithActorBindingElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithActorBindingElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithActorBindingElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithActorBindingElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_993_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_996_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithActorBindingElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveActorBinding); \
	DECLARE_FUNCTION(execGetActorBinding); \
	DECLARE_FUNCTION(execGetActorBindingsCount); \
	DECLARE_FUNCTION(execAddActorBinding); \
	DECLARE_FUNCTION(execCreateActorBinding);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveActorBinding); \
	DECLARE_FUNCTION(execGetActorBinding); \
	DECLARE_FUNCTION(execGetActorBindingsCount); \
	DECLARE_FUNCTION(execAddActorBinding); \
	DECLARE_FUNCTION(execCreateActorBinding);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithVariantElement(); \
	friend struct Z_Construct_UClass_UDatasmithVariantElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithVariantElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithVariantElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithVariantElement(); \
	friend struct Z_Construct_UClass_UDatasmithVariantElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithVariantElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithVariantElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithVariantElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithVariantElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithVariantElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithVariantElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithVariantElement(UDatasmithVariantElement&&); \
	NO_API UDatasmithVariantElement(const UDatasmithVariantElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithVariantElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithVariantElement(UDatasmithVariantElement&&); \
	NO_API UDatasmithVariantElement(const UDatasmithVariantElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithVariantElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithVariantElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithVariantElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1048_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1051_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithVariantElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveVariant); \
	DECLARE_FUNCTION(execGetVariant); \
	DECLARE_FUNCTION(execGetVariantsCount); \
	DECLARE_FUNCTION(execAddVariant); \
	DECLARE_FUNCTION(execCreateVariant);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveVariant); \
	DECLARE_FUNCTION(execGetVariant); \
	DECLARE_FUNCTION(execGetVariantsCount); \
	DECLARE_FUNCTION(execAddVariant); \
	DECLARE_FUNCTION(execCreateVariant);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithVariantSetElement(); \
	friend struct Z_Construct_UClass_UDatasmithVariantSetElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithVariantSetElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithVariantSetElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithVariantSetElement(); \
	friend struct Z_Construct_UClass_UDatasmithVariantSetElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithVariantSetElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithVariantSetElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithVariantSetElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithVariantSetElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithVariantSetElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithVariantSetElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithVariantSetElement(UDatasmithVariantSetElement&&); \
	NO_API UDatasmithVariantSetElement(const UDatasmithVariantSetElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithVariantSetElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithVariantSetElement(UDatasmithVariantSetElement&&); \
	NO_API UDatasmithVariantSetElement(const UDatasmithVariantSetElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithVariantSetElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithVariantSetElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithVariantSetElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1091_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1094_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithVariantSetElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveVariantSet); \
	DECLARE_FUNCTION(execGetVariantSet); \
	DECLARE_FUNCTION(execGetVariantSetsCount); \
	DECLARE_FUNCTION(execAddVariantSet); \
	DECLARE_FUNCTION(execCreateVariantSet);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveVariantSet); \
	DECLARE_FUNCTION(execGetVariantSet); \
	DECLARE_FUNCTION(execGetVariantSetsCount); \
	DECLARE_FUNCTION(execAddVariantSet); \
	DECLARE_FUNCTION(execCreateVariantSet);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithLevelVariantSetsElement(); \
	friend struct Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithLevelVariantSetsElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithLevelVariantSetsElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithLevelVariantSetsElement(); \
	friend struct Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithLevelVariantSetsElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithLevelVariantSetsElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithLevelVariantSetsElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithLevelVariantSetsElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithLevelVariantSetsElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithLevelVariantSetsElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithLevelVariantSetsElement(UDatasmithLevelVariantSetsElement&&); \
	NO_API UDatasmithLevelVariantSetsElement(const UDatasmithLevelVariantSetsElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithLevelVariantSetsElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithLevelVariantSetsElement(UDatasmithLevelVariantSetsElement&&); \
	NO_API UDatasmithLevelVariantSetsElement(const UDatasmithLevelVariantSetsElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithLevelVariantSetsElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithLevelVariantSetsElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithLevelVariantSetsElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1134_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithLevelVariantSetsElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
