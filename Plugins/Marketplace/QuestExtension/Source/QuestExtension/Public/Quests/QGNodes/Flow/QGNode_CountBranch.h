// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QGNode_Branch.h"

#include "QGNode_CountBranch.generated.h"

/**
 * Defines how a Count node will execute
 */
UENUM()
enum class EBranchCountMode : uint8
{
	ExecuteOnceWhenCount,
	ExecuteEveryTimeUntilCount
};


UCLASS(NotBlueprintable, meta = (DisplayName = "Count"), Category = "Flow")
class QUESTEXTENSION_API UQGNode_CountBranch : public UQGNode_Branch
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, Category = "Count Branch")
	EBranchCountMode Mode;

	UPROPERTY(EditAnywhere, Category = "Count Branch", meta = (ClampMin = 1))
	int32 Count;

	UPROPERTY()
	int32 CurrentCount;


public:

	UQGNode_CountBranch();

protected:

	virtual void OnStart() override;
};
