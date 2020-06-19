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
void EmptyLinkFunctionForGeneratedCodeAttributes_init() {}
	ATTRIBUTES_API UFunction* Z_Construct_UDelegateFunction_Attributes_FloatModifiedDelegate__DelegateSignature();
	ATTRIBUTES_API UFunction* Z_Construct_UDelegateFunction_Attributes_FloatModifiedMCDelegate__DelegateSignature();
	ATTRIBUTES_API UFunction* Z_Construct_UDelegateFunction_Attributes_Int32ModifiedDelegate__DelegateSignature();
	ATTRIBUTES_API UFunction* Z_Construct_UDelegateFunction_Attributes_Int32ModifiedMCDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Attributes()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Attributes_FloatModifiedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Attributes_FloatModifiedMCDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Attributes_Int32ModifiedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Attributes_Int32ModifiedMCDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Attributes",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x518BA254,
				0x751E6DF8,
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
