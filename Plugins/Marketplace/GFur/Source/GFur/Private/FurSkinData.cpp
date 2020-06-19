// Copyright 2018 GiM s.r.o. All Rights Reserved.

#include "FurSkinData.h"
#include "Runtime/Engine/Public/Rendering/SkeletalMeshRenderData.h"
#include "Runtime/Engine/Private/SkeletalRenderGPUSkin.h"
#include "Runtime/Renderer/Public/MeshMaterialShader.h"
#include "ShaderParameterUtils.h"
#include "FurComponent.h"

static TArray< struct FFurSkinData* > StaticFurSkinData;
static FCriticalSection  StaticFurSkinDataCS;


inline uint8 FSkinWeightDataVertexBuffer::GetBoneWeight(uint32 VertexWeightOffset, uint32 VertexInfluenceCount, uint32 InfluenceIndex) const
{
	if (InfluenceIndex < VertexInfluenceCount)
	{
		uint8* BoneData = Data + VertexWeightOffset;
		uint32 BoneWeightOffset = GetBoneIndexByteSize() * VertexInfluenceCount;
		return BoneData[BoneWeightOffset + InfluenceIndex];
	}
	else
	{
		return 0;
	}
}

inline uint32 FSkinWeightDataVertexBuffer::GetBoneIndex(uint32 VertexWeightOffset, uint32 VertexInfluenceCount, uint32 InfluenceIndex) const
{
	if (InfluenceIndex < VertexInfluenceCount)
	{
		uint8* BoneData = Data + VertexWeightOffset;
		if (Use16BitBoneIndex())
		{
			FBoneIndex16* BoneIndex16Ptr = (FBoneIndex16*)BoneData;
			return BoneIndex16Ptr[InfluenceIndex];
		}
		else
		{
			return BoneData[InfluenceIndex];
		}
	}
	else
	{
		return 0;
	}
}

inline uint32 FSkinWeightVertexBuffer::GetBoneIndex(uint32 VertexIndex, uint32 InfluenceIndex) const
{
	uint32 VertexWeightOffset = 0;
	uint32 VertexInfluenceCount = 0;
	GetVertexInfluenceOffsetCount(VertexIndex, VertexWeightOffset, VertexInfluenceCount);
	return DataVertexBuffer.GetBoneIndex(VertexWeightOffset, VertexInfluenceCount, InfluenceIndex);
}

inline uint8 FSkinWeightVertexBuffer::GetBoneWeight(uint32 VertexIndex, uint32 InfluenceIndex) const
{
	uint32 VertexWeightOffset = 0;
	uint32 VertexInfluenceCount = 0;
	GetVertexInfluenceOffsetCount(VertexIndex, VertexWeightOffset, VertexInfluenceCount);
	return DataVertexBuffer.GetBoneWeight(VertexWeightOffset, VertexInfluenceCount, InfluenceIndex);
}

inline void FSkinWeightVertexBuffer::GetVertexInfluenceOffsetCount(uint32 VertexIndex, uint32& VertexWeightOffset, uint32& VertexInfluenceCount) const
{
	if (GetVariableBonesPerVertex())
	{
		LookupVertexBuffer.GetWeightOffsetAndInfluenceCount(VertexIndex, VertexWeightOffset, VertexInfluenceCount);
	}
	else
	{
		VertexWeightOffset = GetConstantInfluencesVertexStride() * VertexIndex;
		VertexInfluenceCount = GetMaxBoneInfluences();
	}
}

inline void FSkinWeightLookupVertexBuffer::GetWeightOffsetAndInfluenceCount(uint32 VertexIndex, uint32& OutWeightOffset, uint32& OutInfluenceCount) const
{
	uint32 Offset = VertexIndex * 4;
	uint32 DataUInt32 = *((uint32*)(&Data[Offset]));
	OutWeightOffset = DataUInt32 >> 8;
	OutInfluenceCount = DataUInt32 & 0xff;
}


/** Fur Skin Vertex Buffer */
void FFurSkinVertexBuffer::InitRHI()
{
	FRHIResourceCreateInfo CreateInfo;
	VertexBufferRHI = RHICreateVertexBuffer(Vertices.Num() * sizeof(FFurSkinVertex), BUF_Static, CreateInfo);
	// Copy the vertex data into the vertex buffer.
	void* VertexBufferData = RHILockVertexBuffer(VertexBufferRHI, 0, Vertices.Num() * sizeof(FFurSkinVertex), RLM_WriteOnly);
	FMemory::Memcpy(VertexBufferData, Vertices.GetData(), Vertices.Num() * sizeof(FFurSkinVertex));
	RHIUnlockVertexBuffer(VertexBufferRHI);
}

unsigned int MaxGPUSkinBones = 256;

/** Vertex Factory Shader Parameters */
template <bool Physics>
class FFurSkinVertexFactoryShaderParameters : public FVertexFactoryShaderParameters
{
	DECLARE_INLINE_TYPE_LAYOUT(FFurSkinVertexFactoryShaderParameters<Physics>, NonVirtual);
public:
	void Bind(const FShaderParameterMap& ParameterMap)
	{
		MeshOriginParameter.Bind(ParameterMap, TEXT("MeshOrigin"));
		MeshExtensionParameter.Bind(ParameterMap, TEXT("MeshExtension"));
		FurOffsetPowerParameter.Bind(ParameterMap, TEXT("FurOffsetPower"));
		BoneMatrices.Bind(ParameterMap, TEXT("BoneMatrices"));
		PreviousBoneMatrices.Bind(ParameterMap, TEXT("PreviousBoneMatrices"));
		BoneFurOffsets.Bind(ParameterMap, TEXT("BoneFurOffsets"));
		PreviousBoneFurOffsets.Bind(ParameterMap, TEXT("PreviousBoneFurOffsets"));
	}


	void Serialize(FArchive& Ar)
	{
		Ar << MeshOriginParameter;
		Ar << MeshExtensionParameter;
		Ar << FurOffsetPowerParameter;
		Ar << BoneMatrices;
		Ar << PreviousBoneMatrices;
		Ar << BoneFurOffsets;
		Ar << PreviousBoneFurOffsets;
	}


	/**
	* Set any shader data specific to this vertex factory
	*/
	void GetElementShaderBindings(
		const class FSceneInterface* Scene,
		const class FSceneView* View,
		const class FMeshMaterialShader* Shader,
		const EVertexInputStreamType InputStreamType,
		ERHIFeatureLevel::Type FeatureLevel,
		const class FVertexFactory* VertexFactory,
		const struct FMeshBatchElement& BatchElement,
		class FMeshDrawSingleShaderBindings& ShaderBindings,
		FVertexInputStreamArray& VertexStreams) const;

	uint32 GetSize() const { return sizeof(*this); }

private:
	LAYOUT_FIELD(FShaderParameter, MeshOriginParameter);
	LAYOUT_FIELD(FShaderParameter, MeshExtensionParameter);
	LAYOUT_FIELD(FShaderParameter, FurOffsetPowerParameter);
	LAYOUT_FIELD(FShaderResourceParameter, BoneMatrices);
	LAYOUT_FIELD(FShaderResourceParameter, PreviousBoneMatrices);
	LAYOUT_FIELD(FShaderResourceParameter, BoneFurOffsets);
	LAYOUT_FIELD(FShaderResourceParameter, PreviousBoneFurOffsets);
};

/** Vertex Factory */
template<bool MorphTargets, bool Physics, bool ExtraInfluences>
class FFurSkinVertexFactoryBase : public FFurVertexFactory
{
	typedef FFurSkinVertexFactoryBase<MorphTargets, Physics, ExtraInfluences> This;

public:
	struct FShaderDataType
	{
		FShaderDataType(ERHIFeatureLevel::Type InFeatureLevel)
			: MeshOrigin(0, 0, 0)
			, MeshExtension(1, 1, 1)
			, FurOffsetPower(2.0f)
			, CurrentBuffer(0)
			, FeatureLevel(InFeatureLevel)
			, Discontinuous(true)
		{
		}

		/** Mesh origin and Mesh Extension for Mesh compressions **/
		/** This value will be (0, 0, 0), (1, 1, 1) relatively for non compressed meshes **/
		FVector MeshOrigin;
		FVector MeshExtension;
		float FurOffsetPower;

		void Init(uint32 InBoneCount)
		{
			BoneCount = InBoneCount;
		}

		// @param FrameTime from GFrameTime
		void UpdateBoneData(const TArray<FMatrix>& ReferenceToLocalMatrices, const TArray<FVector>& LinearOffsets, const TArray<FVector>& AngularOffsets,
			const TArray<FMatrix>& LastTransformations, const TArray<FBoneIndexType>& BoneMap, bool InDiscontinuous, ERHIFeatureLevel::Type FeatureLevel);

