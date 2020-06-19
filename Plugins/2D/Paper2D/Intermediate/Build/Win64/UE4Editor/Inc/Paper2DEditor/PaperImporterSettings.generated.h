// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2DEDITOR_PaperImporterSettings_generated_h
#error "PaperImporterSettings.generated.h already included, missing '#pragma once' in PaperImporterSettings.h"
#endif
#define PAPER2DEDITOR_PaperImporterSettings_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_RPC_WRAPPERS
#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperImporterSettings(); \
	friend struct Z_Construct_UClass_UPaperImporterSettings_Statics; \
public: \
	DECLARE_CLASS(UPaperImporterSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), NO_API) \
	DECLARE_SERIALIZER(UPaperImporterSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUPaperImporterSettings(); \
	friend struct Z_Construct_UClass_UPaperImporterSettings_Statics; \
public: \
	DECLARE_CLASS(UPaperImporterSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), NO_API) \
	DECLARE_SERIALIZER(UPaperImporterSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperImporterSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperImporterSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperImporterSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperImporterSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperImporterSettings(UPaperImporterSettings&&); \
	NO_API UPaperImporterSettings(const UPaperImporterSettings&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperImporterSettings(UPaperImporterSettings&&); \
	NO_API UPaperImporterSettings(const UPaperImporterSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperImporterSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperImporterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPaperImporterSettings)


#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bPickBestMaterialWhenCreatingSprites() { return STRUCT_OFFSET(UPaperImporterSettings, bPickBestMaterialWhenCreatingSprites); } \
	FORCEINLINE static uint32 __PPO__bPickBestMaterialWhenCreatingTileMaps() { return STRUCT_OFFSET(UPaperImporterSettings, bPickBestMaterialWhenCreatingTileMaps); } \
	FORCEINLINE static uint32 __PPO__bAnalysisCanUseOpaque() { return STRUCT_OFFSET(UPaperImporterSettings, bAnalysisCanUseOpaque); } \
	FORCEINLINE static uint32 __PPO__DefaultPixelsPerUnrealUnit() { return STRUCT_OFFSET(UPaperImporterSettings, DefaultPixelsPerUnrealUnit); } \
	FORCEINLINE static uint32 __PPO__NormalMapTextureSuffixes() { return STRUCT_OFFSET(UPaperImporterSettings, NormalMapTextureSuffixes); } \
	FORCEINLINE static uint32 __PPO__BaseMapTextureSuffixes() { return STRUCT_OFFSET(UPaperImporterSettings, BaseMapTextureSuffixes); } \
	FORCEINLINE static uint32 __PPO__DefaultSpriteTextureGroup() { return STRUCT_OFFSET(UPaperImporterSettings, DefaultSpriteTextureGroup); } \
	FORCEINLINE static uint32 __PPO__bOverrideTextureCompression() { return STRUCT_OFFSET(UPaperImporterSettings, bOverrideTextureCompression); } \
	FORCEINLINE static uint32 __PPO__DefaultSpriteTextureCompression() { return STRUCT_OFFSET(UPaperImporterSettings, DefaultSpriteTextureCompression); } \
	FORCEINLINE static uint32 __PPO__UnlitDefaultMaskedMaterialName() { return STRUCT_OFFSET(UPaperImporterSettings, UnlitDefaultMaskedMaterialName); } \
	FORCEINLINE static uint32 __PPO__UnlitDefaultTranslucentMaterialName() { return STRUCT_OFFSET(UPaperImporterSettings, UnlitDefaultTranslucentMaterialName); } \
	FORCEINLINE static uint32 __PPO__UnlitDefaultOpaqueMaterialName() { return STRUCT_OFFSET(UPaperImporterSettings, UnlitDefaultOpaqueMaterialName); } \
	FORCEINLINE static uint32 __PPO__LitDefaultMaskedMaterialName() { return STRUCT_OFFSET(UPaperImporterSettings, LitDefaultMaskedMaterialName); } \
	FORCEINLINE static uint32 __PPO__LitDefaultTranslucentMaterialName() { return STRUCT_OFFSET(UPaperImporterSettings, LitDefaultTranslucentMaterialName); } \
	FORCEINLINE static uint32 __PPO__LitDefaultOpaqueMaterialName() { return STRUCT_OFFSET(UPaperImporterSettings, LitDefaultOpaqueMaterialName); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_51_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2DEDITOR_API UClass* StaticClass<class UPaperImporterSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
