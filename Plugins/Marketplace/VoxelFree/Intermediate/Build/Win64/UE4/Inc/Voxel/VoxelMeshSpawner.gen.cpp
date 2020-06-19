// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelMeshSpawner.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMeshSpawner() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerBase_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerBase();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawner();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroup_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroup();
// End Cross Module References
	static UEnum* EVoxelMeshSpawnerInstanceRandom_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMeshSpawnerInstanceRandom"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelMeshSpawnerInstanceRandom>()
	{
		return EVoxelMeshSpawnerInstanceRandom_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelMeshSpawnerInstanceRandom(EVoxelMeshSpawnerInstanceRandom_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelMeshSpawnerInstanceRandom"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom_Hash() { return 4085132139U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelMeshSpawnerInstanceRandom"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelMeshSpawnerInstanceRandom::Random", (int64)EVoxelMeshSpawnerInstanceRandom::Random },
				{ "EVoxelMeshSpawnerInstanceRandom::VoxelMaterial", (int64)EVoxelMeshSpawnerInstanceRandom::VoxelMaterial },
				{ "EVoxelMeshSpawnerInstanceRandom::ColorOutput", (int64)EVoxelMeshSpawnerInstanceRandom::ColorOutput },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ColorOutput.Comment", "// Get a voxel graph output color in the shader\n// Use GetColorFromInstanceRandom\n" },
				{ "ColorOutput.Name", "EVoxelMeshSpawnerInstanceRandom::ColorOutput" },
				{ "ColorOutput.ToolTip", "Get a voxel graph output color in the shader\nUse GetColorFromInstanceRandom" },
				{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
				{ "Random.Comment", "// Random number\n// Use GetVoxelSpawnerActorInstanceRandom to get it\n// Will have the same value in the spawned actor as in the instance\n" },
				{ "Random.Name", "EVoxelMeshSpawnerInstanceRandom::Random" },
				{ "Random.ToolTip", "Random number\nUse GetVoxelSpawnerActorInstanceRandom to get it\nWill have the same value in the spawned actor as in the instance" },
				{ "VoxelMaterial.Comment", "// Get the voxel material in the shader\n// Use GetVoxelMaterialFromInstanceRandom\n" },
				{ "VoxelMaterial.Name", "EVoxelMeshSpawnerInstanceRandom::VoxelMaterial" },
				{ "VoxelMaterial.ToolTip", "Get the voxel material in the shader\nUse GetVoxelMaterialFromInstanceRandom" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelMeshSpawnerInstanceRandom",
				"EVoxelMeshSpawnerInstanceRandom",
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
	void UVoxelMeshSpawnerBase::StaticRegisterNativesUVoxelMeshSpawnerBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelMeshSpawnerBase_NoRegister()
	{
		return UVoxelMeshSpawnerBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDetectionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingDetectionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstancedMeshSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysSpawnActor_MetaData[];
#endif
		static void NewProp_bAlwaysSpawnActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSpawnActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColorOutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InstanceRandom;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceRandom_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelBasicSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_FloatingDetectionOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
		{ "Comment", "// In local space. Increase this if your foliage is enabling physics too soon. In cm\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ToolTip", "In local space. Increase this if your foliage is enabling physics too soon. In cm" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_FloatingDetectionOffset = { "FloatingDetectionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, FloatingDetectionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_FloatingDetectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_FloatingDetectionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstancedMeshSettings_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstancedMeshSettings = { "InstancedMeshSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, InstancedMeshSettings), Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstancedMeshSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstancedMeshSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "Comment", "// Will always spawn an actor instead of an instanced mesh\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ToolTip", "Will always spawn an actor instead of an instanced mesh" },
	};
#endif
	void Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor_SetBit(void* Obj)
	{
		((UVoxelMeshSpawnerBase*)Obj)->bAlwaysSpawnActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor = { "bAlwaysSpawnActor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelMeshSpawnerBase), &Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ActorSettings_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "Comment", "// Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ActorSettings = { "ActorSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, ActorSettings), Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ActorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ActorSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ColorOutputName_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ColorOutputName = { "ColorOutputName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, ColorOutputName), METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ColorOutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ColorOutputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "// What to send through InstanceRandom\n// Check enum values tooltips\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ToolTip", "What to send through InstanceRandom\nCheck enum values tooltips" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom = { "InstanceRandom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, InstanceRandom), Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_FloatingDetectionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstancedMeshSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ActorSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ColorOutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::ClassParams = {
		&UVoxelMeshSpawnerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMeshSpawnerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMeshSpawnerBase, 2402263737);
	template<> VOXEL_API UClass* StaticClass<UVoxelMeshSpawnerBase>()
	{
		return UVoxelMeshSpawnerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMeshSpawnerBase(Z_Construct_UClass_UVoxelMeshSpawnerBase, &UVoxelMeshSpawnerBase::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMeshSpawnerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelMeshSpawnerBase)
	void UVoxelMeshSpawner::StaticRegisterNativesUVoxelMeshSpawner()
	{
	}
	UClass* Z_Construct_UClass_UVoxelMeshSpawner_NoRegister()
	{
		return UVoxelMeshSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMeshSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialsOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialsOverrides;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialsOverrides_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialsOverrides_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMeshSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMeshSpawnerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "// Per mesh section\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ToolTip", "Per mesh section" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides = { "MaterialsOverrides", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshSpawner, MaterialsOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_Key_KeyProp = { "MaterialsOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_ValueProp = { "MaterialsOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "// Mesh to spawn. Can be left to null if AlwaysSpawnActor is true\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ToolTip", "Mesh to spawn. Can be left to null if AlwaysSpawnActor is true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshSpawner, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMeshSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMeshSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::ClassParams = {
		&UVoxelMeshSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelMeshSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawner_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMeshSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMeshSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMeshSpawner, 1683701701);
	template<> VOXEL_API UClass* StaticClass<UVoxelMeshSpawner>()
	{
		return UVoxelMeshSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMeshSpawner(Z_Construct_UClass_UVoxelMeshSpawner, &UVoxelMeshSpawner::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMeshSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawner);
	void UVoxelMeshSpawnerGroup::StaticRegisterNativesUVoxelMeshSpawnerGroup()
	{
	}
	UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroup_NoRegister()
	{
		return UVoxelMeshSpawnerGroup::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMeshSpawnerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "// Meshes to spawn. Can be left to null if AlwaysSpawnActor is true\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ToolTip", "Meshes to spawn. Can be left to null if AlwaysSpawnActor is true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelMeshSpawnerGroup, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::ClassParams = {
		&UVoxelMeshSpawnerGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMeshSpawnerGroup, 2609521388);
	template<> VOXEL_API UClass* StaticClass<UVoxelMeshSpawnerGroup>()
	{
		return UVoxelMeshSpawnerGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMeshSpawnerGroup(Z_Construct_UClass_UVoxelMeshSpawnerGroup, &UVoxelMeshSpawnerGroup::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMeshSpawnerGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
