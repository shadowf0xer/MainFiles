// Copyright 2019 The Reallusion Authors. All Rights Reserved.

#include "RLLiveLink.h"
#include "RLLiveLinkCommands.h"
#include "RLLiveLinkStyle.h"
#include "RLLiveLinkDef.h"

/// for UI
#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

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

/// for Blueprint
#include "Interfaces/IPluginManager.h"
/// Developer/DesktopPlatform
#include "DesktopPlatformModule.h"

/// Editor/BlueprintGraph
#include "K2Node_VariableGet.h"

/// Editor/UnrealEd
#include "Editor.h"
#include "EditorAnimUtils.h"
#include "EdGraphUtilities.h"
#include "FileHelpers.h"
#include "ObjectTools.h"
#include "Factories/TextureFactory.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"

/// Runtime/AssetRegistry
#include "AssetRegistryModule.h"
#include "AssetToolsModule.h"

/// Runtime/Core
#include "HAL/PlatformFilemanager.h"

/// Runtime/Engine
#include "EngineUtils.h"
#include "Animation/AnimBlueprint.h"
#include "Animation/Skeleton.h"
#include "Components/BillboardComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/ObjectLibrary.h"
#include "Engine/SCS_Node.h"
#include "Engine/Selection.h"

#include "LevelEditorViewport.h"
#include "SLevelViewport.h"

/// for core.h
#include "Async/Async.h"
#include "Async/AsyncWork.h"
#include "Misc/FileHelper.h"
#include "Misc/MessageDialog.h"

#include "IImageWrapper.h" 
#include "IImageWrapperModule.h"
#include "Components/RectLightComponent.h"

#define PLUGIN_NAME "LiveLink"
#define INSTALL_PLUGIN_MESSAGE "Please Enable The Live Link plugin \n\rThe Live Link plugin can be enabled by opening the \"Plugins\" Window (Edit / Plugins) \n\rDo a search for \"Live Link\" and check the box to Enable it."
#define LOCTEXT_NAMESPACE "FRLLiveLinkModule"
#define RECV_BUFFER_SIZE 1024 * 1024
#define DEFAULT_PARENT_ACTOR "iClone_Origin"

void FRLLiveLinkModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
    FRLLiveLinkStyle::Initialize();
    FRLLiveLinkStyle::ReloadTextures();

    m_strCurUProjectPath = FPaths::ConvertRelativePathToFull( FPaths::GetProjectFilePath() );
    m_strCurEngineCmdexePath = GetCommandletExePath();
    FRLLiveLinkCommands::Register();

    m_kPluginCommands = MakeShareable( new FUICommandList );

    FLevelEditorModule& kLevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>( "LevelEditor" );

    // init toolbar
    TSharedPtr<FExtender> spToolbarExtender = MakeShareable( new FExtender );
    spToolbarExtender->AddToolBarExtension( "Settings",
                                            EExtensionHook::After,
                                            m_kPluginCommands,
                                            FToolBarExtensionDelegate::CreateRaw( this, &FRLLiveLinkModule::AddToolBar ) );
    kLevelEditorModule.GetToolBarExtensibilityManager()->AddExtender( spToolbarExtender );

    InitSocket();

    // Initialize the blueprint file name according to the unreal version
    m_strCineCameraBlueprint = "LiveLinkCineCameraBlueprint";
    m_strCharacterBlueprint  = "CCLiveLink";
    m_strPointLightBlueprint = "LiveLinkPointLightBlueprint";
    m_strDirLightBlueprint   = "LiveLinkDirectionalLightBlueprint";
    m_strSpotLightBlueprint  = "LiveLinkSpotLightBlueprint";
    m_strRectLightBlueprint  = "LiveLinkRectLightBlueprint";

#if ENGINE_MAJOR_VERSION <= 4 && ENGINE_MINOR_VERSION == 20
    m_strPointLightBlueprint = "LiveLinkPointLightBlueprint_v20";
    m_strDirLightBlueprint   = "LiveLinkDirectionalLightBlueprint_v20";
    m_strSpotLightBlueprint  = "LiveLinkSpotLightBlueprint_v20";
#endif
#if ENGINE_MAJOR_VERSION <= 4 && ENGINE_MINOR_VERSION >= 23
    m_strCineCameraBlueprint = "LiveLinkCineCameraBlueprint_v23";
    m_strCharacterBlueprint  = "CCLiveLink_v23";
    m_strPointLightBlueprint = "LiveLinkPointLightBlueprint_v23";
    m_strDirLightBlueprint   = "LiveLinkDirectionalLightBlueprint_v23";
    m_strSpotLightBlueprint  = "LiveLinkSpotLightBlueprint_v23";
    m_strRectLightBlueprint  = "LiveLinkRectLightBlueprint_v23";
#endif
#if ENGINE_MAJOR_VERSION <= 4 && ENGINE_MINOR_VERSION >= 24
    m_strCineCameraBlueprint = "LiveLinkCineCameraBlueprint_v24";
#endif
#if ENGINE_MAJOR_VERSION <= 4 && ENGINE_MINOR_VERSION >= 25
    m_strCineCameraBlueprint = "LiveLinkCineCameraBlueprint_v25";
#endif
}

void FRLLiveLinkModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
    Stop();
    m_pThread->Kill( true );
    delete m_pThread;
    if ( m_pListenerSocket )
    {
        m_pListenerSocket->Close();
        m_pSocketSubsystem->DestroySocket( m_pListenerSocket );
    }
    if ( m_pConnectionSocket )
    {
        m_pConnectionSocket->Close();
        m_pSocketSubsystem->DestroySocket( m_pConnectionSocket );
    }
    FRLLiveLinkStyle::Shutdown();
    FRLLiveLinkCommands::Unregister();
}

void FRLLiveLinkModule::InitSocket()
{
    // Create Listener Socket
    m_pListenerSocket = FTcpSocketBuilder( TEXT( "ICLLiveLink Listen Socket" ) )
        .AsReusable()
        .BoundToAddress( FIPv4Address( 127, 0, 0, 1 ) )
        .BoundToPort( m_uDevicePort )
        .Listening( 8 )
        .WithReceiveBufferSize( RECV_BUFFER_SIZE );

    m_kRecvBuffer.SetNumUninitialized( RECV_BUFFER_SIZE );
    if ( m_pListenerSocket )
    {
        m_pSocketSubsystem = ISocketSubsystem::Get( PLATFORM_SOCKETSUBSYSTEM );
        Start();
    }
}

FString FRLLiveLinkModule::GetCommandletExePath()
{
    FString strResult;
    FString strCurEngineRootDir = FPaths::ConvertRelativePathToFull( FPaths::EngineDir() );
    FString strExecutableName = FPlatformProcess::ExecutableName( false );
#if PLATFORM_WINDOWS
    // turn UE4editor into UE4editor-cmd
    if ( strExecutableName.EndsWith( ".exe", ESearchCase::IgnoreCase ) && !FPaths::GetBaseFilename( strExecutableName ).EndsWith( "-cmd", ESearchCase::IgnoreCase ) )
    {
        FString strNewExeName = strExecutableName.Left( strExecutableName.Len() - 4 ) + "-Cmd.exe";
        if ( FPaths::FileExists( strNewExeName ) )
        {
            strExecutableName = strNewExeName;
        }
    }
#endif

    strResult += strCurEngineRootDir + "Binaries/Win64/" + strExecutableName;
    return strResult;
}

void FRLLiveLinkModule::AddToolBar( FToolBarBuilder& kBuilder )
{
    kBuilder.AddComboButton( FUIAction(),
                             FOnGetContent::CreateRaw( this, &FRLLiveLinkModule::FillComboButton, m_kPluginCommands ),
                             LOCTEXT( "LiveLink", "iClone Live Link" ),
                             LOCTEXT( "LiveLinkTip", "Execute IC LiveLink action" ),
                             FSlateIcon( FRLLiveLinkStyle::GetStyleSetName(), "RLLiveLink.PluginAction" ) );
}

// FRunnable interface
void FRLLiveLinkModule::Start()
{
    m_strThreadName = "ICLiveLink Service";
    m_strThreadName.AppendInt( FAsyncThreadIndex::GetNext() );
    m_pThread = FRunnableThread::Create( this, *m_strThreadName, 128 * 1024, TPri_Lowest, FPlatformAffinity::GetPoolThreadMask() );
}

void FRLLiveLinkModule::Stop()
{
    m_bStopping = true;
}

uint32 FRLLiveLinkModule::Run()
{
    TSharedRef<FInternetAddr> pRemoteAddr = m_pSocketSubsystem->CreateInternetAddr();
    while ( !m_bStopping && !GIsCookerLoadingPackage && !IsRunningCommandlet() )
    {
        FPlatformProcess::Sleep( 0.03f );
        bool bPending = false;
        if ( m_pListenerSocket->HasPendingConnection( bPending ) && bPending )
        {
            //Already have a Connection? destroy previous
            if( m_pConnectionSocket )
            {
                m_pConnectionSocket->Close();
                m_pSocketSubsystem->DestroySocket( m_pConnectionSocket );
            }
            //New Connection receive!
            m_pConnectionSocket = m_pListenerSocket->Accept( *pRemoteAddr, TEXT( "IC TCP Received Socket Connection" ) );
        }
        if ( m_pConnectionSocket )
        {
            //Global cache of current Remote Address
            m_kRemoteAddressForConnection = FIPv4Endpoint( pRemoteAddr );
            uint32 uSize = 0;
            while ( m_pConnectionSocket->HasPendingData( uSize ) )
            {
                int32 nRead = 0;
                if ( m_pConnectionSocket->Recv( m_kRecvBuffer.GetData(), m_kRecvBuffer.Num(), nRead ) )
                {
                    if ( nRead > 0 )
                    {
                        TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> spReceivedData = MakeShareable( new TArray<uint8>() );
                        spReceivedData->SetNumUninitialized( nRead );
                        memcpy( spReceivedData->GetData(), m_kRecvBuffer.GetData(), nRead );
                        AsyncTask( ENamedThreads::GameThread, [ this, spReceivedData ]()
                        {
                            HandleReceivedData( spReceivedData );
                        } );
                    }
                }
            }
        }
    }
    return 0;
}

