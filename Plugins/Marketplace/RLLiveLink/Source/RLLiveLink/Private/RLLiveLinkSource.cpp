// Copyright 2019 The Reallusion Authors. All Rights Reserved.

#include "RLLiveLinkSource.h"
#include "RLLiveLinkDef.h"
#include "ILiveLinkClient.h"
#include "Interfaces/IPluginManager.h"

#if ENGINE_MINOR_VERSION > 22
#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Roles/LiveLinkBasicTypes.h"
#include "Roles/LiveLinkBasicTypes.h"
#endif

#define LOCTEXT_NAMESPACE "RLLiveLinkSource"
#define RECV_BUFFER_SIZE 1024 * 1024
#define RECV_HEADER_SIZE 8
#define BOTH_BLINK  8
#define LEFT_BLINK  9
#define RIGHT_BLINK 10
#define RLJawY 6
#define RLJawZ 7
#define RLJawX 8
#define RLJawMoveX 9
#define RLJawMoveY 10
#define RLJawMoveZ 11

int BytesToInt( unsigned char* pBytes, int nLength )
{
    int nValue = 0;
    int nFlag = 0;
    for ( int i = nLength - 1; i >= 0; --i )
    {
        nValue += ( pBytes[ i ] & 0xFF ) << ( 8 * nFlag );
        ++nFlag;
    }
    return nValue;
}

FRLLiveLinkSource::FRLLiveLinkSource( uint32 uPort )
    : m_pListenerSocket( nullptr )
    , m_pConnectionSocket( nullptr )
    , m_bStopping( false )
    , m_pThread( nullptr )
    , m_kWaitTime( FTimespan::FromMilliseconds( 100 ) )
    , m_nFrameCounter( 0 )
    , m_nDataSizeInHeader( -1 )
{
    // defaults
    m_kDeviceIPAddr = FIPv4Address::Any;
    m_uDevicePort   = uPort;
    m_kSourceStatus = LOCTEXT( "SourceStatus_DeviceNotFound", "Device Not Found" );
    m_kSourceType   = LOCTEXT( "RLLiveLinkSourceType", "IC LiveLink" );
    m_kSourceMachineName = LOCTEXT( "RLLiveLinkSourceMachineName", "localhost" );

    // Create Listener Socket
    m_pListenerSocket = FTcpSocketBuilder( TEXT( "RLLiveLink" ) )
        .AsReusable()
        .BoundToAddress( m_kDeviceIPAddr )
        .BoundToPort( m_uDevicePort )
        .Listening( 8 )
        .WithReceiveBufferSize( RECV_BUFFER_SIZE );

    m_kRecvBuffer.SetNumUninitialized( RECV_BUFFER_SIZE );
    if ( m_pListenerSocket != nullptr )
    {
        m_pSocketSubsystem = ISocketSubsystem::Get( PLATFORM_SOCKETSUBSYSTEM );
        Start();
        m_kSourceStatus = LOCTEXT( "SourceStatus_Receiving", "Receiving" );
    }
    FString strConfigPath = IPluginManager::Get().FindPlugin( TEXT( "RLLiveLink" ) )->GetBaseDir() + "/Content/iCloneConfig.json";
    FString strJsonConfig;
    ensure( FFileHelper::LoadFileToString( strJsonConfig, *strConfigPath ) );
    TSharedPtr<FJsonObject> kJsonObject;
    TSharedRef<TJsonReader<>> kReader = TJsonReaderFactory<>::Create( strJsonConfig );
    if ( FJsonSerializer::Deserialize( kReader, kJsonObject ) )
    {
        ensure( InitExpressionNames( kJsonObject, "FacialExpression", m_kExpressionNames ) );
        ensure( InitExpressionNames( kJsonObject, "CustomExpression", m_kCustomExpressionNames ) );
        ensure( InitExpressionNames( kJsonObject, "HeadExpression",   m_kHeadExpressionNames ) );
        ensure( InitExpressionNames( kJsonObject, "LeftEyeExpression", m_kLeftEyeExpressionNames ) );
        ensure( InitExpressionNames( kJsonObject, "RightEyeExpression", m_kRightEyeExpressionNames ) );
        ensure( InitExpressionNames( kJsonObject, "BoneExpression", m_kBonesExpressionNames ) );
        ensure( InitVisemeNames( kJsonObject ) );
        ensure( InitBoneMap( kJsonObject ) );
        ensure( InitReParentMap( kJsonObject ) );
    }
}

FRLLiveLinkSource::~FRLLiveLinkSource()
{
    Stop();
    if ( m_pThread )
    {
        m_pThread->WaitForCompletion();
        delete m_pThread;
        m_pThread = nullptr;
    }
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
}

bool FRLLiveLinkSource::InitExpressionNames( const TSharedPtr<FJsonObject>& kJsonRoot, const FString& strFieldName, TArray< FName >& kExpNames )
{
    if( !kJsonRoot.Get() )
    {
        return false;
    }
    const TArray<TSharedPtr<FJsonValue>>* pExpNameArray;
    kJsonRoot->TryGetArrayField( strFieldName, pExpNameArray );
    for( auto kName : *pExpNameArray )
    {
        FName strExpName = *kName->AsString();
        kExpNames.Add( strExpName );
    }
    return true;
}

bool FRLLiveLinkSource::InitCustomExpressionNames( const TSharedPtr<FJsonObject>& kJsonRoot )
{
    if ( !kJsonRoot.Get() )
    {
        return false;
    }
    const TArray<TSharedPtr<FJsonValue>>* pCustomExpNameArray;
    kJsonRoot->TryGetArrayField( TEXT( "CustomExpression" ), pCustomExpNameArray );
    for ( auto kName : *pCustomExpNameArray )
    {
        FName strExpName = *kName->AsString();
        m_kCustomExpressionNames.Add( strExpName );
    }
    return true;
}

bool FRLLiveLinkSource::InitVisemeNames( const TSharedPtr<FJsonObject>& kJsonRoot )
{
    if ( !kJsonRoot.Get() )
    {
        return false;
    }
    const TArray<TSharedPtr<FJsonValue>>* pVisemeNameArray;
    kJsonRoot->TryGetArrayField( TEXT( "Viseme" ), pVisemeNameArray );
    for ( auto kName : *pVisemeNameArray )
    {
        FName strExpName = *kName->AsString();
        m_kVisemeNames.Add( strExpName );
    }

    kJsonRoot->TryGetArrayField( TEXT( "OldViseme" ), pVisemeNameArray );
    for( auto kName : *pVisemeNameArray )
    {
        FName strExpName = *kName->AsString();
        m_kOldVisemeNames.Add( strExpName );
    }
    return true;
}

bool FRLLiveLinkSource::InitBoneMap( const TSharedPtr<FJsonObject>& kJsonRoot )
{
    if ( !kJsonRoot.Get() )
    {
        return false;
    }
    const TSharedPtr<FJsonObject>* pBoneMapRoot;
    kJsonRoot->TryGetObjectField( TEXT( "BodyMapping" ), pBoneMapRoot );
    for ( TPair<FString, TSharedPtr<FJsonValue>>& JsonField : ( *pBoneMapRoot )->Values )
    {
        FString strICBoneName = JsonField.Key;
        FString strUnBoneName = JsonField.Value->AsString();
        m_kBoneMap.Add( strICBoneName, strUnBoneName );
    }
    return true;
}

