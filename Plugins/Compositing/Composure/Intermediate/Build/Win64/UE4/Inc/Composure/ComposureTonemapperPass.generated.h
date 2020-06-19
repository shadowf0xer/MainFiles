// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPOSURE_ComposureTonemapperPass_generated_h
#error "ComposureTonemapperPass.generated.h already included, missing '#pragma once' in ComposureTonemapperPass.h"
#endif
#define COMPOSURE_ComposureTonemapperPass_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTonemapToRenderTarget);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTonemapToRenderTarget);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposureTonemapperPass(); \
	friend struct Z_Construct_UClass_UComposureTonemapperPass_Statics; \
public: \
	DECLARE_CLASS(UComposureTonemapperPass, UComposurePostProcessPass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposureTonemapperPass)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUComposureTonemapperPass(); \
	friend struct Z_Construct_UClass_UComposureTonemapperPass_Statics; \
public: \
	DECLARE_CLASS(UComposureTonemapperPass, UComposurePostProcessPass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposureTonemapperPass)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureTonemapperPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureTonemapperPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureTonemapperPass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureTonemapperPass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposureTonemapperPass(UComposureTonemapperPass&&); \
	NO_API UComposureTonemapperPass(const UComposureTonemapperPass&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureTonemapperPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposureTonemapperPass(UComposureTonemapperPass&&); \
	NO_API UComposureTonemapperPass(const UComposureTonemapperPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureTonemapperPass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureTonemapperPass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureTonemapperPass)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_24_PROLOG
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComposureTonemapperPass."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposureTonemapperPass>();

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_RPC_WRAPPERS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposureTonemapperPassPolicy(); \
	friend struct Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics; \
public: \
	DECLARE_CLASS(UComposureTonemapperPassPolicy, UComposurePostProcessPassPolicy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposureTonemapperPassPolicy)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUComposureTonemapperPassPolicy(); \
	friend struct Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics; \
public: \
	DECLARE_CLASS(UComposureTonemapperPassPolicy, UComposurePostProcessPassPolicy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposureTonemapperPassPolicy)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureTonemapperPassPolicy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureTonemapperPassPolicy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureTonemapperPassPolicy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureTonemapperPassPolicy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposureTonemapperPassPolicy(UComposureTonemapperPassPolicy&&); \
	NO_API UComposureTonemapperPassPolicy(const UComposureTonemapperPassPolicy&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposureTonemapperPassPolicy(UComposureTonemapperPassPolicy&&); \
	NO_API UComposureTonemapperPassPolicy(const UComposureTonemapperPassPolicy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureTonemapperPassPolicy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureTonemapperPassPolicy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComposureTonemapperPassPolicy)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_54_PROLOG
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposureTonemapperPassPolicy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
