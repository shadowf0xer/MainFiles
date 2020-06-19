// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DirGravity/Public/GravityMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityMovementComponent() {}
// Cross Module References
	DIRGRAVITY_API UClass* Z_Construct_UClass_UGravityMovementComponent_NoRegister();
	DIRGRAVITY_API UClass* Z_Construct_UClass_UGravityMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_DirGravity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UGravityMovementComponent::execSetGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravityDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityDirection(Z_Param_NewGravityDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGravityMovementComponent::execGetGravityDirection)
	{
		P_GET_UBOOL(Z_Param_bAvoidZeroGravity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_bAvoidZeroGravity);
		P_NATIVE_END;
	}
	void UGravityMovementComponent::StaticRegisterNativesUGravityMovementComponent()
	{
		UClass* Class = UGravityMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGravityDirection", &UGravityMovementComponent::execGetGravityDirection },
			{ "SetGravityDirection", &UGravityMovementComponent::execSetGravityDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics
	{
		struct GravityMovementComponent_eventGetGravityDirection_Parms
		{
			bool bAvoidZeroGravity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bAvoidZeroGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAvoidZeroGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GravityMovementComponent_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity_SetBit(void* Obj)
	{
		((GravityMovementComponent_eventGetGravityDirection_Parms*)Obj)->bAvoidZeroGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity = { "bAvoidZeroGravity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GravityMovementComponent_eventGetGravityDirection_Parms), &Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "// Return the normalized direction of the current gravity.\n// @note Could return zero gravity.\n// \n// @param bAvoidZeroGravity - If true, zero gravity isn't returned.\n// @return Normalized direction of current gravity\n" },
		{ "CPP_Default_bAvoidZeroGravity", "false" },
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
		{ "ToolTip", "Return the normalized direction of the current gravity.\n@note Could return zero gravity.\n\n@param bAvoidZeroGravity - If true, zero gravity isn't returned.\n@return Normalized direction of current gravity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGravityMovementComponent, nullptr, "GetGravityDirection", nullptr, nullptr, sizeof(GravityMovementComponent_eventGetGravityDirection_Parms), Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics
	{
		struct GravityMovementComponent_eventSetGravityDirection_Parms
		{
			FVector NewGravityDirection;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::NewProp_NewGravityDirection = { "NewGravityDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GravityMovementComponent_eventSetGravityDirection_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::NewProp_NewGravityDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "// Set a custom gravity direction; use 0, 0, 0 to remove any custom direction.\n// @note It can be influenced by GravityScale.\n// @param NewGravityDirection - New gravity direction, assumes it isn't normalize\n" },
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
		{ "ToolTip", "Set a custom gravity direction; use 0, 0, 0 to remove any custom direction.\n@note It can be influenced by GravityScale.\n@param NewGravityDirection - New gravity direction, assumes it isn't normalize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGravityMovementComponent, nullptr, "SetGravityDirection", nullptr, nullptr, sizeof(GravityMovementComponent_eventSetGravityDirection_Parms), Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGravityMovementComponent_NoRegister()
	{
		return UGravityMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGravityMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomGravityDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomGravityDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugLines_MetaData[];
#endif
		static void NewProp_bShowDebugLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugLines;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGravityMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DirGravity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGravityMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGravityMovementComponent_GetGravityDirection, "GetGravityDirection" }, // 3847750704
		{ &Z_Construct_UFunction_UGravityMovementComponent_SetGravityDirection, "SetGravityDirection" }, // 2320653685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGravityMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Custom gravity movement component which moves provides directional gravity movement\n" },
		{ "IncludePath", "GravityMovementComponent.h" },
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
		{ "ToolTip", "Custom gravity movement component which moves provides directional gravity movement" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_CustomGravityDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_CustomGravityDirection = { "CustomGravityDirection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGravityMovementComponent, CustomGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_CustomGravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_CustomGravityDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// When moving debug lines are shown - velocity, acceleration\n" },
		{ "ModuleRelativePath", "Public/GravityMovementComponent.h" },
		{ "ToolTip", "When moving debug lines are shown - velocity, acceleration" },
	};
#endif
	void Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines_SetBit(void* Obj)
	{
		((UGravityMovementComponent*)Obj)->bShowDebugLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines = { "bShowDebugLines", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGravityMovementComponent), &Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGravityMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_CustomGravityDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGravityMovementComponent_Statics::NewProp_bShowDebugLines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGravityMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGravityMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGravityMovementComponent_Statics::ClassParams = {
		&UGravityMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGravityMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGravityMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGravityMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGravityMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGravityMovementComponent, 3579191485);
	template<> DIRGRAVITY_API UClass* StaticClass<UGravityMovementComponent>()
	{
		return UGravityMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGravityMovementComponent(Z_Construct_UClass_UGravityMovementComponent, &UGravityMovementComponent::StaticClass, TEXT("/Script/DirGravity"), TEXT("UGravityMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGravityMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