bool FRLLiveLinkSource::InitReParentMap( const TSharedPtr<FJsonObject>& kJsonRoot )
{
    if ( !kJsonRoot.Get() )
    {
        return false;
    }
    const TSharedPtr<FJsonObject>* pBoneMapRoot;
    kJsonRoot->TryGetObjectField( TEXT( "BoneReParent" ), pBoneMapRoot );
    for ( TPair<FString, TSharedPtr<FJsonValue>>& JsonField : ( *pBoneMapRoot )->Values )
    {
        FString strChildBoneName = JsonField.Key;
        FString strNewParentName = JsonField.Value->AsString();
        m_kReParentMap.Add( strChildBoneName, strNewParentName );
    }
    return true;
}

void FRLLiveLinkSource::ReceiveClient( ILiveLinkClient* pInClient, FGuid kInSourceGuid )
{
    m_pClient = pInClient;
    m_kSourceGuid = kInSourceGuid;
}

#if ENGINE_MINOR_VERSION > 22
bool FRLLiveLinkSource::IsSourceStillValid() const
#else
bool FRLLiveLinkSource::IsSourceStillValid()
#endif
{
    // Source is valid if we have a valid thread and socket
    bool bIsSourceValid = !m_bStopping && m_pThread != nullptr && m_pListenerSocket != nullptr;
    return bIsSourceValid;
}

bool FRLLiveLinkSource::RequestSourceShutdown()
{
    Stop();
    ClearAllSubjects();
    return true;
}
// FRunnable interface

void FRLLiveLinkSource::Start()
{
    m_strThreadName = "JSON TCP Receiver ";
    m_strThreadName.AppendInt( FAsyncThreadIndex::GetNext() );

    m_pThread = FRunnableThread::Create( this, *m_strThreadName, 128 * 1024, TPri_AboveNormal, FPlatformAffinity::GetPoolThreadMask() );
}

void FRLLiveLinkSource::Stop()
{
    m_bStopping = true;
}

uint32 FRLLiveLinkSource::Run()
{
    TSharedRef<FInternetAddr> pRemoteAddr = m_pSocketSubsystem->CreateInternetAddr();
    while ( !m_bStopping )
    {
        bool bPending = false;
        if ( m_pListenerSocket->HasPendingConnection( bPending ) && bPending )
        {
            // Already have a Connection? destroy previous
            if ( m_pConnectionSocket )
            {
                m_pConnectionSocket->Close();
                m_pSocketSubsystem->DestroySocket( m_pConnectionSocket );
            }
            // New Connection receive!
            m_pConnectionSocket = m_pListenerSocket->Accept( *pRemoteAddr, TEXT( "RLLiveLink Received Socket Connection" ) );
        }
        if ( m_pConnectionSocket )
        {
            // Global cache of current Remote Address
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
                            if( !m_bStopping )
                            {
                                HandleReceivedData( spReceivedData );
                            }
                        } );
                    }
                }
            }
        }
    }
    return 0;
}

void FRLLiveLinkSource::HandleReceivedData( TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> spReceivedData )
{
    ProcessStickyData( spReceivedData );

    FString strJsonString;
    strJsonString.Empty( m_kCompleteData.Num() );
    for ( uint8& Byte : m_kCompleteData )
    {
        strJsonString += TCHAR( Byte );
    }

    TSharedPtr<FJsonObject> spJsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create( strJsonString );
    if ( FJsonSerializer::Deserialize( Reader, spJsonObject ) )
    {
        ResetEncounteredSubjectsMap();
        for ( TPair<FString, TSharedPtr<FJsonValue>>& kJsonField : spJsonObject->Values )
        {
            FName kSubjectName( *kJsonField.Key );
            if( kSubjectName == TEXT( "Disconnect" ) )
            {
                break;
            }

            const TSharedPtr<FJsonObject> spDataRoot = kJsonField.Value->AsObject();
            if ( kSubjectName == TEXT( "Light" ) )
            {
                ProcessLightData( spDataRoot );
            }
            else if ( kSubjectName == TEXT( "Camera" ) )
            {
                ProcessCameraData( spDataRoot );
            }
            else if( kSubjectName == TEXT( "Prop" ) )
            {
                ProcessPropData( spDataRoot );
            }
            else
            {
                ProcessAvatarData( spDataRoot, kSubjectName );
            }
        }
        RemoveUnusedSubjects();
    }
}

void FRLLiveLinkSource::ProcessStickyData( TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> spReceivedData )
{
    // 1.先補上上一次未完成的封包資料
    TArray<uint8> kReceivedData;
    kReceivedData.Append( m_kIncompleteData );
    kReceivedData.Append( *spReceivedData );
    int nReceivedSize = kReceivedData.Num();

    // 2.清空資料
    m_kIncompleteData.Empty();
    m_kCompleteData.Empty();

    // 3.檢查當前是否有黏包出現
    while ( true )
    {
        // case 1: 預設情形，需解出 json header 所帶長度，提供下次和封包長度做比較
        if ( m_nDataSizeInHeader == -1 )
        {
            if ( nReceivedSize < RECV_HEADER_SIZE )
            {
                m_kIncompleteData = kReceivedData;
                break;
            }
            unsigned char kDataHeader[ RECV_HEADER_SIZE ];
            for ( int i = 0; i < RECV_HEADER_SIZE; ++i )
            {
                kDataHeader[ i ] = TCHAR( kReceivedData[ i ] );
            }
            m_nDataSizeInHeader = BytesToInt( kDataHeader, RECV_HEADER_SIZE );

            TArray<uint8> kJsonData;
            kJsonData.SetNum( kReceivedData.Num() - RECV_HEADER_SIZE );
            for ( int32 i = RECV_HEADER_SIZE; i < kReceivedData.Num(); ++i )
            {
                kJsonData[ i - RECV_HEADER_SIZE ] = kReceivedData[ i ];
            }
            kReceivedData = kJsonData;
            nReceivedSize = kReceivedData.Num();
        }
        // case 2: 長度相等就是完整封包資料
        else if ( nReceivedSize == m_nDataSizeInHeader )
        {
            m_kCompleteData = kReceivedData;
            m_nDataSizeInHeader = -1;
            break;
        }
        // case 3: 若封包長度小於 header 記錄長度，屬於未完整資料，下一次收到封包時累加
        else if ( nReceivedSize < m_nDataSizeInHeader )
        {
            m_kIncompleteData = kReceivedData;
            break;
        }
        // case 4: 若封包長度大於 header 記錄長度，代表包含了下一包資料，需切出完整封包後，再將剩餘封包重新做長度判斷
        else if ( nReceivedSize > m_nDataSizeInHeader )
        {
            m_kCompleteData.SetNum( m_nDataSizeInHeader );
            for ( int i = 0; i < m_nDataSizeInHeader; ++i )
            {
                m_kCompleteData[ i ] = kReceivedData[ i ];
            }
            TArray<uint8> kNextPacketData;
            kNextPacketData.SetNum( kReceivedData.Num() - m_nDataSizeInHeader );
            for ( int32 i = m_nDataSizeInHeader; i < kReceivedData.Num(); ++i )
            {
                kNextPacketData[ i - m_nDataSizeInHeader ] = kReceivedData[ i ];
            }
            kReceivedData = kNextPacketData;
            m_nDataSizeInHeader = -1;
        }
    }
}

