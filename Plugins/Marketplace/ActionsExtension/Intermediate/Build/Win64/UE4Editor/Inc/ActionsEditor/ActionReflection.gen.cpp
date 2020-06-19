// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Nodes/ActionReflection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionReflection() {}
// Cross Module References
	ACTIONSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FActionProperties();
	UPackage* Z_Construct_UPackage__Script_ActionsEditor();
	ACTIONSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateActionProperty();
	ACTIONSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVariableActionProperty();
	ACTIONSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBaseActionProperty();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
// End Cross Module References
class UScriptStruct* FActionProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FActionProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionProperties, Z_Construct_UPackage__Script_ActionsEditor(), TEXT("ActionProperties"), sizeof(FActionProperties), Get_Z_Construct_UScriptStruct_FActionProperties_Hash());
	}
	return Singleton;
}
template<> ACTIONSEDITOR_API UScriptStruct* StaticStruct<FActionProperties>()
{
	return FActionProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActionProperties(FActionProperties::StaticStruct, TEXT("/Script/ActionsEditor"), TEXT("ActionProperties"), false, nullptr, nullptr);
static struct FScriptStruct_ActionsEditor_StaticRegisterNativesFActionProperties
{
	FScriptStruct_ActionsEditor_StaticRegisterNativesFActionProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActionProperties")),new UScriptStruct::TCppStructOps<FActionProperties>);
	}
} ScriptStruct_ActionsEditor_StaticRegisterNativesFActionProperties;
	struct Z_Construct_UScriptStruct_FActionProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComplexDelegates_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ComplexDelegates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComplexDelegates_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleDelegates_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SimpleDelegates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimpleDelegates_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Variables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variables_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_ComplexDelegates_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_ComplexDelegates = { "ComplexDelegates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionProperties, ComplexDelegates), METADATA_PARAMS(Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_ComplexDelegates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_ComplexDelegates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_ComplexDelegates_ElementProp = { "ComplexDelegates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDelegateActionProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_SimpleDelegates_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_SimpleDelegates = { "SimpleDelegates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionProperties, SimpleDelegates), METADATA_PARAMS(Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_SimpleDelegates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_SimpleDelegates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_SimpleDelegates_ElementProp = { "SimpleDelegates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDelegateActionProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionProperties, Variables), METADATA_PARAMS(Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_Variables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_Variables_ElementProp = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVariableActionProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_ComplexDelegates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_ComplexDelegates_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_SimpleDelegates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_SimpleDelegates_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_Variables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionProperties_Statics::NewProp_Variables_ElementProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsEditor,
		nullptr,
		&NewStructOps,
		"ActionProperties",
		sizeof(FActionProperties),
		alignof(FActionProperties),
		Z_Construct_UScriptStruct_FActionProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActionProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActionProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActionProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionsEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActionProperties"), sizeof(FActionProperties), Get_Z_Construct_UScriptStruct_FActionProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActionProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActionProperties_Hash() { return 741532401U; }
class UScriptStruct* FVariableActionProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVariableActionProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVariableActionProperty, Z_Construct_UPackage__Script_ActionsEditor(), TEXT("VariableActionProperty"), sizeof(FVariableActionProperty), Get_Z_Construct_UScriptStruct_FVariableActionProperty_Hash());
	}
	return Singleton;
}
template<> ACTIONSEDITOR_API UScriptStruct* StaticStruct<FVariableActionProperty>()
{
	return FVariableActionProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVariableActionProperty(FVariableActionProperty::StaticStruct, TEXT("/Script/ActionsEditor"), TEXT("VariableActionProperty"), false, nullptr, nullptr);
static struct FScriptStruct_ActionsEditor_StaticRegisterNativesFVariableActionProperty
{
	FScriptStruct_ActionsEditor_StaticRegisterNativesFVariableActionProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VariableActionProperty")),new UScriptStruct::TCppStructOps<FVariableActionProperty>);
	}
} ScriptStruct_ActionsEditor_StaticRegisterNativesFVariableActionProperty;
	struct Z_Construct_UScriptStruct_FVariableActionProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariableActionProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVariableActionProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVariableActionProperty>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVariableActionProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsEditor,
		Z_Construct_UScriptStruct_FBaseActionProperty,
		&NewStructOps,
		"VariableActionProperty",
		sizeof(FVariableActionProperty),
		alignof(FVariableActionProperty),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVariableActionProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariableActionProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVariableActionProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVariableActionProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionsEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VariableActionProperty"), sizeof(FVariableActionProperty), Get_Z_Construct_UScriptStruct_FVariableActionProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVariableActionProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVariableActionProperty_Hash() { return 3115944976U; }
