/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "LiveLinkSourceSettings.h"
#include "DxyzLiveLinkSourceSettings.generated.h"

UCLASS()
class UDxyzLiveLinkSourceSettings : public ULiveLinkSourceSettings
{
    GENERATED_BODY()
public:
    UDxyzLiveLinkSourceSettings();
    virtual ~UDxyzLiveLinkSourceSettings();

    // Used to write the yellow warning, this field will be hidden by customization
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Dxyz Live Link")
        FString WarningText;

    /* We cannot use an edit condition here because the edit condition's modification
    will not be signaled to the source... The signal is emitted to the Settings
    class, but the OnSettingsChanged() method of DxyzLLSource won't be called... */

    /** Use this name as the subject name for this source */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz Live Link")
        bool UseCustomName; 
    
    /** Use this name as the subject name for this source */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz Live Link")
        FString CustomSubjectName;

    /** Show all the connection attempts in the logs */
    UPROPERTY(EditAnywhere, AdvancedDisplay, BlueprintReadWrite, Category = "Dxyz Live Link", DisplayName="Log connection attempts", meta = (NoResetToDefault))
        bool ShowLogs;
};