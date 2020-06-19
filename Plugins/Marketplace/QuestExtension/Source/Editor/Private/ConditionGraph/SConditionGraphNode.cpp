// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "SConditionGraphNode.h"
#include "QuestExtensionEditorStyle.h"

#include <Logging/TokenizedMessage.h>
#include <Widgets/SBoxPanel.h>
#include <Widgets/Text/SInlineEditableTextBlock.h>
#include <Widgets/Images/SImage.h>
#include <Widgets/Layout/SSpacer.h>
#include <Widgets/Layout/SBox.h>
#include <Widgets/Input/SButton.h>
#include <Widgets/SToolTip.h>
#include <SCommentBubble.h>
#include <GraphEditorSettings.h>

#include "ConditionGraph.h"
#include "ConditionGraphNode.h"
#include "ConditionGraphNode_Root.h"
#include "Conditions/ConditionContainer.h"

#define LOCTEXT_NAMESPACE "ConditionGraphNode"



void SConditionGraphNode::Construct(const FArguments& InArgs, class UConditionGraphNode_Base* InNode)
{
	SetCursor(EMouseCursor::CardinalCross);

	GraphNode = InNode;
	UpdateGraphNode();
}

void SConditionGraphNode::UpdateGraphNode()
{
	InputPins.Empty();
	OutputPins.Empty();

	RightNodeBox.Reset();
	LeftNodeBox.Reset();

	SetupNodeError();

	this->ContentScale.Bind( this, &SGraphNode::GetContentScale );

	this->GetOrAddSlot( ENodeZone::Center )
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
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
						.ColorAndOpacity(this, &SConditionGraphNode::GetNodeBodyColor)
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
	CreateOutputSideAddButton(RightNodeBox);
}

void SConditionGraphNode::SetupNodeError()
{
	if (GraphNode->bHasCompilerMessage)
	{
		//Check for node errors/warnings
		if (GraphNode->ErrorType <= EMessageSeverity::Error)
		{
			ErrorMsg = GraphNode->ErrorMsg;
			ErrorColor = FEditorStyle::GetColor("ErrorReporting.BackgroundColor");
		}
		else if (GraphNode->ErrorType <= EMessageSeverity::Warning)
		{
			ErrorMsg = GraphNode->ErrorMsg;
			ErrorColor = FEditorStyle::GetColor("ErrorReporting.WarningBackgroundColor");
		}
	}
	else
	{
		ErrorColor = FLinearColor(0, 0, 0);
		ErrorMsg.Empty();
	}


	if (!ErrorReporting.IsValid())
	{
		TSharedPtr<SErrorText> ErrorTextWidget;

		// generate widget
		SAssignNew(ErrorTextWidget, SErrorText)
			.BackgroundColor(this, &SConditionGraphNode::GetErrorColor)
			.ToolTipText(this, &SConditionGraphNode::GetErrorMsgToolTip);

		ErrorReporting = ErrorTextWidget;
	}
	ErrorReporting->SetError(ErrorMsg);
}

const FSlateBrush* SConditionGraphNode::GetShadowBrush(bool bSelected) const
{
	return bSelected
		? FQuestExtensionEditorStyle::GetBrush(TEXT("QuestGroupEditor.Graph.Node.ShadowSelected"))
		: FQuestExtensionEditorStyle::GetBrush(TEXT("QuestGroupEditor.Graph.Node.Shadow"));
}

void SConditionGraphNode::GetOverlayBrushes(bool bSelected, const FVector2D WidgetSize, TArray<FOverlayBrushInfo>& Brushes) const
{
	const UConditionGraphNode* Node = Cast<UConditionGraphNode>(GraphNode);
	const bool bIsLatent = Node && Node->IsLatent();

	if (bIsLatent)
	{
		FOverlayBrushInfo IPOverlayInfo;

		IPOverlayInfo.Brush = FQuestExtensionEditorStyle::GetBrush("QuestGroupEditor.Graph.LatentIcon");

		//With outputs
		if (Node->ConditionNode->GetOutputs()->Num() > 0)
		{
			IPOverlayInfo.OverlayOffset.X = WidgetSize.X - IPOverlayInfo.Brush->ImageSize.X - 10;
			IPOverlayInfo.OverlayOffset.Y = IPOverlayInfo.Brush->ImageSize.Y / -2.f;
		}
		else //Without outputs
		{
			IPOverlayInfo.OverlayOffset.X = IPOverlayInfo.Brush->ImageSize.X / 2.f;
			IPOverlayInfo.OverlayOffset.Y = IPOverlayInfo.Brush->ImageSize.Y / -2.f;
		}

		Brushes.Add(IPOverlayInfo);
	}
}