void FRLLiveLinkModule::HandleReceivedData( TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> spReceivedData )
{
    FString strJsonString;
    strJsonString.Empty( spReceivedData->Num() );
    for ( uint8& uByte : *spReceivedData.Get() )
    {
        strJsonString += TCHAR( uByte );
    }

    TSharedPtr<FJsonObject> spJsonObject;
    TSharedRef<TJsonReader<>> spReader = TJsonReaderFactory<>::Create( strJsonString );
    if ( FJsonSerializer::Deserialize( spReader, spJsonObject ) )
    {
        FFunctionGraphTask::CreateAndDispatchWhenReady( [spJsonObject, this]()
        {
            bool bPlaceAsset = true;
            if ( spJsonObject->Values.Contains( "isPlaceAssets" ) )
            {
                bPlaceAsset = spJsonObject->Values[ "isPlaceAssets" ].Get()->AsBool();
            }

            if ( spJsonObject->Values.Contains( "BuildAssets" ) )
            {
                auto& spAvatarJsonValue = spJsonObject->Values[ "BuildAssets" ];
                ProcessObjectData( spAvatarJsonValue, bPlaceAsset );
            }

            if ( spJsonObject->Values.Contains( "CreateCamera" ) )
            {
                auto& spCameraJsonValue = spJsonObject->Values[ "CreateCamera" ];
                ProcessCameraData( spCameraJsonValue, bPlaceAsset );
            }

            if ( spJsonObject->Values.Contains( "CreateLight" ) )
            {
                auto& spLightJsonValue = spJsonObject->Values[ "CreateLight" ];
                ProcessLightData( spLightJsonValue, bPlaceAsset );
            }

            if( spJsonObject->Values.Contains( "CreateProp" ) )
            {
                auto& spPropJsonValue = spJsonObject->Values[ "CreateProp" ];
                ProcessObjectData( spPropJsonValue, bPlaceAsset );
            }

            if ( spJsonObject->Values.Contains( "GetRequire" ) )
            {
                auto& spGetRequireJsonValue = spJsonObject->Values[ "GetRequire" ];
                ProcessRequireFromIC( spGetRequireJsonValue );
            }

            if ( spJsonObject->Values.Contains( "CheckAndDeleteDuplicatedAsset" ) )
            {
                auto& spGetRequireJsonValue = spJsonObject->Values[ "CheckAndDeleteDuplicatedAsset" ];
                m_kAssetTempData.Reset();
                CheckAndDeleteDuplicatedAsset( spGetRequireJsonValue );
            }
        }, TStatId(), nullptr, ENamedThreads::GameThread );
    }
}

bool FRLLiveLinkModule::BuildBlueprint( const FString& strAssetFolder, const FString& strAssetName, bool bToScene )
{
    if ( strAssetFolder.IsEmpty() || strAssetName.IsEmpty() )
    {
        return false;
    }
    USkeletalMesh* pSkeletalMesh = Cast< USkeletalMesh >( StaticLoadObject( USkeletalMesh::StaticClass(), NULL, *( strAssetFolder + strAssetName + "." + strAssetName ) ) );
    if ( !pSkeletalMesh )
    {
        return false;
    }
    FAssetRegistryModule::AssetCreated( pSkeletalMesh );
    pSkeletalMesh->MarkPackageDirty();
    USkeleton* pSkeleton = pSkeletalMesh->Skeleton;

    //Save Skeleton Mesh
    UPackage* const pSkeletonAssetPackage = pSkeletalMesh->GetOutermost();
    pSkeletonAssetPackage->SetDirtyFlag( true );
    TArray<UPackage*> kSkeletonPackagesToSave;
    kSkeletonPackagesToSave.Add( pSkeletonAssetPackage );
    FEditorFileUtils::PromptForCheckoutAndSave( kSkeletonPackagesToSave, false, /*bPromptToSave=*/ false );

    FString strRootGamePath = strAssetFolder;
    FString strRootPath = strRootGamePath;
    strRootPath.RemoveFromStart( TEXT( "/Game/" ) );
    strRootPath = FPaths::ProjectContentDir() + strRootPath;

    // 處理Live Link Bone blueprint
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    FString strPluginPath = IPluginManager::Get().FindPlugin( TEXT( "RLLiveLink" ) )->GetBaseDir();
    FString strTargetPath = strRootPath + "/" + m_strCharacterBlueprint + ".uasset";
    FString strSourceFilePath = strPluginPath + "/Content/" + m_strCharacterBlueprint + ".rluasset";
    bool bIsAlreadyExists = kPlatformFile.FileExists( *strTargetPath );
    if ( bIsAlreadyExists )
    {
        return true;
    }

    bool bRet = kPlatformFile.CopyFile( *strTargetPath, *strSourceFilePath );
    if ( !bRet )
    {
        return false;
    }

    FString strAnimBlueprintPath = strRootGamePath + m_strCharacterBlueprint + "." + m_strCharacterBlueprint;
    UAnimBlueprint* pAnimBlueprint = Cast<UAnimBlueprint>( StaticLoadObject( UAnimBlueprint::StaticClass(), NULL, *( strAnimBlueprintPath ), NULL, LOAD_DisableDependencyPreloading | LOAD_DisableCompileOnLoad ) );
    if ( pAnimBlueprint )
    {
        FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pAnimBlueprint );
        FAssetRegistryModule::AssetCreated( pAnimBlueprint );
        pAnimBlueprint->MarkPackageDirty();

        pAnimBlueprint->TargetSkeleton = pSkeleton;
        pAnimBlueprint->SetPreviewMesh( pSkeletalMesh, true );
        auto pMesh = pAnimBlueprint->GetPreviewMesh();
        pAnimBlueprint->Modify( true );

        //Compile
        TWeakObjectPtr<UAnimBlueprint> pWeekAnimBlueprint = pAnimBlueprint;
        TArray<TWeakObjectPtr<UObject>> kAssetsToRetarget;
        kAssetsToRetarget.Add( pWeekAnimBlueprint );
        EditorAnimUtils::RetargetAnimations( pAnimBlueprint->TargetSkeleton, pSkeletalMesh->Skeleton, kAssetsToRetarget, false, NULL, false );

        FKismetEditorUtilities::CompileBlueprint( pAnimBlueprint );
        UPackage* const pAssetPackage = pAnimBlueprint->GetOutermost();
        pAssetPackage->SetDirtyFlag( true );

        //Save
        TArray<UPackage*> kPackagesToSave;
        kPackagesToSave.Add( pAssetPackage );
        FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );
    }

    // 處理Live Link Morph blueprint
    strTargetPath = strRootPath + "CCLiveLink_Blueprint.uasset";
    strSourceFilePath = strPluginPath + "/Content/CCLiveLink_Blueprint.rluasset";
    bRet = kPlatformFile.CopyFile( *strTargetPath, *strSourceFilePath );
    if ( !bRet )
    {
        return false;
    }

    FString strMorphBlueprintPath = strRootGamePath + "CCLiveLink_Blueprint.CCLiveLink_Blueprint";
    UBlueprint* pBlueprint = Cast< UBlueprint >( StaticLoadObject( UBlueprint::StaticClass(), NULL, *( strMorphBlueprintPath ) ) );
    if ( pBlueprint )
    {
        AActor* pLiveLinkActor = Cast<AActor>( pBlueprint->GeneratedClass->ClassDefaultObject );
        if( pLiveLinkActor )
        {
            USkeletalMeshComponent* pSkeletalMeshComponent = pLiveLinkActor->FindComponentByClass<USkeletalMeshComponent>();
            if( pSkeletalMeshComponent )
            {
                pSkeletalMeshComponent->SetAnimInstanceClass( pAnimBlueprint->GeneratedClass );
                pSkeletalMeshComponent->SetSkeletalMesh( pAnimBlueprint->GetPreviewMesh(), true );
            }
        }

        FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pBlueprint );
        FAssetRegistryModule::AssetCreated( pBlueprint );
        pBlueprint->MarkPackageDirty();

        //Get Graph Text
        FString strTextToImport;
        FString strSourceFilePathText = IPluginManager::Get().FindPlugin( TEXT( "RLLiveLink" ) )->GetBaseDir() + "/Content/LiveLinkCode_Character.txt";
        FFileHelper::LoadFileToString( strTextToImport, *strSourceFilePathText );

        //Edit Text for current name
        FString strTextPath = strRootGamePath;
        strTextPath.RemoveFromStart( TEXT( "/Game" ) );
        strTextToImport = strTextToImport.Replace( TEXT( "LiveLinkANName" ), *m_strCharacterBlueprint ); //set anim_blueprint
        strTextToImport = strTextToImport.Replace( TEXT( "LiveLinkBPName" ), TEXT( "CCLiveLink_Blueprint" ) );
        strTextToImport = strTextToImport.Replace( TEXT( "/ObjectPath" ), *strTextPath );
        strTextToImport = strTextToImport.Replace( TEXT( "//" ), TEXT( "/" ) );

        //Set Graph from Text
        UEdGraph* pGraph = pBlueprint->UbergraphPages[ 0 ];
        check( pGraph );
        TSet<UEdGraphNode*> kPastedNodes;
        FEdGraphUtilities::ImportNodesFromText( pGraph, strTextToImport, kPastedNodes );

        //Set SubjectName variable
        for ( FBPVariableDescription& pVar : pBlueprint->NewVariables )
        {
            if ( pVar.VarName == "SubjectName" )
            {
                pVar.DefaultValue = pSkeletalMesh->GetName();
                FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pBlueprint );
            }
        }

        //Compile
        FKismetEditorUtilities::CompileBlueprint( pBlueprint );
        UPackage* const pAssetPackage = pBlueprint->GetOutermost();
        pAssetPackage->SetDirtyFlag( true );

        //Save
        TArray<UPackage*> kPackagesToSave;
        kPackagesToSave.Add( pAssetPackage );
        FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );

        // 場景中New出角色
        if ( bToScene )
        {
            UClass* pClassToSpawn = Cast< UClass >( pBlueprint->GeneratedClass );
            const FVector kLocation = { 0, 0, 0 };
            const FRotator kRotation = FRotator( 0, 0, 0 );
            UWorld* const pWorld = GEditor->GetEditorWorldContext().World();
            if ( pWorld )
            {
                pLiveLinkActor = pWorld->SpawnActor<AActor>( pClassToSpawn, kLocation, kRotation );
                pLiveLinkActor->SetActorLabel( pSkeletalMesh->GetName(), false );
                SetDefaultParentActor( pLiveLinkActor, FAttachmentTransformRules::KeepRelativeTransform );

                //set focus view on actor
                SelectAndFocusActor( pLiveLinkActor,  false, true );
            }
        }
    }
    return true;
}

