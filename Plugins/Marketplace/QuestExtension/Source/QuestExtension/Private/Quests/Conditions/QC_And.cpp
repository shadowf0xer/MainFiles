// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/QC_And.h"

UQC_And::UQC_And()
	: Super()
{
	//Add two initial outputs
	AddOutput({ " " });
	AddOutput({ "  " });
}

void UQC_And::Check()
{
	if (Outputs.Num() <= 0)
	{
		Complete(EConditionState::Failed);
		return;
	}

	//Run conditions
	for (auto& Output : Outputs)
	{
		FConditionCompleteDel OnCompleted;
		OnCompleted.BindDynamic(this, &UQC_And::OnConditionCompleted);

		Output.StartCheck(OnCompleted);
	}
}

void UQC_And::OnConditionCompleted(const EConditionState Result)
{
	const bool bAllConditionsFulfilled = !Outputs.ContainsByPredicate([](const auto& Output)
	{
		return Output.Connections.Num() == 0 || Output.Connections[0]->GetState() != EConditionState::Success;
	});

	if(bAllConditionsFulfilled)
	{
		//If all the conditions are fulfilled we succeed
		Complete(EConditionState::Success);
	}
}
