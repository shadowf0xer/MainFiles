// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/AutoSettingsPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsPlayer() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingsPlayer_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingsPlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputMappings();
// End Cross Module References
	DEFINE_FUNCTION(IAutoSettingsPlayer::execSaveInputMappings)
	{
		P_GET_STRUCT(FPlayerInputMappings,Z_Param_InputMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveInputMappings_Implementation(Z_Param_InputMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAutoSettingsPlayer::execGetInputMappings)
	{
		P_GET_STRUCT_REF(FPlayerInputMappings,Z_Param_Out_InputMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputMappings_Implementation(Z_Param_Out_InputMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAutoSettingsPlayer::execGetDefaultInputMappingPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputMappingPreset*)Z_Param__Result=P_THIS->GetDefaultInputMappingPreset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAutoSettingsPlayer::execGetUniquePlayerIdentifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUniquePlayerIdentifier_Implementation();
		P_NATIVE_END;
	}
	FInputMappingPreset IAutoSettingsPlayer::GetDefaultInputMappingPreset() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDefaultInputMappingPreset instead.");
		AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IAutoSettingsPlayer::GetInputMappings(FPlayerInputMappings& InputMappings) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInputMappings instead.");
		AutoSettingsPlayer_eventGetInputMappings_Parms Parms;
		return Parms.ReturnValue;
	}
	FString IAutoSettingsPlayer::GetUniquePlayerIdentifier() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetUniquePlayerIdentifier instead.");
		AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms Parms;
		return Parms.ReturnValue;
	}
	void IAutoSettingsPlayer::SaveInputMappings(FPlayerInputMappings InputMappings)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveInputMappings instead.");
	}
	void UAutoSettingsPlayer::StaticRegisterNativesUAutoSettingsPlayer()
	{
		UClass* Class = UAutoSettingsPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultInputMappingPreset", &IAutoSettingsPlayer::execGetDefaultInputMappingPreset },
			{ "GetInputMappings", &IAutoSettingsPlayer::execGetInputMappings },
			{ "GetUniquePlayerIdentifier", &IAutoSettingsPlayer::execGetUniquePlayerIdentifier },
			{ "SaveInputMappings", &IAutoSettingsPlayer::execSaveInputMappings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override to determine which preset the player should use by default\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsPlayer.h" },
		{ "ToolTip", "Override to determine which preset the player should use by default" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsPlayer, nullptr, "GetDefaultInputMappingPreset", nullptr, nullptr, sizeof(AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms), Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputMappings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutoSettingsPlayer_eventGetInputMappings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutoSettingsPlayer_eventGetInputMappings_Parms), &Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_InputMappings = { "InputMappings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsPlayer_eventGetInputMappings_Parms, InputMappings), Z_Construct_UScriptStruct_FPlayerInputMappings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::NewProp_InputMappings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Override to store input mappings\n// This is called whenever AutoSettings needs to get a player's current mappings\n// e.g. Get input mappings from a user's profile\n// See SaveInputMappings()\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsPlayer.h" },
		{ "ToolTip", "Override to store input mappings\nThis is called whenever AutoSettings needs to get a player's current mappings\ne.g. Get input mappings from a user's profile\nSee SaveInputMappings()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsPlayer, nullptr, "GetInputMappings", nullptr, nullptr, sizeof(AutoSettingsPlayer_eventGetInputMappings_Parms), Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Auto Settings" },
		{ "Comment", "// This should return a unique identifier for the player that can be used as a key to store custom input overrides\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsPlayer.h" },
		{ "ToolTip", "This should return a unique identifier for the player that can be used as a key to store custom input overrides" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsPlayer, nullptr, "GetUniquePlayerIdentifier", nullptr, nullptr, sizeof(AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms), Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputMappings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::NewProp_InputMappings = { "InputMappings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsPlayer_eventSaveInputMappings_Parms, InputMappings), Z_Construct_UScriptStruct_FPlayerInputMappings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::NewProp_InputMappings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Override to implement custom saving logic\n// This is called whenever the user's input mappings are modified\n// e.g. Save input mappings in a user's save file\n// See GetInputMappings()\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsPlayer.h" },
		{ "ToolTip", "Override to implement custom saving logic\nThis is called whenever the user's input mappings are modified\ne.g. Save input mappings in a user's save file\nSee GetInputMappings()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsPlayer, nullptr, "SaveInputMappings", nullptr, nullptr, sizeof(AutoSettingsPlayer_eventSaveInputMappings_Parms), Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutoSettingsPlayer_NoRegister()
	{
		return UAutoSettingsPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSettingsPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSettingsPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoSettingsPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoSettingsPlayer_GetDefaultInputMappingPreset, "GetDefaultInputMappingPreset" }, // 2784933808
		{ &Z_Construct_UFunction_UAutoSettingsPlayer_GetInputMappings, "GetInputMappings" }, // 2368469619
		{ &Z_Construct_UFunction_UAutoSettingsPlayer_GetUniquePlayerIdentifier, "GetUniquePlayerIdentifier" }, // 1891336044
		{ &Z_Construct_UFunction_UAutoSettingsPlayer_SaveInputMappings, "SaveInputMappings" }, // 2244861337
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsPlayer_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSettingsPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAutoSettingsPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsPlayer_Statics::ClassParams = {
		&UAutoSettingsPlayer::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSettingsPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSettingsPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSettingsPlayer, 3833697953);
	template<> AUTOSETTINGS_API UClass* StaticClass<UAutoSettingsPlayer>()
	{
		return UAutoSettingsPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSettingsPlayer(Z_Construct_UClass_UAutoSettingsPlayer, &UAutoSettingsPlayer::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UAutoSettingsPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsPlayer);
	static FName NAME_UAutoSettingsPlayer_GetDefaultInputMappingPreset = FName(TEXT("GetDefaultInputMappingPreset"));
	FInputMappingPreset IAutoSettingsPlayer::Execute_GetDefaultInputMappingPreset(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAutoSettingsPlayer::StaticClass()));
		AutoSettingsPlayer_eventGetDefaultInputMappingPreset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAutoSettingsPlayer_GetDefaultInputMappingPreset);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAutoSettingsPlayer*)(O->GetNativeInterfaceAddress(UAutoSettingsPlayer::StaticClass())))
		{
			Parms.ReturnValue = I->GetDefaultInputMappingPreset_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAutoSettingsPlayer_GetInputMappings = FName(TEXT("GetInputMappings"));
	bool IAutoSettingsPlayer::Execute_GetInputMappings(const UObject* O, FPlayerInputMappings& InputMappings)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAutoSettingsPlayer::StaticClass()));
		AutoSettingsPlayer_eventGetInputMappings_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAutoSettingsPlayer_GetInputMappings);
		if (Func)
		{
			Parms.InputMappings=InputMappings;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			InputMappings=Parms.InputMappings;
		}
		else if (auto I = (const IAutoSettingsPlayer*)(O->GetNativeInterfaceAddress(UAutoSettingsPlayer::StaticClass())))
		{
			Parms.ReturnValue = I->GetInputMappings_Implementation(InputMappings);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAutoSettingsPlayer_GetUniquePlayerIdentifier = FName(TEXT("GetUniquePlayerIdentifier"));
	FString IAutoSettingsPlayer::Execute_GetUniquePlayerIdentifier(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAutoSettingsPlayer::StaticClass()));
		AutoSettingsPlayer_eventGetUniquePlayerIdentifier_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAutoSettingsPlayer_GetUniquePlayerIdentifier);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAutoSettingsPlayer*)(O->GetNativeInterfaceAddress(UAutoSettingsPlayer::StaticClass())))
		{
			Parms.ReturnValue = I->GetUniquePlayerIdentifier_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAutoSettingsPlayer_SaveInputMappings = FName(TEXT("SaveInputMappings"));
	void IAutoSettingsPlayer::Execute_SaveInputMappings(UObject* O, FPlayerInputMappings InputMappings)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAutoSettingsPlayer::StaticClass()));
		AutoSettingsPlayer_eventSaveInputMappings_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAutoSettingsPlayer_SaveInputMappings);
		if (Func)
		{
			Parms.InputMappings=InputMappings;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAutoSettingsPlayer*)(O->GetNativeInterfaceAddress(UAutoSettingsPlayer::StaticClass())))
		{
			I->SaveInputMappings_Implementation(InputMappings);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