TSharedPtr<SGraphPin> SConditionGraphNode::CreatePinWidget(UEdGraphPin * Pin) const
{
	return SNew(SConditionGraphNodeOutputPin, Pin);
}

void SConditionGraphNode::CreateOutputSideAddButton(TSharedPtr<SVerticalBox> OutputBox)
{
	TSharedRef<SWidget> AddPinButton = AddCustomPinButtonContent(
		LOCTEXT("NodeAddPinButton", ""),
		LOCTEXT("NodeAddPinButton_Tooltip", "Adds an output to the node")
	);

	OutputBox->AddSlot()
	.HAlign(HAlign_Right)
	.VAlign(VAlign_Center)
	.AutoHeight()
	[
		AddPinButton
	];
}

TSharedRef<SWidget> SConditionGraphNode::AddCustomPinButtonContent(FText PinText, FText PinTooltipText, bool bRightSide, FString DocumentationExcerpt, TSharedPtr<SToolTip> CustomTooltip)
{
	TSharedPtr<SWidget> ButtonContent;
	if (bRightSide)
	{
		SAssignNew(ButtonContent, SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.HAlign(HAlign_Left)
		[
			SNew(STextBlock)
			.Text(PinText)
			.ColorAndOpacity(FLinearColor::White)
		]
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.VAlign(VAlign_Center)
		.Padding(2, 0, 0, 0)
		[
			SNew(SBox)
			.WidthOverride(10)
			.HeightOverride(10)
			[
				SNew(SImage)
				.Image(FEditorStyle::GetBrush(TEXT("PropertyWindow.Button_AddToArray")))
			]
		];
	}
	else
	{
		SAssignNew(ButtonContent, SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.VAlign(VAlign_Center)
		.Padding(0, 0, 2, 0)
		[
			SNew(SBox)
			.WidthOverride(10)
			.HeightOverride(10)
			[
				SNew(SImage)
				.Image(FEditorStyle::GetBrush(TEXT("PropertyWindow.Button_AddToArray")))
			]
		]
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.HAlign(HAlign_Left)
		[
			SNew(STextBlock)
			.Text(PinText)
			.ColorAndOpacity(FLinearColor::White)
		];
	}

	TSharedPtr<SToolTip> Tooltip;

	if (CustomTooltip.IsValid())
	{
		Tooltip = CustomTooltip;
	}

	TSharedRef<SButton> AddPinButton = SNew(SButton)
		.ContentPadding(FMargin(5.0f, 5.0f, 1.0f, 0.0f))
		.ButtonStyle(FEditorStyle::Get(), "NoBorder")
		.OnClicked(this, &SConditionGraphNode::OnAddPin)
		.IsEnabled(this, &SConditionGraphNode::IsNodeEditable)
		.ToolTipText(PinTooltipText)
		.ToolTip(Tooltip)
		.Visibility(this, &SConditionGraphNode::IsAddPinButtonVisible)
		[
			ButtonContent.ToSharedRef()
		];

	AddPinButton->SetCursor(EMouseCursor::Hand);

	return AddPinButton;
}

EVisibility SConditionGraphNode::IsAddPinButtonVisible() const
{
	EVisibility ButtonVisibility = SGraphNode::IsAddPinButtonVisible();
	if (ButtonVisibility == EVisibility::Visible)
	{
		UConditionGraphNode* Graph = Cast<UConditionGraphNode>(GraphNode);
		if (!Graph || !Graph->CanAddOutputPin())
		{
			ButtonVisibility = EVisibility::Collapsed;
		}
	}
	return ButtonVisibility;
}

FReply SConditionGraphNode::OnAddPin()
{
	//GraphNode->AddOutputPin();
	Cast<UConditionGraphNode>(GraphNode)->AddOutputPin();

	return FReply::Handled();
}


void SConditionGraphNode::AddPin(const TSharedRef<SGraphPin>& PinToAdd)
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

TSharedRef<SWidget> SConditionGraphNode::GetTitleWidget()
{
	return SNew(SOverlay)
	.Visibility(this, &SConditionGraphNode::IsTitleVisible, false)

	+ SOverlay::Slot()
	[
		SNew(SImage)
		.Image(FQuestExtensionEditorStyle::GetBrush("QuestGroupEditor.Graph.NodeBody"))
		.ColorAndOpacity(this, &SConditionGraphNode::GetNodeTitleColor)
	]

	+ SOverlay::Slot()
	.Padding(5.0f)
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Center)
		.AutoWidth()
		[
			SNew(STextBlock)
			.TextStyle(FQuestExtensionEditorStyle::Get(), "QuestGroupEditor.Graph.Node.Title")
			.Text(this, &SConditionGraphNode::GetNodeTitle)
			.ColorAndOpacity(this, &SConditionGraphNode::GetNodeTextColor, true)
			.MinDesiredWidth(50.0f)
		]
		+ SHorizontalBox::Slot()
		.Padding(4, 0, 0, 0)
		.HAlign(HAlign_Right)
		[
			SNew(SImage)
			.Image(FQuestExtensionEditorStyle::GetBrush("QuestGroupEditor.Graph.LatentDeniedIcon"))
			.ColorAndOpacity(FLinearColor(.8f, .1f, .1f, 1))
			.Visibility(this, &SConditionGraphNode::IsLatentDenied)
		]
	];
}

