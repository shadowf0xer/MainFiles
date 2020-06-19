// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionGraph/ConditionGraphNode_Base.h"
#include "ConditionGraphSchema.h"

#define LOCTEXT_NAMESPACE "ConditionGraphNode_Base"


//////////////////////////////////////////////////////////////////////////
// QuestGroupNode_Base

UConditionGraphNode_Base::UConditionGraphNode_Base( const FObjectInitializer& ObjectInitializer )
	: Super( ObjectInitializer )
{
}

FLinearColor UConditionGraphNode_Base::GetNodeTitleColor() const
{
	return FColor(69, 104, 209);
}

void UConditionGraphNode_Base::AllocateDefaultPins()
{}

bool UConditionGraphNode_Base::CanCreateUnderSpecifiedSchema(const UEdGraphSchema* Schema) const
{
	return Schema->IsA<UConditionGraphSchema>() && Super::CanCreateUnderSpecifiedSchema(Schema);
}

#undef LOCTEXT_NAMESPACE
