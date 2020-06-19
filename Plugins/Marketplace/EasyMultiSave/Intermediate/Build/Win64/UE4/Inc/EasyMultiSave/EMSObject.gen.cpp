// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSObject() {}
// Cross Module References
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSProfileSaveGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSPersistentSaveGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEMSObject::execOuterActorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OuterActorEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void UEMSObject::StaticRegisterNativesUEMSObject()
	{
		UClass* Class = UEMSObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OuterActorEndPlay", &UEMSObject::execOuterActorEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics
	{
		struct EMSObject_eventOuterActorEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSObject_eventOuterActorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSObject_eventOuterActorEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::NewProp_EndPlayReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSObject, nullptr, "OuterActorEndPlay", nullptr, nullptr, sizeof(EMSObject_eventOuterActorEndPlay_Parms), Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSObject_OuterActorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSObject_OuterActorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEMSObject_NoRegister()
	{
		return UEMSObject::StaticClass();
	}
	struct Z_Construct_UClass_UEMSObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedProfileSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedProfileSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPersistentSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPersistentSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSlotInfoSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedSlotInfoSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentSaveGameName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSObject_OuterActorEndPlay, "OuterActorEndPlay" }, // 1462634967
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSObject.h" },
		{ "ModuleRelativePath", "Public/EMSObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList = { "ActorList", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSObject, ActorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList_Inner = { "ActorList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedProfileSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedProfileSave = { "CachedProfileSave", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSObject, CachedProfileSave), Z_Construct_UClass_UEMSProfileSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedProfileSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedProfileSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedPersistentSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedPersistentSave = { "CachedPersistentSave", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSObject, CachedPersistentSave), Z_Construct_UClass_UEMSPersistentSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedPersistentSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedPersistentSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedSlotInfoSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedSlotInfoSave = { "CachedSlotInfoSave", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSObject, CachedSlotInfoSave), Z_Construct_UClass_UEMSInfoSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedSlotInfoSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedSlotInfoSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSObject_Statics::NewProp_CurrentSaveGameName_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_CurrentSaveGameName = { "CurrentSaveGameName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSObject, CurrentSaveGameName), METADATA_PARAMS(Z_Construct_UClass_UEMSObject_Statics::NewProp_CurrentSaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::NewProp_CurrentSaveGameName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSObject_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSObject_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSObject, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSObject_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_ActorList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedProfileSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedPersistentSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_CachedSlotInfoSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_CurrentSaveGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSObject_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEMSObject_Statics::ClassParams = {
		&UEMSObject::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEMSObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::PropPointers),
		0,
		0x401000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEMSObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEMSObject, 1763846321);
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSObject>()
	{
		return UEMSObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEMSObject(Z_Construct_UClass_UEMSObject, &UEMSObject::StaticClass, TEXT("/Script/EasyMultiSave"), TEXT("UEMSObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
