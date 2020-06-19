// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetSelectionPlugin/Public/TargetSelectionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetSelectionInterface() {}
// Cross Module References
	TARGETSELECTIONPLUGIN_API UClass* Z_Construct_UClass_UTargetSelectionInterface_NoRegister();
	TARGETSELECTIONPLUGIN_API UClass* Z_Construct_UClass_UTargetSelectionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TargetSelectionPlugin();
// End Cross Module References
	void ITargetSelectionInterface::IsNotObserved()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsNotObserved instead.");
	}
	void ITargetSelectionInterface::IsObserved()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsObserved instead.");
	}
	void UTargetSelectionInterface::StaticRegisterNativesUTargetSelectionInterface()
	{
	}
	struct Z_Construct_UFunction_UTargetSelectionInterface_IsNotObserved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionInterface_IsNotObserved_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionInterface" },
		{ "Comment", "/*Called from the actor when the actor finishes observing.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionInterface.h" },
		{ "ToolTip", "Called from the actor when the actor finishes observing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionInterface_IsNotObserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionInterface, nullptr, "IsNotObserved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionInterface_IsNotObserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionInterface_IsNotObserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionInterface_IsNotObserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionInterface_IsNotObserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionInterface_IsObserved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionInterface_IsObserved_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionInterface" },
		{ "Comment", "/*Called from the actor when the actor begins to observe.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionInterface.h" },
		{ "ToolTip", "Called from the actor when the actor begins to observe." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionInterface_IsObserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionInterface, nullptr, "IsObserved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionInterface_IsObserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionInterface_IsObserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionInterface_IsObserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionInterface_IsObserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTargetSelectionInterface_NoRegister()
	{
		return UTargetSelectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTargetSelectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetSelectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetSelectionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetSelectionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetSelectionInterface_IsNotObserved, "IsNotObserved" }, // 461522166
		{ &Z_Construct_UFunction_UTargetSelectionInterface_IsObserved, "IsObserved" }, // 1883783226
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TargetSelectionInterface" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TargetSelectionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetSelectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetSelectionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTargetSelectionInterface_Statics::ClassParams = {
		&UTargetSelectionInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetSelectionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTargetSelectionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTargetSelectionInterface, 1621550318);
	template<> TARGETSELECTIONPLUGIN_API UClass* StaticClass<UTargetSelectionInterface>()
	{
		return UTargetSelectionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetSelectionInterface(Z_Construct_UClass_UTargetSelectionInterface, &UTargetSelectionInterface::StaticClass, TEXT("/Script/TargetSelectionPlugin"), TEXT("UTargetSelectionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetSelectionInterface);
	static FName NAME_UTargetSelectionInterface_IsNotObserved = FName(TEXT("IsNotObserved"));
	void ITargetSelectionInterface::Execute_IsNotObserved(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTargetSelectionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTargetSelectionInterface_IsNotObserved);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UTargetSelectionInterface_IsObserved = FName(TEXT("IsObserved"));
	void ITargetSelectionInterface::Execute_IsObserved(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTargetSelectionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTargetSelectionInterface_IsObserved);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
