// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSActorSaveInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSActorSaveInterface() {}
// Cross Module References
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSActorSaveInterface_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSActorSaveInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IEMSActorSaveInterface::execComponentsToSave)
	{
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_Components);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentsToSave_Implementation(Z_Param_Out_Components);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEMSActorSaveInterface::execActorPreSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorPreSave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEMSActorSaveInterface::execActorSaved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorSaved_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEMSActorSaveInterface::execActorLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorLoaded_Implementation();
		P_NATIVE_END;
	}
	void IEMSActorSaveInterface::ActorLoaded()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ActorLoaded instead.");
	}
	void IEMSActorSaveInterface::ActorPreSave()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ActorPreSave instead.");
	}
	void IEMSActorSaveInterface::ActorSaved()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ActorSaved instead.");
	}
	void IEMSActorSaveInterface::ComponentsToSave(TArray<UActorComponent*>& Components)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentsToSave instead.");
	}
	void UEMSActorSaveInterface::StaticRegisterNativesUEMSActorSaveInterface()
	{
		UClass* Class = UEMSActorSaveInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorLoaded", &IEMSActorSaveInterface::execActorLoaded },
			{ "ActorPreSave", &IEMSActorSaveInterface::execActorPreSave },
			{ "ActorSaved", &IEMSActorSaveInterface::execActorSaved },
			{ "ComponentsToSave", &IEMSActorSaveInterface::execComponentsToSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed after the Actor and all of it's components have been loaded.*/" },
		{ "ModuleRelativePath", "Public/EMSActorSaveInterface.h" },
		{ "ToolTip", "Executed after the Actor and all of it's components have been loaded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSActorSaveInterface, nullptr, "ActorLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed before the Actor and all of it's components are saved.*/" },
		{ "ModuleRelativePath", "Public/EMSActorSaveInterface.h" },
		{ "ToolTip", "Executed before the Actor and all of it's components are saved." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSActorSaveInterface, nullptr, "ActorPreSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed when the Actor and all of it's components have been saved.*/" },
		{ "ModuleRelativePath", "Public/EMSActorSaveInterface.h" },
		{ "ToolTip", "Executed when the Actor and all of it's components have been saved." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSActorSaveInterface, nullptr, "ActorSaved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSActorSaveInterface_eventComponentsToSave_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::NewProp_Components_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**\n\x09* (Not Level Blueprints) Holds the array of components that you want to save for the Actor.\n\x09* This function is not relevant for Level Blueprints, as they cannot have components.\n\x09*\n\x09* @param Components - The Components that you want to save with the Actor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EMSActorSaveInterface.h" },
		{ "ToolTip", "(Not Level Blueprints) Holds the array of components that you want to save for the Actor.\nThis function is not relevant for Level Blueprints, as they cannot have components.\n\n@param Components - The Components that you want to save with the Actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSActorSaveInterface, nullptr, "ComponentsToSave", nullptr, nullptr, sizeof(EMSActorSaveInterface_eventComponentsToSave_Parms), Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEMSActorSaveInterface_NoRegister()
	{
		return UEMSActorSaveInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEMSActorSaveInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSActorSaveInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSActorSaveInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSActorSaveInterface_ActorLoaded, "ActorLoaded" }, // 3304562624
		{ &Z_Construct_UFunction_UEMSActorSaveInterface_ActorPreSave, "ActorPreSave" }, // 1201772369
		{ &Z_Construct_UFunction_UEMSActorSaveInterface_ActorSaved, "ActorSaved" }, // 3010301003
		{ &Z_Construct_UFunction_UEMSActorSaveInterface_ComponentsToSave, "ComponentsToSave" }, // 2842690341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSActorSaveInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Easy Multi Save" },
		{ "DisplayName", "EMS Save Interface" },
		{ "ModuleRelativePath", "Public/EMSActorSaveInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSActorSaveInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEMSActorSaveInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEMSActorSaveInterface_Statics::ClassParams = {
		&UEMSActorSaveInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSActorSaveInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSActorSaveInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSActorSaveInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEMSActorSaveInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEMSActorSaveInterface, 267302457);
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSActorSaveInterface>()
	{
		return UEMSActorSaveInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEMSActorSaveInterface(Z_Construct_UClass_UEMSActorSaveInterface, &UEMSActorSaveInterface::StaticClass, TEXT("/Script/EasyMultiSave"), TEXT("UEMSActorSaveInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSActorSaveInterface);
	static FName NAME_UEMSActorSaveInterface_ActorLoaded = FName(TEXT("ActorLoaded"));
	void IEMSActorSaveInterface::Execute_ActorLoaded(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEMSActorSaveInterface_ActorLoaded);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEMSActorSaveInterface*)(O->GetNativeInterfaceAddress(UEMSActorSaveInterface::StaticClass())))
		{
			I->ActorLoaded_Implementation();
		}
	}
	static FName NAME_UEMSActorSaveInterface_ActorPreSave = FName(TEXT("ActorPreSave"));
	void IEMSActorSaveInterface::Execute_ActorPreSave(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEMSActorSaveInterface_ActorPreSave);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEMSActorSaveInterface*)(O->GetNativeInterfaceAddress(UEMSActorSaveInterface::StaticClass())))
		{
			I->ActorPreSave_Implementation();
		}
	}
	static FName NAME_UEMSActorSaveInterface_ActorSaved = FName(TEXT("ActorSaved"));
	void IEMSActorSaveInterface::Execute_ActorSaved(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEMSActorSaveInterface_ActorSaved);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEMSActorSaveInterface*)(O->GetNativeInterfaceAddress(UEMSActorSaveInterface::StaticClass())))
		{
			I->ActorSaved_Implementation();
		}
	}
	static FName NAME_UEMSActorSaveInterface_ComponentsToSave = FName(TEXT("ComponentsToSave"));
	void IEMSActorSaveInterface::Execute_ComponentsToSave(UObject* O, TArray<UActorComponent*>& Components)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEMSActorSaveInterface::StaticClass()));
		EMSActorSaveInterface_eventComponentsToSave_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEMSActorSaveInterface_ComponentsToSave);
		if (Func)
		{
			Parms.Components=Components;
			O->ProcessEvent(Func, &Parms);
			Components=Parms.Components;
		}
		else if (auto I = (IEMSActorSaveInterface*)(O->GetNativeInterfaceAddress(UEMSActorSaveInterface::StaticClass())))
		{
			I->ComponentsToSave_Implementation(Components);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
