// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFaction;
#ifdef FACTIONS_FactionAgentInterface_generated_h
#error "FactionAgentInterface.generated.h already included, missing '#pragma once' in FactionAgentInterface.h"
#endif
#define FACTIONS_FactionAgentInterface_generated_h

#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_SPARSE_DATA
#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_RPC_WRAPPERS \
	virtual void EventSetFaction_Implementation(FFaction const& Faction) {}; \
	virtual void EventGetFaction_Implementation(FFaction& OutFaction) const {}; \
 \
	DECLARE_FUNCTION(execEventSetFaction); \
	DECLARE_FUNCTION(execEventGetFaction);


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEventSetFaction); \
	DECLARE_FUNCTION(execEventGetFaction);


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_EVENT_PARMS \
	struct FactionAgentInterface_eventEventGetFaction_Parms \
	{ \
		FFaction OutFaction; \
	}; \
	struct FactionAgentInterface_eventEventSetFaction_Parms \
	{ \
		FFaction Faction; \
	};


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_CALLBACK_WRAPPERS
#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactionAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactionAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactionAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactionAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFactionAgentInterface(UFactionAgentInterface&&); \
	NO_API UFactionAgentInterface(const UFactionAgentInterface&); \
public:


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactionAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFactionAgentInterface(UFactionAgentInterface&&); \
	NO_API UFactionAgentInterface(const UFactionAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactionAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactionAgentInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactionAgentInterface)


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFactionAgentInterface(); \
	friend struct Z_Construct_UClass_UFactionAgentInterface_Statics; \
public: \
	DECLARE_CLASS(UFactionAgentInterface, UGenericTeamAgentInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Factions"), NO_API) \
	DECLARE_SERIALIZER(UFactionAgentInterface)


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFactionAgentInterface() {} \
public: \
	typedef UFactionAgentInterface UClassType; \
	typedef IFactionAgentInterface ThisClass; \
	static void Execute_EventGetFaction(const UObject* O, FFaction& OutFaction); \
	static void Execute_EventSetFaction(UObject* O, FFaction const& Faction); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IFactionAgentInterface() {} \
public: \
	typedef UFactionAgentInterface UClassType; \
	typedef IFactionAgentInterface ThisClass; \
	static void Execute_EventGetFaction(const UObject* O, FFaction& OutFaction); \
	static void Execute_EventSetFaction(UObject* O, FFaction const& Faction); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_13_PROLOG \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_EVENT_PARMS


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_SPARSE_DATA \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_RPC_WRAPPERS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_SPARSE_DATA \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTIONS_API UClass* StaticClass<class UFactionAgentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FactionsExtension_Source_Factions_Public_Factions_FactionAgentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
