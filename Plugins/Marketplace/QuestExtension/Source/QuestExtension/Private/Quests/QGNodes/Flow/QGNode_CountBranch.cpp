 // Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/Flow/QGNode_CountBranch.h"


#define LOCTEXT_NAMESPACE "QGNode_CountBranch"

UQGNode_CountBranch::UQGNode_CountBranch()
	: Super()
	, Mode{EBranchCountMode::ExecuteOnceWhenCount}
	, Count{1}
	, CurrentCount{0}
{}

void UQGNode_CountBranch::OnStart()
{
	CurrentCount += 1;
	if (CurrentCount >= Count)
	{
		if (Mode == EBranchCountMode::ExecuteOnceWhenCount)
			Yes();
		else
			No();
	}
	else
	{
		if (Mode == EBranchCountMode::ExecuteEveryTimeUntilCount)
			Yes();
		else
			No();
	}
}

#undef LOCTEXT_NAMESPACE