void FRLLiveLinkSource::ProcessAvatarData( const TSharedPtr<FJsonObject>& spDataRoot, const FName& kSubjectName )
{
    const TArray<TSharedPtr<FJsonValue>>* pBoneArray = nullptr;
    spDataRoot->TryGetArrayField( TEXT( "Body" ), pBoneArray );

    const TSharedPtr<FJsonValue> pFacial = spDataRoot->TryGetField( TEXT( "Facial" ) );

    const TArray<TSharedPtr<FJsonValue>>* pViseme = nullptr;
    spDataRoot->TryGetArrayField( TEXT( "Viseme" ), pViseme );

    bool bCreateSubject = !m_kEncounteredSubjects.Contains( kSubjectName );

    // 檢查骨架個數是否與當前 Subject 數量相符，若不符則需重新建立 Subject 的骨架名稱和關係
#if ENGINE_MINOR_VERSION >= 23
    auto kAllSubjects = m_pClient->GetSubjects( true,  false );
    FLiveLinkSkeletonStaticData* pSkeletonData = nullptr;
    for( auto kSubject : kAllSubjects )
    {
        if( kSubject.SubjectName == kSubjectName )
        {
            auto kRole = m_pClient->GetSubjectRole( kSubject );
            FLiveLinkSubjectFrameData kFrameData;
            if( m_pClient->EvaluateFrame_AnyThread( kSubjectName, kRole, kFrameData ) )
            {
                pSkeletonData = kFrameData.StaticData.Cast<FLiveLinkSkeletonStaticData>();
            }
        }
    }
    if( pSkeletonData && pBoneArray )
    {
        if( pSkeletonData->BoneNames.Num() != pBoneArray->Num() )
        {
            bCreateSubject = true;
        }
    }
#else
    const FLiveLinkSubjectFrame* pSubjectFrame = m_pClient->GetSubjectData( kSubjectName );
    if ( pSubjectFrame && pBoneArray )
    {
        if ( pSubjectFrame->RefSkeleton.GetBoneNames().Num() != pBoneArray->Num() )
        {
            bCreateSubject = true;
        }
    }
#endif

    // 建立Subject 的骨架名稱和關係
    if ( bCreateSubject )
    {
        FLiveLinkRefSkeleton kSubjectRefSkeleton;
        TArray<FName> kBoneNames;
        if ( pBoneArray )// 有Body的資料才處理
        {
            kBoneNames.SetNumUninitialized( pBoneArray->Num() );
            TArray<int32> kBoneParents;
            kBoneParents.SetNumUninitialized( pBoneArray->Num() );

            for ( int nBoneIdx = 0; nBoneIdx < pBoneArray->Num(); ++nBoneIdx )
            {
                const TSharedPtr<FJsonValue>& spBone = ( *pBoneArray )[ nBoneIdx ];
                const TSharedPtr<FJsonObject> spBoneObject = spBone->AsObject();

                FString strBoneName;
                if ( spBoneObject->TryGetStringField( TEXT( "Name" ), strBoneName ) )
                {
                    if ( m_kBoneMap.Contains( strBoneName ) )
                    {
                        FString strUnrealBoneName = m_kBoneMap[ strBoneName ];
                        kBoneNames[ nBoneIdx ] = FName( *strUnrealBoneName );
                    }
                    else
                    {

                        kBoneNames[ nBoneIdx ] = FName( *( strBoneName.ToLower() ) );
                    }

                    // Bone 有在Mapping 目標內才處理Parent Index
                    FString strBoneParentName;
                    if ( spBoneObject->TryGetStringField( TEXT( "ParentName" ), strBoneParentName ) )
                    {
                        if ( m_kBoneMap.Contains( strBoneParentName ) )
                        {
                            FString strUnrealName = m_kBoneMap[ strBoneParentName ];
                            kBoneParents[ nBoneIdx ] = kBoneNames.IndexOfByKey( FName( *strUnrealName ) );
                        }
                        else
                        {
                            // 代表此Bone 的Parent 不在Mapping 範圍
                            kBoneParents[ nBoneIdx ] = nBoneIdx;
                        }
                    }
                    else
                    {
                        return; // Invalid Json Format
                    }
                }
                else
                {
                    return; // Invalid Json Format
                }
            }

            kSubjectRefSkeleton.SetBoneNames( kBoneNames );
            kSubjectRefSkeleton.SetBoneParents( kBoneParents );
        }

        m_pClient->PushSubjectSkeleton( m_kSourceGuid, kSubjectName, kSubjectRefSkeleton );
    }
    m_kEncounteredSubjects.Add( kSubjectName, true );

    FLiveLinkFrameData kSubjectFrame;
    TArray<FLiveLinkCurveElement>& kCurveElements = kSubjectFrame.CurveElements;
    TArray<FTransform>& kTransforms = kSubjectFrame.Transforms;

    if ( pBoneArray )// 有Body的資料才處理 Bone 的Trasnform
    {
        kTransforms.SetNumUninitialized( pBoneArray->Num() );

        for ( int nBoneIdx = 0; nBoneIdx < pBoneArray->Num(); ++nBoneIdx )
        {
            const TSharedPtr<FJsonValue>& Bone = ( *pBoneArray )[ nBoneIdx ];
            const TSharedPtr<FJsonObject> BoneObject = Bone->AsObject();

            const TArray<TSharedPtr<FJsonValue>>* LocationArray = nullptr;
            FVector BoneLocation;

            if ( BoneObject->TryGetArrayField( TEXT( "Location" ), LocationArray )
                && LocationArray->Num() == 3 ) // X, Y, Z
            {
                double X = ( *LocationArray )[ 0 ]->AsNumber();
                double Y = ( *LocationArray )[ 1 ]->AsNumber();
                double Z = ( *LocationArray )[ 2 ]->AsNumber();
                BoneLocation = FVector( X, -Y, Z );
            }
            else
            {
                // Invalid Json Format
                return;
            }

            const TArray<TSharedPtr<FJsonValue>>* RotationArray = nullptr;
            FQuat BoneQuat;
            if ( BoneObject->TryGetArrayField( TEXT( "Rotation" ), RotationArray )
                && RotationArray->Num() == 4 ) // X, Y, Z, W
            {
                double X = ( *RotationArray )[ 0 ]->AsNumber();
                double Y = ( *RotationArray )[ 1 ]->AsNumber();
                double Z = ( *RotationArray )[ 2 ]->AsNumber();
                double W = ( *RotationArray )[ 3 ]->AsNumber();
                FQuat kTempQuat = FQuat( X, Y, Z, W );
                FVector kVec = kTempQuat.Euler();
                FVector kLeftVec = FVector( -kVec.X, kVec.Y, -kVec.Z );
                BoneQuat = FQuat::MakeFromEuler( kLeftVec );
            }
            else
            {
                // Invalid Json Format
                return;
            }
            auto kRTS = FTransform( BoneQuat, BoneLocation );
            kTransforms[ nBoneIdx ] = kRTS;
        }
    }

    if ( pFacial )// 有Facial 的資料才處理, 目前只處理Expression 的Morph
    {
        auto pExpWeightRoot = pFacial->AsObject();
        if ( pExpWeightRoot.Get() ) // 有Facial 的資料才處理
        {
            const TArray<TSharedPtr<FJsonValue>>* pExpData = nullptr;
            if ( pExpWeightRoot->TryGetArrayField( TEXT( "iClone_regular_data" ), pExpData ) )
            {
                for ( int i = 0; i < pExpData->Num(); ++i )
                {
                    const FName& strExpName = m_kExpressionNames[ i ];
                    double fWeight = ( *pExpData )[ i ]->AsNumber();
#if ENGINE_MINOR_VERSION > 23
                    FLiveLinkCurveElement kNewElement( strExpName, fWeight );
#else
                    FLiveLinkCurveElement kNewElement;
                    kNewElement.CurveName = strExpName;
                    kNewElement.CurveValue = fWeight;
#endif
                    kCurveElements.Add( kNewElement );
                }
                // Check blink weight
                float fLBlinkWeight    = kCurveElements[ LEFT_BLINK ].CurveValue;
                float fRBlinkWeight    = kCurveElements[ RIGHT_BLINK ].CurveValue;
                float fBothBlinkWeight = kCurveElements[ BOTH_BLINK ].CurveValue;
                if( ( fBothBlinkWeight + fLBlinkWeight ) > 1.0f )
                {
                    kCurveElements[ LEFT_BLINK ].CurveValue = 1.0f - fBothBlinkWeight;
                }
                if( ( fBothBlinkWeight + fRBlinkWeight ) > 1.0f )
                {
                    kCurveElements[ RIGHT_BLINK ].CurveValue = 1.0f - fBothBlinkWeight;
                }
            }
            if ( pExpWeightRoot->TryGetArrayField( TEXT( "iClone_custom_data" ), pExpData ) )
            {
                for ( int i = 0; i < pExpData->Num(); ++i )
                {
                    const FName& strExpName = m_kCustomExpressionNames[ i ];
                    double fWeight = ( *pExpData )[ i ]->AsNumber();
#if ENGINE_MINOR_VERSION > 23
                    FLiveLinkCurveElement kNewElement( strExpName, fWeight );
#else
                    FLiveLinkCurveElement kNewElement;
                    kNewElement.CurveName = strExpName;
                    kNewElement.CurveValue = fWeight;
#endif
                    kCurveElements.Add( kNewElement );
                }
            }
            if( pExpWeightRoot->TryGetArrayField( TEXT( "iClone_head_data" ), pExpData ) )
            {
                TArray< double > kHeadWeight;
                kHeadWeight.Init( 0, m_kHeadExpressionNames.Num() );
                kHeadWeight[ 0 ] = ( *pExpData )[ 0 ]->AsNumber() < 0 ? -( *pExpData )[ 0 ]->AsNumber() : 0;
                kHeadWeight[ 1 ] = ( *pExpData )[ 0 ]->AsNumber() > 0 ?  ( *pExpData )[ 0 ]->AsNumber() : 0;
                kHeadWeight[ 2 ] = ( *pExpData )[ 1 ]->AsNumber() < 0 ? -( *pExpData )[ 1 ]->AsNumber() : 0;
                kHeadWeight[ 3 ] = ( *pExpData )[ 1 ]->AsNumber() > 0 ?  ( *pExpData )[ 1 ]->AsNumber() : 0;
                kHeadWeight[ 4 ] = ( *pExpData )[ 2 ]->AsNumber() < 0 ? -( *pExpData )[ 2 ]->AsNumber() : 0;
                kHeadWeight[ 5 ] = ( *pExpData )[ 2 ]->AsNumber() > 0 ?  ( *pExpData )[ 2 ]->AsNumber() : 0;
                for( int i = 0; i < kHeadWeight.Num(); ++i )
                {
                    const FName& strExpName = m_kHeadExpressionNames[ i ];
                    double fWeight = kHeadWeight[ i ];
#if ENGINE_MINOR_VERSION > 23
                    FLiveLinkCurveElement kNewElement( strExpName, fWeight );
#else
                    FLiveLinkCurveElement kNewElement;
                    kNewElement.CurveName = strExpName;
                    kNewElement.CurveValue = fWeight;
#endif
                    kCurveElements.Add( kNewElement );
                }
            }
            if( pExpWeightRoot->TryGetArrayField( TEXT( "iClone_l_eye_data" ), pExpData ) )
            {
                TArray< double > kEyeWeight;
                kEyeWeight.Init( 0, m_kLeftEyeExpressionNames.Num() );
                kEyeWeight[ 0 ] = ( *pExpData )[ 0 ]->AsNumber() < 0 ? -( *pExpData )[ 0 ]->AsNumber() : 0;
                kEyeWeight[ 1 ] = ( *pExpData )[ 0 ]->AsNumber() > 0 ?  ( *pExpData )[ 0 ]->AsNumber() : 0;
                kEyeWeight[ 2 ] = ( *pExpData )[ 1 ]->AsNumber() < 0 ? -( *pExpData )[ 1 ]->AsNumber() : 0;
                kEyeWeight[ 3 ] = ( *pExpData )[ 1 ]->AsNumber() > 0 ?  ( *pExpData )[ 1 ]->AsNumber() : 0;
                for( int i = 0; i < kEyeWeight.Num(); ++i )
                {
                    const FName& strExpName = m_kLeftEyeExpressionNames[ i ];
                    double fWeight = kEyeWeight[ i ];
#if ENGINE_MINOR_VERSION > 23
                    FLiveLinkCurveElement kNewElement( strExpName, fWeight );
#else
                    FLiveLinkCurveElement kNewElement;
                    kNewElement.CurveName = strExpName;
                    kNewElement.CurveValue = fWeight;
#endif
                    kCurveElements.Add( kNewElement );
                }
            }
            if( pExpWeightRoot->TryGetArrayField( TEXT( "iClone_r_eye_data" ), pExpData ) )
            {
                TArray< double > kEyeWeight;
                kEyeWeight.Init( 0, m_kRightEyeExpressionNames.Num() );
                kEyeWeight[ 0 ] = ( *pExpData )[ 0 ]->AsNumber() < 0 ? -( *pExpData )[ 0 ]->AsNumber() : 0;
                kEyeWeight[ 1 ] = ( *pExpData )[ 0 ]->AsNumber() > 0 ? ( *pExpData )[ 0 ]->AsNumber() : 0;
                kEyeWeight[ 2 ] = ( *pExpData )[ 1 ]->AsNumber() < 0 ? -( *pExpData )[ 1 ]->AsNumber() : 0;
                kEyeWeight[ 3 ] = ( *pExpData )[ 1 ]->AsNumber() > 0 ? ( *pExpData )[ 1 ]->AsNumber() : 0;
                for( int i = 0; i < kEyeWeight.Num(); ++i )
                {
                    const FName& strExpName = m_kRightEyeExpressionNames[ i ];
                    double fWeight = kEyeWeight[ i ];
#if ENGINE_MINOR_VERSION > 23
                    FLiveLinkCurveElement kNewElement( strExpName, fWeight );
#else
                    FLiveLinkCurveElement kNewElement;
                    kNewElement.CurveName = strExpName;
                    kNewElement.CurveValue = fWeight;
#endif
                    kCurveElements.Add( kNewElement );
                }
            }
            if( pExpWeightRoot->TryGetArrayField( TEXT( "iClone_bone_data" ), pExpData ) )
            {
                TArray< double > kBoneWeight;
                kBoneWeight.Init( 0, m_kBonesExpressionNames.Num() );
                kBoneWeight[ 0 ] = ( *pExpData )[ RLJawZ ]->AsNumber();
                kBoneWeight[ 1 ] = ( *pExpData )[ RLJawY ]->AsNumber() < 0 ? -( *pExpData )[ RLJawY ]->AsNumber() : 0;
                kBoneWeight[ 2 ] = ( *pExpData )[ RLJawY ]->AsNumber() > 0 ?  ( *pExpData )[ RLJawY ]->AsNumber() : 0;
                kBoneWeight[ 3 ] = -( *pExpData )[ RLJawMoveY ]->AsNumber();
                kBoneWeight[ 4 ] = ( *pExpData )[ RLJawMoveX ]->AsNumber() < 0 ? -( *pExpData )[ RLJawMoveX ]->AsNumber() : 0;
                kBoneWeight[ 5 ] = ( *pExpData )[ RLJawMoveX ]->AsNumber() > 0 ?  ( *pExpData )[ RLJawMoveX ]->AsNumber() : 0;
                for( int i = 0; i < kBoneWeight.Num(); ++i )
                {
                    const FName& strExpName = m_kBonesExpressionNames[ i ];
                    double fWeight = kBoneWeight[ i ];
#if ENGINE_MINOR_VERSION > 23
                    FLiveLinkCurveElement kNewElement( strExpName, fWeight );
#else
                    FLiveLinkCurveElement kNewElement;
                    kNewElement.CurveName = strExpName;
                    kNewElement.CurveValue = fWeight;
#endif
                    kCurveElements.Add( kNewElement );
                }
            }
        }
    }
    if ( pViseme ) // 有Viseme 資料才處理
    {
        for ( int i = 1; i < pViseme->Num(); ++i )
        {
            // New Viseme
            const FName& strExpName = m_kVisemeNames[ i - 1 ];
            double fWeight = ( *pViseme )[ i ]->AsNumber();
#if ENGINE_MINOR_VERSION > 23
            FLiveLinkCurveElement kNewElement( strExpName, fWeight );
#else
            FLiveLinkCurveElement kNewElement;
            kNewElement.CurveName = strExpName;
            kNewElement.CurveValue = fWeight;
#endif
            kCurveElements.Add( kNewElement );
            // Old Viseme
#if ENGINE_MINOR_VERSION > 23
            FLiveLinkCurveElement kOldVisemeElement( m_kOldVisemeNames[ i - 1 ], fWeight );
#else
            FLiveLinkCurveElement kOldVisemeElement;
            kOldVisemeElement.CurveName = m_kOldVisemeNames[ i - 1 ];
            kOldVisemeElement.CurveValue = fWeight;
#endif
            kCurveElements.Add( kOldVisemeElement );
        }
    }
    m_pClient->PushSubjectData( m_kSourceGuid, kSubjectName, kSubjectFrame );
}

