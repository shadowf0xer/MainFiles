// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFaction;
enum class EFactionTestMode : uint8;
class AActor;
struct FFactionRelation;
struct FFactionInfo;
#ifdef FACTIONS_FactionsLibrary_generated_h
#error "FactionsLibrary.generated.h already included, missing '#pragma once' in FactionsLibrary.h"
#endif
#define FACTIONS_FactionsLibrary_generated_h

#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_SPARSE_DATA
#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllActorsWithFaction); \
	DECLARE_FUNCTION(execUnregistryRelation); \
	DECLARE_FUNCTION(execRegistryRelation); \
	DECLARE_FUNCTION(execGetAllFactions); \
	DECLARE_FUNCTION(execUnregistryFaction); \
	DECLARE_FUNCTION(execRegistryFaction); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execIsNeutralFaction); \
	DECLARE_FUNCTION(execIsFriendlyFaction); \
	DECLARE_FUNCTION(execIsHostileFaction); \
	DECLARE_FUNCTION(execGetAttitudeToFaction); \
	DECLARE_FUNCTION(execIsNeutral); \
	DECLARE_FUNCTION(execIsFriendly); \
	DECLARE_FUNCTION(execIsHostile); \
	DECLARE_FUNCTION(execSharesFaction); \
	DECLARE_FUNCTION(execGetAttitudeTowards); \
	DECLARE_FUNCTION(execSetFactionInfo); \
	DECLARE_FUNCTION(execGetFactionInfo); \
	DECLARE_FUNCTION(execFactionIsNone); \
	DECLARE_FUNCTION(execSetFaction); \
	DECLARE_FUNCTION(execGetFaction); \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execEquals);


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllActorsWithFaction); \
	DECLARE_FUNCTION(execUnregistryRelation); \
	DECLARE_FUNCTION(execRegistryRelation); \
	DECLARE_FUNCTION(execGetAllFactions); \
	DECLARE_FUNCTION(execUnregistryFaction); \
	DECLARE_FUNCTION(execRegistryFaction); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execIsNeutralFaction); \
	DECLARE_FUNCTION(execIsFriendlyFaction); \
	DECLARE_FUNCTION(execIsHostileFaction); \
	DECLARE_FUNCTION(execGetAttitudeToFaction); \
	DECLARE_FUNCTION(execIsNeutral); \
	DECLARE_FUNCTION(execIsFriendly); \
	DECLARE_FUNCTION(execIsHostile); \
	DECLARE_FUNCTION(execSharesFaction); \
	DECLARE_FUNCTION(execGetAttitudeTowards); \
	DECLARE_FUNCTION(execSetFactionInfo); \
	DECLARE_FUNCTION(execGetFactionInfo); \
	DECLARE_FUNCTION(execFactionIsNone); \
	DECLARE_FUNCTION(execSetFaction); \
	DECLARE_FUNCTION(execGetFaction); \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execEquals);


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFactionsLibrary(); \
	friend struct Z_Construct_UClass_UFactionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UFactionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Factions"), NO_API) \
	DECLARE_SERIALIZER(UFactionsLibrary)


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUFactionsLibrary(); \
	friend struct Z_Construct_UClass_UFactionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UFactionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Factions"), NO_API) \
	DECLARE_SERIALIZER(UFactionsLibrary)


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactionsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactionsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactionsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFactionsLibrary(UFactionsLibrary&&); \
	NO_API UFactionsLibrary(const UFactionsLibrary&); \
public:


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFactionsLibrary(UFactionsLibrary&&); \
	NO_API UFactionsLibrary(const UFactionsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactionsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactionsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactionsLibrary)


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_28_PROLOG
#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_SPARSE_DATA \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_RPC_WRAPPERS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_INCLASS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_SPARSE_DATA \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTIONS_API UClass* StaticClass<class UFactionsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FactionsExtension_Source_Factions_Public_FactionsLibrary_h


#define FOREACH_ENUM_EFACTIONTESTMODE(op) \
	op(EFactionTestMode::IsTheSame) \
	op(EFactionTestMode::IsFriendly) \
	op(EFactionTestMode::IsNeutral) \
	op(EFactionTestMode::IsHostile) 

enum class EFactionTestMode : uint8;
template<> FACTIONS_API UEnum* StaticEnum<EFactionTestMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