		void InitDynamicRHI();

		void ReleaseBoneData()
		{
			ensure(IsInRenderingThread());

			UniformBuffer.SafeRelease();

			for (uint32 i = 0; i < 2; ++i)
			{
				BoneBuffer[i].SafeRelease();
				BoneFurOffsetsBuffer[i].SafeRelease();
			}
		}

		// if FeatureLevel < ERHIFeatureLevel::ES3_1
		FUniformBufferRHIRef GetUniformBuffer() const
		{
			return UniformBuffer;
		}

		// @param bPrevious true:previous, false:current
		// @param FrameNumber usually from View.Family->FrameNumber
		const FVertexBufferAndSRV& GetBoneBufferForReading(bool bPrevious) const
		{
			const FVertexBufferAndSRV* RetPtr = &GetBoneBufferInternal(bPrevious);

			if (!RetPtr->VertexBufferRHI.IsValid())
			{
				// this only should happen if we request the old data
				check(bPrevious);

				// if we don't have any old data we use the current one
				RetPtr = &GetBoneBufferInternal(false);

				// at least the current one needs to be valid when reading
				check(RetPtr->VertexBufferRHI.IsValid());
			}

			return *RetPtr;
		}

		// @param bPrevious true:previous, false:current
		// @param FrameNumber usually from View.Family->FrameNumber
		// @return IsValid() can fail, then you have to create the buffers first (or if the size changes)
		FVertexBufferAndSRV& GetBoneBufferForWriting(bool bPrevious)
		{
			const FShaderDataType* This = (const FShaderDataType*)this;

			// non const version maps to const version
			return (FVertexBufferAndSRV&)This->GetBoneBufferInternal(bPrevious);
		}

		const FVertexBufferAndSRV& GetBoneFurOffsetsBufferForReading(bool bPrevious) const
		{
			const FVertexBufferAndSRV* RetPtr = &GetBoneFurOffsetsBufferInternal(bPrevious);

			if (!RetPtr->VertexBufferRHI.IsValid())
			{
				// this only should happen if we request the old data
				check(bPrevious);

				// if we don't have any old data we use the current one
				RetPtr = &GetBoneFurOffsetsBufferInternal(false);

				// at least the current one needs to be valid when reading
				check(RetPtr->VertexBufferRHI.IsValid());
			}

			return *RetPtr;
		}

		FVertexBufferAndSRV& GetBoneFurOffsetsBufferForWriting(bool bPrevious)
		{
			const FShaderDataType* This = (const FShaderDataType*)this;

			// non const version maps to const version
			return (FVertexBufferAndSRV&)This->GetBoneFurOffsetsBufferInternal(bPrevious);
		}

	private:
		// double buffered bone positions+orientations to support normal rendering and velocity (new-old position) rendering
		FVertexBufferAndSRV BoneBuffer[2];
		FVertexBufferAndSRV BoneFurOffsetsBuffer[2];
		// 0 / 1 to index into BoneBuffer
		uint32 CurrentBuffer;
		// if FeatureLevel < ERHIFeatureLevel::ES3_1
		FUniformBufferRHIRef UniformBuffer;
		uint32 BoneCount;
		ERHIFeatureLevel::Type FeatureLevel;
		bool Discontinuous;

		void GoToNextFrame(bool InDiscontinuous);

		// to support GetBoneBufferForWriting() and GetBoneBufferForReading()
		// @param bPrevious true:previous, false:current
		// @param FrameNumber usually from View.Family->FrameNumber
		// @return might not pass the IsValid() 
		const FVertexBufferAndSRV& GetBoneBufferInternal(bool bPrevious) const
		{
			check(IsInParallelRenderingThread());

			if (Discontinuous)
			{
				bPrevious = false;
			}

			uint32 BufferIndex = CurrentBuffer ^ (uint32)bPrevious;

			const FVertexBufferAndSRV& Ret = BoneBuffer[BufferIndex];
			return Ret;
		}

		const FVertexBufferAndSRV& GetBoneFurOffsetsBufferInternal(bool bPrevious) const
		{
			check(IsInParallelRenderingThread());

			if (Discontinuous)
			{
				bPrevious = false;
			}

			uint32 BufferIndex = CurrentBuffer ^ (uint32)bPrevious;

			const FVertexBufferAndSRV& Ret = BoneFurOffsetsBuffer[BufferIndex];
			return Ret;
		}
	};

	FFurSkinVertexFactoryBase(ERHIFeatureLevel::Type InFeatureLevel)
		: FFurVertexFactory(InFeatureLevel)
		, ShaderData(InFeatureLevel)
	{
	}

	struct FDataType
	{
		FVertexStreamComponent PositionComponent;
		FVertexStreamComponent TangentBasisComponents[2];
		TArray<FVertexStreamComponent, TFixedAllocator<MAX_TEXCOORDS>> TextureCoordinates;
		FVertexStreamComponent ColorComponent;
		FVertexStreamComponent BoneIndices;
		FVertexStreamComponent BoneIndicesExtra;
		FVertexStreamComponent BoneWeights;
		FVertexStreamComponent BoneWeightsExtra;
		FVertexStreamComponent FurOffset;

		FVertexStreamComponent DeltaPosition;
		FVertexStreamComponent DeltaTangentZ;
	};