void FRLLiveLinkModule::ProcessObjectData( const TSharedPtr<FJsonValue>& spJsonValue, bool bPlaceAsset )
{
    if ( spJsonValue )
    {
        auto spBuildArray = spJsonValue->AsArray();
        for ( auto& spAssetJsonValue : spBuildArray )
        {
            if ( auto spAssetObject = spAssetJsonValue->AsObject() )
            {
                auto kAssetMap = spAssetObject->Values;
                FString strAssetName = kAssetMap[ "Name" ]->AsString();
                FString strAssetPath = kAssetMap[ "Path" ]->AsString();
                if ( !strAssetName.IsEmpty() )
                {
                    USkeletalMesh* pSkeletalMesh = Cast< USkeletalMesh >( StaticLoadObject( USkeletalMesh::StaticClass(), NULL, *( strAssetPath + strAssetName + "." + strAssetName ) ) );
                    if ( pSkeletalMesh )
                    {
                        //Check if Asset has Deleted Actor Need Putting Back
                        bool bNeedPutAssetBack = false;
                        for ( auto kTempData : m_kAssetTempData )
                        {
                            if ( kTempData.strFolderName == strAssetName )
                            {
                                bNeedPutAssetBack = true;
                                break;
                            }
                        }

                        bool bPlaceAsssetObject = ( bNeedPutAssetBack ) ? false : bPlaceAsset;
                        BuildBlueprint( strAssetPath, strAssetName, bPlaceAsssetObject );

                        //Reset Avatar In Scene
                        FString strMorphBlueprintPath = strAssetPath + "CCLiveLink_Blueprint.CCLiveLink_Blueprint";
                        UBlueprint* pBlueprint = Cast< UBlueprint >( StaticLoadObject( UBlueprint::StaticClass(), NULL, *( strMorphBlueprintPath ) ) );
                        if ( bNeedPutAssetBack && pBlueprint )
                        {
                            PutAssetBackToSceneAfterReplace( pBlueprint );
                        }
                    }
                }
            }
        }
    }
}

void FRLLiveLinkModule::ProcessCameraData( const TSharedPtr<FJsonValue>& spJsonValue, bool bPlaceAsset )
{
    if ( spJsonValue )
    {
        auto spBuildArray = spJsonValue->AsArray();
        for ( auto& spAssetJsonValue : spBuildArray )
        {
            if ( auto spAssetObject = spAssetJsonValue->AsObject() )
            {
                auto kAssetMap = spAssetObject->Values;
                FString strCameraName = kAssetMap[ "Name" ]->AsString();
                if ( !strCameraName.IsEmpty() )
                {
                    //Check if Asset has Deleted Actor Need Putting Back
                    bool bNeedPutAssetBack = false;
                    for ( auto kTempData : m_kAssetTempData )
                    {
                        if ( kTempData.strFolderName == strCameraName )
                        {
                            bNeedPutAssetBack = true;
                            break;
                        }
                    }

                    bool bPlaceAsssetObject = ( bNeedPutAssetBack ) ? false : bPlaceAsset;
                    UBlueprint* pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Camera", m_strCineCameraBlueprint, strCameraName, false );
                    if( bPlaceAsssetObject )
                    {
                        LoadToScene( pBlueprint );
                    }
                    //Reset Avatar In Scene
                    if ( bNeedPutAssetBack && pBlueprint )
                    {
                        PutAssetBackToSceneAfterReplace( pBlueprint );
                    }
                }
            }
        }
    }
}

void FRLLiveLinkModule::ProcessLightData( const TSharedPtr<FJsonValue>& spJsonValue, bool bPlaceAsset )
{
    if ( spJsonValue )
    {
        auto spBuildArray = spJsonValue->AsArray();
        for ( auto& spAssetJsonValue : spBuildArray )
        {
            if ( auto spAssetObject = spAssetJsonValue->AsObject() )
            {
                auto kAssetMap = spAssetObject->Values;
                FString strLightName = kAssetMap[ "Name" ]->AsString();
                if ( !strLightName.IsEmpty() )
                {
                    //Check if Asset has Deleted Actor Need Putting Back
                    bool bNeedPutAssetBack = false;
                    for ( auto kTempData : m_kAssetTempData )
                    {
                        if ( kTempData.strFolderName == strLightName )
                        {
                            bNeedPutAssetBack = true;
                            break;
                        }
                    }
                    bool bPlaceAsssetObject = ( bNeedPutAssetBack ) ? false : bPlaceAsset;

                    UBlueprint* pBlueprint = nullptr;
                    ELightType eLightType = static_cast< ELightType >( ( int )kAssetMap[ "Type" ]->AsNumber() );
                    switch ( eLightType )
                    {
                        case ELightType::Directional:
                        {
                            pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Light", m_strDirLightBlueprint, strLightName, false );
                            break;
                        }
                        case ELightType::Point:
                        {
                            pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Light", m_strPointLightBlueprint, strLightName, false );
                            break;
                        }
                        case ELightType::Spot:
                        case ELightType::Rect:
                        {
                            if( eLightType == ELightType::Spot )
                            {
                                pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Light", m_strSpotLightBlueprint, strLightName, false );
                            }
                            else
                            {
                                pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Light", m_strRectLightBlueprint, strLightName, false );
                            }
                        }
                    }

                    if ( pBlueprint )
                    {
                        bool bContainsTexture = kAssetMap.Contains( "Rect_Texture_Path" );
                        if ( bContainsTexture )
                        {
                            FString strRectTexturePath = kAssetMap[ "Rect_Texture_Path" ]->AsString();
                            IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
                            if ( kPlatformFile.FileExists( *strRectTexturePath ) )
                            {
#if ENGINE_MAJOR_VERSION <= 4 && ENGINE_MINOR_VERSION >= 21
                                FString strSaveTo = TEXT( "/Game/RLContent/Light/" + strLightName + "_Rect_Src_Texture" );
                                UTexture2D* pRectTexture = LoadTextureFromFile( strRectTexturePath, strSaveTo );
                                if ( pRectTexture )
                                {
                                    // Set Blueprint Texture
                                    AActor* pLightActor = Cast<AActor>( pBlueprint->GeneratedClass->ClassDefaultObject );
                                    if ( pLightActor )
                                    {
                                        URectLightComponent* pRectLightComponent = pLightActor->FindComponentByClass<URectLightComponent>();
                                        if ( pRectLightComponent )
                                        {
                                            pRectLightComponent->SetSourceTexture( pRectTexture );
                                            // Save Blueprint
                                            FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pBlueprint );
                                            FKismetEditorUtilities::CompileBlueprint( pBlueprint );
                                            UPackage* const pAssetPackage = pBlueprint->GetOutermost();
                                            pAssetPackage->SetDirtyFlag( true );
                                            TArray<UPackage*> kPackagesToSave;
                                            kPackagesToSave.Add( pAssetPackage );
                                            FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );
                                        }
                                    }
                                }
#endif
                                bool bDeleted = kPlatformFile.DeleteFile( *strRectTexturePath );
                            }
                        }
                        bool bContainsIes = kAssetMap.Contains( "Ies_File_Path" );
                        if ( bContainsIes )
                        {
                            FString strIesFilePath = kAssetMap[ "Ies_File_Path" ]->AsString();
                            IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
                            if ( kPlatformFile.FileExists( *strIesFilePath ) )
                            {
                                FString strSaveTo = TEXT( "/Game/RLContent/Light/" + strLightName + "_Ies" );
                                UTextureLightProfile* pIes = LoadTextureLightProfileFromFile( strIesFilePath, strSaveTo );
                                if ( pIes )
                                {
                                    // Set Blueprint Texture
                                    AActor* pLightActor = Cast<AActor>( pBlueprint->GeneratedClass->ClassDefaultObject );
                                    if ( pLightActor )
                                    {
                                        ULightComponent* pLightComponent = pLightActor->FindComponentByClass<ULightComponent>();
                                        if ( pLightComponent )
                                        {
                                            pLightComponent->SetIESTexture( pIes );
                                            // Save Blueprint
                                            FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pBlueprint );
                                            FKismetEditorUtilities::CompileBlueprint( pBlueprint );
                                            UPackage* const pAssetPackage = pBlueprint->GetOutermost();
                                            pAssetPackage->SetDirtyFlag( true );
                                            TArray<UPackage*> kPackagesToSave;
                                            kPackagesToSave.Add( pAssetPackage );
                                            FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );
                                        }
                                    }
                                }
                                bool bDeleted = kPlatformFile.DeleteFile( *strIesFilePath );
                            }
                        }
                    }
                    if( bPlaceAsssetObject )
                    {
                        LoadToScene( pBlueprint );
                    }
                    //Reset Avatar In Scene
                    if ( bNeedPutAssetBack && pBlueprint )
                    {
                        PutAssetBackToSceneAfterReplace( pBlueprint );
                    }
                }
            }
        }
    }
}

