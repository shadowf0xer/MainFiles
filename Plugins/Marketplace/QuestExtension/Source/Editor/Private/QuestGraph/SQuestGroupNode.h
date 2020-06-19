// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "SGraphPin.h"
#include "SGraphNode.h"

class SHorizontalBox;

class SQuestGroupNode : public SGraphNode
{
public:
	SLATE_BEGIN_ARGS(SQuestGroupNode){}

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs, class UQuestGroupNode_Base* InNode);

protected:

	TSharedRef<SWidget> GetTitleWidget();
	TSharedRef<SWidget> GetContentWidget();

	// SGraphNode interface
	virtual void AddPin(const TSharedRef<SGraphPin>& PinToAdd) override;
	virtual void UpdateGraphNode() override;
	virtual const FSlateBrush* GetShadowBrush(bool bSelected) const override;
	virtual TSharedPtr<SToolTip> GetComplexTooltip() override;

	/** Hook that allows derived classes to supply their own SGraphPin derivatives for any pin. */
	virtual TSharedPtr<SGraphPin> CreatePinWidget(UEdGraphPin* Pin) const override;


	FSlateColor GetNodeColor() const;
	FSlateColor GetNodeTitleColor() const;
	FSlateColor GetNodeBodyColor() const;
	FSlateColor GetNodeTitleTextColor() const;
	FSlateColor GetBorderColor() const;

	FText GetNodeTitle() const;
	FText GetNodeDescription() const;

	FMargin GetDebugPadding() const;

protected:
	/** The content widget for this node - derived classes can insert what they want */
	TSharedPtr<SWidget> ContentWidget;

	/** Any sub-nodes are inserted here */
	TSharedPtr<SVerticalBox> SubNodeContent;
};


class SQuestGroupNodeOutputPin : public SGraphPin
{
protected:
	/** SGraphPin interface */
	virtual const FSlateBrush* GetPinIcon() const override;
};
