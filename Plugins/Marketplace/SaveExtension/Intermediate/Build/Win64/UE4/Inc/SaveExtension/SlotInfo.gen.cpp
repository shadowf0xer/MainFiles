// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SlotInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotInfo() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
// End Cross Module References
	DEFINE_FUNCTION(USlotInfo::execGetThumbnail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnail();
		P_NATIVE_END;
	}
	void USlotInfo::StaticRegisterNativesUSlotInfo()
	{
		UClass* Class = USlotInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetThumbnail", &USlotInfo::execGetThumbnail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics
	{
		struct SlotInfo_eventGetThumbnail_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlotInfo_eventGetThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Returns this slot's thumbnail if any */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Returns this slot's thumbnail if any" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlotInfo, nullptr, "GetThumbnail", nullptr, nullptr, sizeof(SlotInfo_eventGetThumbnail_Parms), Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlotInfo_GetThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlotInfo_NoRegister()
	{
		return USlotInfo::StaticClass();
	}
	struct Z_Construct_UClass_USlotInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ThumbnailPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotPlayedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotPlayedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlotInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlotInfo_GetThumbnail, "GetThumbnail" }, // 4265674455
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SaveExtension" },
		{ "Comment", "/**\n * USaveInfo stores information that needs to be accessible WITHOUT loading the game.\n * Works like a common SaveGame object\n * E.g: Dates, played time, progress, level\n */" },
		{ "HideCategories", "Activation Actor Tick Actor Input Rendering Replication Socket Thumbnail" },
		{ "IncludePath", "SlotInfo.h" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "USaveInfo stores information that needs to be accessible WITHOUT loading the game.\nWorks like a common SaveGame object\nE.g: Dates, played time, progress, level" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail_MetaData[] = {
		{ "Comment", "/** Thumbnail gets cached here the first time it is requested */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Thumbnail gets cached here the first time it is requested" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail = { "CachedThumbnail", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotInfo, CachedThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath = { "ThumbnailPath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotInfo, ThumbnailPath), METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Root Level where this Slot was saved */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Root Level where this Slot was saved" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotInfo, Map), METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Date at which this slot was loaded. */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Date at which this slot was loaded." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate = { "LoadDate", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotInfo, LoadDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Last date this slot was saved. */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Last date this slot was saved." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate = { "SaveDate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotInfo, SaveDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Played time since this saved game was created */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Played time since this saved game was created" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime = { "SlotPlayedTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotInfo, SlotPlayedTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Played time since this saved game was started. Not related to slots, slots can change */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Played time since this saved game was started. Not related to slots, slots can change" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime = { "PlayedTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotInfo, PlayedTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotInfo, Name), METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Slot where this SaveInfo and its saveData are saved */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Slot where this SaveInfo and its saveData are saved" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotInfo, Id), METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_Id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotInfo_Statics::ClassParams = {
		&USlotInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USlotInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotInfo, 895433587);
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotInfo>()
	{
		return USlotInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotInfo(Z_Construct_UClass_USlotInfo, &USlotInfo::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USlotInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
