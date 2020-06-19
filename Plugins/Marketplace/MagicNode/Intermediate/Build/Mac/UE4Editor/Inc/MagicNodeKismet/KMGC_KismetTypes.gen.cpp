// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeKismet/Classes/KMGC_KismetTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKMGC_KismetTypes() {}
// Cross Module References
	MAGICNODEKISMET_API UEnum* Z_Construct_UEnum_MagicNodeKismet_EAccessLevel();
	UPackage* Z_Construct_UPackage__Script_MagicNodeKismet();
	MAGICNODEKISMET_API UEnum* Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag();
	MAGICNODEKISMET_API UEnum* Z_Construct_UEnum_MagicNodeKismet_EStack();
	MAGICNODEKISMET_API UEnum* Z_Construct_UEnum_MagicNodeKismet_EType();
	MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FClassRedirector();
	MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FClassDefinition();
	MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionDefinition();
	MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyDefinition();
	MAGICNODEKISMET_API UScriptStruct* Z_Construct_UScriptStruct_FKeywordDefinition();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_KeywordDB_NoRegister();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_KeywordDB();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_ClassDB_NoRegister();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_ClassDB();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_FunctionDB_NoRegister();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_FunctionDB();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_SemanticDB_NoRegister();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_SemanticDB();
// End Cross Module References
	static UEnum* EAccessLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicNodeKismet_EAccessLevel, Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("EAccessLevel"));
		}
		return Singleton;
	}
	template<> MAGICNODEKISMET_API UEnum* StaticEnum<EAccessLevel>()
	{
		return EAccessLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccessLevel(EAccessLevel_StaticEnum, TEXT("/Script/MagicNodeKismet"), TEXT("EAccessLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicNodeKismet_EAccessLevel_Hash() { return 2610784901U; }
	UEnum* Z_Construct_UEnum_MagicNodeKismet_EAccessLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeKismet();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccessLevel"), 0, Get_Z_Construct_UEnum_MagicNodeKismet_EAccessLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccessLevel::None", (int64)EAccessLevel::None },
				{ "EAccessLevel::Public", (int64)EAccessLevel::Public },
				{ "EAccessLevel::Private", (int64)EAccessLevel::Private },
				{ "EAccessLevel::Protected", (int64)EAccessLevel::Protected },
				{ "EAccessLevel::Static", (int64)EAccessLevel::Static },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
				{ "None.Name", "EAccessLevel::None" },
				{ "Private.Name", "EAccessLevel::Private" },
				{ "Protected.Name", "EAccessLevel::Protected" },
				{ "Public.Name", "EAccessLevel::Public" },
				{ "Static.Name", "EAccessLevel::Static" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicNodeKismet,
				nullptr,
				"EAccessLevel",
				"EAccessLevel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFunctionFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag, Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("EFunctionFlag"));
		}
		return Singleton;
	}
	template<> MAGICNODEKISMET_API UEnum* StaticEnum<EFunctionFlag>()
	{
		return EFunctionFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFunctionFlag(EFunctionFlag_StaticEnum, TEXT("/Script/MagicNodeKismet"), TEXT("EFunctionFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag_Hash() { return 2489260405U; }
	UEnum* Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeKismet();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFunctionFlag"), 0, Get_Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFunctionFlag::None", (int64)EFunctionFlag::None },
				{ "EFunctionFlag::Pure", (int64)EFunctionFlag::Pure },
				{ "EFunctionFlag::Const", (int64)EFunctionFlag::Const },
				{ "EFunctionFlag::Event", (int64)EFunctionFlag::Event },
				{ "EFunctionFlag::Native", (int64)EFunctionFlag::Native },
				{ "EFunctionFlag::Callable", (int64)EFunctionFlag::Callable },
				{ "EFunctionFlag::Delegate", (int64)EFunctionFlag::Delegate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Callable.Name", "EFunctionFlag::Callable" },
				{ "Const.Name", "EFunctionFlag::Const" },
				{ "Delegate.Name", "EFunctionFlag::Delegate" },
				{ "Event.Name", "EFunctionFlag::Event" },
				{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
				{ "Native.Name", "EFunctionFlag::Native" },
				{ "None.Name", "EFunctionFlag::None" },
				{ "Pure.Name", "EFunctionFlag::Pure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicNodeKismet,
				nullptr,
				"EFunctionFlag",
				"EFunctionFlag",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStack_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicNodeKismet_EStack, Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("EStack"));
		}
		return Singleton;
	}
	template<> MAGICNODEKISMET_API UEnum* StaticEnum<EStack>()
	{
		return EStack_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStack(EStack_StaticEnum, TEXT("/Script/MagicNodeKismet"), TEXT("EStack"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicNodeKismet_EStack_Hash() { return 1346476323U; }
	UEnum* Z_Construct_UEnum_MagicNodeKismet_EStack()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeKismet();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStack"), 0, Get_Z_Construct_UEnum_MagicNodeKismet_EStack_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStack::None", (int64)EStack::None },
				{ "EStack::Array", (int64)EStack::Array },
				{ "EStack::Set", (int64)EStack::Set },
				{ "EStack::Map", (int64)EStack::Map },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Name", "EStack::Array" },
				{ "Map.Name", "EStack::Map" },
				{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
				{ "None.Name", "EStack::None" },
				{ "Set.Name", "EStack::Set" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicNodeKismet,
				nullptr,
				"EStack",
				"EStack",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicNodeKismet_EType, Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("EType"));
		}
		return Singleton;
	}
	template<> MAGICNODEKISMET_API UEnum* StaticEnum<EType>()
	{
		return EType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EType(EType_StaticEnum, TEXT("/Script/MagicNodeKismet"), TEXT("EType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicNodeKismet_EType_Hash() { return 2253094490U; }
	UEnum* Z_Construct_UEnum_MagicNodeKismet_EType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeKismet();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EType"), 0, Get_Z_Construct_UEnum_MagicNodeKismet_EType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EType::None", (int64)EType::None },
				{ "EType::Int", (int64)EType::Int },
				{ "EType::Byte", (int64)EType::Byte },
				{ "EType::Bool", (int64)EType::Bool },
				{ "EType::Float", (int64)EType::Float },
				{ "EType::Name", (int64)EType::Name },
				{ "EType::Text", (int64)EType::Text },
				{ "EType::String", (int64)EType::String },
				{ "EType::Enum", (int64)EType::Enum },
				{ "EType::Class", (int64)EType::Class },
				{ "EType::Struct", (int64)EType::Struct },
				{ "EType::Object", (int64)EType::Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bool.Name", "EType::Bool" },
				{ "Byte.Name", "EType::Byte" },
				{ "Class.Name", "EType::Class" },
				{ "Enum.Name", "EType::Enum" },
				{ "Float.Name", "EType::Float" },
				{ "Int.Name", "EType::Int" },
				{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
				{ "Name.Name", "EType::Name" },
				{ "None.Name", "EType::None" },
				{ "Object.Name", "EType::Object" },
				{ "String.Name", "EType::String" },
				{ "Struct.Name", "EType::Struct" },
				{ "Text.Name", "EType::Text" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicNodeKismet,
				nullptr,
				"EType",
				"EType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FClassRedirector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICNODEKISMET_API uint32 Get_Z_Construct_UScriptStruct_FClassRedirector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassRedirector, Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("ClassRedirector"), sizeof(FClassRedirector), Get_Z_Construct_UScriptStruct_FClassRedirector_Hash());
	}
	return Singleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FClassRedirector>()
{
	return FClassRedirector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassRedirector(FClassRedirector::StaticStruct, TEXT("/Script/MagicNodeKismet"), TEXT("ClassRedirector"), false, nullptr, nullptr);
static struct FScriptStruct_MagicNodeKismet_StaticRegisterNativesFClassRedirector
{
	FScriptStruct_MagicNodeKismet_StaticRegisterNativesFClassRedirector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClassRedirector")),new UScriptStruct::TCppStructOps<FClassRedirector>);
	}
} ScriptStruct_MagicNodeKismet_StaticRegisterNativesFClassRedirector;
	struct Z_Construct_UScriptStruct_FClassRedirector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwnerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassRedirector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassRedirector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_Hint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassRedirector, Hint), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_Hint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_Hint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassRedirector, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_OwnerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_OwnerClass = { "OwnerClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassRedirector, OwnerClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_OwnerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_OwnerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassRedirector, ObjectClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassRedirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_Hint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_OwnerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirector_Statics::NewProp_ObjectClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassRedirector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
		nullptr,
		&NewStructOps,
		"ClassRedirector",
		sizeof(FClassRedirector),
		alignof(FClassRedirector),
		Z_Construct_UScriptStruct_FClassRedirector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassRedirector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassRedirector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeKismet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassRedirector"), sizeof(FClassRedirector), Get_Z_Construct_UScriptStruct_FClassRedirector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassRedirector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassRedirector_Hash() { return 3013421388U; }
class UScriptStruct* FClassDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICNODEKISMET_API uint32 Get_Z_Construct_UScriptStruct_FClassDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassDefinition, Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("ClassDefinition"), sizeof(FClassDefinition), Get_Z_Construct_UScriptStruct_FClassDefinition_Hash());
	}
	return Singleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FClassDefinition>()
{
	return FClassDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassDefinition(FClassDefinition::StaticStruct, TEXT("/Script/MagicNodeKismet"), TEXT("ClassDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_MagicNodeKismet_StaticRegisterNativesFClassDefinition
{
	FScriptStruct_MagicNodeKismet_StaticRegisterNativesFClassDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClassDefinition")),new UScriptStruct::TCppStructOps<FClassDefinition>);
	}
} ScriptStruct_MagicNodeKismet_StaticRegisterNativesFClassDefinition;
	struct Z_Construct_UScriptStruct_FClassDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Functions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Functions_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Functions_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Variables;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Variables_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variables_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Hint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassDefinition, Hint), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Hint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Hint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Tooltip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassDefinition, Tooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassDefinition, ParentClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassDefinition, Functions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_Key_KeyProp = { "Functions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_ValueProp = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFunctionDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassDefinition, Variables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_Key_KeyProp = { "Variables_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_ValueProp = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPropertyDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Hint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Tooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_ParentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Functions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefinition_Statics::NewProp_Variables_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
		nullptr,
		&NewStructOps,
		"ClassDefinition",
		sizeof(FClassDefinition),
		alignof(FClassDefinition),
		Z_Construct_UScriptStruct_FClassDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeKismet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassDefinition"), sizeof(FClassDefinition), Get_Z_Construct_UScriptStruct_FClassDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassDefinition_Hash() { return 1366315663U; }
class UScriptStruct* FFunctionDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICNODEKISMET_API uint32 Get_Z_Construct_UScriptStruct_FFunctionDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionDefinition, Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("FunctionDefinition"), sizeof(FFunctionDefinition), Get_Z_Construct_UScriptStruct_FFunctionDefinition_Hash());
	}
	return Singleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FFunctionDefinition>()
{
	return FFunctionDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFunctionDefinition(FFunctionDefinition::StaticStruct, TEXT("/Script/MagicNodeKismet"), TEXT("FunctionDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_MagicNodeKismet_StaticRegisterNativesFFunctionDefinition
{
	FScriptStruct_MagicNodeKismet_StaticRegisterNativesFFunctionDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FunctionDefinition")),new UScriptStruct::TCppStructOps<FFunctionDefinition>);
	}
} ScriptStruct_MagicNodeKismet_StaticRegisterNativesFFunctionDefinition;
	struct Z_Construct_UScriptStruct_FFunctionDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Outputs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Inputs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Access_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Access;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Access_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackOf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StackOf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StackOf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeOf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypeOf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TypeOf_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Tooltip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionDefinition, Tooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Hint_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionDefinition, Hint), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Hint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Hint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionDefinition, Outputs), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs_ElementProp = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionDefinition, Inputs), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs_ElementProp = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_ReturnType_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_ReturnType = { "ReturnType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionDefinition, ReturnType), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_ReturnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_ReturnType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access = { "Access", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionDefinition, Access), Z_Construct_UEnum_MagicNodeKismet_EAccessLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionDefinition, Flag), Z_Construct_UEnum_MagicNodeKismet_EFunctionFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf = { "StackOf", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionDefinition, StackOf), Z_Construct_UEnum_MagicNodeKismet_EStack, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf = { "TypeOf", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionDefinition, TypeOf), Z_Construct_UEnum_MagicNodeKismet_EType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Tooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Hint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Outputs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Inputs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_ReturnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Access_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_StackOf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionDefinition_Statics::NewProp_TypeOf_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
		nullptr,
		&NewStructOps,
		"FunctionDefinition",
		sizeof(FFunctionDefinition),
		alignof(FFunctionDefinition),
		Z_Construct_UScriptStruct_FFunctionDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFunctionDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeKismet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FunctionDefinition"), sizeof(FFunctionDefinition), Get_Z_Construct_UScriptStruct_FFunctionDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFunctionDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFunctionDefinition_Hash() { return 1266625303U; }
class UScriptStruct* FPropertyDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICNODEKISMET_API uint32 Get_Z_Construct_UScriptStruct_FPropertyDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyDefinition, Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("PropertyDefinition"), sizeof(FPropertyDefinition), Get_Z_Construct_UScriptStruct_FPropertyDefinition_Hash());
	}
	return Singleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FPropertyDefinition>()
{
	return FPropertyDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyDefinition(FPropertyDefinition::StaticStruct, TEXT("/Script/MagicNodeKismet"), TEXT("PropertyDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_MagicNodeKismet_StaticRegisterNativesFPropertyDefinition
{
	FScriptStruct_MagicNodeKismet_StaticRegisterNativesFPropertyDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertyDefinition")),new UScriptStruct::TCppStructOps<FPropertyDefinition>);
	}
} ScriptStruct_MagicNodeKismet_StaticRegisterNativesFPropertyDefinition;
	struct Z_Construct_UScriptStruct_FPropertyDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Access_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Access;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Access_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackOf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StackOf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StackOf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeOf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypeOf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TypeOf_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Hint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Hint = { "Hint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyDefinition, Hint), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Hint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Hint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Tooltip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyDefinition, Tooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_ReturnType_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_ReturnType = { "ReturnType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyDefinition, ReturnType), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_ReturnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_ReturnType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access = { "Access", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyDefinition, Access), Z_Construct_UEnum_MagicNodeKismet_EAccessLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf_MetaData[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf = { "StackOf", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyDefinition, StackOf), Z_Construct_UEnum_MagicNodeKismet_EStack, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf = { "TypeOf", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyDefinition, TypeOf), Z_Construct_UEnum_MagicNodeKismet_EType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Hint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Tooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_ReturnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_Access_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_StackOf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyDefinition_Statics::NewProp_TypeOf_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
		nullptr,
		&NewStructOps,
		"PropertyDefinition",
		sizeof(FPropertyDefinition),
		alignof(FPropertyDefinition),
		Z_Construct_UScriptStruct_FPropertyDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeKismet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyDefinition"), sizeof(FPropertyDefinition), Get_Z_Construct_UScriptStruct_FPropertyDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyDefinition_Hash() { return 3654268679U; }
class UScriptStruct* FKeywordDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICNODEKISMET_API uint32 Get_Z_Construct_UScriptStruct_FKeywordDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeywordDefinition, Z_Construct_UPackage__Script_MagicNodeKismet(), TEXT("KeywordDefinition"), sizeof(FKeywordDefinition), Get_Z_Construct_UScriptStruct_FKeywordDefinition_Hash());
	}
	return Singleton;
}
template<> MAGICNODEKISMET_API UScriptStruct* StaticStruct<FKeywordDefinition>()
{
	return FKeywordDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeywordDefinition(FKeywordDefinition::StaticStruct, TEXT("/Script/MagicNodeKismet"), TEXT("KeywordDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_MagicNodeKismet_StaticRegisterNativesFKeywordDefinition
{
	FScriptStruct_MagicNodeKismet_StaticRegisterNativesFKeywordDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeywordDefinition")),new UScriptStruct::TCppStructOps<FKeywordDefinition>);
	}
} ScriptStruct_MagicNodeKismet_StaticRegisterNativesFKeywordDefinition;
	struct Z_Construct_UScriptStruct_FKeywordDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeywordDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeywordDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeywordDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeywordDefinition_Statics::NewProp_Info_MetaData[] = {
		{ "Category", "Definitions" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeywordDefinition_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeywordDefinition, Info), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeywordDefinition_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordDefinition_Statics::NewProp_Info_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeywordDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeywordDefinition_Statics::NewProp_Info,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeywordDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
		nullptr,
		&NewStructOps,
		"KeywordDefinition",
		sizeof(FKeywordDefinition),
		alignof(FKeywordDefinition),
		Z_Construct_UScriptStruct_FKeywordDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeywordDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeywordDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeywordDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeKismet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeywordDefinition"), sizeof(FKeywordDefinition), Get_Z_Construct_UScriptStruct_FKeywordDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeywordDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeywordDefinition_Hash() { return 2421193430U; }
	void UMGC_KeywordDB::StaticRegisterNativesUMGC_KeywordDB()
	{
	}
	UClass* Z_Construct_UClass_UMGC_KeywordDB_NoRegister()
	{
		return UMGC_KeywordDB::StaticClass();
	}
	struct Z_Construct_UClass_UMGC_KeywordDB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Extensions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extensions_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Macros_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Macros;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Macros_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Processors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Processors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Processors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operators_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Operators;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Operators_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptCore_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ScriptCore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptCore_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGC_KeywordDB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_KeywordDB_Statics::Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// MGC Parser Database Classes:\n" },
		{ "IncludePath", "KMGC_KismetTypes.h" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Parser Database Classes:" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_KeywordDB, Extensions), METADATA_PARAMS(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions_ElementProp = { "Extensions", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "/* MGC Default Macro Keywords. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Macro Keywords." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros = { "Macros", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_KeywordDB, Macros), METADATA_PARAMS(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros_ElementProp = { "Macros", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "/* MGC Default Pre-Processor Keywords. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Pre-Processor Keywords." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors = { "Processors", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_KeywordDB, Processors), METADATA_PARAMS(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors_ElementProp = { "Processors", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "/* MGC Default Operator Keywords. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Operator Keywords." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators = { "Operators", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_KeywordDB, Operators), METADATA_PARAMS(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators_ElementProp = { "Operators", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "/* MGC Default Scripting Keywords. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Scripting Keywords." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore = { "ScriptCore", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_KeywordDB, ScriptCore), METADATA_PARAMS(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore_ElementProp = { "ScriptCore", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGC_KeywordDB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Extensions_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Macros_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Processors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_Operators_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_KeywordDB_Statics::NewProp_ScriptCore_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGC_KeywordDB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_KeywordDB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMGC_KeywordDB_Statics::ClassParams = {
		&UMGC_KeywordDB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGC_KeywordDB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMGC_KeywordDB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_KeywordDB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGC_KeywordDB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMGC_KeywordDB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMGC_KeywordDB, 467392065);
	template<> MAGICNODEKISMET_API UClass* StaticClass<UMGC_KeywordDB>()
	{
		return UMGC_KeywordDB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMGC_KeywordDB(Z_Construct_UClass_UMGC_KeywordDB, &UMGC_KeywordDB::StaticClass, TEXT("/Script/MagicNodeKismet"), TEXT("UMGC_KeywordDB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_KeywordDB);
	void UMGC_ClassDB::StaticRegisterNativesUMGC_ClassDB()
	{
	}
	UClass* Z_Construct_UClass_UMGC_ClassDB_NoRegister()
	{
		return UMGC_ClassDB::StaticClass();
	}
	struct Z_Construct_UClass_UMGC_ClassDB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Extensions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extensions_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ScriptTypes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptTypes_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptCore_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ScriptCore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptCore_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGC_ClassDB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_ClassDB_Statics::Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "IncludePath", "KMGC_KismetTypes.h" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_ClassDB, Extensions), METADATA_PARAMS(Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions_ElementProp = { "Extensions", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "/* MGC Default Type Definitions. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Type Definitions." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes = { "ScriptTypes", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_ClassDB, ScriptTypes), METADATA_PARAMS(Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes_ElementProp = { "ScriptTypes", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "/* MGC Default Scripting Classes. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Scripting Classes." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore = { "ScriptCore", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_ClassDB, ScriptCore), METADATA_PARAMS(Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore_ElementProp = { "ScriptCore", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGC_ClassDB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_Extensions_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptTypes_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_ClassDB_Statics::NewProp_ScriptCore_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGC_ClassDB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_ClassDB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMGC_ClassDB_Statics::ClassParams = {
		&UMGC_ClassDB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGC_ClassDB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ClassDB_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMGC_ClassDB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ClassDB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGC_ClassDB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMGC_ClassDB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMGC_ClassDB, 4189054098);
	template<> MAGICNODEKISMET_API UClass* StaticClass<UMGC_ClassDB>()
	{
		return UMGC_ClassDB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMGC_ClassDB(Z_Construct_UClass_UMGC_ClassDB, &UMGC_ClassDB::StaticClass, TEXT("/Script/MagicNodeKismet"), TEXT("UMGC_ClassDB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_ClassDB);
	void UMGC_FunctionDB::StaticRegisterNativesUMGC_FunctionDB()
	{
	}
	UClass* Z_Construct_UClass_UMGC_FunctionDB_NoRegister()
	{
		return UMGC_FunctionDB::StaticClass();
	}
	struct Z_Construct_UClass_UMGC_FunctionDB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Extensions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extensions_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptCore_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ScriptCore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptCore_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGC_FunctionDB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_FunctionDB_Statics::Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "IncludePath", "KMGC_KismetTypes.h" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_FunctionDB, Extensions), METADATA_PARAMS(Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions_ElementProp = { "Extensions", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore_MetaData[] = {
		{ "Category", "Keywords" },
		{ "Comment", "/* MGC Default Scripting Classes. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Scripting Classes." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore = { "ScriptCore", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_FunctionDB, ScriptCore), METADATA_PARAMS(Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore_ElementProp = { "ScriptCore", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGC_FunctionDB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_Extensions_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_FunctionDB_Statics::NewProp_ScriptCore_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGC_FunctionDB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_FunctionDB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMGC_FunctionDB_Statics::ClassParams = {
		&UMGC_FunctionDB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGC_FunctionDB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_FunctionDB_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMGC_FunctionDB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_FunctionDB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGC_FunctionDB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMGC_FunctionDB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMGC_FunctionDB, 3839200363);
	template<> MAGICNODEKISMET_API UClass* StaticClass<UMGC_FunctionDB>()
	{
		return UMGC_FunctionDB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMGC_FunctionDB(Z_Construct_UClass_UMGC_FunctionDB, &UMGC_FunctionDB::StaticClass, TEXT("/Script/MagicNodeKismet"), TEXT("UMGC_FunctionDB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_FunctionDB);
	void UMGC_SemanticDB::StaticRegisterNativesUMGC_SemanticDB()
	{
	}
	UClass* Z_Construct_UClass_UMGC_SemanticDB_NoRegister()
	{
		return UMGC_SemanticDB::StaticClass();
	}
	struct Z_Construct_UClass_UMGC_SemanticDB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Documentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Documentation;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Documentation_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Documentation_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassRedirectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ClassRedirectors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassRedirectors_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassRedirectors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ClassDefinitions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassDefinitions_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassDefinitions_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MacroDefinitions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MacroDefinitions_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MacroDefinitions_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TypeDefinitions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TypeDefinitions_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TypeDefinitions_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeywordDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_KeywordDefinitions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeywordDefinitions_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeywordDefinitions_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGC_SemanticDB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_SemanticDB_Statics::Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "IncludePath", "KMGC_KismetTypes.h" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_MetaData[] = {
		{ "Category", "API Reference" },
		{ "Comment", "/* MGC Important Classes' Documentation. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Important Classes' Documentation." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation = { "Documentation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_SemanticDB, Documentation), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_Key_KeyProp = { "Documentation_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_ValueProp = { "Documentation", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_MetaData[] = {
		{ "Category", "Definitions" },
		{ "Comment", "/* MGC Default Scripting Map of Instantiated Classes. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Scripting Map of Instantiated Classes." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors = { "ClassRedirectors", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_SemanticDB, ClassRedirectors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_Key_KeyProp = { "ClassRedirectors_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_ValueProp = { "ClassRedirectors", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FClassRedirector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_MetaData[] = {
		{ "Category", "Definitions" },
		{ "Comment", "/* MGC Default Scripting Class Definitions. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Scripting Class Definitions." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions = { "ClassDefinitions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_SemanticDB, ClassDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_Key_KeyProp = { "ClassDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_ValueProp = { "ClassDefinitions", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FClassDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_MetaData[] = {
		{ "Category", "Definitions" },
		{ "Comment", "/* MGC Default Scripting Macro Definitions. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Scripting Macro Definitions." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions = { "MacroDefinitions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_SemanticDB, MacroDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_Key_KeyProp = { "MacroDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_ValueProp = { "MacroDefinitions", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FKeywordDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_MetaData[] = {
		{ "Category", "Definitions" },
		{ "Comment", "/* MGC Default Scripting Type Definitions. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Scripting Type Definitions." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions = { "TypeDefinitions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_SemanticDB, TypeDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_Key_KeyProp = { "TypeDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_ValueProp = { "TypeDefinitions", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FKeywordDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_MetaData[] = {
		{ "Category", "Definitions" },
		{ "Comment", "/* MGC Default Scripting Keyword Definitions. */" },
		{ "ModuleRelativePath", "Classes/KMGC_KismetTypes.h" },
		{ "ToolTip", "MGC Default Scripting Keyword Definitions." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions = { "KeywordDefinitions", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGC_SemanticDB, KeywordDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_Key_KeyProp = { "KeywordDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_ValueProp = { "KeywordDefinitions", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FKeywordDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGC_SemanticDB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_Documentation_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassRedirectors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_ClassDefinitions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_MacroDefinitions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_TypeDefinitions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGC_SemanticDB_Statics::NewProp_KeywordDefinitions_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGC_SemanticDB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_SemanticDB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMGC_SemanticDB_Statics::ClassParams = {
		&UMGC_SemanticDB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGC_SemanticDB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMGC_SemanticDB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_SemanticDB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGC_SemanticDB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMGC_SemanticDB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMGC_SemanticDB, 2964655555);
	template<> MAGICNODEKISMET_API UClass* StaticClass<UMGC_SemanticDB>()
	{
		return UMGC_SemanticDB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMGC_SemanticDB(Z_Construct_UClass_UMGC_SemanticDB, &UMGC_SemanticDB::StaticClass, TEXT("/Script/MagicNodeKismet"), TEXT("UMGC_SemanticDB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_SemanticDB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
