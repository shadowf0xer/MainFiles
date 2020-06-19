// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelLocalVariables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelLocalVariables() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPortalNodeSelector();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableBase();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableUsage_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableUsage();
// End Cross Module References
	static UEnum* EVoxelPortalNodePinCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelPortalNodePinCategory"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelPortalNodePinCategory>()
	{
		return EVoxelPortalNodePinCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelPortalNodePinCategory(EVoxelPortalNodePinCategory_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EVoxelPortalNodePinCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Hash() { return 2825834551U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelPortalNodePinCategory"), 0, Get_Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelPortalNodePinCategory::Boolean", (int64)EVoxelPortalNodePinCategory::Boolean },
				{ "EVoxelPortalNodePinCategory::Int", (int64)EVoxelPortalNodePinCategory::Int },
				{ "EVoxelPortalNodePinCategory::Float", (int64)EVoxelPortalNodePinCategory::Float },
				{ "EVoxelPortalNodePinCategory::Material", (int64)EVoxelPortalNodePinCategory::Material },
				{ "EVoxelPortalNodePinCategory::Color", (int64)EVoxelPortalNodePinCategory::Color },
				{ "EVoxelPortalNodePinCategory::Seed", (int64)EVoxelPortalNodePinCategory::Seed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Boolean.Name", "EVoxelPortalNodePinCategory::Boolean" },
				{ "Color.Name", "EVoxelPortalNodePinCategory::Color" },
				{ "Float.Name", "EVoxelPortalNodePinCategory::Float" },
				{ "Int.Name", "EVoxelPortalNodePinCategory::Int" },
				{ "Material.Name", "EVoxelPortalNodePinCategory::Material" },
				{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
				{ "Seed.Name", "EVoxelPortalNodePinCategory::Seed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EVoxelPortalNodePinCategory",
				"EVoxelPortalNodePinCategory",
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
class UScriptStruct* FVoxelPortalNodeSelector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelPortalNodeSelector"), sizeof(FVoxelPortalNodeSelector), Get_Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FVoxelPortalNodeSelector>()
{
	return FVoxelPortalNodeSelector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelPortalNodeSelector(FVoxelPortalNodeSelector::StaticStruct, TEXT("/Script/VoxelGraph"), TEXT("VoxelPortalNodeSelector"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraph_StaticRegisterNativesFVoxelPortalNodeSelector
{
	FScriptStruct_VoxelGraph_StaticRegisterNativesFVoxelPortalNodeSelector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelPortalNodeSelector")),new UScriptStruct::TCppStructOps<FVoxelPortalNodeSelector>);
	}
} ScriptStruct_VoxelGraph_StaticRegisterNativesFVoxelPortalNodeSelector;
	struct Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPortalNodeSelector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelPortalNodeSelector, Input), Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"VoxelPortalNodeSelector",
		sizeof(FVoxelPortalNodeSelector),
		alignof(FVoxelPortalNodeSelector),
		Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelPortalNodeSelector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelPortalNodeSelector"), sizeof(FVoxelPortalNodeSelector), Get_Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Hash() { return 3977403114U; }
	void UVoxelLocalVariableBase::StaticRegisterNativesUVoxelLocalVariableBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelLocalVariableBase_NoRegister()
	{
		return UVoxelLocalVariableBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLocalVariableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLocalVariableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelLocalVariables.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLocalVariableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLocalVariableBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLocalVariableBase_Statics::ClassParams = {
		&UVoxelLocalVariableBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLocalVariableBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelLocalVariableBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelLocalVariableBase, 185977918);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelLocalVariableBase>()
	{
		return UVoxelLocalVariableBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelLocalVariableBase(Z_Construct_UClass_UVoxelLocalVariableBase, &UVoxelLocalVariableBase::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelLocalVariableBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLocalVariableBase);
	void UVoxelLocalVariableDeclaration::StaticRegisterNativesUVoxelLocalVariableDeclaration()
	{
	}
	UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister()
	{
		return UVoxelLocalVariableDeclaration::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelLocalVariableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelLocalVariables.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableDeclaration, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableDeclaration, Category), Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableDeclaration, Name), METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLocalVariableDeclaration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::ClassParams = {
		&UVoxelLocalVariableDeclaration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers),
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelLocalVariableDeclaration, 1346642851);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelLocalVariableDeclaration>()
	{
		return UVoxelLocalVariableDeclaration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelLocalVariableDeclaration(Z_Construct_UClass_UVoxelLocalVariableDeclaration, &UVoxelLocalVariableDeclaration::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelLocalVariableDeclaration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLocalVariableDeclaration);
	void UVoxelLocalVariableUsage::StaticRegisterNativesUVoxelLocalVariableUsage()
	{
	}
	UClass* Z_Construct_UClass_UVoxelLocalVariableUsage_NoRegister()
	{
		return UVoxelLocalVariableUsage::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLocalVariableUsage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeclarationGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeclarationGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Declaration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelLocalVariableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelLocalVariables.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid = { "DeclarationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableUsage, DeclarationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration_MetaData[] = {
		{ "Comment", "// The declaration this node is linked to\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
		{ "ToolTip", "The declaration this node is linked to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableUsage, Declaration), Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLocalVariableUsage, Selector_DEPRECATED), Z_Construct_UScriptStruct_FVoxelPortalNodeSelector, METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLocalVariableUsage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::ClassParams = {
		&UVoxelLocalVariableUsage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers),
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLocalVariableUsage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelLocalVariableUsage, 2251743757);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelLocalVariableUsage>()
	{
		return UVoxelLocalVariableUsage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelLocalVariableUsage(Z_Construct_UClass_UVoxelLocalVariableUsage, &UVoxelLocalVariableUsage::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelLocalVariableUsage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLocalVariableUsage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
