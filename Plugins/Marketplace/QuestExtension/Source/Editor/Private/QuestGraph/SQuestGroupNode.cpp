// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "SQuestGroupNode.h"
#include "GraphEditorSettings.h"

#include "SCommentBubble.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/SInlineEditableTextBlock.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SSpacer.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/SToolTip.h"
#include "SGraphPreviewer.h"

#include "QuestGroupNode.h"
#include "QuestExtensionEditorStyle.h"

#include "QuestGroup.h"
#include "QGNodes/Content/QGNode_QuestFromAsset.h"

#define LOCTEXT_NAMESPACE "QuestGroupEditor"



void SQuestGroupNode::Construct(const FArguments& InArgs, class UQuestGroupNode_Base* InNode)
{
	SetCursor(EMouseCursor::CardinalCross);

	GraphNode = InNode;
	UpdateGraphNode();
}

void SQuestGroupNode::UpdateGraphNode()
{
	InputPins.Empty();
	OutputPins.Empty();

	RightNodeBox.Reset();
	LeftNodeBox.Reset();

	SetupErrorReporting();

	this->ContentScale.Bind(this, &SGraphNode::GetContentScale);

	this->GetOrAddSlot(ENodeZone::Center)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SBorder)
			.BorderImage(FQuestExtensionEditorStyle::GetBrush("QuestGroupEditor.Graph.NodeBody"))
			.Padding(this, &SQuestGroupNode::GetDebugPadding)
			//.ForegroundColor(this, &SQuestGroupNode::GetBorderColor)
			.BorderBackgroundColor(this, &SQuestGroupNode::GetBorderColor)
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SVerticalBox)
					+ SVerticalBox::Slot()
					.AutoHeight()
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Top)
					[
						GetTitleWidget()
					]
					+ SVerticalBox::Slot()
					.AutoHeight()
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Top)
					[
						SNew(SOverlay)
						+ SOverlay::Slot()
						.Padding(0)
						[
							SNew(SImage)
							.Image(FQuestExtensionEditorStyle::GetBrush("QuestGroupEditor.Graph.NodeBody"))
							.ColorAndOpacity(this, &SQuestGroupNode::GetNodeBodyColor)
						]
						+ SOverlay::Slot()
						[
							GetContentWidget()
						]
					]
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0)
					[
						ErrorReporting->AsWidget()
					]
				]
			]
		];

	// Create comment bubble
	TSharedPtr<SCommentBubble> CommentBubble;
	const FSlateColor CommentColor = GetDefault<UGraphEditorSettings>()->DefaultCommentNodeTitleColor;

	SAssignNew(CommentBubble, SCommentBubble)
		.GraphNode(GraphNode)
		.Text(this, &SGraphNode::GetNodeComment)
		.OnTextCommitted(this, &SGraphNode::OnCommentTextCommitted)
		.ColorAndOpacity(CommentColor)
		.AllowPinning(true)
		.EnableTitleBarBubble(true)
		.EnableBubbleCtrls(true)
		.GraphLOD(this, &SGraphNode::GetCurrentLOD)
		.IsGraphNodeHovered(this, &SGraphNode::IsHovered);

	GetOrAddSlot(ENodeZone::TopCenter)
		.SlotOffset(TAttribute<FVector2D>(CommentBubble.Get(), &SCommentBubble::GetOffset))
		.SlotSize(TAttribute<FVector2D>(CommentBubble.Get(), &SCommentBubble::GetSize))
		.AllowScaling(TAttribute<bool>(CommentBubble.Get(), &SCommentBubble::IsScalingAllowed))
		.VAlign(VAlign_Top)
		[
			CommentBubble.ToSharedRef()
		];

	CreatePinWidgets();
}

const FSlateBrush* SQuestGroupNode::GetShadowBrush(bool bSelected) const
{
	return bSelected ? FQuestExtensionEditorStyle::GetBrush(TEXT("QuestGroupEditor.Graph.Node.ShadowSelected")) : FQuestExtensionEditorStyle::GetBrush(TEXT("QuestGroupEditor.Graph.Node.Shadow"));
}

TSharedPtr<SToolTip> SQuestGroupNode::GetComplexTooltip()
{
	UQuestGroupNode* QGGraphNode = Cast<UQuestGroupNode>(GraphNode);

	if (QGGraphNode)
	{
		auto* QuestFromAssetNode = Cast<UQGNode_QuestFromAsset>(QGGraphNode->QuestNode);
		if (QuestFromAssetNode)
		{
			UQuestGroup* QuestGroup = Cast<UQuestGroup>(QuestFromAssetNode->QuestAsset);
			if (QuestGroup && QuestGroup->GetGraph())
			{
				return SNew(SToolTip)
				[
					SNew(SOverlay)
					+ SOverlay::Slot()
					[
						// Create the tooltip graph preview, make sure to disable state overlays to
						// prevent the PIE / read-only borders from obscuring the graph
						SNew(SGraphPreviewer, QuestGroup->GetGraph())
						.CornerOverlayText(LOCTEXT("QuestGroupOverlayText", "Quest Group"))
						.ShowGraphStateOverlay(false)
					]
					+ SOverlay::Slot()
					.Padding(2.0f)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("OpenQuestGroupTooltip", "Double-click to Open"))
						.ColorAndOpacity(FSlateColor::UseSubduedForeground())
					]
				];
			}
		}
	}

	return SGraphNode::GetComplexTooltip();
}

TSharedPtr<SGraphPin> SQuestGroupNode::CreatePinWidget(UEdGraphPin * Pin) const
{
	return SNew(SQuestGroupNodeOutputPin, Pin);
}

