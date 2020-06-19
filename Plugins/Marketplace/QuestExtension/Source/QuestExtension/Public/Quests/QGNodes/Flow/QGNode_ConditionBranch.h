// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QGNode_Branch.h"
#include "Conditions/ConditionContainer.h"

#include "QGNode_ConditionBranch.generated.h"



UCLASS(NotBlueprintable, meta = (DisplayName = "Condition"), Category = "Flow")
class QUESTEXTENSION_API UQGNode_ConditionBranch : public UQGNode_Branch
{
	GENERATED_BODY()


	UPROPERTY(EditInstanceOnly, Instanced, Category = "Condition Branch", SaveGame)
	UConditionContainer* Conditions;

public:

	UQGNode_ConditionBranch();

protected:

	virtual void OnStart() override;


	UFUNCTION()
	void OnConditionCompleted(EConditionState Result);
};
