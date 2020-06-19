// Copyright 2019 The Reallusion Authors. All Rights Reserved.

#pragma once
#include "ILiveLinkSource.h"
#include "HAL/ThreadSafeBool.h"
/// for Json
#include "JsonGlobals.h"
#include "Policies/JsonPrintPolicy.h"
#include "Policies/PrettyJsonPrintPolicy.h"
#include "Policies/CondensedJsonPrintPolicy.h"
#include "Serialization/JsonTypes.h"
#include "Dom/JsonValue.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonSerializerMacros.h"
/// Tcp Connection
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Interfaces/IPv4/IPv4SubnetMask.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"
#include "Interfaces/IPv4/IPv4Subnet.h"
#include "Interfaces/Steam/SteamEndpoint.h"
#include "Interfaces/INetworkingModule.h"
#include "Common/TcpSocketBuilder.h"
#include "Common/TcpListener.h"
#include "Runtime/Launch/Resources/Version.h"

class ILiveLinkClient;
class RLLIVELINK_API FRLLiveLinkSource : public ILiveLinkSource, public FRunnable
{
public:
    FRLLiveLinkSource( uint32 uPort );
    virtual ~FRLLiveLinkSource();
    bool InitExpressionNames( const TSharedPtr<FJsonObject>& kJsonRoot, const FString& strFieldName, TArray< FName >& kExpNames );
    bool InitCustomExpressionNames( const TSharedPtr<FJsonObject>& pJsonRoot );
    bool InitVisemeNames( const TSharedPtr<FJsonObject>& pJsonRoot );
    bool InitBoneMap( const TSharedPtr<FJsonObject>& pJsonRoot );
    bool InitReParentMap( const TSharedPtr<FJsonObject>& pJsonRoot );

    // Begin ILiveLinkSource Interface
    virtual void ReceiveClient( ILiveLinkClient* pInClient, FGuid kInSourceGuid ) override;

#if ENGINE_MINOR_VERSION > 22
    virtual bool IsSourceStillValid() const override;
#else
    virtual bool IsSourceStillValid() override;
#endif

    virtual bool RequestSourceShutdown() override;

    virtual FText GetSourceType() const override { return m_kSourceType; };
    virtual FText GetSourceMachineName() const override { return m_kSourceMachineName; }
    virtual FText GetSourceStatus() const override { return m_kSourceStatus; }
    // End ILiveLinkSource Interface

    // Begin FRunnable Interface
    virtual bool Init() override { return true; }
    virtual uint32 Run() override;
    void Start();
    virtual void Stop() override;
    virtual void Exit() override {}
    // End FRunnable Interface

    void HandleReceivedData( TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> spReceivedData );

private:
    void ProcessStickyData( TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> spReceivedData );
    void ProcessAvatarData( const TSharedPtr<FJsonObject>& spDataRoot, const FName& kSubjectName );
    void ProcessPropData( const TSharedPtr<FJsonObject>& spDataRoot );
    void ProcessCameraData( const TSharedPtr<FJsonObject>& spDataRoot );
    void ProcessLightData( const TSharedPtr<FJsonObject>& spDataRoot );

    void ResetEncounteredSubjectsMap();
    void RemoveUnusedSubjects();
    void ClearAllSubjects();

private:
    ILiveLinkClient* m_pClient;

    // Our identifier in LiveLink
    FGuid m_kSourceGuid;

    FText m_kSourceType;
    FText m_kSourceMachineName;
    FText m_kSourceStatus;

    FIPv4Address m_kDeviceIPAddr;
    uint32       m_uDevicePort;

    // Tcp Server
    FSocket* m_pListenerSocket;
    FSocket* m_pConnectionSocket;
    FIPv4Endpoint m_kRemoteAddressForConnection;

    // Subsystem associated to Socket
    ISocketSubsystem* m_pSocketSubsystem;

    // Threadsafe Bool for terminating the main thread loop
    FThreadSafeBool m_bStopping;

    // Thread to run socket operations on
    FRunnableThread* m_pThread;

    // Name of the sockets thread
    FString m_strThreadName;

    // Time to wait between attempted receives
    FTimespan m_kWaitTime;

    // List of subjects we've already encountered
    TMap<FName, bool> m_kEncounteredSubjects;

    // Buffer to receive socket data into
    TArray<uint8> m_kRecvBuffer;

    // frame counter for data
    int m_nFrameCounter;

    // Socket TCP 黏包處理
    int m_nDataSizeInHeader;           ///< 收到資料中的header所記錄封包應有長度
    TArray<uint8> m_kIncompleteData;   ///< 若封包長度比header紀錄的長度還小，代表封包並不完整，需延續到下一筆收到的資料中
    TArray<uint8> m_kCompleteData;     ///< 封包長度等同於header紀錄的長度，才算是完整的資料

    // iClone 的表情名稱對應MorphTarget name
    TArray< FName > m_kExpressionNames;

    // iClone 的Custom表情名稱對應MorphTarget name
    TArray< FName > m_kCustomExpressionNames;
    TArray< FName > m_kHeadExpressionNames;
    TArray< FName > m_kLeftEyeExpressionNames;
    TArray< FName > m_kRightEyeExpressionNames;
    TArray< FName > m_kBonesExpressionNames;

    // iClone 的Viseme名稱對應MorphTarget name
    TArray< FName > m_kVisemeNames;

    // iClone 的Old Viseme名稱對應MorphTarget name ( CC 以前的角色 )
    TArray< FName > m_kOldVisemeNames;

    // IC Motion Bone -> Unreal standard bone
    TMap< FString, FString > m_kBoneMap;

    // 有些Bone 會對應不到要重新導向其他Bone
    TMap< FString, FString > m_kReParentMap;
};