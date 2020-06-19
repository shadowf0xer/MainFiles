// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Miscellaneous/QuestVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestVolume() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_AQuestVolume_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_AQuestVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestMemory_NoRegister();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStateData();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AQuestVolume::StaticRegisterNativesAQuestVolume()
	{
	}
	UClass* Z_Construct_UClass_AQuestVolume_NoRegister()
	{
		return AQuestVolume::StaticClass();
	}
	struct Z_Construct_UClass_AQuestVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistryMemory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RegistryMemory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinishQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManagerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManagerOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFindManagerInActor_MetaData[];
#endif
		static void NewProp_bFindManagerInActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFindManagerInActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGlobalManager_MetaData[];
#endif
		static void NewProp_bUseGlobalManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Volume that causes damage over time to any Actor that overlaps its collision.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Miscellaneous/QuestVolume.h" },
		{ "ModuleRelativePath", "Public/Miscellaneous/QuestVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Volume that causes damage over time to any Actor that overlaps its collision." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestVolume_Statics::NewProp_RegistryMemory_MetaData[] = {
		{ "Category", "QuestVolume|Memories" },
		{ "Comment", "/** Memory that will be registered when entering this volume */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Miscellaneous/QuestVolume.h" },
		{ "ToolTip", "Memory that will be registered when entering this volume" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AQuestVolume_Statics::NewProp_RegistryMemory = { "RegistryMemory", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestVolume, RegistryMemory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuestVolume_Statics::NewProp_RegistryMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestVolume_Statics::NewProp_RegistryMemory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestVolume_Statics::NewProp_FinishQuest_MetaData[] = {
		{ "Category", "QuestVolume|Quests" },
		{ "Comment", "/** Quest that will be finished when entering this volume */" },
		{ "ModuleRelativePath", "Public/Miscellaneous/QuestVolume.h" },
		{ "ToolTip", "Quest that will be finished when entering this volume" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AQuestVolume_Statics::NewProp_FinishQuest = { "FinishQuest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestVolume, FinishQuest), Z_Construct_UScriptStruct_FQuestStateData, METADATA_PARAMS(Z_Construct_UClass_AQuestVolume_Statics::NewProp_FinishQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestVolume_Statics::NewProp_FinishQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestVolume_Statics::NewProp_StartQuest_MetaData[] = {
		{ "Category", "QuestVolume|Quests" },
		{ "Comment", "/** Quest that will be started when entering this volume */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Miscellaneous/QuestVolume.h" },
		{ "ToolTip", "Quest that will be started when entering this volume" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestVolume_Statics::NewProp_StartQuest = { "StartQuest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestVolume, StartQuest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuestVolume_Statics::NewProp_StartQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestVolume_Statics::NewProp_StartQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestVolume_Statics::NewProp_ManagerOwner_MetaData[] = {
		{ "Category", "QuestVolume" },
		{ "Comment", "/** Actor containing the Quest Manager to be used */" },
		{ "ModuleRelativePath", "Public/Miscellaneous/QuestVolume.h" },
		{ "ToolTip", "Actor containing the Quest Manager to be used" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestVolume_Statics::NewProp_ManagerOwner = { "ManagerOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestVolume, ManagerOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuestVolume_Statics::NewProp_ManagerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestVolume_Statics::NewProp_ManagerOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestVolume_Statics::NewProp_bFindManagerInActor_MetaData[] = {
		{ "Category", "QuestVolume" },
		{ "Comment", "/** Find manager in the colliding actor or its controller */" },
		{ "ModuleRelativePath", "Public/Miscellaneous/QuestVolume.h" },
		{ "ToolTip", "Find manager in the colliding actor or its controller" },
	};
#endif
	void Z_Construct_UClass_AQuestVolume_Statics::NewProp_bFindManagerInActor_SetBit(void* Obj)
	{
		((AQuestVolume*)Obj)->bFindManagerInActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuestVolume_Statics::NewProp_bFindManagerInActor = { "bFindManagerInActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuestVolume), &Z_Construct_UClass_AQuestVolume_Statics::NewProp_bFindManagerInActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuestVolume_Statics::NewProp_bFindManagerInActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestVolume_Statics::NewProp_bFindManagerInActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestVolume_Statics::NewProp_bUseGlobalManager_MetaData[] = {
		{ "Category", "QuestVolume" },
		{ "ModuleRelativePath", "Public/Miscellaneous/QuestVolume.h" },
	};
#endif
	void Z_Construct_UClass_AQuestVolume_Statics::NewProp_bUseGlobalManager_SetBit(void* Obj)
	{
		((AQuestVolume*)Obj)->bUseGlobalManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuestVolume_Statics::NewProp_bUseGlobalManager = { "bUseGlobalManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuestVolume), &Z_Construct_UClass_AQuestVolume_Statics::NewProp_bUseGlobalManager_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuestVolume_Statics::NewProp_bUseGlobalManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestVolume_Statics::NewProp_bUseGlobalManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestVolume_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "QuestVolume" },
		{ "ModuleRelativePath", "Public/Miscellaneous/QuestVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuestVolume_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestVolume, FilterClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AQuestVolume_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestVolume_Statics::NewProp_FilterClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestVolume_Statics::NewProp_RegistryMemory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestVolume_Statics::NewProp_FinishQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestVolume_Statics::NewProp_StartQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestVolume_Statics::NewProp_ManagerOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestVolume_Statics::NewProp_bFindManagerInActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestVolume_Statics::NewProp_bUseGlobalManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestVolume_Statics::NewProp_FilterClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuestVolume_Statics::ClassParams = {
		&AQuestVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AQuestVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuestVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuestVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuestVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestVolume, 929842255);
	template<> QUESTEXTENSION_API UClass* StaticClass<AQuestVolume>()
	{
		return AQuestVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestVolume(Z_Construct_UClass_AQuestVolume, &AQuestVolume::StaticClass, TEXT("/Script/QuestExtension"), TEXT("AQuestVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
