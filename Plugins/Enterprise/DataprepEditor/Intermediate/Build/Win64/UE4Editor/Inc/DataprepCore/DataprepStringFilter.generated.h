// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAPREPCORE_DataprepStringFilter_generated_h
#error "DataprepStringFilter.generated.h already included, missing '#pragma once' in DataprepStringFilter.h"
#endif
#define DATAPREPCORE_DataprepStringFilter_generated_h

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_RPC_WRAPPERS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepStringFilter(); \
	friend struct Z_Construct_UClass_UDataprepStringFilter_Statics; \
public: \
	DECLARE_CLASS(UDataprepStringFilter, UDataprepFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepStringFilter)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepStringFilter(); \
	friend struct Z_Construct_UClass_UDataprepStringFilter_Statics; \
public: \
	DECLARE_CLASS(UDataprepStringFilter, UDataprepFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepStringFilter)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepStringFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepStringFilter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepStringFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepStringFilter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepStringFilter(UDataprepStringFilter&&); \
	NO_API UDataprepStringFilter(const UDataprepStringFilter&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepStringFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepStringFilter(UDataprepStringFilter&&); \
	NO_API UDataprepStringFilter(const UDataprepStringFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepStringFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepStringFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepStringFilter)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StringMatchingCriteria() { return STRUCT_OFFSET(UDataprepStringFilter, StringMatchingCriteria); } \
	FORCEINLINE static uint32 __PPO__UserString() { return STRUCT_OFFSET(UDataprepStringFilter, UserString); } \
	FORCEINLINE static uint32 __PPO__StringFetcher() { return STRUCT_OFFSET(UDataprepStringFilter, StringFetcher); }


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_24_PROLOG
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepStringFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringFilter_h


#define FOREACH_ENUM_EDATAPREPSTRINGMATCHTYPE(op) \
	op(EDataprepStringMatchType::Contains) \
	op(EDataprepStringMatchType::MatchesWildcard) \
	op(EDataprepStringMatchType::ExactMatch) 

enum class EDataprepStringMatchType : uint8;
template<> DATAPREPCORE_API UEnum* StaticEnum<EDataprepStringMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
