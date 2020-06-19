// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSAsyncLoadGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSAsyncLoadGame() {}
// Cross Module References
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncLoadGame();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "AsyncLoadOutputPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEMSAsyncLoadGame::execAsyncLoadActors)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Data);
		P_GET_UBOOL(Z_Param_bFullReload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEMSAsyncLoadGame**)Z_Param__Result=UEMSAsyncLoadGame::AsyncLoadActors(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_bFullReload);
		P_NATIVE_END;
	}
	void UEMSAsyncLoadGame::StaticRegisterNativesUEMSAsyncLoadGame()
	{
		UClass* Class = UEMSAsyncLoadGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadActors", &UEMSAsyncLoadGame::execAsyncLoadActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics
	{
		struct EMSAsyncLoadGame_eventAsyncLoadActors_Parms
		{
			UObject* WorldContextObject;
			int32 Data;
			bool bFullReload;
			UEMSAsyncLoadGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bFullReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSAsyncLoadGame_eventAsyncLoadActors_Parms, ReturnValue), Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload_SetBit(void* Obj)
	{
		((EMSAsyncLoadGame_eventAsyncLoadActors_Parms*)Obj)->bFullReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload = { "bFullReload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EMSAsyncLoadGame_eventAsyncLoadActors_Parms), &Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ELoadTypeFlags" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSAsyncLoadGame_eventAsyncLoadActors_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSAsyncLoadGame_eventAsyncLoadActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_bFullReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Main function for Loading the Game. Use the Data checkboxes to define what you want to load.\n\x09*\n\x09* @param Data - Check here what data you want to load.\n\x09* @param bFullReload - If false, load only Actors that have not been loaded. Set to true if you want to reload all saved Actor Data.\n\x09*/" },
		{ "DisplayName", "Load Game Actors" },
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
		{ "ToolTip", "Main function for Loading the Game. Use the Data checkboxes to define what you want to load.\n\n@param Data - Check here what data you want to load.\n@param bFullReload - If false, load only Actors that have not been loaded. Set to true if you want to reload all saved Actor Data." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncLoadGame, nullptr, "AsyncLoadActors", nullptr, nullptr, sizeof(EMSAsyncLoadGame_eventAsyncLoadActors_Parms), Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister()
	{
		return UEMSAsyncLoadGame::StaticClass();
	}
	struct Z_Construct_UClass_UEMSAsyncLoadGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSAsyncLoadGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSAsyncLoadGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncLoadGame_AsyncLoadActors, "AsyncLoadActors" }, // 3426609866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncLoadGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSAsyncLoadGame.h" },
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncLoadGame.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSAsyncLoadGame, OnCompleted), Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncLoadGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncLoadGame_Statics::NewProp_OnCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSAsyncLoadGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncLoadGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEMSAsyncLoadGame_Statics::ClassParams = {
		&UEMSAsyncLoadGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEMSAsyncLoadGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncLoadGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSAsyncLoadGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEMSAsyncLoadGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEMSAsyncLoadGame, 4053774439);
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSAsyncLoadGame>()
	{
		return UEMSAsyncLoadGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEMSAsyncLoadGame(Z_Construct_UClass_UEMSAsyncLoadGame, &UEMSAsyncLoadGame::StaticClass, TEXT("/Script/EasyMultiSave"), TEXT("UEMSAsyncLoadGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSAsyncLoadGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
