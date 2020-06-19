// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/SettingOptionFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingOptionFactory() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingOptionFactory_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingOptionFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
// End Cross Module References
	DEFINE_FUNCTION(USettingOptionFactory::execConstructOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSettingOption>*)Z_Param__Result=P_THIS->ConstructOptions_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USettingOptionFactory_ConstructOptions = FName(TEXT("ConstructOptions"));
	TArray<FSettingOption> USettingOptionFactory::ConstructOptions() const
	{
		SettingOptionFactory_eventConstructOptions_Parms Parms;
		const_cast<USettingOptionFactory*>(this)->ProcessEvent(FindFunctionChecked(NAME_USettingOptionFactory_ConstructOptions),&Parms);
		return Parms.ReturnValue;
	}
	void USettingOptionFactory::StaticRegisterNativesUSettingOptionFactory()
	{
		UClass* Class = USettingOptionFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructOptions", &USettingOptionFactory::execConstructOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingOptionFactory_eventConstructOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting Option Factory" },
		{ "Comment", "// Override to construct options dynamically\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingOptionFactory.h" },
		{ "ToolTip", "Override to construct options dynamically" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingOptionFactory, nullptr, "ConstructOptions", nullptr, nullptr, sizeof(SettingOptionFactory_eventConstructOptions_Parms), Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingOptionFactory_ConstructOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingOptionFactory_ConstructOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USettingOptionFactory_NoRegister()
	{
		return USettingOptionFactory::StaticClass();
	}
	struct Z_Construct_UClass_USettingOptionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingOptionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingOptionFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingOptionFactory_ConstructOptions, "ConstructOptions" }, // 3444698900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingOptionFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base factory class for constructing a set of options for a setting\n */" },
		{ "IncludePath", "Misc/SettingOptionFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/SettingOptionFactory.h" },
		{ "ToolTip", "Base factory class for constructing a set of options for a setting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingOptionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingOptionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingOptionFactory_Statics::ClassParams = {
		&USettingOptionFactory::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USettingOptionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingOptionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingOptionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingOptionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingOptionFactory, 4183397066);
	template<> AUTOSETTINGS_API UClass* StaticClass<USettingOptionFactory>()
	{
		return USettingOptionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingOptionFactory(Z_Construct_UClass_USettingOptionFactory, &USettingOptionFactory::StaticClass, TEXT("/Script/AutoSettings"), TEXT("USettingOptionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingOptionFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
