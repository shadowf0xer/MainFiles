// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULowEntryDouble;
class ULowEntryLong;
class ULowEntryByteDataReader;
#ifdef LOWENTRYEXTENDEDSTANDARDLIBRARY_LowEntryByteDataReader_generated_h
#error "LowEntryByteDataReader.generated.h already included, missing '#pragma once' in LowEntryByteDataReader.h"
#endif
#define LOWENTRYEXTENDEDSTANDARDLIBRARY_LowEntryByteDataReader_generated_h

#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_SPARSE_DATA
#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStringUtf8Array); \
	DECLARE_FUNCTION(execGetBooleanArray); \
	DECLARE_FUNCTION(execGetDoubleBytesArray); \
	DECLARE_FUNCTION(execGetFloatArray); \
	DECLARE_FUNCTION(execGetLongBytesArray); \
	DECLARE_FUNCTION(execGetPositiveInteger3Array); \
	DECLARE_FUNCTION(execGetPositiveInteger2Array); \
	DECLARE_FUNCTION(execGetPositiveInteger1Array); \
	DECLARE_FUNCTION(execGetIntegerArray); \
	DECLARE_FUNCTION(execGetByteArray); \
	DECLARE_FUNCTION(execGetStringUtf8); \
	DECLARE_FUNCTION(execGetBoolean); \
	DECLARE_FUNCTION(execGetDoubleBytes); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetLongBytes); \
	DECLARE_FUNCTION(execGetPositiveInteger3); \
	DECLARE_FUNCTION(execGetPositiveInteger2); \
	DECLARE_FUNCTION(execGetPositiveInteger1); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execGetByte); \
	DECLARE_FUNCTION(execRemaining); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetClone);


#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStringUtf8Array); \
	DECLARE_FUNCTION(execGetBooleanArray); \
	DECLARE_FUNCTION(execGetDoubleBytesArray); \
	DECLARE_FUNCTION(execGetFloatArray); \
	DECLARE_FUNCTION(execGetLongBytesArray); \
	DECLARE_FUNCTION(execGetPositiveInteger3Array); \
	DECLARE_FUNCTION(execGetPositiveInteger2Array); \
	DECLARE_FUNCTION(execGetPositiveInteger1Array); \
	DECLARE_FUNCTION(execGetIntegerArray); \
	DECLARE_FUNCTION(execGetByteArray); \
	DECLARE_FUNCTION(execGetStringUtf8); \
	DECLARE_FUNCTION(execGetBoolean); \
	DECLARE_FUNCTION(execGetDoubleBytes); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetLongBytes); \
	DECLARE_FUNCTION(execGetPositiveInteger3); \
	DECLARE_FUNCTION(execGetPositiveInteger2); \
	DECLARE_FUNCTION(execGetPositiveInteger1); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execGetByte); \
	DECLARE_FUNCTION(execRemaining); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetClone);


#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULowEntryByteDataReader(); \
	friend struct Z_Construct_UClass_ULowEntryByteDataReader_Statics; \
public: \
	DECLARE_CLASS(ULowEntryByteDataReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LowEntryExtendedStandardLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULowEntryByteDataReader)


#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULowEntryByteDataReader(); \
	friend struct Z_Construct_UClass_ULowEntryByteDataReader_Statics; \
public: \
	DECLARE_CLASS(ULowEntryByteDataReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LowEntryExtendedStandardLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULowEntryByteDataReader)


#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULowEntryByteDataReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULowEntryByteDataReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULowEntryByteDataReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULowEntryByteDataReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULowEntryByteDataReader(ULowEntryByteDataReader&&); \
	NO_API ULowEntryByteDataReader(const ULowEntryByteDataReader&); \
public:


#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULowEntryByteDataReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULowEntryByteDataReader(ULowEntryByteDataReader&&); \
	NO_API ULowEntryByteDataReader(const ULowEntryByteDataReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULowEntryByteDataReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULowEntryByteDataReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULowEntryByteDataReader)


#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_15_PROLOG
#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_SPARSE_DATA \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_RPC_WRAPPERS \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_INCLASS \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_SPARSE_DATA \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LowEntryByteDataReader."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<class ULowEntryByteDataReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteDataReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
