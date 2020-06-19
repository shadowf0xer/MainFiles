// Copyright 2018 The Reallusion Authors. All Rights Reserved.

#include "SRLLiveLinkSourceFactory.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Input/SNumericEntryBox.h"

#define LOCTEXT_NAMESPACE "RLLiveLinkSourceEditor"

void SRLLiveLinkSourceFactory::Construct( const FArguments& Args )
{
	OkClicked = Args._OnOkClicked;

	ChildSlot
	[
		SNew(SBox)
		.WidthOverride(200)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
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
					SAssignNew( m_spEditabledText, SEditableTextBox )
					.Text( FText::FromString( GetPort() ) )
					.OnTextCommitted( this, &SRLLiveLinkSourceFactory::OnPortChanged )
				]
			]
			+ SVerticalBox::Slot()
			.HAlign(HAlign_Right)
			.AutoHeight()
			[
				SNew( SHorizontalBox )
				+ SHorizontalBox::Slot()
				.HAlign( HAlign_Right )
				.AutoWidth()
				[
					SNew( SButton )
					.OnClicked( this, &SRLLiveLinkSourceFactory::OnOkClicked )
				    [
				    	SNew( STextBlock )
				    	.Text( LOCTEXT( "Ok", "Ok" ) )
				    ]
				]
			    + SHorizontalBox::Slot()
				.HAlign( HAlign_Right )
				.AutoWidth()
				[
					SNew( SButton )
					.OnClicked( this, &SRLLiveLinkSourceFactory::OnCancelClicked )
				    [
				    	SNew( STextBlock )
				    	.Text( LOCTEXT( "Cancel", "Cancel" ) )
				    ]
				]
				
			]
		]
	];
}

void SRLLiveLinkSourceFactory::OnPortChanged( const FText& NewValue, ETextCommit::Type )
{
	TSharedPtr<SEditableTextBox> spEditabledTextPin = m_spEditabledText.Pin();
	if ( spEditabledTextPin.IsValid() )
	{
		spEditabledTextPin->SetText( FText::FromString( NewValue.ToString() ) );
	}
}

FReply SRLLiveLinkSourceFactory::OnOkClicked()
{
	TSharedPtr<SEditableTextBox> spEditabledTextPin = m_spEditabledText.Pin();
	if ( spEditabledTextPin.IsValid())
	{
		OkClicked.ExecuteIfBound( spEditabledTextPin->GetText().ToString() );
	}
	return FReply::Handled();
}

FReply SRLLiveLinkSourceFactory::OnCancelClicked()
{
	TSharedPtr<SWindow> spCurrentWindow = FSlateApplication::Get().FindWidgetWindow( AsShared() );
	if( spCurrentWindow.IsValid() )
	{
		spCurrentWindow->RequestDestroyWindow();
	}

	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE