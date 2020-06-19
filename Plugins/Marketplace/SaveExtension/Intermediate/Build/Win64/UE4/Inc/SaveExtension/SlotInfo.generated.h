// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef SAVEEXTENSION_SlotInfo_generated_h
#error "SlotInfo.generated.h already included, missing '#pragma once' in SlotInfo.h"
#endif
#define SAVEEXTENSION_SlotInfo_generated_h

#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_SPARSE_DATA
#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetThumbnail);


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetThumbnail);


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlotInfo(); \
	friend struct Z_Construct_UClass_USlotInfo_Statics; \
public: \
	DECLARE_CLASS(USlotInfo, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USlotInfo)


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSlotInfo(); \
	friend struct Z_Construct_UClass_USlotInfo_Statics; \
public: \
	DECLARE_CLASS(USlotInfo, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USlotInfo)


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlotInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlotInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlotInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlotInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlotInfo(USlotInfo&&); \
	NO_API USlotInfo(const USlotInfo&); \
public:


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlotInfo(USlotInfo&&); \
	NO_API USlotInfo(const USlotInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlotInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlotInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlotInfo)


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ThumbnailPath() { return STRUCT_OFFSET(USlotInfo, ThumbnailPath); } \
	FORCEINLINE static uint32 __PPO__CachedThumbnail() { return STRUCT_OFFSET(USlotInfo, CachedThumbnail); }


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_17_PROLOG
#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_SPARSE_DATA \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_RPC_WRAPPERS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_INCLASS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_SPARSE_DATA \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEEXTENSION_API UClass* StaticClass<class USlotInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