void FRLLiveLinkModule::ProcessRequireFromIC( const TSharedPtr<FJsonValue>& spJsonValue )
{
    if ( spJsonValue )
    {
        TSharedPtr<FJsonObject> spReturnJson = MakeShareable( new FJsonObject );
        auto spGetArray = spJsonValue->AsArray();
        for ( auto& spAssetJsonValue : spGetArray )
        {
            FString strCmd = spAssetJsonValue->AsString();
            if ( strCmd == "GetCmdExePath" )
            {
                spReturnJson->SetStringField( "GetCmdExePath", m_strCurEngineCmdexePath );
            }
            else if ( strCmd == "GetProjectPath" )
            {
                spReturnJson->SetStringField( "GetProjectPath", m_strCurUProjectPath );
            }
            else if ( strCmd == "CheckCCPlugin" )
            {
                bool bCheckCCPlugin;
                auto kPlugin = IPluginManager::Get().FindPlugin( TEXT( "RLPlugin" ) );
                bCheckCCPlugin = ( !kPlugin ) ? false :
                                 ( kPlugin->IsEnabled() ) ? true : false;
                spReturnJson->SetBoolField( "CheckCCPlugin", bCheckCCPlugin );
            }
        }
        FString strJson;
        if ( spReturnJson.IsValid() && spReturnJson->Values.Num() > 0 )
        {
            TSharedRef<TJsonWriter<TCHAR>> spJsonWriter = TJsonWriterFactory<>::Create( &strJson );
            FJsonSerializer::Serialize( spReturnJson.ToSharedRef(), spJsonWriter );
        }
        TCHAR* pSerializedChar = strJson.GetCharArray().GetData();

        FTCHARToUTF8 kConverted( pSerializedChar ); //string to utf8
        int32 nSent = 0;
        if ( m_pConnectionSocket )
        {
            m_pConnectionSocket->Send( ( uint8* )kConverted.Get(), kConverted.Length(), nSent );
        }
    }
}

void FRLLiveLinkModule::CheckAndDeleteDuplicatedAsset( const TSharedPtr<FJsonValue>& spJsonValue )
{
    if ( spJsonValue )
    {
        auto spGetArray = spJsonValue->AsArray();
        bool bResult = true;
        for ( auto& spExportList : spGetArray )
        {
            auto kExportData = spExportList.Get()->AsObject()->Values;
            FString strExportName = kExportData[ "Name" ]->AsString();
            FString strExportType = kExportData[ "Type" ]->AsString();

            if ( strExportType == "Avatar" || strExportType == "Prop"  )
            {
                //DeleteFolder
                bResult = DeleteFolder( "/Game/RLContent/" + strExportName );
            }
            else if ( strExportType == "Camera" )
            {
                bResult = DeleteActorInScene( "/RLContent/Camera", strExportName );
            }
            else if ( strExportType == "Light" )
            {
                bResult = DeleteActorInScene( "/RLContent/Light", strExportName );
            }
            else
            {
                bResult = false;
            }
        }

        //SendMessageBack
        TSharedPtr<FJsonObject> spReturnJson = MakeShareable( new FJsonObject );
        spReturnJson->SetBoolField( "CheckAndDeleteDuplicatedAssetDone", bResult );

        FString strJson;
        if ( spReturnJson.IsValid() && spReturnJson->Values.Num() > 0 )
        {
            TSharedRef<TJsonWriter<TCHAR>> spJsonWriter = TJsonWriterFactory<>::Create( &strJson );
            FJsonSerializer::Serialize( spReturnJson.ToSharedRef(), spJsonWriter );
        }
        TCHAR* pSerializedChar = strJson.GetCharArray().GetData();

        FTCHARToUTF8 kConverted( pSerializedChar ); //string to utf8
        int32 nSent = 0;
        if ( m_pConnectionSocket )
        {
            m_pConnectionSocket->Send( ( uint8* )kConverted.Get(), kConverted.Length(), nSent );
        }
    }
}

//Add SubMenu-----------------------------------------------------------------------------------------------
TSharedRef<SWidget> FRLLiveLinkModule::FillComboButton( TSharedPtr<class FUICommandList> spCommands )
{
    FMenuBuilder kMenuBuilder( true, spCommands );

    //iClone block
    kMenuBuilder.BeginSection( "iCloneKeys", LOCTEXT( "KeysMenuiClone", "Positioning" ) );
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "iCloneNode", "Create Live Link Origin" ),
        LOCTEXT( "iCloneNodeTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::CreateEmptyNodeForiClone ) )
    );
    kMenuBuilder.EndSection();

    //Character block
    kMenuBuilder.BeginSection( "CharacterKeys", LOCTEXT( "KeysMenuCharacter", "Character" ) );
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "Character", "Apply Blueprint to Selected Character(s)" ),
        LOCTEXT( "CharacterTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::SetUpAllCharacterToBlueprint ) )
    );
    kMenuBuilder.EndSection();

    //Prop block
    /*kMenuBuilder.BeginSection( "PropKeys", LOCTEXT( "KeysMenuProp", "Prop" ) );
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "Prop", "Apply Blueprint to Selected Prop(s)" ),
        LOCTEXT( "PropTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::SetUpAllCharacterToBlueprint ) )
    );
    kMenuBuilder.EndSection();*/

    //Camera menu block
    kMenuBuilder.BeginSection( "CameraKeys", LOCTEXT( "KeysMenuCamera", "Camera" ) );
    /*kMenuBuilder.AddMenuEntry(
        LOCTEXT( "Camera", "Create Camera" ),
        LOCTEXT( "CameraTip", "Create Camera Blueprint To Scene" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::CreateCamera ) )
    );*/
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "CineCamera", "Create Cine Camera" ),
        LOCTEXT( "CineCameraTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::CreateCineCamera ) )
    );
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "CameraAdd", "Apply Blueprint to Selected Camera(s)" ),
        LOCTEXT( "CameraAddTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::SetUpAllCameraToBlueprint ) )
    );
    kMenuBuilder.EndSection();

    //Light menu block
    kMenuBuilder.BeginSection( "LightKeys", LOCTEXT( "KeysMenuLight", "Light" ) );
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "SpotLight", "Create Spotlight" ),
        LOCTEXT( "SpotLightTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::CreateSpotLight ) )
    );
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "PointLight", "Create Point Light" ),
        LOCTEXT( "PointLightTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::CreatePointLight ) )
    );
    /*kMenuBuilder.AddMenuEntry(
        LOCTEXT( "RectLight", "Create Rect Light" ),
        LOCTEXT( "RectLightTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::CreateRectLight ) )
    );*/
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "DirectionalLight", "Create Directional Light" ),
        LOCTEXT( "DirectionalLightTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::CreateDirectionalLight ) )
    );
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "SpotLightAdd", "Apply Blueprint to Selected Light(s)" ),
        LOCTEXT( "SpotLightAddTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::SetUpAllLightToBlueprint ) )
    );
    kMenuBuilder.EndSection();

    //Help menu block
    kMenuBuilder.BeginSection( "HelpKeys", LOCTEXT( "KeysMenuHelp", "Learn" ) );
    FString strWebID00 = "ICLIVELINK_005";
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "Help0Add", "What is iClone Live Link?" ),
        LOCTEXT( "Help0AddTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::LiveLinkHelpMenu, strWebID00 ) )
    );
    FString strWebID01 = "ICLIVELINK_006";
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "Help1Add", "Download a full-version evaluation of the tools" ),
        LOCTEXT( "Help1AddTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::LiveLinkHelpMenu, strWebID01 ) )
    );
    FString strWebID02 = "ICLIVELINK_002";
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "HelpOnlineAdd", "Online Manual" ),
        LOCTEXT( "HelpOnlineAddTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::LiveLinkHelpMenu, strWebID02 ) )
    );
    FString strWebID03 = "ICLIVELINK_003";
    kMenuBuilder.AddMenuEntry(
        LOCTEXT( "HelpVideoAdd", "Video Tutorials" ),
        LOCTEXT( "HelpVideoAddTip", "" ),
        FSlateIcon(),
        FUIAction( FExecuteAction::CreateRaw( this, &FRLLiveLinkModule::LiveLinkHelpMenu, strWebID03 ) )
    );
    kMenuBuilder.EndSection();

    return kMenuBuilder.MakeWidget();
}

//Menu Button Event----------------------------------------------------------------------------------
void FRLLiveLinkModule::CreateEmptyNodeForiClone()
{
    UWorld* const pWorld = GEditor->GetEditorWorldContext().World();
    for ( TActorIterator<AActor> pActorItr( pWorld ); pActorItr; ++pActorItr )
    {
        //Check already owned
        if ( pActorItr->GetActorLabel().ToLower() == DEFAULT_PARENT_ACTOR && pActorItr->GetClass() == AActor::StaticClass() )
        {
            return;
        }
    }
    AActor* pLiveLinkActor = pWorld->SpawnActor( AActor::StaticClass() );
    if ( !pLiveLinkActor )
    {
        return;
    }
    pLiveLinkActor->SetActorLabel( DEFAULT_PARENT_ACTOR );

    //Create LiveLink Icon Uasset
    FString strIconName = TEXT( DEFAULT_PARENT_ACTOR );
    UBillboardComponent* pBillboardComponent = NewObject<UBillboardComponent>( pLiveLinkActor, TEXT( DEFAULT_PARENT_ACTOR ) );
    if ( pBillboardComponent )
    {
        pBillboardComponent->SetFlags( RF_Transactional );
        UTexture2D* pSprite = LoadObject<UTexture2D>( nullptr, *( "/Engine/EditorResources/" + strIconName ) );
        if ( !pSprite )
        {
            FString strPackageName = TEXT( "/Engine/EditorResources/"+ strIconName );
            FString strFilePath = IPluginManager::Get().FindPlugin( TEXT( "RLLiveLink" ) )->GetBaseDir() / TEXT( "Resources/iclivelink.png" );
            TArray<uint8> kRawData;
            if ( FFileHelper::LoadFileToArray( kRawData, *strFilePath ) )
            {
                UPackage* pAssetPackage = CreatePackage( NULL, *strPackageName );
                if ( pAssetPackage )
                {
                    UTextureFactory* kTexFactory = NewObject<UTextureFactory>();
                    EObjectFlags kFlags = RF_Public | RF_Standalone;

                    kRawData.Add( 0 );
                    const uint8* Ptr = &kRawData[ 0 ];
                    UObject* kTexAsset = kTexFactory->FactoryCreateBinary( UTexture::StaticClass(), pAssetPackage, FName( DEFAULT_PARENT_ACTOR ), kFlags, NULL, *FPaths::GetExtension( strFilePath ), Ptr, Ptr + kRawData.Num() - 1, GWarn );
                    if ( kTexAsset )
                    {
                        UTexture* kTexture = Cast<UTexture>( kTexAsset );
                        kTexAsset->MarkPackageDirty();
                        ULevel::LevelDirtiedEvent.Broadcast();
                        kTexAsset->PostEditChange();
                        FAssetRegistryModule::AssetCreated( kTexAsset );
                        pAssetPackage->SetDirtyFlag( true );

                        //Save
                        TArray<UPackage*> kPackagesToSave;
                        kPackagesToSave.Add( pAssetPackage );
                        FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );

                        //Reset sprite
                        pSprite = LoadObject<UTexture2D>( nullptr, *( "/Engine/EditorResources/" + strIconName ) );
                    }
                }
            }
        }

        //Set Livelink Icon
        if ( pSprite )
        {
            pBillboardComponent->SetSprite( pSprite );
            pLiveLinkActor->SetActorHiddenInGame( true );
            pLiveLinkActor->SetRootComponent( pBillboardComponent );
            pLiveLinkActor->AddInstanceComponent( pBillboardComponent );
            pLiveLinkActor->RegisterAllComponents();
        }
    }

    //set focus view on actor
    SelectAndFocusActor( pLiveLinkActor, false, true );
}

