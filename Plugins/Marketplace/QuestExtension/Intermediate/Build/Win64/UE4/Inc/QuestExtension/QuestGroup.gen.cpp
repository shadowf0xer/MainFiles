// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QuestGroup.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGroup() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestGroup_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestGroup();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_QuestFromAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestGroup::execGetAllRunningQuestNodes)
	{
		P_GET_TARRAY_REF(UQGNode_QuestFromAsset*,Z_Param_Out_QuestNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllRunningQuestNodes(Z_Param_Out_QuestNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestGroup::execGetAllQuestNodes)
	{
		P_GET_TARRAY_REF(UQGNode_QuestFromAsset*,Z_Param_Out_QuestNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllQuestNodes(Z_Param_Out_QuestNodes);
		P_NATIVE_END;
	}
	void UQuestGroup::StaticRegisterNativesUQuestGroup()
	{
		UClass* Class = UQuestGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllQuestNodes", &UQuestGroup::execGetAllQuestNodes },
			{ "GetAllRunningQuestNodes", &UQuestGroup::execGetAllRunningQuestNodes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics
	{
		struct QuestGroup_eventGetAllQuestNodes_Parms
		{
			TArray<UQGNode_QuestFromAsset*> QuestNodes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestNodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::NewProp_QuestNodes = { "QuestNodes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestGroup_eventGetAllQuestNodes_Parms, QuestNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::NewProp_QuestNodes_Inner = { "QuestNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQGNode_QuestFromAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::NewProp_QuestNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::NewProp_QuestNodes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest|Group" },
		{ "ModuleRelativePath", "Public/Quests/QuestGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestGroup, nullptr, "GetAllQuestNodes", nullptr, nullptr, sizeof(QuestGroup_eventGetAllQuestNodes_Parms), Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics
	{
		struct QuestGroup_eventGetAllRunningQuestNodes_Parms
		{
			TArray<UQGNode_QuestFromAsset*> QuestNodes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestNodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::NewProp_QuestNodes = { "QuestNodes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestGroup_eventGetAllRunningQuestNodes_Parms, QuestNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::NewProp_QuestNodes_Inner = { "QuestNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQGNode_QuestFromAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::NewProp_QuestNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::NewProp_QuestNodes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest|Group" },
		{ "ModuleRelativePath", "Public/Quests/QuestGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestGroup, nullptr, "GetAllRunningQuestNodes", nullptr, nullptr, sizeof(QuestGroup_eventGetAllRunningQuestNodes_Parms), Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestGroup_NoRegister()
	{
		return UQuestGroup::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FirstNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstNodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestGroup_GetAllQuestNodes, "GetAllQuestNodes" }, // 1645597433
		{ &Z_Construct_UFunction_UQuestGroup_GetAllRunningQuestNodes, "GetAllRunningQuestNodes" }, // 2295203702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Quest Group\n * A Quest Group is a tree of sub-quests related to each other.\n * Sub-quests can be optional, be rejected or have custom logic.\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Quests/QuestGroup.h" },
		{ "ModuleRelativePath", "Public/Quests/QuestGroup.h" },
		{ "ToolTip", "Quest Group\nA Quest Group is a tree of sub-quests related to each other.\nSub-quests can be optional, be rejected or have custom logic." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroup_Statics::NewProp_QuestGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGroup_Statics::NewProp_QuestGraph = { "QuestGraph", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestGroup, QuestGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestGroup_Statics::NewProp_QuestGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroup_Statics::NewProp_QuestGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroup_Statics::NewProp_AllNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestGroup_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestGroup, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestGroup_Statics::NewProp_AllNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroup_Statics::NewProp_AllNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGroup_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGroup_Statics::NewProp_FirstNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestGroup_Statics::NewProp_FirstNodes = { "FirstNodes", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestGroup, FirstNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestGroup_Statics::NewProp_FirstNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroup_Statics::NewProp_FirstNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGroup_Statics::NewProp_FirstNodes_Inner = { "FirstNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestGroup_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGroup_Statics::NewProp_QuestGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGroup_Statics::NewProp_AllNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGroup_Statics::NewProp_AllNodes_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGroup_Statics::NewProp_FirstNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGroup_Statics::NewProp_FirstNodes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestGroup_Statics::ClassParams = {
		&UQuestGroup::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroup_Statics::PropPointers),
		0,
		0x009010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestGroup, 3184179811);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestGroup>()
	{
		return UQuestGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestGroup(Z_Construct_UClass_UQuestGroup, &UQuestGroup::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGroup);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UQuestGroup)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
