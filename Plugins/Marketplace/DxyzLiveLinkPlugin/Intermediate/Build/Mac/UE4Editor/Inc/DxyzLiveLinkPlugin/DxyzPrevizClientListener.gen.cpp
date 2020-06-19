// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DxyzLiveLinkPlugin/Private/DxyzPrevizClientListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDxyzPrevizClientListener() {}
// Cross Module References
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDxyzChannel();
	UPackage* Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzPrevizClientListener_NoRegister();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzPrevizClientListener();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FDxyzChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDxyzChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDxyzChannel, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("DxyzChannel"), sizeof(FDxyzChannel), Get_Z_Construct_UScriptStruct_FDxyzChannel_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FDxyzChannel>()
{
	return FDxyzChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDxyzChannel(FDxyzChannel::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("DxyzChannel"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzChannel
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DxyzChannel")),new UScriptStruct::TCppStructOps<FDxyzChannel>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzChannel;
	struct Z_Construct_UScriptStruct_FDxyzChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEye_MetaData[];
#endif
		static void NewProp_IsEye_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEye;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHead_MetaData[];
#endif
		static void NewProp_IsHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoeffBufferIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CoeffBufferIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TypeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbCoeffUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NbCoeffUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDxyzChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsEye_MetaData[] = {
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsEye_SetBit(void* Obj)
	{
		((FDxyzChannel*)Obj)->IsEye = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsEye = { "IsEye", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDxyzChannel), &Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsEye_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsEye_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsEye_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsHead_MetaData[] = {
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsHead_SetBit(void* Obj)
	{
		((FDxyzChannel*)Obj)->IsHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsHead = { "IsHead", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDxyzChannel), &Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsHead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_CoeffBufferIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_CoeffBufferIndex = { "CoeffBufferIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzChannel, CoeffBufferIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_CoeffBufferIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_CoeffBufferIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_ClassName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzChannel, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_TypeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzChannel, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_TypeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzChannel, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzChannel, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_NbCoeffUsed_MetaData[] = {
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_NbCoeffUsed = { "NbCoeffUsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzChannel, NbCoeffUsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_NbCoeffUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_NbCoeffUsed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDxyzChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsEye,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_IsHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_CoeffBufferIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_TypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzChannel_Statics::NewProp_NbCoeffUsed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDxyzChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"DxyzChannel",
		sizeof(FDxyzChannel),
		alignof(FDxyzChannel),
		Z_Construct_UScriptStruct_FDxyzChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDxyzChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDxyzChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DxyzChannel"), sizeof(FDxyzChannel), Get_Z_Construct_UScriptStruct_FDxyzChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDxyzChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDxyzChannel_Hash() { return 1998150556U; }
	void UDxyzPrevizClientListener::StaticRegisterNativesUDxyzPrevizClientListener()
	{
	}
	UClass* Z_Construct_UClass_UDxyzPrevizClientListener_NoRegister()
	{
		return UDxyzPrevizClientListener::StaticClass();
	}
	struct Z_Construct_UClass_UDxyzPrevizClientListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDxyzPrevizClientListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzPrevizClientListener_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DxyzPrevizClientListener.h" },
		{ "ModuleRelativePath", "Private/DxyzPrevizClientListener.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDxyzPrevizClientListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDxyzPrevizClientListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDxyzPrevizClientListener_Statics::ClassParams = {
		&UDxyzPrevizClientListener::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDxyzPrevizClientListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzPrevizClientListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDxyzPrevizClientListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDxyzPrevizClientListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDxyzPrevizClientListener, 1486742153);
	template<> DXYZLIVELINKPLUGIN_API UClass* StaticClass<UDxyzPrevizClientListener>()
	{
		return UDxyzPrevizClientListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDxyzPrevizClientListener(Z_Construct_UClass_UDxyzPrevizClientListener, &UDxyzPrevizClientListener::StaticClass, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("UDxyzPrevizClientListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDxyzPrevizClientListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