void FRLLiveLinkSource::ProcessPropData( const TSharedPtr<FJsonObject>& spDataRoot )
{
    for( TPair<FString, TSharedPtr<FJsonValue>>& kPropJsonField : spDataRoot->Values )
    {
        const TSharedPtr<FJsonObject> spProp = kPropJsonField.Value->AsObject();
        if( spProp )
        {
            FName strPropName( *kPropJsonField.Key );
            bool bCreateSubject = !m_kEncounteredSubjects.Contains( strPropName );

            const TArray<TSharedPtr<FJsonValue>>* pBoneArray = nullptr;
            spProp->TryGetArrayField( TEXT( "Bone" ), pBoneArray );

            // 檢查骨架個數是否與當前 Subject 數量相符，若不符則需重新建立 Subject 的骨架名稱和關係
#if ENGINE_MINOR_VERSION >= 23
            auto kAllSubjects = m_pClient->GetSubjects( true, false );
            FLiveLinkSkeletonStaticData* pSkeletonData = nullptr;
            for( auto kSubject : kAllSubjects )
            {
                if( kSubject.SubjectName == strPropName )
                {
                    auto kRole = m_pClient->GetSubjectRole( kSubject );
                    FLiveLinkSubjectFrameData kFrameData;
                    if( m_pClient->EvaluateFrame_AnyThread( strPropName, kRole, kFrameData ) )
                    {
                        pSkeletonData = kFrameData.StaticData.Cast<FLiveLinkSkeletonStaticData>();
                    }
                }
            }
            if( pSkeletonData && pBoneArray )
            {
                if( pSkeletonData->BoneNames.Num() != pBoneArray->Num() )
                {
                    bCreateSubject = true;
                }
            }
#else
            const FLiveLinkSubjectFrame* pSubjectFrame = m_pClient->GetSubjectData( strPropName );
            if( pSubjectFrame && pBoneArray )
            {
                if( pSubjectFrame->RefSkeleton.GetBoneNames().Num() != pBoneArray->Num() )
                {
                    bCreateSubject = true;
                }
            }
#endif
            // 建立Subject 的骨架名稱和關係
            if( bCreateSubject )
            {
                FLiveLinkRefSkeleton kSubjectRefSkeleton;
                TArray<FName> kBoneNames;
                if( pBoneArray )// 有Body的資料才處理
                {
                    kBoneNames.SetNumUninitialized( pBoneArray->Num() );
                    TArray<int32> kBoneParents;
                    kBoneParents.SetNumUninitialized( pBoneArray->Num() );

                    for( int nBoneIdx = 0; nBoneIdx < pBoneArray->Num(); ++nBoneIdx )
                    {
                        const TSharedPtr<FJsonValue>& spBone = ( *pBoneArray )[ nBoneIdx ];
                        const TSharedPtr<FJsonObject> spBoneObject = spBone->AsObject();

                        FString strBoneName;
                        if( spBoneObject->TryGetStringField( TEXT( "Name" ), strBoneName ) )
                        {
                            if( m_kBoneMap.Contains( strBoneName ) )
                            {
                                FString strUnrealBoneName = m_kBoneMap[ strBoneName ];
                                kBoneNames[ nBoneIdx ] = FName( *strUnrealBoneName );
                            }
                            else
                            {

                                kBoneNames[ nBoneIdx ] = FName( *( strBoneName.ToLower() ) );
                            }

                            // Bone 有在Mapping 目標內才處理Parent Index
                            FString strBoneParentName;
                            if( spBoneObject->TryGetStringField( TEXT( "ParentName" ), strBoneParentName ) )
                            {
                                if( m_kBoneMap.Contains( strBoneParentName ) )
                                {
                                    FString strUnrealName = m_kBoneMap[ strBoneParentName ];
                                    kBoneParents[ nBoneIdx ] = kBoneNames.IndexOfByKey( FName( *strUnrealName ) );
                                }
                                else
                                {
                                    // 代表此Bone 的Parent 不在Mapping 範圍
                                    kBoneParents[ nBoneIdx ] = nBoneIdx;
                                }
                            }
                            else
                            {
                                return; // Invalid Json Format
                            }
                        }
                        else
                        {
                            return; // Invalid Json Format
                        }
                    }
                    kBoneNames[ 0 ] = FName( *( kBoneNames[ 0 ].ToString() + TEXT( "_ue_root" ) ) );
                    kSubjectRefSkeleton.SetBoneNames( kBoneNames );
                    kSubjectRefSkeleton.SetBoneParents( kBoneParents );
                }

                m_pClient->PushSubjectSkeleton( m_kSourceGuid, strPropName, kSubjectRefSkeleton );
            }
            m_kEncounteredSubjects.Add( strPropName, true );

            FLiveLinkFrameData kSubjectFrame;
            TArray<FLiveLinkCurveElement>& kCurveElements = kSubjectFrame.CurveElements;
            TArray<FTransform>& kTransforms = kSubjectFrame.Transforms;

            if( pBoneArray )// 有Body的資料才處理 Bone 的Trasnform
            {
                kTransforms.SetNumUninitialized( pBoneArray->Num() );

                for( int nBoneIdx = 0; nBoneIdx < pBoneArray->Num(); ++nBoneIdx )
                {
                    const TSharedPtr<FJsonValue>& Bone = ( *pBoneArray )[ nBoneIdx ];
                    const TSharedPtr<FJsonObject> BoneObject = Bone->AsObject();

                    const TArray<TSharedPtr<FJsonValue>>* LocationArray;
                    FVector BoneLocation;

                    if( BoneObject->TryGetArrayField( TEXT( "Location" ), LocationArray )
                        && LocationArray->Num() == 3 ) // X, Y, Z
                    {
                        double X = ( *LocationArray )[ 0 ]->AsNumber();
                        double Y = ( *LocationArray )[ 1 ]->AsNumber();
                        double Z = ( *LocationArray )[ 2 ]->AsNumber();
                        BoneLocation = FVector( X, -Y, Z );
                    }
                    else
                    {
                        // Invalid Json Format
                        return;
                    }

                    const TArray<TSharedPtr<FJsonValue>>* RotationArray;
                    FQuat BoneQuat;
                    if( BoneObject->TryGetArrayField( TEXT( "Rotation" ), RotationArray )
                        && RotationArray->Num() == 4 ) // X, Y, Z, W
                    {
                        double X = ( *RotationArray )[ 0 ]->AsNumber();
                        double Y = ( *RotationArray )[ 1 ]->AsNumber();
                        double Z = ( *RotationArray )[ 2 ]->AsNumber();
                        double W = ( *RotationArray )[ 3 ]->AsNumber();
                        FQuat kTempQuat = FQuat( X, Y, Z, W );
                        FVector kVec = kTempQuat.Euler();
                        FVector kLeftVec = FVector( -kVec.X, kVec.Y, -kVec.Z );
                        BoneQuat = FQuat::MakeFromEuler( kLeftVec );
                    }
                    else
                    {
                        // Invalid Json Format
                        return;
                    }
                    auto kRTS = FTransform( BoneQuat, BoneLocation );
                    kTransforms[ nBoneIdx ] = kRTS;
                }
            }
            m_pClient->PushSubjectData( m_kSourceGuid, strPropName, kSubjectFrame );
        }
    }
}

