// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LDAssistant/Public/OpenNewWindow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenNewWindow() {}
// Cross Module References
	LDASSISTANT_API UClass* Z_Construct_UClass_UOpenNewWindow_NoRegister();
	LDASSISTANT_API UClass* Z_Construct_UClass_UOpenNewWindow();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LDAssistant();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOpenNewWindow::execOpenWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UOpenNewWindow::OpenWindow();
		P_NATIVE_END;
	}
	void UOpenNewWindow::StaticRegisterNativesUOpenNewWindow()
	{
		UClass* Class = UOpenNewWindow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenWindow", &UOpenNewWindow::execOpenWindow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics
	{
		struct OpenNewWindow_eventOpenWindow_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenNewWindow_eventOpenWindow_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorFuncions" },
		{ "ModuleRelativePath", "Public/OpenNewWindow.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenNewWindow, nullptr, "OpenWindow", nullptr, nullptr, sizeof(OpenNewWindow_eventOpenWindow_Parms), Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenNewWindow_OpenWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenNewWindow_OpenWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenNewWindow_NoRegister()
	{
		return UOpenNewWindow::StaticClass();
	}
	struct Z_Construct_UClass_UOpenNewWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenNewWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LDAssistant,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenNewWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenNewWindow_OpenWindow, "OpenWindow" }, // 3766425969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenNewWindow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OpenNewWindow.h" },
		{ "ModuleRelativePath", "Public/OpenNewWindow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenNewWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenNewWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenNewWindow_Statics::ClassParams = {
		&UOpenNewWindow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpenNewWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenNewWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenNewWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenNewWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenNewWindow, 2080288683);
	template<> LDASSISTANT_API UClass* StaticClass<UOpenNewWindow>()
	{
		return UOpenNewWindow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenNewWindow(Z_Construct_UClass_UOpenNewWindow, &UOpenNewWindow::StaticClass, TEXT("/Script/LDAssistant"), TEXT("UOpenNewWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenNewWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
