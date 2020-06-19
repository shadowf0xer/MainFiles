// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/Public/AttrModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttrModifier() {}
// Cross Module References
	ATTRIBUTES_API UEnum* Z_Construct_UEnum_Attributes_EModifierMask();
	UPackage* Z_Construct_UPackage__Script_Attributes();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttrModifier();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EModifierMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Attributes_EModifierMask, Z_Construct_UPackage__Script_Attributes(), TEXT("EModifierMask"));
		}
		return Singleton;
	}
	template<> ATTRIBUTES_API UEnum* StaticEnum<EModifierMask>()
	{
		return EModifierMask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModifierMask(EModifierMask_StaticEnum, TEXT("/Script/Attributes"), TEXT("EModifierMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Attributes_EModifierMask_Hash() { return 1172876737U; }
	UEnum* Z_Construct_UEnum_Attributes_EModifierMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Attributes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModifierMask"), 0, Get_Z_Construct_UEnum_Attributes_EModifierMask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModifierMask::Increment", (int64)EModifierMask::Increment },
				{ "EModifierMask::LastMultiplier", (int64)EModifierMask::LastMultiplier },
				{ "EModifierMask::BaseMultiplier", (int64)EModifierMask::BaseMultiplier },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BaseMultiplier.Comment", "// X += X * Cof  | Adds the incremental coefficient of the last modified value.\n" },
				{ "BaseMultiplier.Name", "EModifierMask::BaseMultiplier" },
				{ "BaseMultiplier.ToolTip", "X += X * Cof  | Adds the incremental coefficient of the last modified value." },
				{ "BlueprintType", "true" },
				{ "Comment", "/* Masks modifier effects in editor. */" },
				{ "Increment.Name", "EModifierMask::Increment" },
				{ "LastMultiplier.Comment", "// X += Value  | Sums a value to the attribute\n" },
				{ "LastMultiplier.Name", "EModifierMask::LastMultiplier" },
				{ "LastMultiplier.ToolTip", "X += Value  | Sums a value to the attribute" },
				{ "ModuleRelativePath", "Public/AttrModifier.h" },
				{ "ToolTip", "Masks modifier effects in editor." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Attributes,
				nullptr,
				"EModifierMask",
				"EModifierMask",
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
class UScriptStruct* FAttrModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ATTRIBUTES_API uint32 Get_Z_Construct_UScriptStruct_FAttrModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttrModifier, Z_Construct_UPackage__Script_Attributes(), TEXT("AttrModifier"), sizeof(FAttrModifier), Get_Z_Construct_UScriptStruct_FAttrModifier_Hash());
	}
	return Singleton;
}
template<> ATTRIBUTES_API UScriptStruct* StaticStruct<FAttrModifier>()
{
	return FAttrModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttrModifier(FAttrModifier::StaticStruct, TEXT("/Script/Attributes"), TEXT("AttrModifier"), false, nullptr, nullptr);
static struct FScriptStruct_Attributes_StaticRegisterNativesFAttrModifier
{
	FScriptStruct_Attributes_StaticRegisterNativesFAttrModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttrModifier")),new UScriptStruct::TCppStructOps<FAttrModifier>);
	}
} ScriptStruct_Attributes_StaticRegisterNativesFAttrModifier;
	struct Z_Construct_UScriptStruct_FAttrModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Increment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Increment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNetDirty_Guid_MetaData[];
#endif
		static void NewProp_bNetDirty_Guid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNetDirty_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttrModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Contains modifier values to be applied to an attribute. 32B */" },
		{ "ModuleRelativePath", "Public/AttrModifier.h" },
		{ "ToolTip", "Contains modifier values to be applied to an attribute. 32B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttrModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttrModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_BaseMultiplier_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "// X += Base * Cof  | Adds the incremental coefficient of the base value of the attribute.\n" },
		{ "Delta", "0.05" },
		{ "ModuleRelativePath", "Public/AttrModifier.h" },
		{ "ToolTip", "X += Base * Cof  | Adds the incremental coefficient of the base value of the attribute." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
		{ "Units", "x" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_BaseMultiplier = { "BaseMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttrModifier, BaseMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_BaseMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_BaseMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_LastMultiplier_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ColumnWidth", "70" },
		{ "Comment", "// X += X * Cof  | Adds the incremental coefficient of the last modified value.\n" },
		{ "Delta", "0.05" },
		{ "ModuleRelativePath", "Public/AttrModifier.h" },
		{ "ToolTip", "X += X * Cof  | Adds the incremental coefficient of the last modified value." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
		{ "Units", "x" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_LastMultiplier = { "LastMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttrModifier, LastMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_LastMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_LastMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Increment_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ColumnWidth", "70" },
		{ "Comment", "// X += Value  | Sums a value to the attribute\n" },
		{ "Delta", "0.01" },
		{ "ModuleRelativePath", "Public/AttrModifier.h" },
		{ "ToolTip", "X += Value  | Sums a value to the attribute" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttrModifier, Increment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Increment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Increment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_bNetDirty_Guid_MetaData[] = {
		{ "Comment", "// We use 4 bytes of alignment for Dirty flags\n" },
		{ "ModuleRelativePath", "Public/AttrModifier.h" },
		{ "ToolTip", "We use 4 bytes of alignment for Dirty flags" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_bNetDirty_Guid_SetBit(void* Obj)
	{
		((FAttrModifier*)Obj)->bNetDirty_Guid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_bNetDirty_Guid = { "bNetDirty_Guid", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAttrModifier), &Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_bNetDirty_Guid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_bNetDirty_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_bNetDirty_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/AttrModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttrModifier, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttrModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_BaseMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_LastMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Increment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_bNetDirty_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttrModifier_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttrModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
		nullptr,
		&NewStructOps,
		"AttrModifier",
		sizeof(FAttrModifier),
		alignof(FAttrModifier),
		Z_Construct_UScriptStruct_FAttrModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttrModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttrModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttrModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Attributes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttrModifier"), sizeof(FAttrModifier), Get_Z_Construct_UScriptStruct_FAttrModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttrModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttrModifier_Hash() { return 547539500U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
