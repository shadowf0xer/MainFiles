// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APPLEVISION_AppleVisionTypes_generated_h
#error "AppleVisionTypes.generated.h already included, missing '#pragma once' in AppleVisionTypes.h"
#endif
#define APPLEVISION_AppleVisionTypes_generated_h

#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFaceDetectionResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> APPLEVISION_API UScriptStruct* StaticStruct<struct FFaceDetectionResult>();

#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDetectedFace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDetectedFeatureRegion Super;


template<> APPLEVISION_API UScriptStruct* StaticStruct<struct FDetectedFace>();

#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDetectedFeature2D Super;


template<> APPLEVISION_API UScriptStruct* StaticStruct<struct FDetectedFaceFeature2D>();

#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDetectedFeatureRegion Super;


template<> APPLEVISION_API UScriptStruct* StaticStruct<struct FDetectedFaceFeatureRegion>();

#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDetectedFeature Super;


template<> APPLEVISION_API UScriptStruct* StaticStruct<struct FDetectedFeatureRegion>();

#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDetectedFeature2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDetectedFeature Super;


template<> APPLEVISION_API UScriptStruct* StaticStruct<struct FDetectedFeature2D>();

#define Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDetectedFeature_Statics; \
	static class UScriptStruct* StaticStruct();


template<> APPLEVISION_API UScriptStruct* StaticStruct<struct FDetectedFeature>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h


#define FOREACH_ENUM_EDETECTEDFACEFEATURETYPE(op) \
	op(EDetectedFaceFeatureType::Unkown) \
	op(EDetectedFaceFeatureType::FaceContour) \
	op(EDetectedFaceFeatureType::InnerLips) \
	op(EDetectedFaceFeatureType::LeftEye) \
	op(EDetectedFaceFeatureType::LeftEyebrow) \
	op(EDetectedFaceFeatureType::LeftPupil) \
	op(EDetectedFaceFeatureType::MedianLine) \
	op(EDetectedFaceFeatureType::Nose) \
	op(EDetectedFaceFeatureType::NoseCrest) \
	op(EDetectedFaceFeatureType::OuterLips) \
	op(EDetectedFaceFeatureType::RightEye) \
	op(EDetectedFaceFeatureType::RightEyebrow) \
	op(EDetectedFaceFeatureType::RightPupil) 

enum class EDetectedFaceFeatureType : uint8;
template<> APPLEVISION_API UEnum* StaticEnum<EDetectedFaceFeatureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