void FRLLiveLinkSource::ProcessCameraData( const TSharedPtr<FJsonObject>& spDataRoot )
{
    for ( TPair<FString, TSharedPtr<FJsonValue>>& kCameraJsonField : spDataRoot->Values )
    {
        const TSharedPtr<FJsonObject> spCamera = kCameraJsonField.Value->AsObject();
        if ( spCamera )
        {
            //SetUp Camera First
            FName kCameraName( *kCameraJsonField.Key );
            bool bCreateSubject = !m_kEncounteredSubjects.Contains( kCameraName );
            if ( bCreateSubject )
            {
                FLiveLinkRefSkeleton kSubjectRefSkeleton;
                TArray<FName> kBoneNames;
                TArray<int32> kBoneParents;
                kBoneNames.Add( "root" );
                kBoneParents.Add( 0 );
                kSubjectRefSkeleton.SetBoneNames( kBoneNames );
                kSubjectRefSkeleton.SetBoneParents( kBoneParents );

                m_pClient->PushSubjectSkeleton( m_kSourceGuid, kCameraName, kSubjectRefSkeleton );
            }
            m_kEncounteredSubjects.Add( kCameraName, true );

            //Received Data
            const TArray<TSharedPtr<FJsonValue>>* pTransformData = nullptr;
            const TArray<TSharedPtr<FJsonValue>>* pRotationData = nullptr;
            if ( !spCamera->TryGetArrayField( TEXT( "Transform" ), pTransformData ) ||
                 !spCamera->TryGetArrayField( TEXT( "Rotation" ), pRotationData ) )
            {
                // Invalid Json Format
                return;
            }
            //POS
            float fPosX = ( *pTransformData )[ 0 ]->AsNumber();
            float fPosY = ( *pTransformData )[ 1 ]->AsNumber();
            float fPosZ = ( *pTransformData )[ 2 ]->AsNumber();
            FVector kCameraLocation = FVector( fPosX, -fPosY, fPosZ );

            //ROT
            float fRotX = ( *pRotationData )[ 0 ]->AsNumber();
            float fRotY = ( *pRotationData )[ 1 ]->AsNumber();
            float fRotZ = ( *pRotationData )[ 2 ]->AsNumber();
            float fRotW = ( *pRotationData )[ 3 ]->AsNumber();
            FQuat kCameraRotation = FQuat( fRotX, fRotY, fRotZ, fRotW );
            FVector kVec = kCameraRotation.Euler();
            FVector kLeftVec = FVector( -kVec.X, kVec.Y, -kVec.Z );
            kCameraRotation = FQuat::MakeFromEuler( kLeftVec );

            //Set Camera Rotation
            FTransform kCameraTransform = FTransform( kCameraRotation, kCameraLocation );
            FTransform kICToUE = FTransform( FQuat::MakeFromEuler( FVector( -90, -90, 0 ) ), FVector::ZeroVector );
            kCameraTransform = kICToUE * kCameraTransform;

            TMap<FName, FString> kCameraMap;
            //SetFocalLength
            FString strFocalLength = spCamera->GetStringField( TEXT( "FocalLength" ) );
            kCameraMap.Add( "FocalLength", strFocalLength );

            //SetFov
            FString strAngleView = spCamera->GetStringField( TEXT( "AngleView" ) );
            kCameraMap.Add( "AngleView", strAngleView );

            //Set DOF
            bool bEnable = spCamera->GetBoolField( TEXT( "Enable" ) );
            float fFocus = spCamera->GetNumberField( TEXT( "Focus" ) );
            float fRange = spCamera->GetNumberField( TEXT( "Range" ) );
            float fNearTransitionRegion = spCamera->GetNumberField( TEXT( "NearTransitionRegion" ) );
            float fFarTransitionRegion = spCamera->GetNumberField( TEXT( "FarTransitionRegion" ) );
            float fNearBlurScale = spCamera->GetNumberField( TEXT( "NearBlurScale" ) );
            float fFarBlurScale = spCamera->GetNumberField( TEXT( "FarBlurScale" ) );
            float fMinBlendDistance = spCamera->GetNumberField( TEXT( "MinBlendDistance" ) );
            float fCenterColorWeight = spCamera->GetNumberField( TEXT( "CenterColorWeight" ) );
            float fEdgeDecayPower = spCamera->GetNumberField( TEXT( "EdgeDecayPower" ) );
            kCameraMap.Add( "Enable", FString::SanitizeFloat( bEnable ) );
            kCameraMap.Add( "Focus", FString::SanitizeFloat( fFocus ) );
            kCameraMap.Add( "Range", FString::SanitizeFloat( fRange * 2.f ) );
            kCameraMap.Add( "NearTransitionRegion", FString::SanitizeFloat( fNearTransitionRegion * 2.f ) );
            kCameraMap.Add( "FarTransitionRegion", FString::SanitizeFloat( fFarTransitionRegion * 2.f ) );
            kCameraMap.Add( "NearBlurScale", FString::SanitizeFloat( fNearBlurScale * 4.44f ) );
            kCameraMap.Add( "FarBlurScale", FString::SanitizeFloat( fFarBlurScale * 4.44f ) );
            kCameraMap.Add( "MinBlendDistance", FString::SanitizeFloat( fMinBlendDistance ) );
            kCameraMap.Add( "CenterColorWeight", FString::SanitizeFloat( fCenterColorWeight ) );
            kCameraMap.Add( "EdgeDecayPower", FString::SanitizeFloat( fEdgeDecayPower ) );
            kCameraMap.Add( "FocusOffset", FString::SanitizeFloat( fRange * -1.f ) );

            //Set Screen Size
            FString strScreenWidth = spCamera->GetStringField( TEXT( "ScreenWidth" ) );
            FString strScreenHeight = spCamera->GetStringField( TEXT( "ScreenHeight" ) );
            float fAspectRatio = FCString::Atof( *strScreenWidth ) / FCString::Atof( *strScreenHeight );
            float fScreeHeight = 36.f / fAspectRatio;
            kCameraMap.Add( "ScreenWidth", "36" );
            kCameraMap.Add( "ScreenHeight", FString::SanitizeFloat( fScreeHeight ) );
            kCameraMap.Add( "AspectRatio", FString::SanitizeFloat( fAspectRatio ) );

            //Get Fov Setting
            int nFovType = spCamera->GetIntegerField( TEXT( "FitRenderRegionType" ) );

            //Set Sensor(Height/Width)
            float fFilmbackWidth = spCamera->GetNumberField( TEXT( "FilmbackWidth" ) );
            float fFilmbackHeight = spCamera->GetNumberField( TEXT( "FilmbackHeight" ) );
            float fSensorWidth = ( nFovType == 0 ) ? fFilmbackWidth : fFilmbackHeight * fAspectRatio;
            float fSensorHeight = ( nFovType == 1 ) ? fFilmbackHeight : fFilmbackWidth / fAspectRatio;
            float fSensorAspectRatio = fSensorWidth / fSensorHeight;
            kCameraMap.Add( "SensorWidth", FString::SanitizeFloat( fSensorWidth ) );
            kCameraMap.Add( "SensorHeight", FString::SanitizeFloat( fSensorHeight ) );

            //Set FocalLength
            float fCurrentFocalLength = FCString::Atof( *strFocalLength ) * fAspectRatio / fSensorAspectRatio;
            kCameraMap.Add( "CurrentFocalLength", FString::SanitizeFloat( fCurrentFocalLength ) );

            // Push subject data
            FLiveLinkFrameData kCameraFrameData;
            kCameraFrameData.Transforms.Add( kCameraTransform );
            kCameraFrameData.MetaData.StringMetaData = kCameraMap;
            m_pClient->PushSubjectData( m_kSourceGuid, kCameraName, kCameraFrameData );
        }
    }
}

