// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaFogOfWar/Public/VaFogLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaFogLibrary() {}
// Cross Module References
	VAFOGOFWAR_API UClass* Z_Construct_UClass_UVaFogLibrary_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_UVaFogLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VaFogOfWar();
// End Cross Module References
	DEFINE_FUNCTION(UVaFogLibrary::execIsRHINeedsToSwitchVerticalAxis)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVaFogLibrary::IsRHINeedsToSwitchVerticalAxis();
		P_NATIVE_END;
	}
	void UVaFogLibrary::StaticRegisterNativesUVaFogLibrary()
	{
		UClass* Class = UVaFogLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRHINeedsToSwitchVerticalAxis", &UVaFogLibrary::execIsRHINeedsToSwitchVerticalAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics
	{
		struct VaFogLibrary_eventIsRHINeedsToSwitchVerticalAxis_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaFogLibrary_eventIsRHINeedsToSwitchVerticalAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaFogLibrary_eventIsRHINeedsToSwitchVerticalAxis_Parms), &Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Tools" },
		{ "Comment", "/** For mobile platforms that switch vertical axis source buffer should be flipped */" },
		{ "ModuleRelativePath", "Public/VaFogLibrary.h" },
		{ "ToolTip", "For mobile platforms that switch vertical axis source buffer should be flipped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaFogLibrary, nullptr, "IsRHINeedsToSwitchVerticalAxis", nullptr, nullptr, sizeof(VaFogLibrary_eventIsRHINeedsToSwitchVerticalAxis_Parms), Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaFogLibrary_NoRegister()
	{
		return UVaFogLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVaFogLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaFogLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VaFogOfWar,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaFogLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaFogLibrary_IsRHINeedsToSwitchVerticalAxis, "IsRHINeedsToSwitchVerticalAxis" }, // 725346034
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaFogLibrary.h" },
		{ "ModuleRelativePath", "Public/VaFogLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaFogLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaFogLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaFogLibrary_Statics::ClassParams = {
		&UVaFogLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVaFogLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaFogLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaFogLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaFogLibrary, 3401104857);
	template<> VAFOGOFWAR_API UClass* StaticClass<UVaFogLibrary>()
	{
		return UVaFogLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaFogLibrary(Z_Construct_UClass_UVaFogLibrary, &UVaFogLibrary::StaticClass, TEXT("/Script/VaFogOfWar"), TEXT("UVaFogLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaFogLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