void FRLLiveLinkModule::LiveLinkHelpMenu( FString strWebID )
{
    FPlatformProcess::LaunchURL( *( "https://www.reallusion.com/linkcount/linkcount.aspx?lid=" + strWebID ), NULL, NULL );
}

void FRLLiveLinkModule::CreateCamera()
{
    auto pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Camera", "LiveLinkCameraBlueprint", "Camera", true );
    if( pBlueprint )
    {
        LoadToScene( pBlueprint );
    }
}

void FRLLiveLinkModule::CreateCineCamera()
{
    auto pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Camera", m_strCineCameraBlueprint, "Camera", true );
    if( pBlueprint )
    {
        LoadToScene( pBlueprint );
    }
}

void FRLLiveLinkModule::CreateDirectionalLight()
{
    auto pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Light", m_strDirLightBlueprint, "Directional_Light", true );
    if( pBlueprint )
    {
        LoadToScene( pBlueprint );
    }
}

void FRLLiveLinkModule::CreateSpotLight()
{
    auto pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Light", m_strSpotLightBlueprint, "Spotlight", true );
    if( pBlueprint )
    {
        LoadToScene( pBlueprint );
    }
}

void FRLLiveLinkModule::CreatePointLight()
{
    auto pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Light", m_strPointLightBlueprint, "Point_Light", true );
    if( pBlueprint )
    {
        LoadToScene( pBlueprint );
    }
}

void FRLLiveLinkModule::CreateRectLight()
{
    auto pBlueprint = CreateLiveLinkBlueprint( "/RLContent/Light", m_strRectLightBlueprint, "Rectlight", true );
    if( pBlueprint )
    {
        LoadToScene( pBlueprint );
    }
}

void FRLLiveLinkModule::SetUpAllCameraToBlueprint()
{
    if ( !CheckPluginInstalled( PLUGIN_NAME ) )
    {
        FMessageDialog::Open( EAppMsgType::Ok, FText::FromString( INSTALL_PLUGIN_MESSAGE ) );
        return;
    }

    TArray<AActor*> kCineCameraActorList = GetSelectedActorByType( "CineCameraActor" );
    if ( kCineCameraActorList.Num() <= 0 )
    {
        FText strMsg = FText::FromString( "Make sure to select the correct object type\n\r- Please select a camera" );
        FMessageDialog::Open( EAppMsgType::Ok, strMsg );
    }
    else
    {
        for ( AActor* pActor : kCineCameraActorList )
        {
            CreateLiveLinkBlueprintFromActor( pActor, "/RLContent/Camera", m_strCineCameraBlueprint, "Camera" );
        }
    }
}

void FRLLiveLinkModule::SetUpAllLightToBlueprint()
{
    if ( !CheckPluginInstalled( PLUGIN_NAME ) )
    {
        FMessageDialog::Open( EAppMsgType::Ok, FText::FromString( INSTALL_PLUGIN_MESSAGE ) );
        return;
    }
    TArray<AActor*> kDirectionalLightActorList = GetSelectedActorByType( "DirectionalLight" );
    TArray<AActor*> kPointLightActorList = GetSelectedActorByType( "PointLight" );
    TArray<AActor*> kSpotLightActorList = GetSelectedActorByType( "SpotLight" );
    TArray<AActor*> kRectLightActorList = GetSelectedActorByType( "RectLight" );
    if ( kDirectionalLightActorList.Num() <= 0 
         && kPointLightActorList.Num() <= 0 
         && kSpotLightActorList.Num() <= 0
         && kRectLightActorList.Num() <= 0 )
    {
        FText strMsg = FText::FromString( "Make sure to select the correct object type\n\r- Please select a light" );
        FMessageDialog::Open( EAppMsgType::Ok, strMsg );
    }
    else
    {
        for ( AActor* pActor : kDirectionalLightActorList )
        {
            CreateLiveLinkBlueprintFromActor( pActor, "/RLContent/Light", m_strDirLightBlueprint, "Directional_Light" );
        }
        for ( AActor* pActor : kPointLightActorList )
        {
            CreateLiveLinkBlueprintFromActor( pActor, "/RLContent/Light", m_strPointLightBlueprint, "Point_Light" );
        }
        for ( AActor* pActor : kSpotLightActorList )
        {
            CreateLiveLinkBlueprintFromActor( pActor, "/RLContent/Light", m_strSpotLightBlueprint, "Spotlight" );
        }
        for( AActor* pActor : kRectLightActorList )
        {
            CreateLiveLinkBlueprintFromActor( pActor, "/RLContent/Light", m_strRectLightBlueprint, "Rectlight" );
        }
    }
}

void FRLLiveLinkModule::SetUpAllCharacterToBlueprint()
{
    if ( !CheckPluginInstalled( PLUGIN_NAME ) )
    {
        FMessageDialog::Open( EAppMsgType::Ok, FText::FromString( INSTALL_PLUGIN_MESSAGE ) );
        return;
    }

    TArray<AActor*> kSkeletalActorList = GetSelectedActorByType( "SkeletalMeshActor" );

    if ( kSkeletalActorList.Num() <= 0 )
    {
        FText strMsg = FText::FromString( "Make sure to select the correct object type\n\r- Please select a 'Skeletal Mesh'" );
        FMessageDialog::Open( EAppMsgType::Ok, strMsg );
    }
    else
    {
        for ( AActor* pActor : kSkeletalActorList )
        {
            //Save Actor parent First
            AActor* pParentActor = pActor->GetAttachParentActor();

            //Check skeleton invalid
            USkeletalMeshComponent* pSkeletalMeshComponent = pActor->FindComponentByClass<USkeletalMeshComponent>();
            if ( !pSkeletalMeshComponent )
            {
                return;
            }
            USkeletalMesh* pSkeletalMesh = pSkeletalMeshComponent->SkeletalMesh;
            if ( !pSkeletalMesh )
            {
                return;
            }
            if ( !pSkeletalMesh->Skeleton ) //Error Get Skeleton
            {
                FText strMsg = FText::FromString( "Error To Get Skeleton \n\rPlease make sure the mesh has vaild skeleton" );
                FMessageDialog::Open( EAppMsgType::Ok, strMsg );
                return;
            }

            //Get Character Assset Path
            FString strActorPath;
            TArray<FString> kSpiltWord;
            pActor->GetDetailedInfo().ParseIntoArray( kSpiltWord, TEXT( "/" ), true );
            for ( int i = 0; i < kSpiltWord.Num() - 1; i++ )
            {
                strActorPath += "/" + kSpiltWord[ i ];
            }
            strActorPath = strActorPath.Replace( TEXT( "/Game" ), TEXT( "" ) );

            //Make Character Anim Blueprint
            IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
            FString strPluginPath = IPluginManager::Get().FindPlugin( TEXT( "RLLiveLink" ) )->GetBaseDir();
            FString strSourceFilePath = strPluginPath + "/Content/" + m_strCharacterBlueprint + ".rluasset";
            FString strTargetPath = FPaths::ProjectContentDir() + strActorPath + "/" + m_strCharacterBlueprint + ".uasset";
            bool bRet = kPlatformFile.CopyFile( *strTargetPath, *strSourceFilePath );
            if ( !bRet )
            {
                return;
            }

            //Set Anim Blueprint Data
            FString strAnimBlueprintPath = "/Game" + strActorPath + "/" + m_strCharacterBlueprint + "." + m_strCharacterBlueprint;
            UAnimBlueprint* pAnimBlueprint = Cast<UAnimBlueprint>( StaticLoadObject( UAnimBlueprint::StaticClass(), NULL, *( strAnimBlueprintPath ), NULL, LOAD_DisableDependencyPreloading | LOAD_DisableCompileOnLoad ) );
            if ( !pAnimBlueprint )
            {
                return;
            }

            FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pAnimBlueprint );
            FAssetRegistryModule::AssetCreated( pAnimBlueprint );
            pAnimBlueprint->MarkPackageDirty();

            //Get Skeleton
            pAnimBlueprint->TargetSkeleton = pSkeletalMesh->Skeleton;
            pAnimBlueprint->SetPreviewMesh( pSkeletalMesh, true );
            auto pMesh = pAnimBlueprint->GetPreviewMesh();
            pAnimBlueprint->Modify( true );

            //Compile
            TWeakObjectPtr<UAnimBlueprint> pWeekAnimBlueprint = pAnimBlueprint;
            TArray<TWeakObjectPtr<UObject>> kAssetsToRetarget;
            kAssetsToRetarget.Add( pWeekAnimBlueprint );
            EditorAnimUtils::RetargetAnimations( pAnimBlueprint->TargetSkeleton, pSkeletalMesh->Skeleton, kAssetsToRetarget, false, NULL, false );

            FKismetEditorUtilities::CompileBlueprint( pAnimBlueprint );
            UPackage* const pAssetPackage = pAnimBlueprint->GetOutermost();
            pAssetPackage->SetDirtyFlag( true );

            //Save Anim Blueprint
            TArray<UPackage*> kPackagesToSave;
            kPackagesToSave.Add( pAssetPackage );
            FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );

            //Set Anim Blueprint to Blueprint
            pSkeletalMeshComponent->SetAnimInstanceClass( pAnimBlueprint->GeneratedClass );
            UBlueprint* pCharacterBlueprint = CreateLiveLinkBlueprintFromActor( pActor,
                                                                                strActorPath,
                                                                                "CCLiveLink_Blueprint",
                                                                                pActor->GetActorLabel(),
                                                                                "LiveLinkCode_Character" );
            if ( !pCharacterBlueprint )
            {
                return;
            }

            //Save Blueprint
            UPackage* const pBPAssetPackage = pCharacterBlueprint->GetOutermost();
            pBPAssetPackage->SetDirtyFlag( true );
            TArray<UPackage*> kBPPackagesToSave;
            kBPPackagesToSave.Add( pBPAssetPackage );
            FEditorFileUtils::PromptForCheckoutAndSave( kBPPackagesToSave, false, /*bPromptToSave=*/ false );

            //Reparent Actor
            if ( pParentActor )
            {
                UWorld* const pWorld = GEditor->GetEditorWorldContext().World();
                for ( TActorIterator<AActor> kActorItr( pWorld, pCharacterBlueprint->GeneratedClass.Get() ); kActorItr; ++kActorItr )
                {
                    kActorItr->AttachToActor( pParentActor, FAttachmentTransformRules::KeepWorldTransform );
                    //Set Default parent
                    SetDefaultParentActor( *kActorItr, FAttachmentTransformRules::KeepWorldTransform );
                }
            }
        }
    }
}