	void Init(const FFurSkinVertexBuffer* VertexBuffer, const FVertexBuffer* MorphVertexBuffer, uint32 BoneCount)
	{
		ShaderData.Init(BoneCount);
		ENQUEUE_RENDER_COMMAND(InitProceduralMeshVertexFactory)
			([this, VertexBuffer, MorphVertexBuffer](FRHICommandListImmediate& RHICmdList){
				// Initialize the vertex factory's stream components.
				FDataType NewData;
				NewData.PositionComponent = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFurSkinVertex, Position, VET_Float3);
				int c = sizeof(FFurSkinVertex::UVs) / sizeof(FFurSkinVertex::UVs[0]);
				for (int i = 0; i < c; ++i)
				{
					NewData.TextureCoordinates.Add(FVertexStreamComponent(VertexBuffer, STRUCT_OFFSET(FFurSkinVertex, UVs[i]), sizeof(FFurSkinVertex), VET_Float2));
				}
				NewData.TangentBasisComponents[0] = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFurSkinVertex, TangentX, VET_PackedNormal);
				NewData.TangentBasisComponents[1] = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFurSkinVertex, TangentZ, VET_PackedNormal);
				NewData.ColorComponent = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFurSkinVertex, Color, VET_Color);
				NewData.BoneIndices = FVertexStreamComponent(VertexBuffer, STRUCT_OFFSET(FFurSkinVertex, InfluenceBones), sizeof(FFurSkinVertex), VET_UByte4);
				if (ExtraInfluences)
					NewData.BoneIndicesExtra = FVertexStreamComponent(VertexBuffer, STRUCT_OFFSET(FFurSkinVertex, InfluenceBones) + 4, sizeof(FFurSkinVertex), VET_UByte4);
				NewData.BoneWeights = FVertexStreamComponent(VertexBuffer, STRUCT_OFFSET(FFurSkinVertex, InfluenceWeights), sizeof(FFurSkinVertex), VET_UByte4N);
				if (ExtraInfluences)
					NewData.BoneWeightsExtra = FVertexStreamComponent(VertexBuffer, STRUCT_OFFSET(FFurSkinVertex, InfluenceWeights) + 4, sizeof(FFurSkinVertex), VET_UByte4N);
				NewData.FurOffset = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFurSkinVertex, FurOffset, VET_Float3);

				if (MorphTargets)
				{
					NewData.DeltaPosition = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(MorphVertexBuffer, FMorphGPUSkinVertex, DeltaPosition, VET_Float3);
					NewData.DeltaTangentZ = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(MorphVertexBuffer, FMorphGPUSkinVertex, DeltaTangentZ, VET_Float3);
				}

				SetData(NewData);
			});
	}

	static FVertexFactoryShaderParameters* ConstructShaderParameters(EShaderFrequency ShaderFrequency)
	{
		return (ShaderFrequency == SF_Vertex) ? new FFurSkinVertexFactoryShaderParameters<Physics>() : NULL;
	}


	static bool ShouldCache(const FVertexFactoryShaderPermutationParameters& Parameters)
	{
		return (Parameters.MaterialParameters.bIsUsedWithSkeletalMesh || Parameters.MaterialParameters.bIsSpecialEngineMaterial);
	}

	static void ModifyCompilationEnvironment(const FVertexFactoryShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
	{
//		Super::ModifyCompilationEnvironment(Platform, Material, OutEnvironment);
		if (MorphTargets)
			OutEnvironment.SetDefine(TEXT("GPUSKIN_MORPH_BLEND"), TEXT("1"));
		if (Physics)
			OutEnvironment.SetDefine(TEXT("GFUR_PHYSICS"), TEXT("1"));
		if (ExtraInfluences)
			OutEnvironment.SetDefine(TEXT("GPUSKIN_USE_EXTRA_INFLUENCES"), TEXT("1"));
	}

	static bool ShouldCompilePermutation(const FVertexFactoryShaderPermutationParameters& Parameters)
	{
		if (Parameters.MaterialParameters.bIsUsedWithSkeletalMesh)
			return true;
		if (Parameters.MaterialParameters.bIsSpecialEngineMaterial)
			return true;
		return (MorphTargets ? Parameters.MaterialParameters.bIsUsedWithMorphTargets : false);
	}

	void SetData(const FDataType& InData)
	{
		Data = InData;
		FVertexFactory::UpdateRHI();
	}

	void AddVertexElements(FDataType& InData, FVertexDeclarationElementList& OutElements)
	{
		OutElements.Add(AccessStreamComponent(InData.PositionComponent, 0));

		OutElements.Add(AccessStreamComponent(InData.TangentBasisComponents[0], 1));
		OutElements.Add(AccessStreamComponent(InData.TangentBasisComponents[1], 2));

		if (InData.TextureCoordinates.Num())
		{
			const uint8 BaseTexCoordAttribute = 5;
			for (int32 CoordinateIndex = 0; CoordinateIndex < InData.TextureCoordinates.Num(); CoordinateIndex++)
			{
				OutElements.Add(AccessStreamComponent(
					InData.TextureCoordinates[CoordinateIndex], BaseTexCoordAttribute + CoordinateIndex));
			}

			for (int32 CoordinateIndex = InData.TextureCoordinates.Num(); CoordinateIndex < MAX_TEXCOORDS;
				CoordinateIndex++)
			{
				OutElements.Add(AccessStreamComponent(InData.TextureCoordinates[InData.TextureCoordinates.Num() - 1],
					BaseTexCoordAttribute + CoordinateIndex));
			}
		}

		if (InData.ColorComponent.VertexBuffer)
		{
			OutElements.Add(AccessStreamComponent(InData.ColorComponent, 13));
		}
		else
		{
			FVertexStreamComponent NullColorComponent(&GNullColorVertexBuffer, 0, 0, VET_Color);
			OutElements.Add(AccessStreamComponent(NullColorComponent, 13));
		}
		OutElements.Add(AccessStreamComponent(InData.BoneIndices, 3));
		OutElements.Add(AccessStreamComponent(InData.BoneWeights, 4));
		OutElements.Add(AccessStreamComponent(InData.FurOffset, 12));

		if (MorphTargets)
		{
			OutElements.Add(AccessStreamComponent(InData.DeltaPosition, 9));
			OutElements.Add(AccessStreamComponent(InData.DeltaTangentZ, 10));
		}

		if (ExtraInfluences)
		{
			OutElements.Add(AccessStreamComponent(InData.BoneIndicesExtra, 14));
			OutElements.Add(AccessStreamComponent(InData.BoneWeightsExtra, 15));
		}
	}

	void InitRHI() override
	{
		// list of declaration items
		FVertexDeclarationElementList Elements;
		AddVertexElements(Data, Elements);

		// create the actual device decls
		InitDeclaration(Elements);
	}

	void InitDynamicRHI() override
	{
		FVertexFactory::InitDynamicRHI();
		ShaderData.InitDynamicRHI();
	}

	void ReleaseDynamicRHI() override
	{
		FVertexFactory::ReleaseDynamicRHI();
		ShaderData.ReleaseBoneData();
	}

	void UpdateSkeletonShaderData(float InFurOffsetPower, const TArray<FMatrix>& InReferenceToLocal, const TArray<FVector>& InLinearOffsets, const TArray<FVector>& InAngularOffsets,
		const TArray<FMatrix>& InTransformations, const TArray<FBoneIndexType>& InBoneMap, bool InDiscontinuous, ERHIFeatureLevel::Type InFeatureLevel) override
	{
		ShaderData.FurOffsetPower = InFurOffsetPower;
		ShaderData.UpdateBoneData(InReferenceToLocal, InLinearOffsets, InAngularOffsets, InTransformations, InBoneMap, InDiscontinuous, InFeatureLevel);
	}

	FDataType Data;
	FShaderDataType ShaderData;
};

class FMorphPhysicsExtraInfluencesFurSkinVertexFactory : public FFurSkinVertexFactoryBase<true, true, true>
{
	DECLARE_VERTEX_FACTORY_TYPE(FMorphPhysicsExtraInfluencesFurSkinVertexFactory);
public:
	FMorphPhysicsExtraInfluencesFurSkinVertexFactory(ERHIFeatureLevel::Type InFeatureLevel)
		: FFurSkinVertexFactoryBase<true, true, true>(InFeatureLevel)
	{
	}

	using FFurSkinVertexFactoryBase<true, true, true>::Init;
};

class FPhysicsExtraInfluencesFurSkinVertexFactory : public FFurSkinVertexFactoryBase<false, true, true>
{
	DECLARE_VERTEX_FACTORY_TYPE(FPhysicsExtraInfluencesFurSkinVertexFactory);
public:
	FPhysicsExtraInfluencesFurSkinVertexFactory(ERHIFeatureLevel::Type InFeatureLevel)
		: FFurSkinVertexFactoryBase<false, true, true>(InFeatureLevel)
	{
	}

	using FFurSkinVertexFactoryBase<false, true, true>::Init;
};

class FMorphExtraInfluencesFurSkinVertexFactory : public FFurSkinVertexFactoryBase<true, false, true>
{
	DECLARE_VERTEX_FACTORY_TYPE(FMorphExtraInfluencesFurSkinVertexFactory);
public:
	FMorphExtraInfluencesFurSkinVertexFactory(ERHIFeatureLevel::Type InFeatureLevel)
		: FFurSkinVertexFactoryBase<true, false, true>(InFeatureLevel)
	{
	}

	using FFurSkinVertexFactoryBase<true, false, true>::Init;
};

class FExtraInfluencesFurSkinVertexFactory : public FFurSkinVertexFactoryBase<false, false, true>
{
	DECLARE_VERTEX_FACTORY_TYPE(FExtraInfluencesFurSkinVertexFactory);
public:
	FExtraInfluencesFurSkinVertexFactory(ERHIFeatureLevel::Type InFeatureLevel)
		: FFurSkinVertexFactoryBase<false, false, true>(InFeatureLevel)
	{
	}

	using FFurSkinVertexFactoryBase<false, false, true>::Init;
};

class FMorphPhysicsFurSkinVertexFactory : public FFurSkinVertexFactoryBase<true, true, false>
{
	DECLARE_VERTEX_FACTORY_TYPE(FMorphPhysicsFurSkinVertexFactory);
public:
	FMorphPhysicsFurSkinVertexFactory(ERHIFeatureLevel::Type InFeatureLevel)
		: FFurSkinVertexFactoryBase<true, true, false>(InFeatureLevel)
	{
	}

	using FFurSkinVertexFactoryBase<true, true, false>::Init;
};

class FPhysicsFurSkinVertexFactory : public FFurSkinVertexFactoryBase<false, true, false>
{
	DECLARE_VERTEX_FACTORY_TYPE(FPhysicsFurSkinVertexFactory);
public:
	FPhysicsFurSkinVertexFactory(ERHIFeatureLevel::Type InFeatureLevel)
		: FFurSkinVertexFactoryBase<false, true, false>(InFeatureLevel)
	{
	}

	using FFurSkinVertexFactoryBase<false, true, false>::Init;
};

class FMorphFurSkinVertexFactory : public FFurSkinVertexFactoryBase<true, false, false>
{
	DECLARE_VERTEX_FACTORY_TYPE(FMorphFurSkinVertexFactory);
public:
	FMorphFurSkinVertexFactory(ERHIFeatureLevel::Type InFeatureLevel)
		: FFurSkinVertexFactoryBase<true, false, false>(InFeatureLevel)
	{
	}

	using FFurSkinVertexFactoryBase<true, false, false>::Init;
};

class FFurSkinVertexFactory : public FFurSkinVertexFactoryBase<false, false, false>
{
	DECLARE_VERTEX_FACTORY_TYPE(FFurSkinVertexFactory);
public:
	FFurSkinVertexFactory(ERHIFeatureLevel::Type InFeatureLevel)
		: FFurSkinVertexFactoryBase<false, false, false>(InFeatureLevel)
	{
	}

