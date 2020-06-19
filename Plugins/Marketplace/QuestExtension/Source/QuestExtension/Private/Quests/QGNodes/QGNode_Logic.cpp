// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/QGNode_Logic.h"


#define LOCTEXT_NAMESPACE "QGNode_Logic"

void UQGNode_Logic::ReceiveStart_Implementation()
{
	Finish(EQGNodeFinishReason::Succeed);
}

FText UQGNode_Logic::GetNodeName_Implementation() const
{
	return FText::GetEmpty();
}

FText UQGNode_Logic::GetTitle() const
{
	if (!DisplayName.IsNone())
		return FText::FromName(DisplayName);

	const FText CustomName = GetNodeName();
	if (!CustomName.IsEmpty())
		return CustomName;

	return Super::GetTitle();
}

#undef LOCTEXT_NAMESPACE
