// Copyright 2018 The Reallusion Authors. All Rights Reserved.
#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"
#include "Misc/Guid.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Input/Reply.h"
#include "Types/SlateEnums.h"
#include "Runtime/Launch/Resources/Version.h"

class SEditableTextBox;
class SRLLiveLinkSourceFactory : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam( FOnOkClicked, FString );

	SLATE_BEGIN_ARGS( SRLLiveLinkSourceFactory ) {}
	    SLATE_EVENT( FOnOkClicked, OnOkClicked )
	SLATE_END_ARGS()

	void Construct( const FArguments& Args );

private:
	void OnPortChanged( const FText& strNewValue, ETextCommit::Type );

	FReply OnOkClicked();
	FReply OnCancelClicked();
	FString m_strPortNumber = "54321";

	FString GetPort() const
	{
		return m_strPortNumber;
	};

private:
	TWeakPtr<SEditableTextBox> m_spEditabledText;
	FOnOkClicked OkClicked;
};