	using FFurSkinVertexFactoryBase<false, false, false>::Init;
};

IMPLEMENT_VERTEX_FACTORY_PARAMETER_TYPE(FMorphPhysicsExtraInfluencesFurSkinVertexFactory, SF_Vertex, FFurSkinVertexFactoryShaderParameters<true>);
IMPLEMENT_VERTEX_FACTORY_PARAMETER_TYPE(FPhysicsExtraInfluencesFurSkinVertexFactory, SF_Vertex, FFurSkinVertexFactoryShaderParameters<true>);
IMPLEMENT_VERTEX_FACTORY_PARAMETER_TYPE(FMorphExtraInfluencesFurSkinVertexFactory, SF_Vertex, FFurSkinVertexFactoryShaderParameters<false>);
IMPLEMENT_VERTEX_FACTORY_PARAMETER_TYPE(FExtraInfluencesFurSkinVertexFactory, SF_Vertex, FFurSkinVertexFactoryShaderParameters<false>);
IMPLEMENT_VERTEX_FACTORY_PARAMETER_TYPE(FMorphPhysicsFurSkinVertexFactory, SF_Vertex, FFurSkinVertexFactoryShaderParameters<true>);
IMPLEMENT_VERTEX_FACTORY_PARAMETER_TYPE(FPhysicsFurSkinVertexFactory, SF_Vertex, FFurSkinVertexFactoryShaderParameters<true>);
IMPLEMENT_VERTEX_FACTORY_PARAMETER_TYPE(FMorphFurSkinVertexFactory, SF_Vertex, FFurSkinVertexFactoryShaderParameters<false>);
IMPLEMENT_VERTEX_FACTORY_PARAMETER_TYPE(FFurSkinVertexFactory, SF_Vertex, FFurSkinVertexFactoryShaderParameters<false>);

IMPLEMENT_VERTEX_FACTORY_TYPE(FMorphPhysicsExtraInfluencesFurSkinVertexFactory, "/Plugin/gFur/Private/GFurFactory.ush", true, false, true, true, false);
IMPLEMENT_VERTEX_FACTORY_TYPE(FPhysicsExtraInfluencesFurSkinVertexFactory, "/Plugin/gFur/Private/GFurFactory.ush", true, false, true, true, false);
IMPLEMENT_VERTEX_FACTORY_TYPE(FMorphExtraInfluencesFurSkinVertexFactory, "/Plugin/gFur/Private/GFurFactory.ush", true, false, true, true, false);
IMPLEMENT_VERTEX_FACTORY_TYPE(FExtraInfluencesFurSkinVertexFactory, "/Plugin/gFur/Private/GFurFactory.ush", true, false, true, true, false);
IMPLEMENT_VERTEX_FACTORY_TYPE(FMorphPhysicsFurSkinVertexFactory, "/Plugin/gFur/Private/GFurFactory.ush", true, false, true, true, false);
IMPLEMENT_VERTEX_FACTORY_TYPE(FPhysicsFurSkinVertexFactory, "/Plugin/gFur/Private/GFurFactory.ush", true, false, true, true, false);
IMPLEMENT_VERTEX_FACTORY_TYPE(FMorphFurSkinVertexFactory, "/Plugin/gFur/Private/GFurFactory.ush", true, false, true, true, false);
IMPLEMENT_VERTEX_FACTORY_TYPE(FFurSkinVertexFactory, "/Plugin/gFur/Private/GFurFactory.ush", true, false, true, true, false);

#if WITH_EDITORONLY_DATA
IMPLEMENT_GLOBAL_SHADER_PARAMETER_STRUCT(FBoneMatricesUniformShaderParameters, "BonesFur");
#endif // WITH_EDITORONLY_DATA

static FBoneMatricesUniformShaderParameters GBoneUniformStruct;

template<bool MorphTargets, bool Physics, bool ExtraInfluences>
void FFurSkinVertexFactoryBase<MorphTargets, Physics, ExtraInfluences>::FShaderDataType::GoToNextFrame(bool InDiscontinuous)
{
	CurrentBuffer = 1 - CurrentBuffer;
	Discontinuous = InDiscontinuous;
}

template<bool MorphTargets, bool Physics, bool ExtraInfluences>
void FFurSkinVertexFactoryBase<MorphTargets, Physics, ExtraInfluences>::FShaderDataType::UpdateBoneData(const TArray<FMatrix>& ReferenceToLocalMatrices, const TArray<FVector>& LinearOffsets, const TArray<FVector>& AngularOffsets,
	const TArray<FMatrix>& LastTransformations, const TArray<FBoneIndexType>& BoneMap, bool InDiscontinuous, ERHIFeatureLevel::Type InFeatureLevel)
{
	const uint32 NumBones = BoneMap.Num();
	check(NumBones <= MaxGPUSkinBones);
	float* ChunkMatrices = nullptr;
	FVector4* Offsets = nullptr;

	FVertexBufferAndSRV* CurrentBoneBuffer = 0;
	FVertexBufferAndSRV* CurrentBoneFurOffsetsBuffer = 0;

	if (InFeatureLevel >= ERHIFeatureLevel::ES3_1)
	{
		check(IsInRenderingThread());
		GoToNextFrame(InDiscontinuous);

		CurrentBoneBuffer = &GetBoneBufferForWriting(false);

		uint32 NumVectors = NumBones * 3;
		check(NumVectors <= (MaxGPUSkinBones * 3));
		uint32 VectorArraySize = NumVectors * sizeof(FVector4);

		uint32 OffsetArraySize = NumBones * 3 * sizeof(FVector4);

		if (!IsValidRef(*CurrentBoneBuffer))
		{
			FVertexBufferAndSRV Buffer;
			FRHIResourceCreateInfo CreateInfo;
			Buffer.VertexBufferRHI = RHICreateVertexBuffer(VectorArraySize, (BUF_Dynamic | BUF_ShaderResource), CreateInfo);
			Buffer.VertexBufferSRV = RHICreateShaderResourceView(Buffer.VertexBufferRHI, sizeof(FVector4), PF_A32B32G32R32F);
			*CurrentBoneBuffer = Buffer;
			check(IsValidRef(*CurrentBoneBuffer));
		}

		CurrentBoneFurOffsetsBuffer = &GetBoneFurOffsetsBufferForWriting(false);
		if (!IsValidRef(*CurrentBoneFurOffsetsBuffer))
		{
			FVertexBufferAndSRV Buffer;
			FRHIResourceCreateInfo CreateInfo;
			Buffer.VertexBufferRHI = RHICreateVertexBuffer(OffsetArraySize, (BUF_Dynamic | BUF_ShaderResource), CreateInfo);
			Buffer.VertexBufferSRV = RHICreateShaderResourceView(Buffer.VertexBufferRHI, sizeof(FVector4), PF_A32B32G32R32F);
			*CurrentBoneFurOffsetsBuffer = Buffer;
			check(IsValidRef(*CurrentBoneFurOffsetsBuffer));
		}

		if (NumBones)
		{
			ChunkMatrices = (float*)RHILockVertexBuffer(CurrentBoneBuffer->VertexBufferRHI, 0, VectorArraySize, RLM_WriteOnly);
			Offsets = (FVector4*)RHILockVertexBuffer(CurrentBoneFurOffsetsBuffer->VertexBufferRHI, 0, OffsetArraySize, RLM_WriteOnly);
		}
	}
	else
	{
		if (NumBones)
		{
			check(NumBones * sizeof(float) * 12 <= sizeof(GBoneUniformStruct));
			ChunkMatrices = (float*)&GBoneUniformStruct;
		}
	}

	if (InFeatureLevel >= ERHIFeatureLevel::ES3_1)
	{
		//FSkinMatrix3x4 is sizeof() == 48
		// PLATFORM_CACHE_LINE_SIZE (128) / 48 = 2.6
		//  sizeof(FMatrix) == 64
		// PLATFORM_CACHE_LINE_SIZE (128) / 64 = 2
		const int32 PreFetchStride = 2; // FPlatformMisc::Prefetch stride
		for (uint32 BoneIdx = 0; BoneIdx < NumBones; BoneIdx++)
		{
			const FBoneIndexType RefToLocalIdx = BoneMap[BoneIdx];
			FPlatformMisc::Prefetch(ReferenceToLocalMatrices.GetData() + RefToLocalIdx + PreFetchStride);
			FPlatformMisc::Prefetch(ReferenceToLocalMatrices.GetData() + RefToLocalIdx + PreFetchStride, PLATFORM_CACHE_LINE_SIZE);

			float* BoneMat = ChunkMatrices + BoneIdx * 12;
			const FMatrix& RefToLocal = ReferenceToLocalMatrices[RefToLocalIdx];
			RefToLocal.To3x4MatrixTranspose(BoneMat);

			Offsets[BoneIdx * 3] = LinearOffsets[RefToLocalIdx];
			Offsets[BoneIdx * 3 + 1] = AngularOffsets[RefToLocalIdx];
			Offsets[BoneIdx * 3 + 2] = LastTransformations[RefToLocalIdx].GetOrigin();
		}
	}
	else
	{
		const int32 PreFetchStride = 2; // FPlatformMisc::Prefetch stride
		for (uint32 BoneIdx = 0; BoneIdx < NumBones; BoneIdx++)
		{
			const FBoneIndexType RefToLocalIdx = BoneMap[BoneIdx];
			FPlatformMisc::Prefetch(ReferenceToLocalMatrices.GetData() + RefToLocalIdx + PreFetchStride);
			FPlatformMisc::Prefetch(ReferenceToLocalMatrices.GetData() + RefToLocalIdx + PreFetchStride, PLATFORM_CACHE_LINE_SIZE);

			float* BoneMat = ChunkMatrices + BoneIdx * 12;
			const FMatrix& RefToLocal = ReferenceToLocalMatrices[RefToLocalIdx];
			RefToLocal.To3x4MatrixTranspose(BoneMat);
		}
	}
	if (InFeatureLevel >= ERHIFeatureLevel::ES3_1)
	{
		if (NumBones)
		{
			check(CurrentBoneBuffer);
			RHIUnlockVertexBuffer(CurrentBoneBuffer->VertexBufferRHI);
			check(CurrentBoneFurOffsetsBuffer);
			RHIUnlockVertexBuffer(CurrentBoneFurOffsetsBuffer->VertexBufferRHI);
		}
	}
	else
	{
		UniformBuffer = RHICreateUniformBuffer(&GBoneUniformStruct, FBoneMatricesUniformShaderParameters::StaticStructMetadata.GetLayout(), UniformBuffer_MultiFrame);
	}
}

