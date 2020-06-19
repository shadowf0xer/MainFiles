// Copyright 2019 The Reallusion Authors. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "RLLiveLinkStyle.h"

class FRLLiveLinkCommands : public TCommands<FRLLiveLinkCommands>
{
public:

    FRLLiveLinkCommands()
        : TCommands<FRLLiveLinkCommands>( TEXT( "RLLiveLink" ),
                                          NSLOCTEXT( "Contexts", "RLLiveLink", "RLLiveLink Plugin" ),
                                          NAME_None,
                                          FRLLiveLinkStyle::GetStyleSetName() )
    {
    }

    // TCommands<> interface
    virtual void RegisterCommands() override;

public:
    TSharedPtr< FUICommandInfo > PluginAction;
};
