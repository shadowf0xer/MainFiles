// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGroupConnectionDrawingPolicy.h"
#include <Misc/App.h>
#include <EdGraph/EdGraph.h>

#include "Quests/QuestGroup.h"
#include "QuestGraph/QuestGroupNode.h"
#include "QuestGraph/QuestGroupNode_Root.h"
#include "QuestGraph/QuestGroupGraphSchema.h"


FConnectionDrawingPolicy* FQuestGroupConnectionDrawingPolicyFactory::CreateConnectionPolicy(const class UEdGraphSchema* Schema, int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const class FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const
{
	if (Schema->IsA(UQuestGroupGraphSchema::StaticClass()))
	{
		return new FQuestGroupConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}
	return nullptr;
}


/////////////////////////////////////////////////////
// FQuestGroupConnectionDrawingPolicy

class UGraphEditorSettings;

FQuestGroupConnectionDrawingPolicy::FQuestGroupConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const FSlateRect& InClippingRect, FSlateWindowElementList& InDrawElements, UEdGraph* InGraphObj)
	: FConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements)
	, GraphObj(InGraphObj)
{
	// Cache off the editor options
	ActiveColor = Settings->TraceAttackColor;
	InactiveColor = Settings->TraceReleaseColor;

	ActiveWireThickness = Settings->TraceAttackWireThickness;
	InactiveWireThickness = Settings->TraceReleaseWireThickness;

	// Don't want to draw ending arrowheads
	ArrowImage = nullptr;
	ArrowRadius = FVector2D::ZeroVector;
}

// Give specific editor modes a chance to highlight this connection or darken non-interesting connections
void FQuestGroupConnectionDrawingPolicy::DetermineWiringStyle(UEdGraphPin* OutputPin, UEdGraphPin* InputPin, /*inout*/ FConnectionParams& Params)
{
	Params.AssociatedPin1 = OutputPin;
	Params.AssociatedPin2 = InputPin;

	if(!InputPin)
		return;

	// Get the schema and grab the default color from it
	check(GraphObj);
	const UEdGraphSchema* Schema = GraphObj->GetSchema();

	Params.WireColor = Schema->GetPinTypeColor(InputPin->PinType);
	Params.WireThickness = 1;


	// DEBUG:
	const bool bDeemphasizeUnhoveredPins = HoveredPins.Num() > 0;
	if (bDeemphasizeUnhoveredPins)
	{
		ApplyHoverDeemphasis(OutputPin, InputPin, /*inout*/ Params.WireThickness, /*inout*/ Params.WireColor);
	}

	UQuestGroupNode_Root* RootNode = OutputPin ? Cast<UQuestGroupNode_Root>(OutputPin->GetOwningNode()) : nullptr;
	UQuestGroupNode* FromNode	  = OutputPin ? Cast<UQuestGroupNode>(OutputPin->GetOwningNode()) : nullptr;
	UQuestGroupNode* ToNode		= InputPin ? Cast<UQuestGroupNode>(InputPin->GetOwningNode()) : nullptr;

	bool bRemarked = false;

	if (RootNode && ToNode)
	{
		if (ToNode->bDebuggerMarkRunning && !ToNode->bDebuggerMarkPreviouslyRunning)
		{
			bRemarked = true;
		}
	}
	else if (ToNode && FromNode)
	{
		const bool bIsRejection = FromNode->GetRejectPin() && OutputPin == FromNode->GetRejectPin();

		const FGuid ParentGuid = ToNode->DebuggerMarkActiveParent;
		if(ParentGuid.IsValid() && FromNode->QuestNode->GetNodeId() == ParentGuid)
		{
			bRemarked = true;
		}
	}

	if (bRemarked)
	{
		Params.WireThickness = 10.0f;
		Params.bDrawBubbles = true;
	}
}
