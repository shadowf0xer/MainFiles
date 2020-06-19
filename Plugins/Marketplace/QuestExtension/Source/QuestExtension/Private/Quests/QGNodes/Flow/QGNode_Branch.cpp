// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/Flow/QGNode_Branch.h"


#define LOCTEXT_NAMESPACE "QGNode_Branch"

const FName UQGNode_Branch::YesName = { "Yes" };
const FName UQGNode_Branch::NoName  = { "No" };


UQGNode_Branch::UQGNode_Branch()
	: Super()
{
	Events.Empty();
	AddEvent(YesName);
	AddEvent(NoName);
}

void UQGNode_Branch::OnFinish(const EQGNodeFinishReason Reason)
{
	ReceiveFinish(Reason);

	if (Reason == EQGNodeFinishReason::Succeed)
		CallEvent(YesName);
	else if (Reason == EQGNodeFinishReason::Fail)
		CallEvent(NoName);
}

#undef LOCTEXT_NAMESPACE
