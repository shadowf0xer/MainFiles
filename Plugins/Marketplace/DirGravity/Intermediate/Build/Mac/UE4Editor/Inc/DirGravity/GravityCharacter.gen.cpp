// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DirGravity/Public/GravityCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityCharacter() {}
// Cross Module References
	DIRGRAVITY_API UClass* Z_Construct_UClass_AGravityCharacter_NoRegister();
	DIRGRAVITY_API UClass* Z_Construct_UClass_AGravityCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DirGravity();
	DIRGRAVITY_API UClass* Z_Construct_UClass_UGravityMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGravityCharacter::execGetGravityMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGravityMovementComponent**)Z_Param__Result=P_THIS->GetGravityMovementComponent();
		P_NATIVE_END;
	}
	void AGravityCharacter::StaticRegisterNativesAGravityCharacter()
	{
		UClass* Class = AGravityCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGravityMovementComponent", &AGravityCharacter::execGetGravityMovementComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics
	{
		struct GravityCharacter_eventGetGravityMovementComponent_Parms
		{
			UGravityMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GravityCharacter_eventGetGravityMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UGravityMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/GravityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGravityCharacter, nullptr, "GetGravityMovementComponent", nullptr, nullptr, sizeof(GravityCharacter_eventGetGravityMovementComponent_Parms), Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGravityCharacter_NoRegister()
	{
		return AGravityCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGravityCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGravityCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DirGravity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGravityCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGravityCharacter_GetGravityMovementComponent, "GetGravityMovementComponent" }, // 849556278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Gravity character class which overrides gravity movement component\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GravityCharacter.h" },
		{ "ModuleRelativePath", "Public/GravityCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Gravity character class which overrides gravity movement component" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGravityCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGravityCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGravityCharacter_Statics::ClassParams = {
		&AGravityCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGravityCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGravityCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGravityCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGravityCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGravityCharacter, 2284968123);
	template<> DIRGRAVITY_API UClass* StaticClass<AGravityCharacter>()
	{
		return AGravityCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGravityCharacter(Z_Construct_UClass_AGravityCharacter, &AGravityCharacter::StaticClass, TEXT("/Script/DirGravity"), TEXT("AGravityCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGravityCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
