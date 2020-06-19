/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Views/STableRow.h"
#include "Widgets/Views/STableViewBase.h"
#include "Widgets/Views/SListView.h"

DECLARE_DELEGATE_TwoParams(FOnDxyzSourceCreationRequested, FString, int);

class SDxyzLiveLinkSourceEditor : public SCompoundWidget
{
public:

    SLATE_BEGIN_ARGS(SDxyzLiveLinkSourceEditor) {}
		SLATE_EVENT(FOnDxyzSourceCreationRequested, OnSourceCreationRequested)
    SLATE_END_ARGS()

    ~SDxyzLiveLinkSourceEditor() {};

    virtual void Construct(const FArguments& InArgs);

	void OnIPAdressTextChanged(const FText& InText);
	void OnPortValueChanged(int32 NewValue);

private:
	FReply OnOkClicked();
	FReply OnCancelClicked();

private:
	FString mName;
	FString mIPAdress;
	int mPort;
	FOnDxyzSourceCreationRequested OnSourceCreationRequested;
};

