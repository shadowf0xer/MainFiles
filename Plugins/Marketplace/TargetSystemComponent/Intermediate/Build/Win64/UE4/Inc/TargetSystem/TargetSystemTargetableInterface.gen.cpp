// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetSystem/Public/TargetSystemTargetableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetSystemTargetableInterface() {}
// Cross Module References
	TARGETSYSTEM_API UClass* Z_Construct_UClass_UTargetSystemTargetableInterface_NoRegister();
	TARGETSYSTEM_API UClass* Z_Construct_UClass_UTargetSystemTargetableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TargetSystem();
// End Cross Module References
	DEFINE_FUNCTION(ITargetSystemTargetableInterface::execIsTargetable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargetable_Implementation();
		P_NATIVE_END;
	}
	bool ITargetSystemTargetableInterface::IsTargetable() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsTargetable instead.");
		TargetSystemTargetableInterface_eventIsTargetable_Parms Parms;
		return Parms.ReturnValue;
	}
	void UTargetSystemTargetableInterface::StaticRegisterNativesUTargetSystemTargetableInterface()
	{
		UClass* Class = UTargetSystemTargetableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTargetable", &ITargetSystemTargetableInterface::execIsTargetable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetSystemTargetableInterface_eventIsTargetable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TargetSystemTargetableInterface_eventIsTargetable_Parms), &Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target System" },
		{ "ModuleRelativePath", "Public/TargetSystemTargetableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSystemTargetableInterface, nullptr, "IsTargetable", nullptr, nullptr, sizeof(TargetSystemTargetableInterface_eventIsTargetable_Parms), Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTargetSystemTargetableInterface_NoRegister()
	{
		return UTargetSystemTargetableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTargetSystemTargetableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetSystemTargetableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetSystemTargetableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetSystemTargetableInterface_IsTargetable, "IsTargetable" }, // 1605314531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemTargetableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetSystemTargetableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetSystemTargetableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetSystemTargetableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTargetSystemTargetableInterface_Statics::ClassParams = {
		&UTargetSystemTargetableInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTargetSystemTargetableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemTargetableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetSystemTargetableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTargetSystemTargetableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTargetSystemTargetableInterface, 1365935012);
	template<> TARGETSYSTEM_API UClass* StaticClass<UTargetSystemTargetableInterface>()
	{
		return UTargetSystemTargetableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetSystemTargetableInterface(Z_Construct_UClass_UTargetSystemTargetableInterface, &UTargetSystemTargetableInterface::StaticClass, TEXT("/Script/TargetSystem"), TEXT("UTargetSystemTargetableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetSystemTargetableInterface);
	static FName NAME_UTargetSystemTargetableInterface_IsTargetable = FName(TEXT("IsTargetable"));
	bool ITargetSystemTargetableInterface::Execute_IsTargetable(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTargetSystemTargetableInterface::StaticClass()));
		TargetSystemTargetableInterface_eventIsTargetable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTargetSystemTargetableInterface_IsTargetable);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ITargetSystemTargetableInterface*)(O->GetNativeInterfaceAddress(UTargetSystemTargetableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsTargetable_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