//Get All Selected Actor
TArray<AActor*> FRLLiveLinkModule::GetSelectedActorByType( const FString& strType )
{
    TArray<AActor*> kActors;
    for ( FSelectionIterator kIter( *GEditor->GetSelectedActors() ); kIter; ++kIter )
    {
        if ( *kIter->GetClass()->GetName() == strType )
        {
            AActor* pSelectedActor = Cast<AActor>( *kIter );
            if ( pSelectedActor )
            {
                kActors.Add( pSelectedActor );
            }
        }
    }
    return kActors;
}

//Add LiveLink Blueprint-----------------------------------------------------------------------------
UBlueprint* FRLLiveLinkModule::CreateLiveLinkBlueprintFromActor( AActor* pActor,
                                                                 const FString& strPath,
                                                                 const FString& strSource,
                                                                 const FString& strSubjectName,
                                                                 const FString& strDataText )
{
    if ( !pActor )
    {
        return nullptr;
    }
    if ( !CheckPluginInstalled( PLUGIN_NAME ) )
    {
        FMessageDialog::Open( EAppMsgType::Ok, FText::FromString( INSTALL_PLUGIN_MESSAGE ) );
        return nullptr;
    }

    //Check Duplicate and add SerialNumber
    FString strOrginActorTargetName = pActor->GetFName().ToString();
    FString strTargetName = strOrginActorTargetName;
    FString strNamePath = FPaths::ProjectContentDir() + strPath + "/" + strTargetName + ".uasset";
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if ( kPlatformFile.FileExists( *strNamePath ) )
    {
        int nAssetsIndex = 0;
        while ( true )
        {
            strTargetName = strOrginActorTargetName + "_" + FString::FromInt( nAssetsIndex );
            strNamePath = FPaths::ProjectContentDir() + strPath + "/" + strTargetName + ".uasset";
            if ( !kPlatformFile.FileExists( *strNamePath ) )
            {
                break;
            }
            ++nAssetsIndex;
        }
    }

    //Get Default LiveLink
    UBlueprint* pBlueprintDefault = CreateLiveLinkBlueprint( strPath, strSource, strSubjectName, true );
    if ( !pBlueprintDefault )
    {
        return nullptr;
    }

    //Save Actor parent and Name First
    AActor* pParentActor = pActor->GetAttachParentActor();
    const FString strOriginName = pActor->GetActorLabel();

    //New Blueprint fome actor
    UBlueprint* pBlueprintActor = FKismetEditorUtilities::CreateBlueprintFromActor( "/Game" + strPath + "/" + strTargetName, pActor, true );
    if ( !pBlueprintActor )
    {
        return nullptr;
    }
    FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pBlueprintActor );
    pBlueprintActor->MarkPackageDirty();

    //Get Default LiveLink and Set
    UBlueprintGeneratedClass* pBPGC = Cast<UBlueprintGeneratedClass>( pBlueprintDefault->GeneratedClass.Get() );
    if ( pBPGC && pBPGC->SimpleConstructionScript )
    {
        for ( USCS_Node* pNode : pBPGC->SimpleConstructionScript->GetAllNodes() )
        {
            if ( pNode->GetVariableName().ToString() == "LiveLink" )
            {
                //Clone Component and setup
                UBlueprintGeneratedClass* pBPGCTarget = Cast<UBlueprintGeneratedClass>( pBlueprintActor->GeneratedClass.Get() );
                USimpleConstructionScript* pSCS = pBPGCTarget->SimpleConstructionScript;
                USCS_Node* pNewNode = pSCS->CreateNode( pNode->ComponentClass );
                pBPGCTarget->SimpleConstructionScript->AddNode( pNewNode );
                break;
            }
        }
    }

    //Get SubjectName variable and Set
    for ( FBPVariableDescription& pVar : pBlueprintDefault->NewVariables )
    {
        if ( pVar.VarName == "SubjectName" )
        {
            pVar.DefaultValue = strSubjectName;
            FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pBlueprintDefault );

            //Add variables
            pBlueprintActor->NewVariables.Insert( pVar, 0 );
        }
    }

    //Get Default Morph and Set
    UEdGraph* pUCSGraph = nullptr;
    for ( TArray<UEdGraph*>::TIterator pGraphIt( pBlueprintDefault->MacroGraphs ); pGraphIt; ++pGraphIt )
    {
        UEdGraph* pGraph = *pGraphIt;
        if ( pGraph->GetFName().ToString() == "RLLiveLink" )
        {
            pUCSGraph = pGraph;
        }
    }
    UEdGraph* pClonedGraph = FEdGraphUtilities::CloneGraph( pUCSGraph, pBlueprintActor );
    pClonedGraph->Rename( TEXT( "RLLiveLink" ) );
    pBlueprintActor->MacroGraphs.Add( pClonedGraph );

    //Get Graph Text
    FString strTextToImport;
    FString strSourceFilePathText = IPluginManager::Get().FindPlugin( TEXT( "RLLiveLink" ) )->GetBaseDir() + "/Content/" + strDataText + ".txt";
    FFileHelper::LoadFileToString( strTextToImport, *strSourceFilePathText );

    //Edit Text for current name
    strTextToImport = strTextToImport.Replace( TEXT( "LiveLinkANName" ), *m_strCharacterBlueprint ); //set anim_blueprint
    strTextToImport = strTextToImport.Replace( TEXT( "LiveLinkBPName" ), *strTargetName );
    strTextToImport = strTextToImport.Replace( TEXT( "/ObjectPath" ), *strPath );

    //Set Graph from Text
    UEdGraph* pGraph = pBlueprintActor->UbergraphPages[ 0 ];
    check( pGraph );
    TSet<UEdGraphNode*> kPastedNodes;
    FEdGraphUtilities::ImportNodesFromText( pGraph, strTextToImport, kPastedNodes );

    //Compile
    FKismetEditorUtilities::CompileBlueprint( pBlueprintActor );
    GEngine->BroadcastLevelActorListChanged();

    //Remove default clone asset
    FAssetRegistryModule::AssetDeleted( pBlueprintDefault );

    //Delete default clone
    TArray<UObject*> kAssetObjectsInPath;
    kAssetObjectsInPath.Add( pBlueprintDefault );
    ObjectTools::AddExtraObjectsToDelete( kAssetObjectsInPath );
    ObjectTools::ForceDeleteObjects( kAssetObjectsInPath, false );

    //Reparent Actor
    if ( pBlueprintActor )
    {
        UWorld* const pWorld = GEditor->GetEditorWorldContext().World();
        for ( TActorIterator<AActor> kActorItr( pWorld, pBlueprintActor->GeneratedClass.Get() ); kActorItr; ++kActorItr )
        {
            AActor* pBPActor = *kActorItr;
            if ( pParentActor )
            {
                //Set parent back after replace
                pBPActor->AttachToActor( pParentActor, FAttachmentTransformRules::KeepWorldTransform );
            }
            //Set Default parent and Rename to origin actor name
            SetDefaultParentActor( pBPActor, FAttachmentTransformRules::KeepWorldTransform );
            pBPActor->SetActorLabel( strOriginName );
        }
    }

    //Save Blueprint
    UPackage* const pAssetPackage = pBlueprintActor->GetOutermost();
    pAssetPackage->SetDirtyFlag( true );
    FAssetRegistryModule::AssetCreated( pBlueprintActor );

    TArray<UPackage*> kPackagesToSave;
    kPackagesToSave.Add( pAssetPackage );
    FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, false );

    return pBlueprintActor;
}

