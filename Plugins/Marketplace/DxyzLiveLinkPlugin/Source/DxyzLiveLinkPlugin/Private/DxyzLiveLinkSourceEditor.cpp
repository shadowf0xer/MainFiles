/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzLiveLinkSourceEditor.h"

#include "Widgets/Input/SSpinBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Views/SHeaderRow.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Misc/MessageDialog.h"

#define LOCTEXT_NAMESPACE "FDxyzLiveLinkPlugin"

void SDxyzLiveLinkSourceEditor::Construct(const FArguments& InArgs)
{
	OnSourceCreationRequested = InArgs._OnSourceCreationRequested;

	mName = "Grabber";
	mIPAdress = "127.0.0.1";
	mPort = 5559;

	ChildSlot
		[
			SNew(SBox)
			.HeightOverride(50)
			.WidthOverride(300)
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.Padding(FMargin(5, 3, 5, 3))
					.MaxWidth(50)
					[
						SNew(STextBlock)
						.Text(FText::FromString(mName))
					]
					+ SHorizontalBox::Slot()
					.Padding(FMargin(5, 1, 5, 1))
					[
						SNew(SEditableTextBox)
						.Text(FText::FromString(mIPAdress))
						.SelectAllTextWhenFocused(true)
						.OnTextChanged(this, &SDxyzLiveLinkSourceEditor::OnIPAdressTextChanged)
					]
					+ SHorizontalBox::Slot()
					.Padding(FMargin(5, 1, 5, 1))
					[
						SNew(SSpinBox<int32>) // Note : tried with SNumericEntryBox<int32> but it did not update value...
						.Value(mPort)
						.OnValueChanged(this, &SDxyzLiveLinkSourceEditor::OnPortValueChanged)
						.MinValue(1)
						.MaxValue(65535)
					]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.FillWidth(1.f)
					+ SHorizontalBox::Slot()
					.AutoWidth()
					.HAlign(EHorizontalAlignment::HAlign_Right)
					[
						SNew(SButton)
						.Text(LOCTEXT("OkButton", "Ok"))
						.OnClicked(this, &SDxyzLiveLinkSourceEditor::OnOkClicked)
					]
					+ SHorizontalBox::Slot()
					.AutoWidth()
					.HAlign(EHorizontalAlignment::HAlign_Right)
					[
						SNew(SButton)
						.Text(LOCTEXT("CancelButton", "Cancel"))
						.OnClicked(this, &SDxyzLiveLinkSourceEditor::OnCancelClicked)
					]
				]
			]
        ];
}

FReply SDxyzLiveLinkSourceEditor::OnOkClicked()
{
	FIPv4Address ip;
	if (!FIPv4Address::Parse(mIPAdress, ip))
	{
		FText TitleMessage = FText::FromString(FString("Could not create source"));
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(FString("IP can't be parsed.")), &TitleMessage);
		UE_LOG(DxyzLog, Error, TEXT("[DxyzLiveLinkSourceFactory] - Error : IP can't be parsed"));
		return FReply::Unhandled();
	}

	FString vAddr = FString::Format(TEXT("{0}:{1}"), { *mIPAdress, mPort });

	if (FDxyzLiveLinkSource::SIsAddrAlreadyAssigned(vAddr))
	{
		FText TitleMessage = FText::FromString(FString("Could not create source"));
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(FString::Format(TEXT("Dynamixyz source '{0}'"
			" already exists in LiveLink."), { *vAddr })), &TitleMessage);
		UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSourceFactory] - Warning : Source '%s' already exists in LiveLink."),
			*vAddr);
		return FReply::Unhandled();
	}

	OnSourceCreationRequested.ExecuteIfBound(mIPAdress, mPort);

	FSlateApplication::Get().DismissAllMenus();
	return FReply::Handled();
}

FReply SDxyzLiveLinkSourceEditor::OnCancelClicked()
{
	FSlateApplication::Get().DismissAllMenus();
	return FReply::Handled();
}

void SDxyzLiveLinkSourceEditor::OnIPAdressTextChanged(const FText& InText)
{
	mIPAdress = InText.ToString();
}

void SDxyzLiveLinkSourceEditor::OnPortValueChanged(int32 NewValue)
{
	mPort = NewValue;
}

