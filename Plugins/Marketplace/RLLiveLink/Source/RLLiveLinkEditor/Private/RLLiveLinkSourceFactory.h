// Copyright 2018 The Reallusion Authors. All Rights Reserved.

#pragma once
#include "Runtime/Launch/Resources/Version.h"
#include "LiveLinkSourceFactory.h"
#include "RLLiveLinkSourceFactory.generated.h"

class SRLLiveLinkSourceEditor;
UCLASS()
class URLLiveLinkSourceFactory : public ULiveLinkSourceFactory
{
public:

    GENERATED_BODY()

    virtual FText GetSourceDisplayName() const override;
    virtual FText GetSourceTooltip() const override;

#if ENGINE_MINOR_VERSION > 22
    virtual EMenuType GetMenuType() const override { return EMenuType::SubPanel; }
    virtual TSharedPtr<SWidget> BuildCreationPanel( FOnLiveLinkSourceCreated pOnLiveLinkSourceCreated ) const override;
    TSharedPtr<ILiveLinkSource> CreateSource( const FString& strConnectionString ) const override;

private:
    void OnOkClicked( FString Endpoint, FOnLiveLinkSourceCreated pOnLiveLinkSourceCreated ) const;

#else

    virtual TSharedPtr<SWidget> CreateSourceCreationPanel();
    virtual TSharedPtr<ILiveLinkSource> OnSourceCreationPanelClosed( bool bMakeSource );
    TSharedPtr<SRLLiveLinkSourceEditor> ActiveSourceEditor;

#endif

};