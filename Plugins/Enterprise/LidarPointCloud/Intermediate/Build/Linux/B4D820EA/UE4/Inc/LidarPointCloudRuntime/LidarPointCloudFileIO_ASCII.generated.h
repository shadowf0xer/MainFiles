// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector2D;
struct FLidarPointCloudImportSettings_ASCII_Columns;
struct FLatentActionInfo;
enum class ELidarPointCloudAsyncMode : uint8;
class ULidarPointCloud;
#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_ASCII_generated_h
#error "LidarPointCloudFileIO_ASCII.generated.h already included, missing '#pragma once' in LidarPointCloudFileIO_ASCII.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_ASCII_generated_h

#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics; \
	LIDARPOINTCLOUDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<struct FLidarPointCloudImportSettings_ASCII_Columns>();

#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_SPARSE_DATA
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePointCloudFromFile);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePointCloudFromFile);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarPointCloudFileIO_ASCII(); \
	friend struct Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudFileIO_ASCII, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudFileIO_ASCII)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_INCLASS \
private: \
	static void StaticRegisterNativesULidarPointCloudFileIO_ASCII(); \
	friend struct Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudFileIO_ASCII, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudFileIO_ASCII)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloudFileIO_ASCII(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloudFileIO_ASCII) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudFileIO_ASCII); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudFileIO_ASCII); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudFileIO_ASCII(ULidarPointCloudFileIO_ASCII&&); \
	NO_API ULidarPointCloudFileIO_ASCII(const ULidarPointCloudFileIO_ASCII&); \
public:


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudFileIO_ASCII(ULidarPointCloudFileIO_ASCII&&); \
	NO_API ULidarPointCloudFileIO_ASCII(const ULidarPointCloudFileIO_ASCII&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudFileIO_ASCII); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudFileIO_ASCII); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarPointCloudFileIO_ASCII)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_150_PROLOG
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_INCLASS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<class ULidarPointCloudFileIO_ASCII>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