template<bool MorphTargets, bool Physics, bool ExtraInfluences>
void FFurSkinVertexFactoryBase<MorphTargets, Physics, ExtraInfluences>::FShaderDataType::InitDynamicRHI()
{
	const uint32 NumBones = BoneCount;
	check(NumBones <= MaxGPUSkinBones);
	float* ChunkMatrices = nullptr;

	if (FeatureLevel >= ERHIFeatureLevel::ES3_1)
	{
		check(IsInRenderingThread());

		uint32 NumVectors = NumBones * 3;
		check(NumVectors <= (MaxGPUSkinBones * 3));
		uint32 VectorArraySize = NumVectors * sizeof(FVector4);

		uint32 OffsetArraySize = NumBones * 3 * sizeof(FVector4);

		FVertexBufferAndSRV* CurrentBoneBuffer = &GetBoneBufferForWriting(false);
		if (!IsValidRef(*CurrentBoneBuffer))
		{
			FVertexBufferAndSRV Buffer;
			FRHIResourceCreateInfo CreateInfo;
			Buffer.VertexBufferRHI = RHICreateVertexBuffer(VectorArraySize, (BUF_Dynamic | BUF_ShaderResource), CreateInfo);
			Buffer.VertexBufferSRV = RHICreateShaderResourceView(Buffer.VertexBufferRHI, sizeof(FVector4), PF_A32B32G32R32F);
			*CurrentBoneBuffer = Buffer;
			check(IsValidRef(*CurrentBoneBuffer));
		}

		FVertexBufferAndSRV* PreviousBoneBuffer = &GetBoneBufferForWriting(true);
		if (!IsValidRef(*PreviousBoneBuffer))
		{
			FVertexBufferAndSRV Buffer;
			FRHIResourceCreateInfo CreateInfo;
			Buffer.VertexBufferRHI = RHICreateVertexBuffer(VectorArraySize, (BUF_Dynamic | BUF_ShaderResource), CreateInfo);
			Buffer.VertexBufferSRV = RHICreateShaderResourceView(Buffer.VertexBufferRHI, sizeof(FVector4), PF_A32B32G32R32F);
			*PreviousBoneBuffer = Buffer;
			check(IsValidRef(*PreviousBoneBuffer));
		}

		FVertexBufferAndSRV* CurrentBoneFurOffsetsBuffer = &GetBoneFurOffsetsBufferForWriting(false);
		if (!IsValidRef(*CurrentBoneFurOffsetsBuffer))
		{
			FVertexBufferAndSRV Buffer;
			FRHIResourceCreateInfo CreateInfo;
			Buffer.VertexBufferRHI = RHICreateVertexBuffer(OffsetArraySize, (BUF_Dynamic | BUF_ShaderResource), CreateInfo);
			Buffer.VertexBufferSRV = RHICreateShaderResourceView(Buffer.VertexBufferRHI, sizeof(FVector4), PF_A32B32G32R32F);
			*CurrentBoneFurOffsetsBuffer = Buffer;
			check(IsValidRef(*CurrentBoneFurOffsetsBuffer));
		}

		FVertexBufferAndSRV* PreviousBoneFurOffsetsBuffer = &GetBoneFurOffsetsBufferForWriting(true);
		if (!IsValidRef(*PreviousBoneFurOffsetsBuffer))
		{
			FVertexBufferAndSRV Buffer;
			FRHIResourceCreateInfo CreateInfo;
			Buffer.VertexBufferRHI = RHICreateVertexBuffer(OffsetArraySize, (BUF_Dynamic | BUF_ShaderResource), CreateInfo);
			Buffer.VertexBufferSRV = RHICreateShaderResourceView(Buffer.VertexBufferRHI, sizeof(FVector4), PF_A32B32G32R32F);
			*PreviousBoneFurOffsetsBuffer = Buffer;
			check(IsValidRef(*PreviousBoneFurOffsetsBuffer));
		}
	}
	else
	{
		if (NumBones)
		{
			check(NumBones * sizeof(float) * 12 <= sizeof(GBoneUniformStruct));
			ChunkMatrices = (float*)&GBoneUniformStruct;
		}
	}

	if (FeatureLevel >= ERHIFeatureLevel::ES3_1)
	{
	}
	else
	{
		UniformBuffer = RHICreateUniformBuffer(&GBoneUniformStruct, FBoneMatricesUniformShaderParameters::StaticStructMetadata.GetLayout(), UniformBuffer_MultiFrame);
	}
}

template<bool Physics>
void FFurSkinVertexFactoryShaderParameters<Physics>::GetElementShaderBindings(
	const class FSceneInterface* Scene,
	const class FSceneView* View,
	const class FMeshMaterialShader* Shader,
	const EVertexInputStreamType InputStreamType,
	ERHIFeatureLevel::Type FeatureLevel,
	const class FVertexFactory* VertexFactory,
	const struct FMeshBatchElement& BatchElement,
	class FMeshDrawSingleShaderBindings& ShaderBindings,
	FVertexInputStreamArray& VertexStreams) const
{
	FFurSkinVertexFactory::FShaderDataType& ShaderData = ((FFurSkinVertexFactory*)VertexFactory)->ShaderData;

	ShaderBindings.Add(MeshOriginParameter, ShaderData.MeshOrigin);
	ShaderBindings.Add(MeshExtensionParameter, ShaderData.MeshExtension);
	ShaderBindings.Add(FurOffsetPowerParameter, ShaderData.FurOffsetPower);

//		const auto FeatureLevel = View.GetFeatureLevel();

	if (BoneMatrices.IsBound())
	{
		auto CurrentData = ShaderData.GetBoneBufferForReading(false).VertexBufferSRV;
		ShaderBindings.Add(BoneMatrices, CurrentData);
	}
	if (PreviousBoneMatrices.IsBound())
	{
		// todo: Maybe a check for PreviousData!=CurrentData would save some performance (when objects don't have velocty yet) but removing the bool also might save performance

		auto PreviousData = ShaderData.GetBoneBufferForReading(true).VertexBufferSRV;
		ShaderBindings.Add(PreviousBoneMatrices, PreviousData);
	}

	if (Physics)
	{
		if (BoneFurOffsets.IsBound())
		{
			auto CurrentData = ShaderData.GetBoneFurOffsetsBufferForReading(false).VertexBufferSRV;
			ShaderBindings.Add(BoneFurOffsets, CurrentData);
		}
		if (PreviousBoneFurOffsets.IsBound())
		{
			auto PreviousData = ShaderData.GetBoneFurOffsetsBufferForReading(true).VertexBufferSRV;
			ShaderBindings.Add(PreviousBoneFurOffsets, PreviousData);
		}
	}
	else
	{
		ShaderBindings.Add(Shader->GetUniformBufferParameter<FBoneMatricesUniformShaderParameters>(), ShaderData.GetUniformBuffer());
	}
}

