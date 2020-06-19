/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzGrabberRemoteTrigger.h"
#include "DxyzLiveLinkPlugin.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"
#include "Common/UdpSocketBuilder.h"

UDxyzGrabberRemoteTrigger::UDxyzGrabberRemoteTrigger()
    : mSenderSocket(NULL)
{
    mSckSubSys = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
}

UDxyzGrabberRemoteTrigger::~UDxyzGrabberRemoteTrigger()
{
    if (mSenderSocket)
    {
        mSenderSocket->Close();
        mSckSubSys->DestroySocket(mSenderSocket);
    }
}

bool UDxyzGrabberRemoteTrigger::SendStartToGrabber(FString IpAddress, int Port, FString FileName, FString FilePath, FString TimeCode)
{
    if (!mSenderSocket)
    {
        FIPv4Address ip;
        if (!FIPv4Address::Parse(IpAddress, ip))
        {
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzGrabberRemoteTrigger] - Error : IP and/or port cannot be parsed."));
            return false;
        }

        FIPv4Endpoint grabberAddr(ip, Port);

        mSenderSocket = FUdpSocketBuilder("DxyzLiveLinkSocket")
            .AsReusable()
            .WithBroadcast();

        if (!mSenderSocket)
        {
            UE_LOG(DxyzLog, Log, TEXT("[DxyzGrabberRemoteTrigger] - Error : Could not create UDP socket."));
            return false;
        }

        bool res = mSenderSocket->Connect(*grabberAddr.ToInternetAddr());
        if (!res)
        {
            UE_LOG(DxyzLog, Log, TEXT("[DxyzGrabberRemoteTrigger] - Error : Could not open the communication canal with '%s:%d'."), *IpAddress, Port);
            return false;
        }
    }

    bool vUseTC = !TimeCode.IsEmpty();

    FString vMessage = FString::Format(TEXT("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\" ?>"
        "<CaptureStart>"
        "<Name VALUE=\"{0}\" />"
        "<DatabasePath VALUE=\"{1}\" />"), { *FileName, *FilePath });

    if (vUseTC)
        vMessage += FString::Format(TEXT("<TimeCode VALUE=\"{0}\" />"), { *TimeCode });

    vMessage += "</CaptureStart>";

    int32 vBytesSent = 0;
    bool res = mSenderSocket->Send((uint8*)TCHAR_TO_UTF8(*vMessage), vMessage.Len(), vBytesSent);

    if (!res)
    {
        UE_LOG(DxyzLog, Log, TEXT("[DxyzGrabberRemoteTrigger] - Error : Could not send data to Grabber"));
        return false;
    }

    if (vBytesSent <= 0)
    {
        UE_LOG(DxyzLog, Log, TEXT("[DxyzGrabberRemoteTrigger] - Error : Could not send data to Grabber"));
        return false;
    }
    else
    {
        UE_LOG(DxyzLog, Log, TEXT("[DxyzGrabberRemoteTrigger] - Info : Start trigger was successfully sent to Grabber ('%d' sent bytes)"), vBytesSent);
        return true;
    }

    return false;
}

bool UDxyzGrabberRemoteTrigger::SendStopToGrabber(FString IpAddress, int Port, FString TimeCode)
{
    if (mSenderSocket)
    {
        bool vUseTC = !TimeCode.IsEmpty();

        FString vMessage = FString("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\" ?>"
            "<CaptureStop>");

        if (vUseTC)
            vMessage += FString::Format(TEXT("<TimeCode VALUE=\"{0}\" />"), { *TimeCode });

        vMessage += "</CaptureStop>";

        int32 vBytesSent = 0;
        bool res = mSenderSocket->Send((uint8*)TCHAR_TO_UTF8(*vMessage), vMessage.Len(), vBytesSent);

        if (!res)
        {
            UE_LOG(DxyzLog, Log, TEXT("[DxyzGrabberRemoteTrigger] - Error : Could not send data to Grabber"));
            return false;
        }

        if (vBytesSent <= 0)
        {
            UE_LOG(DxyzLog, Log, TEXT("[DxyzGrabberRemoteTrigger] - Error : Could not send data to Grabber"));
            return false;
        }
        else
        {
            UE_LOG(DxyzLog, Log, TEXT("[DxyzGrabberRemoteTrigger] - Info : Stop trigger was successfully sent to Grabber ('%d' sent bytes)"), vBytesSent);
            return true;
        }
    }

    return true;
}
