// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/ToggleSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToggleSetting() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UToggleSetting_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UToggleSetting();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	DEFINE_FUNCTION(UToggleSetting::execToggleStateUpdated)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleStateUpdated(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToggleSetting::execUpdateToggleState)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateToggleState_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	static FName NAME_UToggleSetting_UpdateToggleState = FName(TEXT("UpdateToggleState"));
	void UToggleSetting::UpdateToggleState(bool State)
	{
		ToggleSetting_eventUpdateToggleState_Parms Parms;
		Parms.State=State ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UToggleSetting_UpdateToggleState),&Parms);
	}
	void UToggleSetting::StaticRegisterNativesUToggleSetting()
	{
		UClass* Class = UToggleSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleStateUpdated", &UToggleSetting::execToggleStateUpdated },
			{ "UpdateToggleState", &UToggleSetting::execUpdateToggleState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics
	{
		struct ToggleSetting_eventToggleStateUpdated_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::NewProp_State_SetBit(void* Obj)
	{
		((ToggleSetting_eventToggleStateUpdated_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ToggleSetting_eventToggleStateUpdated_Parms), &Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Toggle Setting" },
		{ "Comment", "// Takes a boolean state and applies the setting\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ToggleSetting.h" },
		{ "ToolTip", "Takes a boolean state and applies the setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToggleSetting, nullptr, "ToggleStateUpdated", nullptr, nullptr, sizeof(ToggleSetting_eventToggleStateUpdated_Parms), Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics
	{
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::NewProp_State_SetBit(void* Obj)
	{
		((ToggleSetting_eventUpdateToggleState_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ToggleSetting_eventUpdateToggleState_Parms), &Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Toggle Setting" },
		{ "Comment", "// Called to update the widget with a new state\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ToggleSetting.h" },
		{ "ToolTip", "Called to update the widget with a new state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToggleSetting, nullptr, "UpdateToggleState", nullptr, nullptr, sizeof(ToggleSetting_eventUpdateToggleState_Parms), Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToggleSetting_UpdateToggleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToggleSetting_UpdateToggleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToggleSetting_NoRegister()
	{
		return UToggleSetting::StaticClass();
	}
	struct Z_Construct_UClass_UToggleSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToggleSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutoSettingWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToggleSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToggleSetting_ToggleStateUpdated, "ToggleStateUpdated" }, // 2832297490
		{ &Z_Construct_UFunction_UToggleSetting_UpdateToggleState, "UpdateToggleState" }, // 611352938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToggleSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base AutoSetting with generic toggle functionality (Such as a checkbox or switch)\n */" },
		{ "IncludePath", "UI/SettingControls/ToggleSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ToggleSetting.h" },
		{ "ToolTip", "Base AutoSetting with generic toggle functionality (Such as a checkbox or switch)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToggleSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToggleSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToggleSetting_Statics::ClassParams = {
		&UToggleSetting::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UToggleSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToggleSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToggleSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToggleSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToggleSetting, 3933776249);
	template<> AUTOSETTINGS_API UClass* StaticClass<UToggleSetting>()
	{
		return UToggleSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToggleSetting(Z_Construct_UClass_UToggleSetting, &UToggleSetting::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UToggleSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToggleSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
