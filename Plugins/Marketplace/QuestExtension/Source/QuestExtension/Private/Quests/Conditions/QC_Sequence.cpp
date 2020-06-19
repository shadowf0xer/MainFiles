// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/QC_Sequence.h"

UQC_Sequence::UQC_Sequence()
	: Super()
{
	//Add two initial outputs
	AddOutput({ " " });
	AddOutput({ "  " });
}

void UQC_Sequence::Check()
{
	LastOutput = 0;
	RunNextCondition();
}

void UQC_Sequence::OnConditionCompleted(const EConditionState Result)
{
	//If any of the conditions fails, we fail
	if (Result == EConditionState::Failed)
	{
		Complete(EConditionState::Failed);
		return;
	}

	++LastOutput;

	RunNextCondition();
}

void UQC_Sequence::RunNextCondition()
{
	if (LastOutput >= Outputs.Num())
	{
		Complete(EConditionState::Success);
		return;
	}

	FConditionCompleteDel OnCompleted;
	OnCompleted.BindDynamic(this, &UQC_Sequence::OnConditionCompleted);

	Outputs[LastOutput].StartCheck(OnCompleted);
}

