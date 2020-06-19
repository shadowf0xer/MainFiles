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
void EmptyLinkFunctionForGeneratedCodeSaveExtension_init() {}
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_LifetimeStartSignature__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_LifetimeSavedSignature__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_LifetimeResumeSignature__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_LifetimeFinishSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SaveExtension()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_LifetimeStartSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_LifetimeSavedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_LifetimeResumeSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_LifetimeFinishSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SaveExtension",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x399B3168,
				0x5B387C50,
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