/** Fur Skin Data */
FFurSkinData::~FFurSkinData()
{
	VertexBuffer.ReleaseResource();
	IndexBuffer.ReleaseResource();
}

FFurSkinData::FFurSkinData(USkeletalMesh* InSkeletalMesh, int InLod, UFurSplines* InFurSplines, const TArray<USkeletalMesh*>& InGuideMeshes, int InFurLayerCount,
	float InFurLength, float InMinFurLength, float InShellBias, float InHairLengthForceUniformity, float InNoiseStrength, bool InRemoveFacesWithoutSplines)
{
	SkeletalMesh = InSkeletalMesh;
	FurLayerCount = InFurLayerCount;
	FurSplines = InFurSplines;
	GuideMeshes = InGuideMeshes;
	Lod = InLod;
	FurLength = InFurLength;
	ShellBias = InShellBias;
	HairLengthForceUniformity = InHairLengthForceUniformity;
	MinFurLength = InMinFurLength;
	CurrentMinFurLength = InFurLength;
	CurrentMaxFurLength = InFurLength;
	NoiseStrength = InNoiseStrength;
	RemoveFacesWithoutSplines = InRemoveFacesWithoutSplines;

	if (InFurSplines == nullptr && InGuideMeshes.Num() > 0)
		InFurSplines = GenerateSplines(InSkeletalMesh, InLod, InGuideMeshes);

	auto* SkeletalMeshResource = SkeletalMesh->GetResourceForRendering();
	check(SkeletalMeshResource);

	TArray<uint32> Indices;
	TArray<int32> SplineMap;
	TArray<uint32> VertexSub;

	const auto& LodModel = SkeletalMeshResource->LODRenderData[InLod];
	const auto& SourcePositions = LodModel.StaticVertexBuffers.PositionVertexBuffer;
	const auto& SourceSkinWeights = LodModel.SkinWeightVertexBuffer;
	const auto& SourceVertices = LodModel.StaticVertexBuffers.StaticMeshVertexBuffer;
	const auto& SourceColors = LodModel.StaticVertexBuffers.ColorVertexBuffer;
	LodModel.MultiSizeIndexContainer.GetIndexBuffer(Indices);

	check(SourcePositions.GetNumVertices() == SourceSkinWeights.GetNumVertices() && SourcePositions.GetNumVertices() == SourceVertices.GetNumVertices());

	HasExtraBoneInfluences = SourceSkinWeights.GetMaxBoneInfluences() > 4;

	uint32 NumTexCoords = SourceVertices.GetNumTexCoords();
	bool hasVertexColor = SourceColors.GetNumVertices() > 0;
	check(!hasVertexColor || SourcePositions.GetNumVertices() == SourceColors.GetNumVertices());

	int BoneCount = InSkeletalMesh->RefBasesInvMatrix.Num();
	TArray<FMatrix> Bones;
	Bones.AddUninitialized(BoneCount);
	for (int i = 0; i < BoneCount; i++)
		Bones[i] = InSkeletalMesh->GetRefPoseMatrix(i);
	float MaxDistSq = 0.0f;
	uint32 influencesCount = SourceSkinWeights.GetMaxBoneInfluences();
	auto UpdateMaxDistSq = [&MaxDistSq, &SourcePositions, &SourceSkinWeights, &Bones, influencesCount](uint32 VertexIndex, const TArray<uint16>& boneMap) {
		for (uint32 b = 0; b < influencesCount; b++)
		{
			if (SourceSkinWeights.GetBoneWeight(VertexIndex, b) == 0)
				break;
			uint32 BoneIndex = boneMap[SourceSkinWeights.GetBoneIndex(VertexIndex, b)];
			float distSq = FVector::DistSquared(SourcePositions.VertexPosition(VertexIndex), Bones[BoneIndex].GetOrigin());
			if (distSq > MaxDistSq)
				MaxDistSq = distSq;
		}
	};

	FMatrix deltaMatrix;
	if (InFurSplines)
	{
		float MinLen = FLT_MAX;
		float MaxLen = -FLT_MAX;
		SplineMap.Reserve(SourcePositions.GetNumVertices());
		for (uint32 i = 0; i < SourcePositions.GetNumVertices(); i++)
		{
			int ClosestSplineIndex = -1;
			float ClosestDist = FLT_MAX;
			for (int si = 0; si < InFurSplines->Index.Num(); si++)
			{
				FVector p = InFurSplines->Vertices[InFurSplines->Index[si]];
				p.Y = -p.Y;
				const auto& Position = SourcePositions.VertexPosition(i);
				float d = FVector::DistSquared(p, Position);
				if (d < ClosestDist)
				{
					ClosestDist = d;
					ClosestSplineIndex = si;
				}
			}
			if (ClosestDist < 0.01f)
			{
				uint32 idx = InFurSplines->Index[ClosestSplineIndex];
				FVector p1 = InFurSplines->Vertices[idx];
				FVector p2 = InFurSplines->Vertices[idx + InFurSplines->Count[ClosestSplineIndex] - 1];
				FVector normal = SourceVertices.VertexTangentZ(i);
				normal.Y = -normal.Y;
				if (FVector::DotProduct(p2 - p1, normal) > 0.0f || MinFurLength > 0.0f)
				{
					float l = (p2 - p1).Size();
					if (l < MinLen)
						MinLen = l;
					if (l > MaxLen)
						MaxLen = l;
					SplineMap.Add(ClosestSplineIndex);
				}
				else
				{
					SplineMap.Add(-1);
				}
			}
			else
			{
				SplineMap.Add(-1);
			}
		}
		CurrentMinFurLength = MinLen * InFurLength;
		if (CurrentMinFurLength < MinFurLength)
			CurrentMinFurLength = MinFurLength;
		CurrentMaxFurLength = MaxLen * InFurLength;
	}

	int IndexOffset = 0;
	for (int SectionIndex = 0; SectionIndex < LodModel.RenderSections.Num(); SectionIndex++)
	{
		const auto& ModelSection = LodModel.RenderSections[SectionIndex];
		FSection& FurSection = Sections[Sections.AddUninitialized()];
		new (&FurSection) FSection();
		FurSection.MaterialIndex = ModelSection.MaterialIndex;
		FurSection.MinVertexIndex = VertexBuffer.Vertices.Num();
		FurSection.BaseIndex = IndexBuffer.Indices.Num();

		if (InFurSplines && InRemoveFacesWithoutSplines)
		{
			VertexSub.Reset(ModelSection.NumVertices);
			VertexSub.AddUninitialized(ModelSection.NumVertices);
			uint32* Vert = &VertexSub[0];
			uint32 Count = 0;
			for (uint32 i = 0; i < ModelSection.NumVertices; ++i)
			{
				int Index = SplineMap[ModelSection.BaseVertexIndex + i];
				if (Index < 0)
				{
					UpdateMaxDistSq(ModelSection.BaseVertexIndex + i, ModelSection.BoneMap);
					Count++;
				}
				Vert[i] = Count;
			}
		}
		else
		{
			for (uint32 i = 0; i < ModelSection.NumVertices; ++i)
				UpdateMaxDistSq(ModelSection.BaseVertexIndex + i, ModelSection.BoneMap);
		}

		for (int Layer = FurLayerCount; Layer > 0; --Layer)
		{
			float LinearFactor = Layer / (float)FurLayerCount;
			float NonLinearFactor;
			float Derivative;
			if (ShellBias > 0.0f)
			{
				float invShellBias = 1.0f / ShellBias;
				NonLinearFactor = LinearFactor / (LinearFactor + invShellBias) * (1.0f + invShellBias);
				Derivative = (invShellBias + invShellBias * invShellBias) / FMath::Square(LinearFactor + invShellBias);
			}
			else
			{
				NonLinearFactor = LinearFactor;
				Derivative = 1.0f;
			}
			for (uint32 i = 0; i < ModelSection.NumVertices; ++i)
			{
				FFurSkinVertex Vert;
				uint32 SourceVertexIndex = ModelSection.BaseVertexIndex + i;
				Vert.Position = SourcePositions.VertexPosition(SourceVertexIndex);
				Vert.TangentX = SourceVertices.VertexTangentX(SourceVertexIndex);
				Vert.TangentY = SourceVertices.VertexTangentY(SourceVertexIndex);
				Vert.TangentZ = SourceVertices.VertexTangentZ(SourceVertexIndex);
				for (uint32 tc = 0; tc < NumTexCoords; tc++)
					Vert.UVs[tc] = SourceVertices.GetVertexUV(SourceVertexIndex, tc);
				Vert.Color = hasVertexColor ? SourceColors.VertexColor(SourceVertexIndex) : FColor(255, 255, 255, 255);
				uint32 ib = 0;
				for (ib = 0; ib < influencesCount; ib++)
				{
					Vert.InfluenceBones[ib] = SourceSkinWeights.GetBoneIndex(SourceVertexIndex, ib);
					Vert.InfluenceWeights[ib] = SourceSkinWeights.GetBoneWeight(SourceVertexIndex, ib);
				}
				for (; ib < MAX_TOTAL_INFLUENCES; ib++)
				{
					Vert.InfluenceBones[ib] = 0;
					Vert.InfluenceWeights[ib] = 0;
				}

				if (InFurSplines)
				{
					int Index = SplineMap[ModelSection.BaseVertexIndex + i];
					if (Index >= 0)
					{
						int Beginning = InFurSplines->Index[Index];
						int Count = InFurSplines->Count[Index];

						float Bias = NonLinearFactor * (Count - 1);
						int Bottom = (int)Bias;
						int Top = (int)ceilf(Bias);
						float Height = Bias - Bottom;

						FVector Spline = InFurSplines->Vertices[Beginning + Count - 1] - InFurSplines->Vertices[Beginning];
						float SplineLength = Spline.Size() * InFurLength;
						FVector TangentZ = Vert.TangentZ.ToFVector();
						FVector Normal = TangentZ;
						Normal.Y = -Normal.Y;
						if (FVector::DotProduct(Normal, Spline) <= 0.0f)
						{
							Vert.FurOffset = TangentZ * (NonLinearFactor * MinFurLength);
						}
						else if (SplineLength < MinFurLength)
						{
							if (SplineLength >= 0.0001f)
							{
								float k = MinFurLength / SplineLength;
								Vert.FurOffset = InFurSplines->Vertices[Beginning + Bottom] * (1.0f - Height) + InFurSplines->Vertices[Beginning + Top] * Height;
								Vert.FurOffset = (Vert.FurOffset - InFurSplines->Vertices[Beginning]) * InFurLength * k + InFurSplines->Vertices[Beginning];
								Vert.FurOffset.Y = -Vert.FurOffset.Y;
								Vert.FurOffset = Vert.FurOffset - Vert.Position;
							}
							else
							{
								Vert.FurOffset = TangentZ * (NonLinearFactor * MinFurLength);
							}
							SplineLength = MinFurLength;
						}
						else
						{
							Vert.FurOffset = InFurSplines->Vertices[Beginning + Bottom] * (1.0f - Height) + InFurSplines->Vertices[Beginning + Top] * Height;
							Vert.FurOffset = (Vert.FurOffset - InFurSplines->Vertices[Beginning]) * InFurLength + InFurSplines->Vertices[Beginning];
							Vert.FurOffset.Y = -Vert.FurOffset.Y;
							Vert.FurOffset = Vert.FurOffset - Vert.Position;
						}
						float r = FMath::RandRange(-InNoiseStrength * Derivative, InNoiseStrength * Derivative);
						Vert.FurOffset += TangentZ * r;

						Vert.UVs[1].X = Vert.FurOffset.Size();
						Vert.UVs[1].Y = NonLinearFactor;
						Vert.UVs[2].X = LinearFactor;
						Vert.UVs[2].Y = SplineLength / CurrentMaxFurLength;

						if (HairLengthForceUniformity > 0)
						{
							float Relative = Vert.UVs[1].X / SplineLength;
							float Length = SplineLength * (1.0f - HairLengthForceUniformity) + CurrentMaxFurLength * HairLengthForceUniformity;
							Vert.UVs[1].X = Relative * Length;
						}
						else
						{
							float Relative = Vert.UVs[1].X / SplineLength;
							float Interpolator = -HairLengthForceUniformity;
							float Length = SplineLength * (1.0f - Interpolator) + CurrentMinFurLength * Interpolator;
							Vert.UVs[1].X = Relative * Length;
						}

						VertexBuffer.Vertices.Add(Vert);
					}
					else if (!InRemoveFacesWithoutSplines)
					{
						Vert.UVs[1].X = NonLinearFactor * InMinFurLength;
						Vert.UVs[1].Y = NonLinearFactor;
						Vert.UVs[2].X = LinearFactor;
						Vert.UVs[2].Y = 1.0f;
						FVector TangentZ = Vert.TangentZ.ToFVector();
						Vert.FurOffset = TangentZ * (NonLinearFactor * InMinFurLength/* + FMath::RandRange(-InNoiseStrength * Derivative, InNoiseStrength * Derivative)*/);

						VertexBuffer.Vertices.Add(Vert);
					}
				}
				else
				{
					Vert.UVs[1].X = NonLinearFactor * InFurLength;
					Vert.UVs[1].Y = NonLinearFactor;
					Vert.UVs[2].X = LinearFactor;
					Vert.UVs[2].Y = 1.0f;
					FVector TangentZ = Vert.TangentZ.ToFVector();
					Vert.FurOffset = TangentZ * (NonLinearFactor * InFurLength + FMath::RandRange(-InNoiseStrength * Derivative, InNoiseStrength * Derivative));

					if (HairLengthForceUniformity > 0)
					{
						float Relative = Vert.UVs[1].X / InFurLength;
						float Length = InFurLength * (1.0f - HairLengthForceUniformity) + CurrentMaxFurLength * HairLengthForceUniformity;
						Vert.UVs[1].X = Relative * Length;
					}
					else
					{
						float Relative = Vert.UVs[1].X / InFurLength;
						float Interpolator = -HairLengthForceUniformity;
						float Length = InFurLength * (1.0f - Interpolator) + CurrentMinFurLength * Interpolator;
						Vert.UVs[1].X = Relative * Length;
					}

					VertexBuffer.Vertices.Add(Vert);
				}
			}
			int IndexOffset2 = IndexOffset - ModelSection.BaseVertexIndex;
			if (InFurSplines && InRemoveFacesWithoutSplines)
			{
				for (uint32 t = 0; t < ModelSection.NumTriangles; ++t)
				{
					uint32 Idx0 = Indices[ModelSection.BaseIndex + t * 3];
					uint32 Idx1 = Indices[ModelSection.BaseIndex + t * 3 + 1];
					uint32 Idx2 = Indices[ModelSection.BaseIndex + t * 3 + 2];
					if (SplineMap[Idx0] >= 0 && SplineMap[Idx1] >= 0 && SplineMap[Idx2] >= 0)
					{
						Idx0 -= VertexSub[Idx0 - ModelSection.BaseVertexIndex];
						Idx1 -= VertexSub[Idx1 - ModelSection.BaseVertexIndex];
						Idx2 -= VertexSub[Idx2 - ModelSection.BaseVertexIndex];
						IndexBuffer.Indices.Add(Idx0 + IndexOffset2);
						IndexBuffer.Indices.Add(Idx1 + IndexOffset2);
						IndexBuffer.Indices.Add(Idx2 + IndexOffset2);
					}
				}
			}
			else
			{
				for (uint32 i = 0; i < ModelSection.NumTriangles * 3; ++i)
					IndexBuffer.Indices.Add(Indices[ModelSection.BaseIndex + i] + IndexOffset2);
			}
			IndexOffset = VertexBuffer.Vertices.Num();
		}
		FurSection.MaxVertexIndex = VertexBuffer.Vertices.Num() - 1;
		FurSection.NumTriangles = (IndexBuffer.Indices.Num() - FurSection.BaseIndex) / 3;
		FurSection.NumBones = ModelSection.BoneMap.Num();
	}

	MaxVertexBoneDistance = sqrtf(MaxDistSq);

	// Init vertex factory
	if (VertexBuffer.Vertices.Num() == 0)
		VertexBuffer.Vertices.Add(FFurSkinVertex());
	if (IndexBuffer.Indices.Num() == 0)
		IndexBuffer.Indices.Add(0);

	// Enqueue initialization of render resource
	BeginInitResource(&VertexBuffer);
	BeginInitResource(&IndexBuffer);
}

