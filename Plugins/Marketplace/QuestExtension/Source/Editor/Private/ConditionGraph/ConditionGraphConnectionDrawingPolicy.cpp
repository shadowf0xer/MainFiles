// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionGraphConnectionDrawingPolicy.h"
#include <Misc/App.h>
#include <Editor.h>
#include <EdGraph/EdGraph.h>

#include "Conditions/ConditionContainer.h"
#include "ConditionGraphNode.h"
#include "ConditionGraphNode_Root.h"
#include "ConditionGraphSchema.h"


FConnectionDrawingPolicy* FConditionGraphConnectionDrawingPolicyFactory::CreateConnectionPolicy(const class UEdGraphSchema* Schema, int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const class FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const
{
	if (Schema->IsA(UConditionGraphSchema::StaticClass()))
	{
		return new FConditionGraphConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}
	return nullptr;
}


/////////////////////////////////////////////////////
// FConditionGraphConnectionDrawingPolicy

class UGraphEditorSettings;

FConditionGraphConnectionDrawingPolicy::FConditionGraphConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const FSlateRect& InClippingRect, FSlateWindowElementList& InDrawElements, UEdGraph* InGraphObj)
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
void FConditionGraphConnectionDrawingPolicy::DetermineWiringStyle(UEdGraphPin* OutputPin, UEdGraphPin* InputPin, /*inout*/ FConnectionParams& Params)
{
	Params.AssociatedPin1 = OutputPin;
	Params.AssociatedPin2 = InputPin;

	check(GraphObj);
	const UEdGraphSchema* Schema = GraphObj->GetSchema();

	if (InputPin)
	{
		Params.WireColor = Schema->GetPinTypeColor(InputPin->PinType);
	}
	else if (OutputPin)
	{
		Params.WireColor = Schema->GetPinTypeColor(OutputPin->PinType);
	}



	// DEBUG:
	/*if (OutputPin == nullptr)
	{
		return;
	}

	bool bExecuted = false;

	// Run throw the predecessors, and on
	if (FExecPairingMap* PredecessorMap = PredecessorNodes.Find(OutputPin->GetOwningNode()))
	{
		if (FTimePair* Times = PredecessorMap->Find(InputPin->GetOwningNode()))
		{
			bExecuted = true;

			Params.WireThickness = ActiveWireThickness;
			Params.WireColor = ActiveColor;

			Params.bDrawBubbles = true;
		}
	}

	if (!bExecuted)
	{
		// It's not followed, fade it and keep it thin
		Params.WireColor = InactiveColor;
		Params.WireThickness = InactiveWireThickness;
	}*/
}
