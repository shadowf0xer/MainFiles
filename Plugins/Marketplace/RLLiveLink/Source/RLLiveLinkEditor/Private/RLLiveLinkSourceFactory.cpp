// Copyright 2018 The Reallusion Authors. All Rights Reserved.
#include "RLLiveLinkSourceFactory.h"
#include "RLLiveLinkSource.h"
#include "ILiveLinkClient.h"
#include "Features/IModularFeatures.h"

#if ENGINE_MINOR_VERSION > 22
#include "SRLLiveLinkSourceFactory.h"
#else
#include "RLLiveLinkSourceEditor.h"
#endif

#define LOCTEXT_NAMESPACE "RLLiveLinkSourceFactory"

FText URLLiveLinkSourceFactory::GetSourceDisplayName() const
{
	return LOCTEXT("SourceDisplayName", "iClone LiveLink");
}

FText URLLiveLinkSourceFactory::GetSourceTooltip() const
{
	return LOCTEXT("SourceTooltip", "Creates a connection to a RL TCP Stream");
}

#if ENGINE_MINOR_VERSION > 22
TSharedPtr<SWidget> URLLiveLinkSourceFactory::BuildCreationPanel( FOnLiveLinkSourceCreated pInOnLiveLinkSourceCreated ) const
{
	return SNew( SRLLiveLinkSourceFactory )
		.OnOkClicked( SRLLiveLinkSourceFactory::FOnOkClicked::CreateUObject( this, &URLLiveLinkSourceFactory::OnOkClicked, pInOnLiveLinkSourceCreated ) );
}

TSharedPtr<ILiveLinkSource> URLLiveLinkSourceFactory::CreateSource( const FString& strConnectionString ) const
{
	int nPort = FCString::Atoi( *strConnectionString );
	TSharedPtr<FRLLiveLinkSource> spNewSource = MakeShared<FRLLiveLinkSource>( nPort );
	return spNewSource;
}

void URLLiveLinkSourceFactory::OnOkClicked( FString strPort, FOnLiveLinkSourceCreated pInOnLiveLinkSourceCreated ) const
{
	if( strPort.IsEmpty() )
	{
		return;
	}
	int nPort = FCString::Atoi( *strPort );
	pInOnLiveLinkSourceCreated.ExecuteIfBound( MakeShared<FRLLiveLinkSource>( nPort ), strPort );
}

#else
TSharedPtr<SWidget> URLLiveLinkSourceFactory::CreateSourceCreationPanel()
{
    if( !ActiveSourceEditor.IsValid() )
    {
        SAssignNew( ActiveSourceEditor, SRLLiveLinkSourceEditor );
    }
    return ActiveSourceEditor;
}

TSharedPtr<ILiveLinkSource> URLLiveLinkSourceFactory::OnSourceCreationPanelClosed( bool bMakeSource )
{
	//Clean up
	TSharedPtr<FRLLiveLinkSource> NewSource = nullptr;

	uint32 uPort = ActiveSourceEditor->GetPort().GetValue();
	if ( bMakeSource && ActiveSourceEditor.IsValid() )
	{
		NewSource = MakeShared<FRLLiveLinkSource>( uPort );
	}

	ActiveSourceEditor = nullptr;
	return NewSource;
}
#endif

#undef LOCTEXT_NAMESPACE