// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/QC_Or.h"

UQC_Or::UQC_Or()
	: Super()
{
	//Add two initial outputs
	AddOutput({ " " });
	AddOutput({ "  " });
}

void UQC_Or::Check()
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
		OnCompleted.BindDynamic(this, &UQC_Or::OnConditionCompleted);

		Output.StartCheck(OnCompleted);
	}
}

void UQC_Or::OnConditionCompleted(const EConditionState Result)
{
	//If any of the conditions is completed we succeed
	Complete(EConditionState::Success);
}
