// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TARGETSYSTEM_TargetSystemTargetableInterface_generated_h
#error "TargetSystemTargetableInterface.generated.h already included, missing '#pragma once' in TargetSystemTargetableInterface.h"
#endif
#define TARGETSYSTEM_TargetSystemTargetableInterface_generated_h

#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_SPARSE_DATA
#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_RPC_WRAPPERS \
	virtual bool IsTargetable_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execIsTargetable);


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsTargetable_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execIsTargetable);


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_EVENT_PARMS \
	struct TargetSystemTargetableInterface_eventIsTargetable_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TargetSystemTargetableInterface_eventIsTargetable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_CALLBACK_WRAPPERS
#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetSystemTargetableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetSystemTargetableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetSystemTargetableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetSystemTargetableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetSystemTargetableInterface(UTargetSystemTargetableInterface&&); \
	NO_API UTargetSystemTargetableInterface(const UTargetSystemTargetableInterface&); \
public:


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetSystemTargetableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetSystemTargetableInterface(UTargetSystemTargetableInterface&&); \
	NO_API UTargetSystemTargetableInterface(const UTargetSystemTargetableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetSystemTargetableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetSystemTargetableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetSystemTargetableInterface)


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTargetSystemTargetableInterface(); \
	friend struct Z_Construct_UClass_UTargetSystemTargetableInterface_Statics; \
public: \
	DECLARE_CLASS(UTargetSystemTargetableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TargetSystem"), NO_API) \
	DECLARE_SERIALIZER(UTargetSystemTargetableInterface)


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITargetSystemTargetableInterface() {} \
public: \
	typedef UTargetSystemTargetableInterface UClassType; \
	typedef ITargetSystemTargetableInterface ThisClass; \
	static bool Execute_IsTargetable(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITargetSystemTargetableInterface() {} \
public: \
	typedef UTargetSystemTargetableInterface UClassType; \
	typedef ITargetSystemTargetableInterface ThisClass; \
	static bool Execute_IsTargetable(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_10_PROLOG \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_EVENT_PARMS


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_SPARSE_DATA \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_RPC_WRAPPERS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_SPARSE_DATA \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETSYSTEM_API UClass* StaticClass<class UTargetSystemTargetableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TargetSystem_Source_TargetSystem_Public_TargetSystemTargetableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
