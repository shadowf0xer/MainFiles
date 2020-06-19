/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "IPAddress.h"
#include "Sockets.h"
#include "SocketSubsystem.h"

#include "DxyzGrabberRemoteTrigger.generated.h"

UCLASS(Transient, BlueprintType, NotPlaceable)
class UDxyzGrabberRemoteTrigger : public UObject
{
    GENERATED_BODY()

        /** This function is beta, it is used to remotely trigger the "Record" feature in Grabber.
        * @param IpAddress The ip address of the Dynamixyz Grabber to send the signal to (ex: "127.0.0.1")
        * @param Port The port that will be used for the communication (ex: 1512)
        * @param FileName The name of the file to record (ex: "DxyzLiveLink_Video")
        * @param FilePath The path on the target machine where to record the video (ex: "D:/GrabberSession")
        * @param TimeCode When to start the Recording (ex: "11:50:00:00"). Leave it empty if you do not want to use a timecode.
        * @return if the message was succesfully sent or not
        */
        UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
        bool SendStartToGrabber(FString IpAddress = "127.0.0.1", int Port = 1512, FString FileName = "DxyzLiveLink_Video", FString FilePath = ".", FString TimeCode = "");

    /** This function is beta, it is used to remotely trigger the "Record" feature in Grabber.
    * @param IpAddress The ip address of the Dynamixyz Grabber to send the signal to (ex: "127.0.0.1")
    * @param Port The port that will be used for the communication (ex: 1512)
    * @param TimeCode When to start the Recording (ex: "11:50:00:00"). Leave it empty if you do not want to use a timecode.
    * @return if the message was succesfully sent or not
    */
    UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
        bool SendStopToGrabber(FString IpAddress = "127.0.0.1", int Port = 1512, FString TimeCode = "");

public:
    UDxyzGrabberRemoteTrigger();
    ~UDxyzGrabberRemoteTrigger();

private:
    TSharedPtr<FInternetAddr> mRemoteAddr;
    FSocket* mSenderSocket;
    ISocketSubsystem* mSckSubSys;
};