UFurSplines* FFurSkinData::GenerateSplines(USkeletalMesh* InSkeletalMesh, int InLod, const TArray<USkeletalMesh*>& InGuideMeshes)
{
	UFurSplines* Splines = NewObject<UFurSplines>();

	auto* SkeletalMeshResource = InSkeletalMesh->GetResourceForRendering();
	check(SkeletalMeshResource);

	if (InLod >= SkeletalMeshResource->LODRenderData.Num())
		InLod = SkeletalMeshResource->LODRenderData.Num() - 1;
	const auto& LodModel = SkeletalMeshResource->LODRenderData[InLod];

	const auto& SourcePositions = LodModel.StaticVertexBuffers.PositionVertexBuffer;

	uint32 VertexCount = SourcePositions.GetNumVertices();
	int SegCount = InGuideMeshes.Num() + 1;
	Splines->Vertices.AddUninitialized(VertexCount * SegCount);
	Splines->Index.AddUninitialized(VertexCount);
	Splines->Count.AddUninitialized(VertexCount);
	for (uint32 i = 0; i < VertexCount; i++)
	{
		int Index = i * SegCount;
		Splines->Vertices[Index] = SourcePositions.VertexPosition(i);
		Splines->Index[i] = Index;
		Splines->Count[i] = SegCount;
	}

	int k = 1;
	for (USkeletalMesh* GuideMesh : InGuideMeshes)
	{
		if (GuideMesh)
		{
			auto* SkeletalMeshResource2 = GuideMesh->GetResourceForRendering();
			check(SkeletalMeshResource2);
			const auto& LodModel2 = SkeletalMeshResource2->LODRenderData[InLod];
			const auto& SourcePositions2 = LodModel2.StaticVertexBuffers.PositionVertexBuffer;
			int c = FMath::Min(SourcePositions2.GetNumVertices(), VertexCount);
			for (int i = 0; i < c; i++)
				Splines->Vertices[i * SegCount + k] = SourcePositions2.VertexPosition(i);
			for (uint32 i = c; i < VertexCount; i++)
				Splines->Vertices[i * SegCount + k] = Splines->Vertices[i * SegCount + (k - 1)];
		}
		else
		{
			for (uint32 i = 0; i < VertexCount; i++)
				Splines->Vertices[i * SegCount + k] = Splines->Vertices[i * SegCount + (k - 1)];
		}
		k++;
	}

	for (int i = 0, c = SegCount * VertexCount; i < c; i++)
		Splines->Vertices[i].Y = -Splines->Vertices[i].Y;

	return Splines;
}