void FRLLiveLinkSource::ProcessLightData( const TSharedPtr<FJsonObject>& spDataRoot )
{
    for ( const TPair<FString, TSharedPtr<FJsonValue>>& kLightJsonField : spDataRoot->Values )
    {
        const TSharedPtr<FJsonObject> spLight = kLightJsonField.Value->AsObject();
        if ( spLight )
        {
            FName kLightName( *kLightJsonField.Key );
            bool bCreateSubject = !m_kEncounteredSubjects.Contains( kLightName );
            // 建立 Subject 的骨架名稱和關係
            if ( bCreateSubject )
            {
                FLiveLinkRefSkeleton kSubjectRefSkeleton;
                TArray<FName> kBoneNames;
                TArray<int32> kBoneParents;

                kBoneNames.Add( "root" );
                kBoneParents.Add( 0 );
                kSubjectRefSkeleton.SetBoneNames( kBoneNames );
                kSubjectRefSkeleton.SetBoneParents( kBoneParents );
                m_pClient->PushSubjectSkeleton( m_kSourceGuid, kLightName, kSubjectRefSkeleton );
            }
            m_kEncounteredSubjects.Add( kLightName, true );

            // 解析收到的 light 資料
            const TArray<TSharedPtr<FJsonValue>>* pTransformData = nullptr;
            const TArray<TSharedPtr<FJsonValue>>* pRotationData  = nullptr;
            if ( !spLight->TryGetArrayField( TEXT( "Transform" ), pTransformData ) ||
                 !spLight->TryGetArrayField( TEXT( "Rotation" ), pRotationData ) )
            {
                // Invalid Json Format
                return;
            }

            // 處理 light Transform/Rotation 資料
            double fPosX = ( *pTransformData )[ 0 ]->AsNumber();
            double fPosY = ( *pTransformData )[ 1 ]->AsNumber();
            double fPosZ = ( *pTransformData )[ 2 ]->AsNumber();
            FVector kLightLocation = FVector( fPosX, -fPosY, fPosZ );

            double fRotX = ( *pRotationData )[ 0 ]->AsNumber();
            double fRotY = ( *pRotationData )[ 1 ]->AsNumber();
            double fRotZ = ( *pRotationData )[ 2 ]->AsNumber();
            double fRotW = ( *pRotationData )[ 3 ]->AsNumber();
            FQuat kLightRotation = FQuat( fRotX, fRotY, fRotZ, fRotW );
            FVector kVec = kLightRotation.Euler();
            FVector kLeftVec = FVector( -kVec.X, kVec.Y, -kVec.Z );
            kLightRotation = FQuat::MakeFromEuler( kLeftVec );

            FTransform kLightTransform = FTransform( kLightRotation, kLightLocation );
            FTransform kICToUE = FTransform( FQuat::MakeFromEuler( FVector( 0, -90, 0 ) ), FVector::ZeroVector );
            kLightTransform = kICToUE * kLightTransform;

            // 根據 light type 處理各屬性資料
            TMap<FName, FString> kLightMap;
            bool bActive = spLight->GetBoolField( TEXT( "Active" ) );
            kLightMap.Add( "Active", FString::SanitizeFloat( bActive ) );

            double fMultiplier = spLight->GetNumberField( TEXT( "Multiplier" ) );
            fMultiplier *= PI;
            kLightMap.Add( "Multiplier", FString::SanitizeFloat( fMultiplier ) );

            ELightType eLightType = static_cast< ELightType >( spLight->GetIntegerField( TEXT( "Type" ) ) );
            switch ( eLightType )
            {
                case ELightType::Directional:
                {
                    bool bCastShadow = spLight->GetBoolField( TEXT( "CastShadow" ) );
                    kLightMap.Add( "CastShadow", FString::SanitizeFloat( bCastShadow ) );
                    break;
                }
                case ELightType::Point:
                case ELightType::Spot:
                {
                    double fRange = spLight->GetNumberField( TEXT( "Range" ) );
                    kLightMap.Add( "Range", FString::SanitizeFloat( fRange ) );
                    if( eLightType == ELightType::Spot )
                    {
                        bool   bCastShadow = spLight->GetBoolField( TEXT( "CastShadow" ) );
                        kLightMap.Add( "CastShadow", FString::SanitizeFloat( bCastShadow ) );
                        FString strAngle = spLight->GetStringField( TEXT( "Angle" ) );
                        FString strFalloff = spLight->GetStringField( TEXT( "Falloff" ) );
                        FString strAttenuation = spLight->GetStringField( TEXT( "Attenuation" ) );
                        double fAngle = FCString::Atod( *strAngle );
                        double fFalloff = FCString::Atod( *strFalloff );
                        double fAttenuation = FCString::Atod( *strAttenuation );
                        double fInnerCone = fAngle * 0.5 * ( 100 - fFalloff ) / 100 + ( fAttenuation - 26 ) / 74;
                        double fOuterCone = fAngle * 0.5 + ( fAttenuation - 26 ) * 3 / -74;
                        kLightMap.Add( "InnerCone", FString::SanitizeFloat( fInnerCone ) );
                        kLightMap.Add( "OuterCone", FString::SanitizeFloat( fOuterCone ) );
                    }

                    // for tube
                    FString strSourceRadius = "";
                    if( spLight->TryGetStringField( TEXT( "SourceRadius" ), strSourceRadius ) )
                    {
                        double fSourceRadius = FCString::Atod( *strSourceRadius );
                        kLightMap.Add( "SourceRadius", FString::SanitizeFloat( fSourceRadius ) );
                    }
                    FString strSoftSourceRadius = "";
                    if( spLight->TryGetStringField( TEXT( "SoftSourceRadius" ), strSoftSourceRadius ) )
                    {
                        double fSoftSourceRadius = FCString::Atod( *strSoftSourceRadius );
                        kLightMap.Add( "SoftSourceRadius", FString::SanitizeFloat( fSoftSourceRadius ) );
                    }
                    FString strSourceLength = "";
                    if( spLight->TryGetStringField( TEXT( "SourceLength" ), strSourceLength ) )
                    {
                        double fSourceLength = FCString::Atod( *strSourceLength );
                        kLightMap.Add( "SourceLength", FString::SanitizeFloat( fSourceLength ) );
                    }
                    break;
                }
                case ELightType::Rect:
                {
                    double fRange = spLight->GetNumberField( TEXT( "Range" ) );
                    kLightMap.Add( "Range", FString::SanitizeFloat( fRange ) );
                    FString strSourceWidth = spLight->GetStringField( TEXT( "SourceWidth" ) );
                    FString strSourceHeight = spLight->GetStringField( TEXT( "SourceHeight" ) );
                    FString strBarnDoorAngle = spLight->GetStringField( TEXT( "BarnDoorAngle" ) );
                    double fSourceWidth = FCString::Atod( *strSourceWidth );
                    double fSourceHeight = FCString::Atod( *strSourceHeight );
                    double fBarnDoorAngle = FCString::Atod( *strBarnDoorAngle );
                    kLightMap.Add( "SourceHeight", FString::SanitizeFloat( fSourceWidth ) );
                    kLightMap.Add( "SourceWidth", FString::SanitizeFloat( fSourceHeight ) );
                    kLightMap.Add( "BarnDoorAngle", FString::SanitizeFloat( fBarnDoorAngle ) );
                    break;
                }
                default:
                    break;
            }

            TArray<FLiveLinkCurveElement> kLightColor;
            const TArray<TSharedPtr<FJsonValue>>* pColorData = nullptr;
            if ( spLight->TryGetArrayField( TEXT( "Color" ), pColorData ) )
            {
                for ( int32 i = 0; i < pColorData->Num(); ++i )
                {
                    ELightColor eLightColor = static_cast< ELightColor >( i );
                    FName kColorName = LightColorMap[ eLightColor ];
                    double fColorValue = ( *pColorData )[ i ]->AsNumber();
                    FLiveLinkCurveElement kNewElement;
                    kNewElement.CurveName = kColorName;
                    kNewElement.CurveValue = fColorValue;
                    kLightColor.Add( kNewElement );
                }
            }

            // Push subject data
            FLiveLinkFrameData kLightFrameData;
            kLightFrameData.Transforms.Add( kLightTransform );
            kLightFrameData.MetaData.StringMetaData = kLightMap;
            kLightFrameData.CurveElements = kLightColor;
            m_pClient->PushSubjectData( m_kSourceGuid, kLightName, kLightFrameData );
        }
    }
}

void FRLLiveLinkSource::ResetEncounteredSubjectsMap()
{
    for ( auto& kSubject : m_kEncounteredSubjects )
    {
        kSubject.Value = false;
    }
}

void FRLLiveLinkSource::RemoveUnusedSubjects()
{
    TSet<FName> kUnusedSubjects;
    for ( auto& kSubject : m_kEncounteredSubjects )
    {
        if ( !kSubject.Value )
        {
            m_pClient->ClearSubject( kSubject.Key );
            kUnusedSubjects.Add( kSubject.Key );
        }
    }

    for ( auto& kSubjectName : kUnusedSubjects )
    {
        if ( m_kEncounteredSubjects.Contains( kSubjectName ) )
        {
            m_kEncounteredSubjects.Remove( kSubjectName );
        }
    }
}

void FRLLiveLinkSource::ClearAllSubjects()
{
    ResetEncounteredSubjectsMap();
    RemoveUnusedSubjects();
}

#undef LOCTEXT_NAMESPACE