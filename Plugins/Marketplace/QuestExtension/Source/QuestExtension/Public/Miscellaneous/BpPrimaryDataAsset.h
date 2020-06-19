// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Engine/DataAsset.h"
#include "BpPrimaryDataAsset.generated.h"


/**
 * PrimaryAsset with Blueprint support
 */
UCLASS()
class UBpPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	QUESTEXTENSION_API virtual FPrimaryAssetId GetPrimaryAssetId() const override;
};