int FFurSkinData::NumVertices() const
{
	return VertexBuffer.Vertices.Num();
}

void FFurSkinData::CreateVertexFactories(TArray<FFurVertexFactory*>& VertexFactories, FVertexBuffer* InMorphVertexBuffer, bool InPhysics, ERHIFeatureLevel::Type InFeatureLevel)
{
	auto CreateVertexFactory = [&](const FFurData::FSection& s, auto* vf) {
		vf->Init(&VertexBuffer, InMorphVertexBuffer, s.NumBones);
		BeginInitResource(vf);
		VertexFactories.Add(vf);
	};

	for (auto& s : Sections)
	{
		if (InPhysics && InFeatureLevel >= ERHIFeatureLevel::ES3_1)
		{
			if (InMorphVertexBuffer)
			{
				if (HasExtraBoneInfluences)
					CreateVertexFactory(s, new FMorphPhysicsExtraInfluencesFurSkinVertexFactory(InFeatureLevel));
				else
					CreateVertexFactory(s, new FMorphPhysicsFurSkinVertexFactory(InFeatureLevel));
			}
			else
			{
				if (HasExtraBoneInfluences)
					CreateVertexFactory(s, new FPhysicsExtraInfluencesFurSkinVertexFactory(InFeatureLevel));
				else
					CreateVertexFactory(s, new FPhysicsFurSkinVertexFactory(InFeatureLevel));
			}
		}
		else
		{
			if (InMorphVertexBuffer)
			{
				if (HasExtraBoneInfluences)
					CreateVertexFactory(s, new FMorphExtraInfluencesFurSkinVertexFactory(InFeatureLevel));
				else
					CreateVertexFactory(s, new FMorphFurSkinVertexFactory(InFeatureLevel));
			}
			else
			{
				if (HasExtraBoneInfluences)
					CreateVertexFactory(s, new FExtraInfluencesFurSkinVertexFactory(InFeatureLevel));
				else
					CreateVertexFactory(s, new FFurSkinVertexFactory(InFeatureLevel));
			}
		}
	}
}

void FFurSkinData::ReloadFurSplines(UFurSplines* FurSplines)
{
	StaticFurSkinDataCS.Lock();

	for (int32 i = 0; i < StaticFurSkinData.Num(); i++)
	{
		FFurSkinData* Data = StaticFurSkinData[i];

		if (Data->FurSplines == FurSplines)
		{
			USkeletalMesh* SkeletalMesh = Data->SkeletalMesh;
			int Lod = Data->Lod;
			int FurLayerCount = Data->FurLayerCount;
			float FurLength = Data->FurLength;
			float MinFurLength = Data->MinFurLength;
			float ShellBias = Data->ShellBias;
			float HairLengthForceUniformity = Data->HairLengthForceUniformity;
			float NoiseStrength = Data->NoiseStrength;
			bool RemoveFacesWithoutSplines = Data->RemoveFacesWithoutSplines;

			volatile bool finished = false;
			ENQUEUE_RENDER_COMMAND(ReleaseDataCommand)([Data, &finished](FRHICommandListImmediate& RHICmdList) { Data->~FFurSkinData(); finished = true; });
			while (!finished)
				;
			new (Data) FFurSkinData(SkeletalMesh, Lod, FurSplines, TArray<USkeletalMesh*>(), FurLayerCount, FurLength, MinFurLength, ShellBias, HairLengthForceUniformity, NoiseStrength, RemoveFacesWithoutSplines);
		}
	}

	StaticFurSkinDataCS.Unlock();
}


class FurSkinDataDelayedCleanupTask : public FNonAbandonableTask
{
	friend class FAutoDeleteAsyncTask<FurSkinDataDelayedCleanupTask>;

public:
	FurSkinDataDelayedCleanupTask(const TArray<FFurData*>& InFurDataArray) : FurDataArray(InFurDataArray) {}

protected:
	const TArray<FFurData*> FurDataArray;

	void DoWork()
	{
		FPlatformProcess::Sleep(1.0f);

		StaticFurSkinDataCS.Lock();
		for (int i = FurDataArray.Num() - 1; i != -1; i--)
		{
			FFurSkinData* data = (FFurSkinData*)FurDataArray[i];
			if (--data->RefCount == 0)
			{
				StaticFurSkinData.Remove(data);
				ENQUEUE_RENDER_COMMAND(ReleaseDataCommand)([data](FRHICommandListImmediate& RHICmdList) { delete data; });
			}
		}
		StaticFurSkinDataCS.Unlock();
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FMyTaskName, STATGROUP_ThreadPoolAsyncTasks);
	}
};

FFurSkinData* FFurSkinData::CreateFurData(int InFurLayerCount, int InLod, UGFurComponent* FurComponent)
{
	if (InFurLayerCount < 1)
		InFurLayerCount = 1;
	if (InFurLayerCount > 128)
		InFurLayerCount = 128;

	float FurLengthClamped = FMath::Max(FurComponent->FurLength, 0.001f);

	StaticFurSkinDataCS.Lock();

	FFurSkinData* Data = nullptr;
	for (int32 i = 0; i < StaticFurSkinData.Num(); i++)
	{
		FFurSkinData* d = StaticFurSkinData[i];
		if (d->SkeletalMesh == FurComponent->GrowMesh && d->Lod == InLod && d->FurLayerCount == InFurLayerCount && d->FurSplines == FurComponent->FurSplines
			&& d->GuideMeshes == FurComponent->GuideMeshes
			&& d->FurLength == FurLengthClamped && d->MinFurLength == FurComponent->MinFurLength
			&& d->ShellBias == FurComponent->ShellBias && d->HairLengthForceUniformity == FurComponent->HairLengthForceUniformity
			&& d->NoiseStrength == FurComponent->NoiseStrength
			&& d->RemoveFacesWithoutSplines == FurComponent->RemoveFacesWithoutSplines)
		{
			Data = d;
			break;
		}
	}
	if (Data)
	{
		Data->RefCount++;
	}
	else
	{
		Data = new FFurSkinData(FurComponent->GrowMesh, InLod, FurComponent->FurSplines, FurComponent->GuideMeshes, InFurLayerCount, FurLengthClamped,
			FurComponent->MinFurLength, FurComponent->ShellBias, FurComponent->HairLengthForceUniformity, FurComponent->NoiseStrength, FurComponent->RemoveFacesWithoutSplines);
		Data->RefCount = 1;
		StaticFurSkinData.Add(Data);
	}

	StaticFurSkinDataCS.Unlock();

	return Data;
}

void FFurSkinData::DestroyFurData(const TArray<FFurData*>& InFurDataArray)
{
	(new FAutoDeleteAsyncTask<FurSkinDataDelayedCleanupTask>(InFurDataArray))->StartBackgroundTask();
}