void SQuestGroupNode::AddPin(const TSharedRef<SGraphPin>& PinToAdd)
{
	PinToAdd->SetOwner(SharedThis(this));

	if (PinToAdd->GetDirection() == EGPD_Input)
	{
		LeftNodeBox->AddSlot()
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Center)
		.AutoHeight()
		[
			PinToAdd
		];
		InputPins.Add(PinToAdd);
	}
	else
	{
		RightNodeBox->AddSlot()
		.HAlign(HAlign_Right)
		.VAlign(VAlign_Center)
		.AutoHeight()
		[
			PinToAdd
		];
		OutputPins.Add(PinToAdd);
	}
}

TSharedRef<SWidget> SQuestGroupNode::GetTitleWidget()
{
	return SNew(SOverlay)
	+ SOverlay::Slot()
	[
		SNew(SImage)
		.Image(FQuestExtensionEditorStyle::GetBrush("QuestGroupEditor.Graph.NodeBody"))
		.ColorAndOpacity(this, &SQuestGroupNode::GetNodeTitleColor)
	]
	+ SOverlay::Slot()
	.Padding(5.0f)
	[
		SNew(STextBlock)
		.TextStyle(FQuestExtensionEditorStyle::Get(), "QuestGroupEditor.Graph.Node.Title")
		.Text(this, &SQuestGroupNode::GetNodeTitle)
		.ColorAndOpacity(this, &SQuestGroupNode::GetNodeTitleTextColor)
		.MinDesiredWidth(50.0f)
	];
}

TSharedRef<SWidget> SQuestGroupNode::GetContentWidget()
{
	return SNew(SHorizontalBox)

	+ SHorizontalBox::Slot()
	.AutoWidth()
	.HAlign(HAlign_Left)
	[
		SAssignNew(LeftNodeBox, SVerticalBox)
	]

	+ SHorizontalBox::Slot()
	.FillWidth(1.0f)
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Center)
	.Padding(5.0f)
	[
		SNew(STextBlock)
		.TextStyle(FQuestExtensionEditorStyle::Get(), "QuestGroupEditor.Graph.TextStyle")
		.Text(this, &SQuestGroupNode::GetNodeDescription)
	]

	+ SHorizontalBox::Slot()
	.AutoWidth()
	.HAlign(HAlign_Right)
	[
		SAssignNew(RightNodeBox, SVerticalBox)
	];
}

FSlateColor SQuestGroupNode::GetNodeColor() const
{
	FLinearColor Color = GraphNode->GetNodeTitleColor();
	Color.A = 1.0f;
	return { Color };
}

FSlateColor SQuestGroupNode::GetNodeTitleColor() const
{
	const FLinearColor NodeColor = GraphNode->GetNodeTitleColor();

	FLinearColor Color = NodeColor.Desaturate(0.1f);

	//Darken color by 20%
	Color += 0.6f * (FLinearColor::Black - Color);

	//Decrease opacity
	Color.A += 0.2f;
	return Color;
}

FSlateColor SQuestGroupNode::GetNodeBodyColor() const
{
	return GetNodeColor();
}

FSlateColor SQuestGroupNode::GetNodeTitleTextColor() const
{
	if (GetNodeTitleColor().GetSpecifiedColor().GetLuminance() > 0.7f)
	{
		return FLinearColor::Black;
	}
	else
	{
		return FLinearColor::White;
	}
}

FSlateColor SQuestGroupNode::GetBorderColor() const
{
	UQuestGroupNode* QGGraphNode = Cast<UQuestGroupNode>(GraphNode);
	const bool bIsInDebuggerRunning	    = QGGraphNode && QGGraphNode->bDebuggerMarkRunning;
	const bool bIsInDebuggerPrevRunning = QGGraphNode && QGGraphNode->bDebuggerMarkPreviouslyRunning;
	const bool bIsInDebuggerCompleted   = QGGraphNode && QGGraphNode->bDebuggerMarkSucceeded;
	const bool bIsInDebuggerRejected	= QGGraphNode && QGGraphNode->bDebuggerMarkFailed;

	const FLinearColor BorderColor {
		bIsInDebuggerRunning   ? FColor::Orange :
		bIsInDebuggerRejected  ? FColor::Red	:
		bIsInDebuggerCompleted ? FColor::Green  : FColor::Transparent
	};
	return BorderColor;
}

FText SQuestGroupNode::GetNodeTitle() const
{
	return GraphNode->GetNodeTitle(ENodeTitleType::FullTitle);
}

FText SQuestGroupNode::GetNodeDescription() const
{
	return FText::GetEmpty();
}

FMargin SQuestGroupNode::GetDebugPadding() const
{
	// Don't apply border if nothing happens
	if (GetBorderColor().GetSpecifiedColor() == FLinearColor::Transparent)
		return 0;
	else
		return 3.0f;
}

const FSlateBrush* SQuestGroupNodeOutputPin::GetPinIcon() const
{
	if (IsConnected()) {
		return (IsHovered())
			? FQuestExtensionEditorStyle::GetBrush(TEXT("QuestGroupEditor.Graph.Pin.BackgroundHovered"))
			: FQuestExtensionEditorStyle::GetBrush(TEXT("QuestGroupEditor.Graph.Pin.Background"));
	}
	else
	{
		return (IsHovered())
			? FQuestExtensionEditorStyle::GetBrush(TEXT("QuestGroupEditor.Graph.Pin.Disconnected.BackgroundHovered"))
			: FQuestExtensionEditorStyle::GetBrush(TEXT("QuestGroupEditor.Graph.Pin.Disconnected.Background"));
	}
}

#undef LOCTEXT_NAMESPACE
