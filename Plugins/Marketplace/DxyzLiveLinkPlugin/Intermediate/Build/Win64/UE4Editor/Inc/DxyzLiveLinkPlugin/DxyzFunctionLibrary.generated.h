// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubjectCalib;
struct FRotator;
class UObject;
struct FVector2D;
 
#ifdef DXYZLIVELINKPLUGIN_DxyzFunctionLibrary_generated_h
#error "DxyzFunctionLibrary.generated.h already included, missing '#pragma once' in DxyzFunctionLibrary.h"
#endif
#define DXYZLIVELINKPLUGIN_DxyzFunctionLibrary_generated_h

#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubjectData_Statics; \
	DXYZLIVELINKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<struct FSubjectData>();

#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubjectCalib_Statics; \
	DXYZLIVELINKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<struct FSubjectCalib>();

#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAxisClamp_Statics; \
	DXYZLIVELINKPLUGIN_API static class UScriptStruct* StaticStruct();


template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<struct FAxisClamp>();

#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_SPARSE_DATA
#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSubjectDataToLiveLink); \
	DECLARE_FUNCTION(execApplySubjectCalibrations); \
	DECLARE_FUNCTION(execApplySubjectOffsets); \
	DECLARE_FUNCTION(execApplySubjectEyesOffset); \
	DECLARE_FUNCTION(execApplySubjectHeadOffset); \
	DECLARE_FUNCTION(execGetSubjectRetargetingStatus); \
	DECLARE_FUNCTION(execSetRetargetingStatusForSubject); \
	DECLARE_FUNCTION(execGetSubjectCalibrations); \
	DECLARE_FUNCTION(execGetSubjectOffsets); \
	DECLARE_FUNCTION(execSetEyesCalibrationForSubject); \
	DECLARE_FUNCTION(execSetHeadCalibrationForSubject); \
	DECLARE_FUNCTION(execComputeEyesOffset); \
	DECLARE_FUNCTION(execComputeHeadOffset); \
	DECLARE_FUNCTION(execCreateSubjectEntry); \
	DECLARE_FUNCTION(execSaveConfigFile); \
	DECLARE_FUNCTION(execSaveWidgetState); \
	DECLARE_FUNCTION(execLoadWidgetState); \
	DECLARE_FUNCTION(execLoadConfigFile); \
	DECLARE_FUNCTION(execIsDxyzSubject);


#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSubjectDataToLiveLink); \
	DECLARE_FUNCTION(execApplySubjectCalibrations); \
	DECLARE_FUNCTION(execApplySubjectOffsets); \
	DECLARE_FUNCTION(execApplySubjectEyesOffset); \
	DECLARE_FUNCTION(execApplySubjectHeadOffset); \
	DECLARE_FUNCTION(execGetSubjectRetargetingStatus); \
	DECLARE_FUNCTION(execSetRetargetingStatusForSubject); \
	DECLARE_FUNCTION(execGetSubjectCalibrations); \
	DECLARE_FUNCTION(execGetSubjectOffsets); \
	DECLARE_FUNCTION(execSetEyesCalibrationForSubject); \
	DECLARE_FUNCTION(execSetHeadCalibrationForSubject); \
	DECLARE_FUNCTION(execComputeEyesOffset); \
	DECLARE_FUNCTION(execComputeHeadOffset); \
	DECLARE_FUNCTION(execCreateSubjectEntry); \
	DECLARE_FUNCTION(execSaveConfigFile); \
	DECLARE_FUNCTION(execSaveWidgetState); \
	DECLARE_FUNCTION(execLoadWidgetState); \
	DECLARE_FUNCTION(execLoadConfigFile); \
	DECLARE_FUNCTION(execIsDxyzSubject);


#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDxyzFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDxyzFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDxyzFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DxyzLiveLinkPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDxyzFunctionLibrary)


#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_INCLASS \
private: \
	static void StaticRegisterNativesUDxyzFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDxyzFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDxyzFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DxyzLiveLinkPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDxyzFunctionLibrary)


#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDxyzFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDxyzFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDxyzFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDxyzFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDxyzFunctionLibrary(UDxyzFunctionLibrary&&); \
	NO_API UDxyzFunctionLibrary(const UDxyzFunctionLibrary&); \
public:


#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDxyzFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDxyzFunctionLibrary(UDxyzFunctionLibrary&&); \
	NO_API UDxyzFunctionLibrary(const UDxyzFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDxyzFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDxyzFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDxyzFunctionLibrary)


#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_148_PROLOG
#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_SPARSE_DATA \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_RPC_WRAPPERS \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_INCLASS \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_SPARSE_DATA \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DXYZLIVELINKPLUGIN_API UClass* StaticClass<class UDxyzFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DxyzLiveLinkPlugin_Source_DxyzLiveLinkPlugin_Private_DxyzFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