//Create LiveLink Blueprint--------------------------------------------------------------------------
UBlueprint* FRLLiveLinkModule::CreateLiveLinkBlueprint( const FString& strPath,
                                                        const FString& strSource,
                                                        const FString& strSubjectName,
                                                        bool bCheckSerialNumber )
{
    if ( !CheckPluginInstalled( PLUGIN_NAME ) )
    {
        FMessageDialog::Open( EAppMsgType::Ok, FText::FromString( INSTALL_PLUGIN_MESSAGE ) );
        return nullptr;
    }

    //New Folder Path
    FString strFolderPath = FPaths::ProjectContentDir() + strPath;
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if ( !kPlatformFile.DirectoryExists( *strFolderPath ) )
    {
        if ( !kPlatformFile.CreateDirectoryTree( *strFolderPath ) )
        {
            return nullptr;
        }
    }

    //Check Asset Name
    FString strTargetName;
    if ( bCheckSerialNumber )
    {
        int nAssetsIndex = 0;
        while ( true )
        {
            strTargetName = strSubjectName + "_" + FString::FromInt( nAssetsIndex );
            FString strNamePath = FPaths::ProjectContentDir() + strPath + "/" + strTargetName + ".uasset";
            if ( !kPlatformFile.FileExists( *strNamePath ) )
            {
                break;
            }
            ++nAssetsIndex;
        }
    }
    else
    {
        strTargetName = strSubjectName;
    }

    //Check if blueprint exist need to delete file
    TArray< CSceneTempData > kAssetTempData;
    FString strBlueprintFilePath = FPaths::ProjectContentDir() + strPath + "/" + strTargetName + ".uasset";
    if ( kPlatformFile.FileExists( *strBlueprintFilePath ) )
    {
        FString strBlueprintLoadPath = "/Game" + strPath + "/" + strTargetName + "." + strTargetName;
        UBlueprint* pBlueprint = Cast<UBlueprint>( StaticLoadObject( UBlueprint::StaticClass(), nullptr, *( strBlueprintLoadPath ) ) );
        if ( !pBlueprint )
        {
            return nullptr;
        }

        //Remove default clone asset
        FAssetRegistryModule::AssetDeleted( pBlueprint );

        UObject* pAssetObject = Cast<UObject>( pBlueprint );
        TArray< UObject* > kBlueprints;
        kBlueprints.Add( pAssetObject );

        ObjectTools::AddExtraObjectsToDelete( kBlueprints );
        ObjectTools::ForceDeleteObjects( kBlueprints, false );
    }

    //Clone Blueprint
    FString strPluginPath = IPluginManager::Get().FindPlugin( TEXT( "RLLiveLink" ) )->GetBaseDir();
    FString strSourceFilePath = strPluginPath + "/Content/" + strSource + ".rluasset";
    FString strTargetPath = FPaths::ProjectContentDir() + strPath + "/" + strTargetName + ".uasset";
    kPlatformFile.CopyFile( *strTargetPath, *strSourceFilePath );

    //Get Current Blueprint
    FString strBlueprintPathToLoad = "/Game" + strPath + "/" + strTargetName + "." + strSource;
    UBlueprint* pBlueprint = Cast<UBlueprint>( StaticLoadObject( UBlueprint::StaticClass(), nullptr, *( strBlueprintPathToLoad ) ) );
    if ( !pBlueprint )
    {
        return nullptr;
    }

    //Rename Asset
    FAssetToolsModule& kAssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>( "AssetTools" );
    TArray<FAssetRenameData> kAssetsAndNames;
    UObject* pAssetObject = Cast<UObject>( pBlueprint );
    const FString strPackagePath = FPackageName::GetLongPackagePath( pAssetObject->GetOutermost()->GetName() );
    new( kAssetsAndNames ) FAssetRenameData();
    kAssetsAndNames[ 0 ].NewName = strTargetName;
    kAssetsAndNames[ 0 ].NewPackagePath = strPackagePath;
    kAssetsAndNames[ 0 ].Asset = pAssetObject;
    kAssetToolsModule.Get().RenameAssetsWithDialog( kAssetsAndNames );

    //Set Subject Name
    for ( FBPVariableDescription& pVar : pBlueprint->NewVariables )
    {
        if ( pVar.VarName == "SubjectName" )
        {
            pVar.DefaultValue = strSubjectName;
            FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pBlueprint );
        }
    }

    FKismetEditorUtilities::CompileBlueprint( pBlueprint );
    UPackage* const pAssetPackage = pBlueprint->GetOutermost();
    pAssetPackage->SetDirtyFlag( true );
    FAssetRegistryModule::AssetCreated( pBlueprint );

    //Save
    TArray<UPackage*> kPackagesToSave;
    kPackagesToSave.Add( pAssetPackage );
    FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );
    return pBlueprint;
}

void FRLLiveLinkModule::SetDefaultParentActor( AActor* pActor, FAttachmentTransformRules eAttachmentRules )
{
    UWorld* const pWorld = GEditor->GetEditorWorldContext().World();
    for ( TActorIterator<AActor> ActorItr( pWorld ); ActorItr; ++ActorItr )
    {
        if ( ActorItr->GetActorLabel().ToLower() == DEFAULT_PARENT_ACTOR && ActorItr->GetClass() == AActor::StaticClass() )
        {
            pActor->AttachToActor( *ActorItr, eAttachmentRules );
            break;
        }
    }
}

bool FRLLiveLinkModule::CheckPluginInstalled( const FString& strPluginName )
{
    auto kPlugin = IPluginManager::Get().FindPlugin( strPluginName );
    return ( !kPlugin ) ? false : ( kPlugin->IsEnabled() ) ? true : false;
}

void FRLLiveLinkModule::SelectAndFocusActor( AActor* pActor, bool bFocus, bool bSelect )
{
    if ( pActor )
    {
        //focus view
        if( bFocus )
        {
            TArray<AActor*> kActors;
            kActors.Add( pActor );
            GEditor->MoveViewportCamerasToActor( kActors, true );
        }
        
        //Select newly created actor
        if( bSelect )
        {
            GEditor->SelectNone( false, true, false );
            GEditor->SelectActor( pActor, true, false );
            GEditor->NoteSelectionChange();
        }
    }
}

bool FRLLiveLinkModule::DeleteFolder( const FString& strPath )
{
    FString strFolderPath = strPath.Replace( TEXT( "/Game/" ), TEXT( "" ) );
    FString strTargetPath = FPaths::ProjectContentDir() + strFolderPath;
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if ( kPlatformFile.DirectoryExists( *strTargetPath ) )
    {
        UWorld* const pWorld = GEditor->GetEditorWorldContext().World();
        FAssetRegistryModule& kAssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>( TEXT( "AssetRegistry" ) );

        //Get Asset Data
        TArray<FAssetData> kObjectList;
        FARFilter kFilter;
        kFilter.PackagePaths.Add( *strPath );
        kFilter.bRecursivePaths = true;
        kAssetRegistryModule.Get().GetAssets( kFilter, kObjectList );

        if ( kObjectList.Num() > 0 )
        {
            TArray<UObject*> kAssetsToDelete;
            for ( auto kObject : kObjectList )
            {
                UObject* pAsset = kObject.GetAsset();
                if ( pAsset )
                {
                    kAssetsToDelete.Add( pAsset );
                    //Save Avatar On Scene To Temp Data
                    UBlueprint* pBlueprintActor = Cast<UBlueprint>( pAsset );
                    if ( pBlueprintActor )
                    {
                        for ( TActorIterator<AActor> pActorItr( pWorld, pBlueprintActor->GeneratedClass.Get() ); pActorItr; ++pActorItr )
                        {
                            bool bPilotTarget = false;
                            FLevelEditorViewportClient* pLevelClient = GCurrentLevelEditingViewportClient;
                            if( AActor* pActiveLockActor = pLevelClient->GetActiveActorLock().Get() )
                            {
                                if( pActiveLockActor->GetUniqueID() == pActorItr->GetUniqueID() )
                                {
                                    bPilotTarget = true;
                                }
                            }
                            // Before deleting an Actor, first check if it's selected Actor. 
                            // If it's the selected state, you must cancel the selection first, otherwise the UE Menu will be disabled forever.
                            if( GEditor->GetSelectedActorCount() != 0 )
                            {
                                GEditor->SelectNone( false, true, false );
                                GEditor->NoteSelectionChange();
                            }

                            CSceneTempData kData;
                            kData.strAssetName = pActorItr->GetActorLabel();
                            kData.kTransform = pActorItr->GetTransform();
                            kData.pParentActor = pActorItr->GetAttachParentActor();
                            kData.bPilotTarget = bPilotTarget;

                            TArray<FString> kPathStringOut;
                            FString strActorPath = pActorItr->GetClass()->GetPathName();
                            strActorPath.ParseIntoArray( kPathStringOut, TEXT( "/" ), true );
                            kData.strFolderName = kPathStringOut[ kPathStringOut.Num() - 2 ];
                            // ex: strPath = RLConent/FolderName/obj.uasset 須扣除檔案本身名稱來取得Folder name
                            m_kAssetTempData.Add( kData );
                        }
                    }

                    //Remove default clone asset
                    FAssetRegistryModule::AssetDeleted( pAsset );
                }
            }

            ObjectTools::AddExtraObjectsToDelete( kAssetsToDelete );
            const int32 nNumAssetsDeleted = ObjectTools::ForceDeleteObjects( kAssetsToDelete, false );

            //參考EditorScriptingUtils.cpp - DeleteEmptyDirectoryFromDisk()
            if ( nNumAssetsDeleted == kAssetsToDelete.Num() )
            {
                struct FEmptyFolderVisitor: public IPlatformFile::FDirectoryVisitor
                {
                    bool bIsEmpty;
                    FEmptyFolderVisitor()
                        : bIsEmpty( true )
                    {
                    }
                    virtual bool Visit( const TCHAR* FilenameOrDirectory, bool bIsDirectory ) override
                    {
                        if ( !bIsDirectory )
                        {
                            bIsEmpty = false;
                            return false;
                        }
                        return true;
                    }
                };

                FString strPathToDeleteOnDisk;
                if ( FPackageName::TryConvertLongPackageNameToFilename( strPath, strPathToDeleteOnDisk ) )
                {
                    FEmptyFolderVisitor kEmptyFolderVisitor;
                    IFileManager::Get().IterateDirectoryRecursively( *strPathToDeleteOnDisk, kEmptyFolderVisitor );
                    if ( kEmptyFolderVisitor.bIsEmpty )
                    {
                        if ( IFileManager::Get().DeleteDirectory( *strPathToDeleteOnDisk, false, true ) )
                        {
                            kAssetRegistryModule.Get().RemovePath( strPath );
                        }

                    }
                }
            }
            return true;
        }
    }
    return false;
}

