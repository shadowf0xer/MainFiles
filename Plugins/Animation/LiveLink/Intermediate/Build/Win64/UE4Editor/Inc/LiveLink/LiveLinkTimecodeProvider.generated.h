// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINK_LiveLinkTimecodeProvider_generated_h
#error "LiveLinkTimecodeProvider.generated.h already included, missing '#pragma once' in LiveLinkTimecodeProvider.h"
#endif
#define LIVELINK_LiveLinkTimecodeProvider_generated_h

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_SPARSE_DATA
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_RPC_WRAPPERS
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkTimecodeProvider(); \
	friend struct Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkTimecodeProvider, UTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkTimecodeProvider) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkTimecodeProvider(); \
	friend struct Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkTimecodeProvider, UTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkTimecodeProvider) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkTimecodeProvider(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkTimecodeProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkTimecodeProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkTimecodeProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkTimecodeProvider(ULiveLinkTimecodeProvider&&); \
	NO_API ULiveLinkTimecodeProvider(const ULiveLinkTimecodeProvider&); \
public:


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkTimecodeProvider(ULiveLinkTimecodeProvider&&); \
	NO_API ULiveLinkTimecodeProvider(const ULiveLinkTimecodeProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkTimecodeProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkTimecodeProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkTimecodeProvider)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SubjectKey() { return STRUCT_OFFSET(ULiveLinkTimecodeProvider, SubjectKey); } \
	FORCEINLINE static uint32 __PPO__Evaluation() { return STRUCT_OFFSET(ULiveLinkTimecodeProvider, Evaluation); } \
	FORCEINLINE static uint32 __PPO__bOverrideFrameRate() { return STRUCT_OFFSET(ULiveLinkTimecodeProvider, bOverrideFrameRate); } \
	FORCEINLINE static uint32 __PPO__OverrideFrameRate() { return STRUCT_OFFSET(ULiveLinkTimecodeProvider, OverrideFrameRate); } \
	FORCEINLINE static uint32 __PPO__BufferSize() { return STRUCT_OFFSET(ULiveLinkTimecodeProvider, BufferSize); }


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_29_PROLOG
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_RPC_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_INCLASS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_SPARSE_DATA \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkTimecodeProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h


#define FOREACH_ENUM_ELIVELINKTIMECODEPROVIDEREVALUATIONTYPE(op) \
	op(ELiveLinkTimecodeProviderEvaluationType::Lerp) \
	op(ELiveLinkTimecodeProviderEvaluationType::Nearest) \
	op(ELiveLinkTimecodeProviderEvaluationType::Latest) 

enum class ELiveLinkTimecodeProviderEvaluationType;
template<> LIVELINK_API UEnum* StaticEnum<ELiveLinkTimecodeProviderEvaluationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
