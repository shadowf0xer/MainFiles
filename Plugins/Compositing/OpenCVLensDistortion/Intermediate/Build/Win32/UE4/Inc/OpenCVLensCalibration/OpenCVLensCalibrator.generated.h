// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOpenCVLensDistortionParameters;
struct FOpenCVCameraViewInfo;
class UTextureRenderTarget2D;
class UOpenCVLensCalibrator;
#ifdef OPENCVLENSCALIBRATION_OpenCVLensCalibrator_generated_h
#error "OpenCVLensCalibrator.generated.h already included, missing '#pragma once' in OpenCVLensCalibrator.h"
#endif
#define OPENCVLENSCALIBRATION_OpenCVLensCalibrator_generated_h

#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_SPARSE_DATA
#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateLensParameters); \
	DECLARE_FUNCTION(execFeedImage); \
	DECLARE_FUNCTION(execFeedRenderTarget); \
	DECLARE_FUNCTION(execCreateCalibrator);


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateLensParameters); \
	DECLARE_FUNCTION(execFeedImage); \
	DECLARE_FUNCTION(execFeedRenderTarget); \
	DECLARE_FUNCTION(execCreateCalibrator);


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenCVLensCalibrator(); \
	friend struct Z_Construct_UClass_UOpenCVLensCalibrator_Statics; \
public: \
	DECLARE_CLASS(UOpenCVLensCalibrator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenCVLensCalibration"), NO_API) \
	DECLARE_SERIALIZER(UOpenCVLensCalibrator)


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUOpenCVLensCalibrator(); \
	friend struct Z_Construct_UClass_UOpenCVLensCalibrator_Statics; \
public: \
	DECLARE_CLASS(UOpenCVLensCalibrator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenCVLensCalibration"), NO_API) \
	DECLARE_SERIALIZER(UOpenCVLensCalibrator)


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenCVLensCalibrator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenCVLensCalibrator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenCVLensCalibrator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVLensCalibrator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenCVLensCalibrator(UOpenCVLensCalibrator&&); \
	NO_API UOpenCVLensCalibrator(const UOpenCVLensCalibrator&); \
public:


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenCVLensCalibrator(UOpenCVLensCalibrator&&); \
	NO_API UOpenCVLensCalibrator(const UOpenCVLensCalibrator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenCVLensCalibrator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVLensCalibrator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenCVLensCalibrator)


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_23_PROLOG
#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_SPARSE_DATA \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_RPC_WRAPPERS \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_INCLASS \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_SPARSE_DATA \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENCVLENSCALIBRATION_API UClass* StaticClass<class UOpenCVLensCalibrator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
