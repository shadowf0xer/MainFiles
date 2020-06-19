// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSubstanceInstanceDesc;
struct FSubstanceFloatInputDesc;
struct FSubstanceIntInputDesc;
struct FLinearColor;
class UMaterial;
class UMaterialInstanceDynamic;
#ifdef SUBSTANCECORE_SubstanceGraphInstance_generated_h
#error "SubstanceGraphInstance.generated.h already included, missing '#pragma once' in SubstanceGraphInstance.h"
#endif
#define SUBSTANCECORE_SubstanceGraphInstance_generated_h

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceInstanceDesc>();

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceFloatInputDesc>();

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceIntInputDesc>();

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceInputDesc>();

#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_SPARSE_DATA
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInputImg); \
	DECLARE_FUNCTION(execGetInstanceDesc); \
	DECLARE_FUNCTION(execGetFloatInputDesc); \
	DECLARE_FUNCTION(execGetIntInputDesc); \
	DECLARE_FUNCTION(execGetInputBool); \
	DECLARE_FUNCTION(execGetInputColor); \
	DECLARE_FUNCTION(execGetInputString); \
	DECLARE_FUNCTION(execGetInputFloat); \
	DECLARE_FUNCTION(execGetInputInt); \
	DECLARE_FUNCTION(execSetInputBool); \
	DECLARE_FUNCTION(execSetInputColor); \
	DECLARE_FUNCTION(execSetInputString); \
	DECLARE_FUNCTION(execSetInputFloat); \
	DECLARE_FUNCTION(execSetInputInt); \
	DECLARE_FUNCTION(execGetInputType); \
	DECLARE_FUNCTION(execGetInputNames); \
	DECLARE_FUNCTION(execGetDynamicMaterialInstance);


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputImg); \
	DECLARE_FUNCTION(execGetInstanceDesc); \
	DECLARE_FUNCTION(execGetFloatInputDesc); \
	DECLARE_FUNCTION(execGetIntInputDesc); \
	DECLARE_FUNCTION(execGetInputBool); \
	DECLARE_FUNCTION(execGetInputColor); \
	DECLARE_FUNCTION(execGetInputString); \
	DECLARE_FUNCTION(execGetInputFloat); \
	DECLARE_FUNCTION(execGetInputInt); \
	DECLARE_FUNCTION(execSetInputBool); \
	DECLARE_FUNCTION(execSetInputColor); \
	DECLARE_FUNCTION(execSetInputString); \
	DECLARE_FUNCTION(execSetInputFloat); \
	DECLARE_FUNCTION(execSetInputInt); \
	DECLARE_FUNCTION(execGetInputType); \
	DECLARE_FUNCTION(execGetInputNames); \
	DECLARE_FUNCTION(execGetDynamicMaterialInstance);


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceGraphInstance, NO_API)


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend struct Z_Construct_UClass_USubstanceGraphInstance_Statics; \
public: \
	DECLARE_CLASS(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceGraphInstance) \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_ARCHIVESERIALIZER


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend struct Z_Construct_UClass_USubstanceGraphInstance_Statics; \
public: \
	DECLARE_CLASS(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceGraphInstance) \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_ARCHIVESERIALIZER


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceGraphInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceGraphInstance(USubstanceGraphInstance&&); \
	NO_API USubstanceGraphInstance(const USubstanceGraphInstance&); \
public:


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceGraphInstance(USubstanceGraphInstance&&); \
	NO_API USubstanceGraphInstance(const USubstanceGraphInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceGraphInstance)


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_106_PROLOG
#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_SPARSE_DATA \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_RPC_WRAPPERS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_INCLASS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_SPARSE_DATA \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_109_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceGraphInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceGraphInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h


#define FOREACH_ENUM_ESUBSTANCEINPUTTYPE(op) \
	op(SIT_Float) \
	op(SIT_Float2) \
	op(SIT_Float3) \
	op(SIT_Float4) \
	op(SIT_Integer) \
	op(SIT_Image) \
	op(SIT_Unused_6) \
	op(SIT_Unused_7) \
	op(SIT_Integer2) \
	op(SIT_Integer3) \
	op(SIT_Integer4) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
