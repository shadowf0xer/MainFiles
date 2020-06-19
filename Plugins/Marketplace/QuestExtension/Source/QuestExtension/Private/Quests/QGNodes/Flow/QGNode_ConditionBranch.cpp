// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/Flow/QGNode_ConditionBranch.h"


#define LOCTEXT_NAMESPACE "QGNode_ConditionBranch"

UQGNode_ConditionBranch::UQGNode_ConditionBranch()
	: Super()
{
	Conditions = CreateDefaultSubobject<UConditionContainer>(TEXT("Conditions"));
}

void UQGNode_ConditionBranch::OnStart()
{
	if (IsValid(Conditions))
	{
		//Run conditions
		FConditionCompleteDel OnCompleted;
		OnCompleted.BindDynamic(this, &UQGNode_ConditionBranch::OnConditionCompleted);
		Conditions->StartLatentCheck(OnCompleted);
	}
}

void UQGNode_ConditionBranch::OnConditionCompleted(EConditionState Result)
{
	if (Result == EConditionState::Success)
	{
		Yes();
	}
	else
	{
		No();
	}
}

#undef LOCTEXT_NAMESPACE
