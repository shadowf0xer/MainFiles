// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QuestFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestFunctionLibrary() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestFunctionLibrary_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeQuest();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestManagerRecord();
// End Cross Module References
	DEFINE_FUNCTION(UQuestFunctionLibrary::execGetRuntimeQuestAsset)
	{
		P_GET_STRUCT_REF(FRuntimeQuest,Z_Param_Out_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UQuestBase>*)Z_Param__Result=UQuestFunctionLibrary::GetRuntimeQuestAsset(Z_Param_Out_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestFunctionLibrary::execIsValidQuestManagerRecord)
	{
		P_GET_STRUCT_REF(FQuestManagerRecord,Z_Param_Out_Record);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestFunctionLibrary::IsValidQuestManagerRecord(Z_Param_Out_Record);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestFunctionLibrary::execGetQuestManager)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestManagerComponent**)Z_Param__Result=UQuestFunctionLibrary::GetQuestManager(Z_Param_ContextObject);
		P_NATIVE_END;
	}
	void UQuestFunctionLibrary::StaticRegisterNativesUQuestFunctionLibrary()
	{
		UClass* Class = UQuestFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetQuestManager", &UQuestFunctionLibrary::execGetQuestManager },
			{ "GetRuntimeQuestAsset", &UQuestFunctionLibrary::execGetRuntimeQuestAsset },
			{ "IsValidQuestManagerRecord", &UQuestFunctionLibrary::execIsValidQuestManagerRecord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics
	{
		struct QuestFunctionLibrary_eventGetQuestManager_Parms
		{
			const UObject* ContextObject;
			UQuestManagerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestFunctionLibrary_eventGetQuestManager_Parms, ReturnValue), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestFunctionLibrary_eventGetQuestManager_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::NewProp_ContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/** Gets the global Quest Manager if it can be found.\n\x09 * If you have more than one Quest Manager on your game, access it directly. */" },
		{ "ModuleRelativePath", "Public/Quests/QuestFunctionLibrary.h" },
		{ "ToolTip", "Gets the global Quest Manager if it can be found.\nIf you have more than one Quest Manager on your game, access it directly." },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestFunctionLibrary, nullptr, "GetQuestManager", nullptr, nullptr, sizeof(QuestFunctionLibrary_eventGetQuestManager_Parms), Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics
	{
		struct QuestFunctionLibrary_eventGetRuntimeQuestAsset_Parms
		{
			FRuntimeQuest Quest;
			TSoftObjectPtr<UQuestBase> ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestFunctionLibrary_eventGetRuntimeQuestAsset_Parms, ReturnValue), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestFunctionLibrary_eventGetRuntimeQuestAsset_Parms, Quest), Z_Construct_UScriptStruct_FRuntimeQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "DisplayName", "Get Asset" },
		{ "ModuleRelativePath", "Public/Quests/QuestFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestFunctionLibrary, nullptr, "GetRuntimeQuestAsset", nullptr, nullptr, sizeof(QuestFunctionLibrary_eventGetRuntimeQuestAsset_Parms), Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics
	{
		struct QuestFunctionLibrary_eventIsValidQuestManagerRecord_Parms
		{
			FQuestManagerRecord Record;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Record_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Record;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestFunctionLibrary_eventIsValidQuestManagerRecord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestFunctionLibrary_eventIsValidQuestManagerRecord_Parms), &Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::NewProp_Record_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::NewProp_Record = { "Record", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestFunctionLibrary_eventIsValidQuestManagerRecord_Parms, Record), Z_Construct_UScriptStruct_FQuestManagerRecord, METADATA_PARAMS(Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::NewProp_Record_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::NewProp_Record_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::NewProp_Record,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/Quests/QuestFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestFunctionLibrary, nullptr, "IsValidQuestManagerRecord", nullptr, nullptr, sizeof(QuestFunctionLibrary_eventIsValidQuestManagerRecord_Parms), Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestFunctionLibrary_NoRegister()
	{
		return UQuestFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UQuestFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestFunctionLibrary_GetQuestManager, "GetQuestManager" }, // 3612135590
		{ &Z_Construct_UFunction_UQuestFunctionLibrary_GetRuntimeQuestAsset, "GetRuntimeQuestAsset" }, // 3741766604
		{ &Z_Construct_UFunction_UQuestFunctionLibrary_IsValidQuestManagerRecord, "IsValidQuestManagerRecord" }, // 954224347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Quests/QuestFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Quests/QuestFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestFunctionLibrary_Statics::ClassParams = {
		&UQuestFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestFunctionLibrary, 2414461393);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestFunctionLibrary>()
	{
		return UQuestFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestFunctionLibrary(Z_Construct_UClass_UQuestFunctionLibrary, &UQuestFunctionLibrary::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