bool FRLLiveLinkModule::DeleteActorInScene( const FString& strPath, const FString& strTargetName )
{
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    FString strBlueprintFilePath = FPaths::ProjectContentDir() + strPath + "/" + strTargetName + ".uasset";
    if ( kPlatformFile.FileExists( *strBlueprintFilePath ) )
    {
        FString strBlueprintLoadPath = "/Game" + strPath + "/" + strTargetName + "." + strTargetName;
        UBlueprint* pBlueprint_Temp = Cast<UBlueprint>( StaticLoadObject( UBlueprint::StaticClass(), nullptr, *( strBlueprintLoadPath ) ) );
        if ( !pBlueprint_Temp )
        {
            return false;
        }

        //Save Asset On Scene To Temp Data and Delete
        UWorld* const pWorld = GEditor->GetEditorWorldContext().World();
        for ( TActorIterator<AActor> pActorItr( pWorld, pBlueprint_Temp->GeneratedClass.Get() ); pActorItr; ++pActorItr )
        {
            // Stop Pilot
            bool bPilotTarget = false;
            FLevelEditorViewportClient* pLevelClient = GCurrentLevelEditingViewportClient;
            if( AActor* pActiveLockActor = pLevelClient->GetActiveActorLock().Get() )
            {
                if( pActiveLockActor->GetUniqueID() == pActorItr->GetUniqueID() )
                {
                    bPilotTarget = true;
                }
            }
            // Before deleting an Actor, first check if it's selected Actor. 
            // If it's the selected state, you must cancel the selection first, otherwise the UE Menu will be disabled forever.
            if( GEditor->GetSelectedActorCount() != 0 )
            {
                GEditor->SelectNone( false, true, false );
                GEditor->NoteSelectionChange();
            }
            
            CSceneTempData kData;
            kData.strAssetName = pActorItr->GetActorLabel();
            kData.kTransform = pActorItr->GetTransform();
            kData.pParentActor = pActorItr->GetAttachParentActor();
            kData.strFolderName = strTargetName;
            kData.bPilotTarget = bPilotTarget;
            m_kAssetTempData.Add( kData );

            pActorItr->K2_DestroyActor();
            GEditor->GetEditorWorldContext().World()->ForceGarbageCollection( true );
        }
    }
    return true;
}

void FRLLiveLinkModule::PutAssetBackToSceneAfterReplace(UBlueprint* pBlueprint )
{
    TArray<FString> kPathStringOut;
    FString strPath = pBlueprint->GetPathName();
    strPath.ParseIntoArray( kPathStringOut, TEXT( "/" ), true );
    FString strFolderName = kPathStringOut[ kPathStringOut.Num() - 2 ];
    // ex: strPath = RLConent/FolderName/obj.uasset 須扣除檔案本身名稱來取得Folder name

    //Camera & Light use BP name not folder name
    if ( strFolderName=="Camera" || strFolderName == "Light" )
    {
        strFolderName = pBlueprint->GetName();
    }

    for ( int32 nIndex = 0; nIndex < m_kAssetTempData.Num(); nIndex++ )
    {
        const CSceneTempData& kTempData = m_kAssetTempData[ nIndex ];
        if ( strFolderName == kTempData.strFolderName )
        {
            //Add To Scene
            AActor* pActor = nullptr;
            UWorld* const pWorld = GEditor->GetEditorWorldContext().World();
            if ( pWorld )
            {
                const FVector kLocation = kTempData.kTransform.GetLocation();
                const FRotator kRotation = kTempData.kTransform.Rotator();
                UClass* pClassToSpawn = Cast<UClass>( pBlueprint->GeneratedClass );
                pActor = pWorld->SpawnActor<AActor>( pClassToSpawn, kLocation, kRotation );
                if ( pActor )
                {
                    pActor->SetActorLabel( kTempData.strAssetName );
                    if ( kTempData.pParentActor )
                    {
                        pActor->AttachToActor( kTempData.pParentActor, FAttachmentTransformRules::KeepWorldTransform );
                    }
                    SetDefaultParentActor( pActor, FAttachmentTransformRules::KeepWorldTransform );
                }
                if( kTempData.bPilotTarget )
                {
                    FLevelEditorViewportClient* pLevelClient = GCurrentLevelEditingViewportClient;
                    if( pLevelClient && pLevelClient->bLockedCameraView )
                    {
                        TSharedPtr<SLevelViewport> spLevelEditorViewport = StaticCastSharedPtr<SLevelViewport>( pLevelClient->GetEditorViewportWidget() );
                        if( spLevelEditorViewport )
                        {
                            spLevelEditorViewport->OnActorLockToggleFromMenu( pActor );
                        }
                    }
                }
            }
            m_kAssetTempData.RemoveAt( nIndex );
            nIndex--;
        }
    }
}

UTexture2D* FRLLiveLinkModule::LoadTextureFromFile( const FString& strPath, const FString& strSaveAssetPath )
{
    UTexture2D* pTexture = nullptr;
    if( !FPlatformFileManager::Get().GetPlatformFile().FileExists( *strPath ) )
    {
        return nullptr;
    }
    UPackage* pPackage = CreatePackage( NULL, *strSaveAssetPath );
    if( !pPackage )
    {
        return nullptr;
    }
    pPackage->FullyLoad();
    FString strTextureName = FPaths::GetBaseFilename( strSaveAssetPath );
    TArray<uint8> kRawData;
    if( !FFileHelper::LoadFileToArray( kRawData, *strPath ) )
    {
        return nullptr;
    }
    UTextureFactory* pTexFactory = NewObject<UTextureFactory>();
    if( !pTexFactory )
    {
        return nullptr;
    }
    kRawData.Add( 0 );
    const uint8* Ptr = &kRawData[ 0 ];
    UObject* pTexAsset = pTexFactory->FactoryCreateBinary( UTexture::StaticClass(),
                                                           pPackage,
                                                           FName( *strTextureName ),
                                                           RF_Public | RF_Standalone,
                                                           NULL,
                                                           *FPaths::GetExtension( strPath ),
                                                           Ptr,
                                                           Ptr + kRawData.Num() - 1,
                                                           GWarn );
    if( pTexAsset )
    {
        UTexture* kTexture = Cast<UTexture>( pTexAsset );
        pTexAsset->MarkPackageDirty();
        ULevel::LevelDirtiedEvent.Broadcast();
        pTexAsset->PostEditChange();
        FAssetRegistryModule::AssetCreated( pTexAsset );
        pPackage->SetDirtyFlag( true );

        //Save
        TArray<UPackage*> kPackagesToSave;
        kPackagesToSave.Add( pPackage );
        FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );

        //Re load
        pTexture = LoadObject<UTexture2D>( nullptr, *strSaveAssetPath );
    }
    return pTexture;

}

UTextureLightProfile* FRLLiveLinkModule::LoadTextureLightProfileFromFile( const FString& strPath, const FString& strSaveAssetPath )
{
    UTextureLightProfile* pTexture = nullptr;
    if ( !FPlatformFileManager::Get().GetPlatformFile().FileExists( *strPath ) )
    {
        return nullptr;
    }
    UPackage* pPackage = CreatePackage( NULL, *strSaveAssetPath );
    if ( !pPackage )
    {
        return nullptr;
    }
    pPackage->FullyLoad();
    FString strTextureName = FPaths::GetBaseFilename( strSaveAssetPath );
    TArray<uint8> kRawData;
    if ( !FFileHelper::LoadFileToArray( kRawData, *strPath ) )
    {
        return nullptr;
    }
    UTextureFactory* pTexFactory = NewObject<UTextureFactory>();
    if ( !pTexFactory )
    {
        return nullptr;
    }
    kRawData.Add( 0 );
    const uint8* Ptr = &kRawData[ 0 ];
    UObject* pTexAsset = pTexFactory->FactoryCreateBinary( UTexture::StaticClass(),
                                                           pPackage,
                                                           FName( *strTextureName ),
                                                           RF_Public | RF_Standalone,
                                                           NULL,
                                                           *FPaths::GetExtension( strPath ),
                                                           Ptr,
                                                           Ptr + kRawData.Num() - 1,
                                                           GWarn );
    if ( pTexAsset )
    {
        UTexture* kTexture = Cast<UTexture>( pTexAsset );
        pTexAsset->MarkPackageDirty();
        ULevel::LevelDirtiedEvent.Broadcast();
        pTexAsset->PostEditChange();
        FAssetRegistryModule::AssetCreated( pTexAsset );
        pPackage->SetDirtyFlag( true );

        //Save
        TArray<UPackage*> kPackagesToSave;
        kPackagesToSave.Add( pPackage );
        FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );

        //Re load
        pTexture = LoadObject<UTextureLightProfile>( nullptr, *strSaveAssetPath );
    }
    return pTexture;

}

AActor* FRLLiveLinkModule::LoadToScene( UBlueprint* pBlueprint )
{
    if( !pBlueprint )
    {
        return nullptr;
    }
    AActor* pActor = nullptr;
    UWorld* const pWorld = GEditor->GetEditorWorldContext().World();
    if( pWorld )
    {
        const FVector kLocation = { 0, 0, 0 };
        const FRotator kRotation = FRotator( 0, 0, 0 );
        UClass* pClassToSpawn = Cast<UClass>( pBlueprint->GeneratedClass );
        pActor = pWorld->SpawnActor<AActor>( pClassToSpawn, kLocation, kRotation );
        SetDefaultParentActor( pActor, FAttachmentTransformRules::KeepRelativeTransform );

        //set focus view on actor
        SelectAndFocusActor( pActor, false, true );
    }
    return pActor;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE( FRLLiveLinkModule, RLLiveLink )