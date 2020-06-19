// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFootstepComponent;
#ifdef SURFACEFOOTSTEPSYSTEM_FootstepInterface_generated_h
#error "FootstepInterface.generated.h already included, missing '#pragma once' in FootstepInterface.h"
#endif
#define SURFACEFOOTSTEPSYSTEM_FootstepInterface_generated_h

#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_SPARSE_DATA
#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_RPC_WRAPPERS \
	virtual UFootstepComponent* GetFootstepComponent_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetFootstepComponent);


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UFootstepComponent* GetFootstepComponent_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetFootstepComponent);


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_EVENT_PARMS \
	struct FootstepInterface_eventGetFootstepComponent_Parms \
	{ \
		UFootstepComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FootstepInterface_eventGetFootstepComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFootstepInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFootstepInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFootstepInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootstepInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFootstepInterface(UFootstepInterface&&); \
	NO_API UFootstepInterface(const UFootstepInterface&); \
public:


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFootstepInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFootstepInterface(UFootstepInterface&&); \
	NO_API UFootstepInterface(const UFootstepInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFootstepInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootstepInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFootstepInterface)


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFootstepInterface(); \
	friend struct Z_Construct_UClass_UFootstepInterface_Statics; \
public: \
	DECLARE_CLASS(UFootstepInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SurfaceFootstepSystem"), NO_API) \
	DECLARE_SERIALIZER(UFootstepInterface)


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFootstepInterface() {} \
public: \
	typedef UFootstepInterface UClassType; \
	typedef IFootstepInterface ThisClass; \
	static UFootstepComponent* Execute_GetFootstepComponent(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IFootstepInterface() {} \
public: \
	typedef UFootstepInterface UClassType; \
	typedef IFootstepInterface ThisClass; \
	static UFootstepComponent* Execute_GetFootstepComponent(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_12_PROLOG \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_EVENT_PARMS


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_SPARSE_DATA \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_RPC_WRAPPERS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_SPARSE_DATA \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURFACEFOOTSTEPSYSTEM_API UClass* StaticClass<class UFootstepInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SurfaceFootstepSystem_Source_SurfaceFootstepSystem_Public_FootstepInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
