// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Misc/ClassFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassFilter() {}
// Cross Module References
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FComponentClassFilter();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FClassFilter();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FActorClassFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FComponentClassFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FComponentClassFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentClassFilter, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ComponentClassFilter"), sizeof(FComponentClassFilter), Get_Z_Construct_UScriptStruct_FComponentClassFilter_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FComponentClassFilter>()
{
	return FComponentClassFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentClassFilter(FComponentClassFilter::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ComponentClassFilter"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFComponentClassFilter
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFComponentClassFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentClassFilter")),new UScriptStruct::TCppStructOps<FComponentClassFilter>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFComponentClassFilter;
	struct Z_Construct_UScriptStruct_FComponentClassFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentClassFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentClassFilter_Statics::NewProp_ClassFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentClassFilter_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentClassFilter, ClassFilter), Z_Construct_UScriptStruct_FClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentClassFilter_Statics::NewProp_ClassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentClassFilter_Statics::NewProp_ClassFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentClassFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentClassFilter_Statics::NewProp_ClassFilter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"ComponentClassFilter",
		sizeof(FComponentClassFilter),
		alignof(FComponentClassFilter),
		Z_Construct_UScriptStruct_FComponentClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentClassFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentClassFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentClassFilter"), sizeof(FComponentClassFilter), Get_Z_Construct_UScriptStruct_FComponentClassFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentClassFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentClassFilter_Hash() { return 2860745868U; }
class UScriptStruct* FActorClassFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FActorClassFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorClassFilter, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ActorClassFilter"), sizeof(FActorClassFilter), Get_Z_Construct_UScriptStruct_FActorClassFilter_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FActorClassFilter>()
{
	return FActorClassFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorClassFilter(FActorClassFilter::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ActorClassFilter"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFActorClassFilter
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFActorClassFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorClassFilter")),new UScriptStruct::TCppStructOps<FActorClassFilter>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFActorClassFilter;
	struct Z_Construct_UScriptStruct_FActorClassFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorClassFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ClassFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorClassFilter, ClassFilter), Z_Construct_UScriptStruct_FClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ClassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ClassFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorClassFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ClassFilter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"ActorClassFilter",
		sizeof(FActorClassFilter),
		alignof(FActorClassFilter),
		Z_Construct_UScriptStruct_FActorClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorClassFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorClassFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorClassFilter"), sizeof(FActorClassFilter), Get_Z_Construct_UScriptStruct_FActorClassFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorClassFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorClassFilter_Hash() { return 96675573U; }
class UScriptStruct* FClassFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FClassFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassFilter, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ClassFilter"), sizeof(FClassFilter), Get_Z_Construct_UScriptStruct_FClassFilter_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FClassFilter>()
{
	return FClassFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassFilter(FClassFilter::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ClassFilter"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFClassFilter
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFClassFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClassFilter")),new UScriptStruct::TCppStructOps<FClassFilter>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFClassFilter;
	struct Z_Construct_UScriptStruct_FClassFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedAllowedClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_BakedAllowedClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BakedAllowedClasses_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IgnoredClasses;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_IgnoredClasses_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_AllowedClasses;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AllowedClasses_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BaseClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BakedAllowedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BakedAllowedClasses = { "BakedAllowedClasses", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassFilter, BakedAllowedClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BakedAllowedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BakedAllowedClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BakedAllowedClasses_ElementProp = { "BakedAllowedClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_IgnoredClasses_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** This classes are ignored (and their children) */" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
		{ "ToolTip", "This classes are ignored (and their children)" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_IgnoredClasses = { "IgnoredClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassFilter, IgnoredClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_IgnoredClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_IgnoredClasses_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_IgnoredClasses_ElementProp = { "IgnoredClasses", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_AllowedClasses_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** This classes are allowed (and their children) */" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
		{ "ToolTip", "This classes are allowed (and their children)" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_AllowedClasses = { "AllowedClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassFilter, AllowedClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_AllowedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_AllowedClasses_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_AllowedClasses_ElementProp = { "AllowedClasses", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BaseClass_MetaData[] = {
		{ "Comment", "// Used from editor side to limit displayed classes\n" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
		{ "ToolTip", "Used from editor side to limit displayed classes" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BaseClass = { "BaseClass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassFilter, BaseClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BaseClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BakedAllowedClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BakedAllowedClasses_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_IgnoredClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_IgnoredClasses_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_AllowedClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_AllowedClasses_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassFilter_Statics::NewProp_BaseClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"ClassFilter",
		sizeof(FClassFilter),
		alignof(FClassFilter),
		Z_Construct_UScriptStruct_FClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassFilter"), sizeof(FClassFilter), Get_Z_Construct_UScriptStruct_FClassFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassFilter_Hash() { return 2178251866U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
