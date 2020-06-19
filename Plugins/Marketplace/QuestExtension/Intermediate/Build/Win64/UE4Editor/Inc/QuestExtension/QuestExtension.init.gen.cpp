// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestExtension_init() {}
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestExtension()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/QuestExtension",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x11AA1D99,
				0xD64386EA,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
