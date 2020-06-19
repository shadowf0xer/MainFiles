// Copyright 2018 The Reallusion Authors. All Rights Reserved.

#include "RLLiveLinkSourceEditor.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Input/SNumericEntryBox.h"
#include "Runtime/Launch/Resources/Version.h"

#define LOCTEXT_NAMESPACE "RLLiveLinkSourceEditor"

SRLLiveLinkSourceEditor::~SRLLiveLinkSourceEditor()
{
}

void SRLLiveLinkSourceEditor::Construct(const FArguments& Args)
{
	ChildSlot
	[
		SNew(SBox)
		.WidthOverride(250)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Left)
				.FillWidth(0.5f)
				[
					SNew(STextBlock)
					.Text(LOCTEXT("RLPortNumber", "Port Number"))
				]
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Fill)
				.FillWidth(0.5f)
				[
					SNew(SNumericEntryBox<uint32>)
					.Value(this, &SRLLiveLinkSourceEditor::GetPort)
					.OnValueChanged(this, &SRLLiveLinkSourceEditor::OnPortChanged)
				]
#if ENGINE_MINOR_VERSION > 22
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Fill)
				.FillWidth(0.5f)
				[
					SNew(SButton)
					.Text(LOCTEXT("OK", "OK"))
					.OnClicked_Lambda([this]()
				    {
						return(FReply::Handled());
				    })
				]
#endif
			]
		]
	];
}

#undef LOCTEXT_NAMESPACE