EVisibility SConditionGraphNode::IsTitleVisible(bool bInverted) const
{
	const UConditionGraphNode_Base* Node = Cast<UConditionGraphNode_Base>(GraphNode);
	if (!Node)
		return EVisibility::Collapsed;

	return (bInverted ^ Node->IsCompactNode())? EVisibility::Collapsed : EVisibility::Visible;
}

bool SConditionGraphNode::IsLatent() const
{
	const UConditionGraphNode* Node = Cast<UConditionGraphNode>(GraphNode);
	return Node && Node->IsLatent();
}

EVisibility SConditionGraphNode::IsLatentDenied() const
{
	check(GraphNode);
	UConditionGraph* Graph = CastChecked<UConditionGraph>(GraphNode->GetGraph());

	if (GraphNode->IsA<UConditionGraphNode_Root>())
	{
		if (!Graph->GetContainer()->bAllowsLatentExecution)
		{
			return EVisibility::Visible;
		}
	}

	return EVisibility::Collapsed;
}

TSharedRef<SWidget> SConditionGraphNode::GetContentWidget()
{
	return SNew(SHorizontalBox)

	+ SHorizontalBox::Slot()
	.Padding(0, 2)
	.AutoWidth()
	.HAlign(HAlign_Left)
	[
		SAssignNew(LeftNodeBox, SVerticalBox)
	]

	+ SHorizontalBox::Slot()
	.FillWidth(1.0f)
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Top)
	.Padding(5.0f)
	[
		SNew(SVerticalBox)

		+ SVerticalBox::Slot()
		.Padding(0, 2)
		.AutoHeight()
		[
			SNew(STextBlock)
			.TextStyle(FQuestExtensionEditorStyle::Get(), "QuestGroupEditor.Graph.Node.Title")
			.ColorAndOpacity(this, &SConditionGraphNode::GetNodeTextColor, false)
			.Visibility(this, &SConditionGraphNode::IsTitleVisible, true)
			.Text(this, &SConditionGraphNode::GetNodeTitle)
		]

		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock)
			.TextStyle(FQuestExtensionEditorStyle::Get(), "QuestGroupEditor.Graph.TextStyle")
			.ColorAndOpacity(this, &SConditionGraphNode::GetNodeTextColor, false)
			.Text(this, &SConditionGraphNode::GetNodeDescription)
		]
	]

	+ SHorizontalBox::Slot()
	.Padding(0, 2)
	.AutoWidth()
	.HAlign(HAlign_Right)
	[
		SAssignNew(RightNodeBox, SVerticalBox)
	];
}

FSlateColor SConditionGraphNode::GetNodeColor() const
{
	return FSlateColor(GraphNode->GetNodeTitleColor());
}

FSlateColor SConditionGraphNode::GetNodeTitleColor() const
{
	const FLinearColor NodeColor = GraphNode->GetNodeTitleColor();

	FLinearColor Color = NodeColor.Desaturate(0.1f);

	//Darken color by 20%
	Color += 0.6f * (FLinearColor::Black - Color);

	//Decrease opacity
	Color.A += 0.2f;
	return Color;
}

FSlateColor SConditionGraphNode::GetNodeBodyColor() const
{
	return GetNodeColor();
}

FSlateColor SConditionGraphNode::GetNodeTextColor(bool bIsTitle) const
{
	const FSlateColor BGColor = bIsTitle ? GetNodeTitleColor() : GetNodeBodyColor();

	return BGColor.GetSpecifiedColor().GetLuminance() > 0.7f? FLinearColor::Black : FLinearColor::White;
}

FText SConditionGraphNode::GetNodeTitle() const
{
	return GraphNode->GetNodeTitle(ENodeTitleType::FullTitle);
}

FText SConditionGraphNode::GetNodeDescription() const
{
	const UConditionGraphNode_Base* Node = Cast<UConditionGraphNode_Base>(GraphNode);

	if (Node)
	{
		return Node->GetNodeDescription();
	}
	return FText::GetEmpty();
}


const FSlateBrush* SConditionGraphNodeOutputPin::GetPinIcon() const
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
