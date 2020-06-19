// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "SGraphNode.h"
#include "SGraphPin.h"

class SHorizontalBox;

class SConditionGraphNode : public SGraphNode
{
public:
	SLATE_BEGIN_ARGS(SConditionGraphNode){}

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs, class UConditionGraphNode_Base* InNode);

protected:

	TSharedRef<SWidget> GetTitleWidget();
	EVisibility IsTitleVisible(bool bInverted = false) const;
	bool IsLatent() const;
	EVisibility IsLatentDenied() const;
	TSharedRef<SWidget> GetContentWidget();

	// SGraphNode interface
	virtual void AddPin(const TSharedRef<SGraphPin>& PinToAdd) override;
	virtual void UpdateGraphNode() override;
	/** Called to set error text on the node */
	void SetupNodeError();

	virtual const FSlateBrush* GetShadowBrush(bool bSelected) const override;
	/** Populate the brushes array with any overlay brushes to render */
	virtual void GetOverlayBrushes(bool bSelected, const FVector2D WidgetSize, TArray<FOverlayBrushInfo>& Brushes) const override;

	/** Hook that allows derived classes to supply their own SGraphPin derivatives for any pin. */
	virtual TSharedPtr<SGraphPin> CreatePinWidget(UEdGraphPin* Pin) const override;

	virtual void CreateOutputSideAddButton(TSharedPtr<SVerticalBox> OutputBox) override;
	TSharedRef<SWidget> AddCustomPinButtonContent(FText PinText, FText PinTooltipText, bool bRightSide = true, FString DocumentationExcerpt = FString(), TSharedPtr<SToolTip> CustomTooltip = nullptr);

	virtual EVisibility IsAddPinButtonVisible() const override;
	virtual FReply OnAddPin() override;

	FSlateColor GetNodeColor() const;
	FSlateColor GetNodeTitleColor() const;
	FSlateColor GetNodeBodyColor() const;
	FSlateColor GetNodeTextColor(bool bIsTitle) const;

	FText GetNodeTitle() const;
	FText GetNodeDescription() const;

protected:
	/** The content widget for this node - derived classes can insert what they want */
	TSharedPtr<SWidget> ContentWidget;

	/** Any sub-nodes are inserted here */
	TSharedPtr<SVerticalBox> SubNodeContent;
};


class SConditionGraphNodeOutputPin : public SGraphPin
{
protected:
	/** SGraphPin interface */
	virtual const FSlateBrush* GetPinIcon() const override;
};
