// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VARIANTMANAGERCONTENTEDITOR_VariantManagerTestActor_generated_h
#error "VariantManagerTestActor.generated.h already included, missing '#pragma once' in VariantManagerTestActor.h"
#endif
#define VARIANTMANAGERCONTENTEDITOR_VariantManagerTestActor_generated_h

#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_SPARSE_DATA
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_RPC_WRAPPERS
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVariantManagerTestActor(); \
	friend struct Z_Construct_UClass_AVariantManagerTestActor_Statics; \
public: \
	DECLARE_CLASS(AVariantManagerTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VariantManagerContentEditor"), NO_API) \
	DECLARE_SERIALIZER(AVariantManagerTestActor)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAVariantManagerTestActor(); \
	friend struct Z_Construct_UClass_AVariantManagerTestActor_Statics; \
public: \
	DECLARE_CLASS(AVariantManagerTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VariantManagerContentEditor"), NO_API) \
	DECLARE_SERIALIZER(AVariantManagerTestActor)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVariantManagerTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVariantManagerTestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVariantManagerTestActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVariantManagerTestActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVariantManagerTestActor(AVariantManagerTestActor&&); \
	NO_API AVariantManagerTestActor(const AVariantManagerTestActor&); \
public:


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVariantManagerTestActor(AVariantManagerTestActor&&); \
	NO_API AVariantManagerTestActor(const AVariantManagerTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVariantManagerTestActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVariantManagerTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVariantManagerTestActor)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_20_PROLOG
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_INCLASS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_SPARSE_DATA \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENTEDITOR_API UClass* StaticClass<class AVariantManagerTestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h


#define FOREACH_ENUM_EVARIANTMANAGERTESTENUM(op) \
	op(EVariantManagerTestEnum::None) \
	op(EVariantManagerTestEnum::FirstOption) \
	op(EVariantManagerTestEnum::SecondOption) \
	op(EVariantManagerTestEnum::ThirdOption) 

enum class EVariantManagerTestEnum : uint8;
template<> VARIANTMANAGERCONTENTEDITOR_API UEnum* StaticEnum<EVariantManagerTestEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
