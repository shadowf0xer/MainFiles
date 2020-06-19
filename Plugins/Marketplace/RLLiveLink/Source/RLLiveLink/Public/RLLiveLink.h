// Copyright 2019 The Reallusion Authors. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Templates/SharedPointer.h"
#include "Engine/EngineTypes.h"
#include "Widgets/SWidget.h"
/// Tcp Connection
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
#include "HAL/ThreadSafeBool.h"

class FJsonValue;
class FToolBarBuilder;
class FMenuBuilder;
class UBlueprint;
class UTexture2D;
class CSceneTempData
{
    public:
        FString strAssetName;
        FTransform kTransform;
        AActor* pParentActor;
        FString strFolderName;
        bool bPilotTarget;
};
class FRLLiveLinkModule : public IModuleInterface, public FRunnable
{
public:

    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    // Begin FRunnable Interface
    virtual bool Init() override { return true; }
    virtual uint32 Run() override;
    void Start();
    virtual void Stop() override;
    virtual void Exit() override {}
    // End FRunnable Interface

    void HandleReceivedData( TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> spReceivedData );

private:
    void InitSocket();
    FString GetCommandletExePath();

    void ProcessObjectData( const TSharedPtr<FJsonValue>& spJsonValue, bool bPlaceAsset );
    void ProcessCameraData( const TSharedPtr<FJsonValue>& spJsonValue, bool bPlaceAsset );
    void ProcessLightData( const TSharedPtr<FJsonValue>& spJsonValue, bool bPlaceAsset );
    void ProcessRequireFromIC( const TSharedPtr<FJsonValue>& spJsonValue );
    void CheckAndDeleteDuplicatedAsset( const TSharedPtr<FJsonValue>& spJsonValue );

    void CreateEmptyNodeForiClone();
    void CreateCamera();
    void CreateCineCamera();
    void CreateDirectionalLight();
    void CreateSpotLight();
    void CreatePointLight();
    void CreateRectLight();
    void SetUpAllCharacterToBlueprint();
    void SetUpAllCameraToBlueprint();
    void SetUpAllLightToBlueprint();
    void LiveLinkHelpMenu( FString strWebID );

    void AddToolBar( FToolBarBuilder& kBuilder );
    bool BuildBlueprint( const FString& strAssetFolder, const FString& strAssetName, bool bToScene = true );
    TSharedRef<SWidget> FillComboButton( TSharedPtr<class FUICommandList> Commands );

    bool DeleteFolder( const FString& strPath );
    bool DeleteActorInScene( const FString& strPath, const FString& strTargetName );
    void PutAssetBackToSceneAfterReplace( UBlueprint* pBlueprint );

    UBlueprint* CreateLiveLinkBlueprint( const FString& strPath,
                                         const FString& strSource,
                                         const FString& strSubjectName,
                                         bool bCheckSerialNumber );
    UBlueprint* CreateLiveLinkBlueprintFromActor( AActor* pActor,
                                                  const FString& strPath,
                                                  const FString& strSource,
                                                  const FString& strSubjectName,
                                                  const FString& strDataText = "LiveLinkCode" );
    TArray<AActor*> GetSelectedActorByType( const FString& strType );
    void SetDefaultParentActor( AActor* pActor, FAttachmentTransformRules eAttachmentRules );
    bool CheckPluginInstalled( const FString& strPluginName );
    void SelectAndFocusActor( AActor* pActor, bool bFocus, bool bSelect );
    UTexture2D* LoadTextureFromFile( const FString& strPath, const FString& strSaveAssetPath );
    UTextureLightProfile* LoadTextureLightProfileFromFile( const FString& strPath, const FString& strSaveAssetPath );
    AActor* LoadToScene( UBlueprint* pBlueprint );

private:
    FString m_strCurUProjectPath;
    FString m_strCurEngineCmdexePath;
    TSharedPtr< class FUICommandList > m_kPluginCommands;

    FIPv4Address m_kDeviceIPAddr = FIPv4Address::Any;
    uint32 m_uDevicePort = 54322;
    ISocketSubsystem* m_pSocketSubsystem;
    FRunnableThread* m_pThread;
    FString m_strThreadName;
    FTimespan m_kWaitTime;
    FThreadSafeBool m_bStopping = false;
    // Buffer to receive socket data into
    TArray<uint8> m_kRecvBuffer;

    // Tcp Server
    FSocket* m_pListenerSocket;
    FSocket* m_pConnectionSocket;
    FIPv4Endpoint m_kRemoteAddressForConnection;

    // Blueprint file name
    FString m_strCineCameraBlueprint = "";
    FString m_strCharacterBlueprint  = "";
    FString m_strPointLightBlueprint = "";
    FString m_strDirLightBlueprint   = "";
    FString m_strSpotLightBlueprint  = "";
    FString m_strRectLightBlueprint = "";

    // Save Asset Data In Scene
    TArray< CSceneTempData > m_kAssetTempData;
};