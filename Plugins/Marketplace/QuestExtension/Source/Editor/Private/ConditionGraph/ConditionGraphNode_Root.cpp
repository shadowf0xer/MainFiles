// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionGraph/ConditionGraphNode_Root.h"

#include <Framework/MultiBox/MultiBoxBuilder.h>
#include <GraphEditorSettings.h>
#include <ToolMenu.h>

#include "ConditionGraphEditorCommands.h"
#include "ConditionGraph.h"

#define LOCTEXT_NAMESPACE "ConditionGraphNode_Root"


/////////////////////////////////////////////////////
// UConditionGraphGraphNode_Root

const FName UConditionGraphNode_Root::RootOutputPin { " " };

UConditionGraphNode_Root::UConditionGraphNode_Root(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FLinearColor UConditionGraphNode_Root::GetNodeTitleColor() const
{
	return FColor(63, 61, 92);
}

FText UConditionGraphNode_Root::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	FText PropertyName = CastChecked<UConditionGraph>(GetGraph())->PropertyName;
	if (!PropertyName.IsEmpty())
		return PropertyName;

	return LOCTEXT("RootTitle", "Conditions");
}

FText UConditionGraphNode_Root::GetTooltipText() const
{
	return LOCTEXT("RootToolTip", "Where conditions starts");
}

void UConditionGraphNode_Root::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	if (Context->Pin)
	{
	}
	else if (Context->Node)
	{
	}
}

void UConditionGraphNode_Root::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();
	CreatePin(EGPD_Output, FCGPins::PC_Exec, RootOutputPin);
}

#undef LOCTEXT_NAMESPACE
