// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CircularDependenciesDetector/Private/CircularDependenciesLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircularDependenciesLib() {}
// Cross Module References
	CIRCULARDEPENDENCIESDETECTOR_API UClass* Z_Construct_UClass_UCircularDependenciesLib_NoRegister();
	CIRCULARDEPENDENCIESDETECTOR_API UClass* Z_Construct_UClass_UCircularDependenciesLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CircularDependenciesDetector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCircularDependenciesLib::execSearchInBlueprint)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_GET_UBOOL(Z_Param_bAllBlueprints);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewSearchTerms);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCircularDependenciesLib::SearchInBlueprint(Z_Param_Asset,Z_Param_bAllBlueprints,Z_Param_NewSearchTerms);
		P_NATIVE_END;
	}
	void UCircularDependenciesLib::StaticRegisterNativesUCircularDependenciesLib()
	{
		UClass* Class = UCircularDependenciesLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SearchInBlueprint", &UCircularDependenciesLib::execSearchInBlueprint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics
	{
		struct CircularDependenciesLib_eventSearchInBlueprint_Parms
		{
			UObject* Asset;
			bool bAllBlueprints;
			FString NewSearchTerms;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewSearchTerms;
		static void NewProp_bAllBlueprints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllBlueprints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::NewProp_NewSearchTerms = { "NewSearchTerms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CircularDependenciesLib_eventSearchInBlueprint_Parms, NewSearchTerms), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::NewProp_bAllBlueprints_SetBit(void* Obj)
	{
		((CircularDependenciesLib_eventSearchInBlueprint_Parms*)Obj)->bAllBlueprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::NewProp_bAllBlueprints = { "bAllBlueprints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CircularDependenciesLib_eventSearchInBlueprint_Parms), &Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::NewProp_bAllBlueprints_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CircularDependenciesLib_eventSearchInBlueprint_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::NewProp_NewSearchTerms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::NewProp_bAllBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Keywords", "find editor" },
		{ "ModuleRelativePath", "Private/CircularDependenciesLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularDependenciesLib, nullptr, "SearchInBlueprint", nullptr, nullptr, sizeof(CircularDependenciesLib_eventSearchInBlueprint_Parms), Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCircularDependenciesLib_NoRegister()
	{
		return UCircularDependenciesLib::StaticClass();
	}
	struct Z_Construct_UClass_UCircularDependenciesLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCircularDependenciesLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CircularDependenciesDetector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCircularDependenciesLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCircularDependenciesLib_SearchInBlueprint, "SearchInBlueprint" }, // 2345393009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularDependenciesLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CircularDependenciesLib.h" },
		{ "ModuleRelativePath", "Private/CircularDependenciesLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCircularDependenciesLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCircularDependenciesLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCircularDependenciesLib_Statics::ClassParams = {
		&UCircularDependenciesLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCircularDependenciesLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCircularDependenciesLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCircularDependenciesLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCircularDependenciesLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCircularDependenciesLib, 195315899);
	template<> CIRCULARDEPENDENCIESDETECTOR_API UClass* StaticClass<UCircularDependenciesLib>()
	{
		return UCircularDependenciesLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCircularDependenciesLib(Z_Construct_UClass_UCircularDependenciesLib, &UCircularDependenciesLib::StaticClass, TEXT("/Script/CircularDependenciesDetector"), TEXT("UCircularDependenciesLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCircularDependenciesLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
