// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurfaceFootstepSystem/Public/FootstepInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepInterface() {}
// Cross Module References
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFootstepInterface_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFootstepInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SurfaceFootstepSystem();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFootstepComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IFootstepInterface::execGetFootstepComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFootstepComponent**)Z_Param__Result=P_THIS->GetFootstepComponent_Implementation();
		P_NATIVE_END;
	}
	UFootstepComponent* IFootstepInterface::GetFootstepComponent() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFootstepComponent instead.");
		FootstepInterface_eventGetFootstepComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void UFootstepInterface::StaticRegisterNativesUFootstepInterface()
	{
		UClass* Class = UFootstepInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFootstepComponent", &IFootstepInterface::execGetFootstepComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepInterface_eventGetFootstepComponent_Parms, ReturnValue), Z_Construct_UClass_UFootstepComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SurfaceFootstepSystem" },
		{ "ModuleRelativePath", "Public/FootstepInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepInterface, nullptr, "GetFootstepComponent", nullptr, nullptr, sizeof(FootstepInterface_eventGetFootstepComponent_Parms), Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFootstepInterface_NoRegister()
	{
		return UFootstepInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFootstepInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstepInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SurfaceFootstepSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFootstepInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFootstepInterface_GetFootstepComponent, "GetFootstepComponent" }, // 1062996423
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FootstepInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstepInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFootstepInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootstepInterface_Statics::ClassParams = {
		&UFootstepInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFootstepInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootstepInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootstepInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootstepInterface, 4187901610);
	template<> SURFACEFOOTSTEPSYSTEM_API UClass* StaticClass<UFootstepInterface>()
	{
		return UFootstepInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootstepInterface(Z_Construct_UClass_UFootstepInterface, &UFootstepInterface::StaticClass, TEXT("/Script/SurfaceFootstepSystem"), TEXT("UFootstepInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepInterface);
	static FName NAME_UFootstepInterface_GetFootstepComponent = FName(TEXT("GetFootstepComponent"));
	UFootstepComponent* IFootstepInterface::Execute_GetFootstepComponent(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFootstepInterface::StaticClass()));
		FootstepInterface_eventGetFootstepComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFootstepInterface_GetFootstepComponent);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFootstepInterface*)(O->GetNativeInterfaceAddress(UFootstepInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetFootstepComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