class UScriptStruct* FDelegateActionProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDelegateActionProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateActionProperty, Z_Construct_UPackage__Script_ActionsEditor(), TEXT("DelegateActionProperty"), sizeof(FDelegateActionProperty), Get_Z_Construct_UScriptStruct_FDelegateActionProperty_Hash());
	}
	return Singleton;
}
template<> ACTIONSEDITOR_API UScriptStruct* StaticStruct<FDelegateActionProperty>()
{
	return FDelegateActionProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDelegateActionProperty(FDelegateActionProperty::StaticStruct, TEXT("/Script/ActionsEditor"), TEXT("DelegateActionProperty"), false, nullptr, nullptr);
static struct FScriptStruct_ActionsEditor_StaticRegisterNativesFDelegateActionProperty
{
	FScriptStruct_ActionsEditor_StaticRegisterNativesFDelegateActionProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DelegateActionProperty")),new UScriptStruct::TCppStructOps<FDelegateActionProperty>);
	}
} ScriptStruct_ActionsEditor_StaticRegisterNativesFDelegateActionProperty;
	struct Z_Construct_UScriptStruct_FDelegateActionProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateActionProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelegateActionProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateActionProperty>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelegateActionProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsEditor,
		Z_Construct_UScriptStruct_FBaseActionProperty,
		&NewStructOps,
		"DelegateActionProperty",
		sizeof(FDelegateActionProperty),
		alignof(FDelegateActionProperty),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateActionProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateActionProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelegateActionProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDelegateActionProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionsEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DelegateActionProperty"), sizeof(FDelegateActionProperty), Get_Z_Construct_UScriptStruct_FDelegateActionProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDelegateActionProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDelegateActionProperty_Hash() { return 3095357810U; }
class UScriptStruct* FBaseActionProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FBaseActionProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseActionProperty, Z_Construct_UPackage__Script_ActionsEditor(), TEXT("BaseActionProperty"), sizeof(FBaseActionProperty), Get_Z_Construct_UScriptStruct_FBaseActionProperty_Hash());
	}
	return Singleton;
}
template<> ACTIONSEDITOR_API UScriptStruct* StaticStruct<FBaseActionProperty>()
{
	return FBaseActionProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseActionProperty(FBaseActionProperty::StaticStruct, TEXT("/Script/ActionsEditor"), TEXT("BaseActionProperty"), false, nullptr, nullptr);
static struct FScriptStruct_ActionsEditor_StaticRegisterNativesFBaseActionProperty
{
	FScriptStruct_ActionsEditor_StaticRegisterNativesFBaseActionProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseActionProperty")),new UScriptStruct::TCppStructOps<FBaseActionProperty>);
	}
} ScriptStruct_ActionsEditor_StaticRegisterNativesFBaseActionProperty;
	struct Z_Construct_UScriptStruct_FBaseActionProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseActionProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseActionProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseActionProperty, Type), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseActionProperty, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/ActionReflection.h" },
	};
#endif
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseActionProperty, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Property_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseActionProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseActionProperty_Statics::NewProp_Property,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseActionProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsEditor,
		nullptr,
		&NewStructOps,
		"BaseActionProperty",
		sizeof(FBaseActionProperty),
		alignof(FBaseActionProperty),
		Z_Construct_UScriptStruct_FBaseActionProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseActionProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseActionProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseActionProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseActionProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseActionProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionsEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseActionProperty"), sizeof(FBaseActionProperty), Get_Z_Construct_UScriptStruct_FBaseActionProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseActionProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseActionProperty_Hash() { return 3284479480U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
