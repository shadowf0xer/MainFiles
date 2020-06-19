// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdddisonPlugin/Public/EdddisonBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdddisonBlueprintFunctionLibrary() {}
// Cross Module References
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_NoRegister();
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EdddisonPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UEdddisonBlueprintFunctionLibrary::execEdddisonClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEdddisonBlueprintFunctionLibrary::EdddisonClose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEdddisonBlueprintFunctionLibrary::execEdddisonOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEdddisonBlueprintFunctionLibrary::EdddisonOpen();
		P_NATIVE_END;
	}
	void UEdddisonBlueprintFunctionLibrary::StaticRegisterNativesUEdddisonBlueprintFunctionLibrary()
	{
		UClass* Class = UEdddisonBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EdddisonClose", &UEdddisonBlueprintFunctionLibrary::execEdddisonClose },
			{ "EdddisonOpen", &UEdddisonBlueprintFunctionLibrary::execEdddisonOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonClose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "edddison plugin" },
		{ "ModuleRelativePath", "Public/EdddisonBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary, nullptr, "EdddisonClose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonOpen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "edddison plugin" },
		{ "ModuleRelativePath", "Public/EdddisonBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary, nullptr, "EdddisonOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_NoRegister()
	{
		return UEdddisonBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EdddisonPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonClose, "EdddisonClose" }, // 3529764807
		{ &Z_Construct_UFunction_UEdddisonBlueprintFunctionLibrary_EdddisonOpen, "EdddisonOpen" }, // 3634354796
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Plubic access to edddison plugin with Blueprint functions\n */" },
		{ "IncludePath", "EdddisonBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/EdddisonBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Plubic access to edddison plugin with Blueprint functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdddisonBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_Statics::ClassParams = {
		&UEdddisonBlueprintFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdddisonBlueprintFunctionLibrary, 2403431712);
	template<> EDDDISONPLUGIN_API UClass* StaticClass<UEdddisonBlueprintFunctionLibrary>()
	{
		return UEdddisonBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdddisonBlueprintFunctionLibrary(Z_Construct_UClass_UEdddisonBlueprintFunctionLibrary, &UEdddisonBlueprintFunctionLibrary::StaticClass, TEXT("/Script/EdddisonPlugin"), TEXT("UEdddisonBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdddisonBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
