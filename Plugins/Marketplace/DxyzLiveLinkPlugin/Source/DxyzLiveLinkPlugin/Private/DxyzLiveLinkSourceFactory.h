/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "LiveLinkSourceFactory.h"
#include "DxyzLiveLinkSourceEditor.h"
#include "DxyzLiveLinkSourceFactory.generated.h"

UCLASS()
class UDxyzLiveLinkSourceFactory : public ULiveLinkSourceFactory
{
    GENERATED_BODY()

public:
    UDxyzLiveLinkSourceFactory() { };
    virtual ~UDxyzLiveLinkSourceFactory() { };

    virtual FText GetSourceDisplayName() const;
    virtual FText GetSourceTooltip() const;

	virtual EMenuType GetMenuType() const { return EMenuType::SubPanel; }

	virtual TSharedPtr<SWidget> BuildCreationPanel(FOnLiveLinkSourceCreated OnLiveLinkSourceCreated) const;
	virtual TSharedPtr<ILiveLinkSource> CreateSource(const FString& ConnectionString) const;

private:
	void OnSourceCreationRequested(FString iIPAdress, int iPort, FOnLiveLinkSourceCreated OnLiveLinkSourceCreated) const;

};

