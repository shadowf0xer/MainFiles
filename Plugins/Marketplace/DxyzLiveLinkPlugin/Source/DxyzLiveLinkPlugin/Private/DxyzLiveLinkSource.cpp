/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzLiveLinkSource.h"

#include "DxyzPrevizClientListener.h"
#include "Internationalization/Regex.h"
#include "Features/IModularFeatures.h"
#include "Misc/FileHelper.h"
#include "ILiveLinkClient.h"
#include "Misc/App.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Roles/LiveLinkAnimationRole.h"

int FDxyzLiveLinkSource::sNumberOfThreads = 0;
TArray<SourceSettings> FDxyzLiveLinkSource::sSources = TArray<SourceSettings>();

FDxyzLiveLinkSource::FDxyzLiveLinkSource(const FString& IpAdress, int Port, int iID, FString iSubjectName, bool iShowLogs)
    : mThread(nullptr)
	, mIsRunning(false)
	, mSourceType()
	, mSourceMachineName()
	, mSourceStatus(FText::FromString("Connecting..."))
	, mHeadSolverIdx(-1)
	, mEye1SolverIdx(-1)
	, mEye2SolverIdx(-1)
	, mIncompatibleShapes()
	, mSettings(nullptr)
	, mIsConnected(false)
	, mIsTryingToConnect(true)
	, mIPAdress(IpAdress)
    , mPort(Port)
	, mInitialSubjectName()
	, mCurrentSubjectName()
	, mId(iID)
	, mLoadedFromFile(iID != -1)
    , mNbTreatedFrame(0)
    , mFPS(0.0f)
{
    // Instantiate an animation frame, that will be passed to the previzListener.
    mAnimFrame = NewObject<UDxyzAnimFrame>(UDxyzAnimFrame::StaticClass());

    mListener = NewObject<UDxyzPrevizClientListener>(UDxyzPrevizClientListener::StaticClass());
    mListener->AddToRoot();
    mListener->setSemaphore(&mAnimAvailable);

    // Avoid garbage collection.
    mAnimFrame->AddToRoot();

	FString vAddr = FString::Format(TEXT("{0}:{1}"), { *IpAdress, Port });
    mSourceMachineName = FText::FromString(*vAddr);

    // Compute source id
    if (mId == -1)
    {
        if (sSources.Num() == 0)
        {
            mId = 0;
        }
        else
        {
            int vMaxID = -1;
            for (int i = 0; i < sSources.Num(); ++i)
            {
                if (vMaxID < sSources[i].id)
                    vMaxID = sSources[i].id;
            }
            mId = vMaxID + 1;
        }
    }

    // If a subject name was provided from the dxyz file
    if (iSubjectName.IsEmpty())
        mCurrentSubjectName = FString::Format(TEXT("Subject_{0}"), { mId });
    else
        mCurrentSubjectName = iSubjectName;
    
    mInitialSubjectName = mCurrentSubjectName;

    if (SIsNameAlreadyAssigned(mCurrentSubjectName, mId))
    {
        // User chose an already existing subject name : reset it to default one
        FString vOldName = mCurrentSubjectName;
        mCurrentSubjectName = FString::Format(TEXT("Subject_{0}"), { mId });

        UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : The name '%s' is already assigned to another source. Renaming it to '%s'"),
            *vOldName, *mCurrentSubjectName);
    }

    FString vSourceType = FString::Format(TEXT("Grabber({0})"), { mId });
    if (mId == 0)
        vSourceType = "Grabber";
	mSourceType = FText::FromString(*vSourceType);

    SourceSettings vS;
    vS.id = mId;
    vS.addr = vAddr;
    vS.useCustomName = !iSubjectName.IsEmpty();
    vS.showLogs = iShowLogs;
    vS.subjectName = mCurrentSubjectName;
    sSources.Add(vS);

    UE_LOG(DxyzLog, Log, TEXT("[DxyzLiveLinkSource] - Info : Subject name is '%s'."), *mCurrentSubjectName);
}
FDxyzLiveLinkSource::~FDxyzLiveLinkSource()
{
    StopGettingCoef();

    if (mAnimFrame.IsValid())
        mAnimFrame->ConditionalBeginDestroy();

    if (nullptr != mThread)
    {
        mThread->Kill(true);
        delete mThread;
    }
}

void FDxyzLiveLinkSource::InitializeSettings(ULiveLinkSourceSettings* Settings)
{
    mSettings = Cast<UDxyzLiveLinkSourceSettings>(Settings);
    if (mSettings)
    {
        int vId = SGetSourceTableIdById(mId);
        mSettings->UseCustomName = sSources[vId].useCustomName;
        mSettings->ShowLogs = sSources[vId].showLogs;
        mSettings->CustomSubjectName = mCurrentSubjectName;

        if (mIncompatibleShapes.Num() > 0)
        {
            mSettings->WarningText = "The ESC contains non-unique blendshape names ! This ESC is likely to be incompatible with DxyzLiveLinkPlugin.";
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : %s"), *mSettings->WarningText);
        }
        else
        {
            mSettings->WarningText = "";
        }
    }
}

void FDxyzLiveLinkSource::ReceiveClient(ILiveLinkClient* InClient, FGuid InSourceGuid)
{
    mClient = InClient;
    mSourceGuid = InSourceGuid;

	mClient->OnLiveLinkSourceRemoved().AddRaw(this, &FDxyzLiveLinkSource::OnSourceRemoved);
	int vId = SGetSourceTableIdById(mId);
	sSources[vId].guid = mSourceGuid;

    bIsValid = true;
    mIsTryingToConnect = true;

    if(!mLoadedFromFile)
        SBuildJsonConfig();

    _connectToDxyzAnimServer(mIPAdress, mPort);
}

bool FDxyzLiveLinkSource::RequestSourceShutdown()
{
    bool vRes = _disconnectFromDxyzAnimServer();
	mClient->RemoveSubject_AnyThread(FLiveLinkSubjectKey(mSourceGuid, FName(*mCurrentSubjectName)));

    if (vRes)
        mClient = nullptr;
    
    bIsValid = false;

    return vRes;
}

TSubclassOf<ULiveLinkSourceSettings> FDxyzLiveLinkSource::GetSettingsClass() const
{
    return UDxyzLiveLinkSourceSettings::StaticClass();
}

void FDxyzLiveLinkSource::OnSettingsChanged(ULiveLinkSourceSettings* Settings, const FPropertyChangedEvent& PropertyChangedEvent)
{
    if (mSettings)
    {
        FName PropertyName = (PropertyChangedEvent.MemberProperty != NULL) ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None;
        if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkSourceSettings, CustomSubjectName)
            || PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkSourceSettings, UseCustomName))
        {
            if (mSettings->UseCustomName)
            {
                FRegexPattern vRegEx("^([A-Z_a-z0-9]|\\-|\\_|\\.|\\(|\\)|\\[|\\])+$");
                FRegexMatcher vMatcher(vRegEx, *mSettings->CustomSubjectName);

                if (!vMatcher.FindNext())
                {
                    UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : Subject name cannot contain special characters."));
                    mSettings->CustomSubjectName = mCurrentSubjectName;
                }
                else if (mSettings->CustomSubjectName.IsEmpty())
                {
                    UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : Subject cannot have an empty name."));
                    mSettings->CustomSubjectName = mCurrentSubjectName;
                }
                else if (SIsNameAlreadyAssigned(mSettings->CustomSubjectName, mId))
                {
                    UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : The name '%s' is already assigned to another source."), *mSettings->CustomSubjectName);
                    mSettings->CustomSubjectName = mCurrentSubjectName;
                }
                else
                {
                    FString vNewName = mSettings->CustomSubjectName;
                    if (vNewName.Compare(mCurrentSubjectName) != 0)
                    {
						mClient->RemoveSubject_AnyThread(FLiveLinkSubjectKey(mSourceGuid, FName(*mCurrentSubjectName)));
                        mCurrentSubjectName = mSettings->CustomSubjectName;

                        UE_LOG(DxyzLog, Log, TEXT("[DxyzLiveLinkSource] - Info : Subject name is now '%s'."), *mCurrentSubjectName);

                        if (mIsRunning)
                        {
                            StopGettingCoef();
                            StartGettingCoef();
                        }
                    }
                }
            }
            else
            {
                if (SIsNameAlreadyAssigned(mInitialSubjectName, mId))
                {
                    // ESC has the same name as a previous source : add the source id to the end
                    FString vOldName = mInitialSubjectName;
                    mInitialSubjectName = FString::Format(TEXT("{0}({1})"), { mInitialSubjectName, mId });

                    UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : The name '%s' is already assigned to another source. Renaming it to '%s'"),
                        *vOldName, *mInitialSubjectName);
                }

                FString vNewName = mInitialSubjectName;
                if (vNewName.Compare(mCurrentSubjectName) != 0)
                {
					mClient->RemoveSubject_AnyThread(FLiveLinkSubjectKey(mSourceGuid, FName(*mCurrentSubjectName)));
                    mCurrentSubjectName = mInitialSubjectName;

                    UE_LOG(DxyzLog, Log, TEXT("[DxyzLiveLinkSource] - Info : Subject name is now '%s'."), *mCurrentSubjectName);

                    if (mIsRunning)
                    {
                        StopGettingCoef();
                        StartGettingCoef();
                    }
                }
            }

            int vId = SGetSourceTableIdById(mId);
            sSources[vId].useCustomName = mSettings->UseCustomName;
            sSources[vId].subjectName = mCurrentSubjectName;
			SBuildJsonConfig();
        }
        if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkSourceSettings, ShowLogs))
        {
            int vId = SGetSourceTableIdById(mId);
            sSources[vId].showLogs = mSettings->ShowLogs;
            if(mListener.IsValid())
                mListener->setShowConnectionLogs(sSources[vId].showLogs);
			SBuildJsonConfig();
        }

		mSettings->ConnectionString = FString::Format(TEXT("IP=\"{0}\" Port=\"{1}\" "
			"SubjectName=\"{2}\" ShowLogs=\"{3}\""), { mIPAdress, mPort, mSettings->CustomSubjectName, mSettings->ShowLogs});
    }
}

void FDxyzLiveLinkSource::StartGettingCoef()
{
    if (!mIsRunning)
    {
        mIsRunning = true;

        // Create the connection thread.
        mThread = FRunnableThread::Create(
            this,
			*FString::Format(TEXT("UDxyzLiveLinkSource_{0}"), { sNumberOfThreads }),
            0,
            TPri_Normal
        );
        ++sNumberOfThreads;

        TArray<FName> vNames;
		FLiveLinkStaticDataStruct StaticDataStruct(FLiveLinkSkeletonStaticData::StaticStruct());
		FLiveLinkSkeletonStaticData* vSkeleton = StaticDataStruct.Cast<FLiveLinkSkeletonStaticData>();

        // Actually DxyzLiveLinkPlugin does not use bones indices as values are given in bone space,
        // but we need the FLiveLinkRefSkeleton to contain an array of indices to avoid assertion fail
        // when using Live Link Component in Blueprints. But we put every index at -1 to avoid having
        // a broken hierarchy
        TArray<int32> vIndices;

        for (int i = 0; i < mBonesChanList.Num(); ++i)
        {
            vNames.Add(FName(*_getDxyzBoneName(mBonesChanList[i])));
            vIndices.Add(-1);
        }

        vSkeleton->SetBoneNames(vNames);
        vSkeleton->SetBoneParents(vIndices);

		for (int i = 0; i < mBlendshapeChanList.Num(); ++i)
		{
			if (mIncompatibleShapes.Contains(mBlendshapeChanList[i]))
			{
				FString vRealName = _getDxyzBlendshapeName(mBlendshapeChanList[i]);
				FString vGroupName = _getDxyzBlendshapeMayaGroup(mBlendshapeChanList[i]);
				FString vNewName = FString::Format(TEXT("{0}({1})"), { *vRealName, *vGroupName });
				vSkeleton->PropertyNames.Add(FName(*vNewName));
			}
			else
			{
				vSkeleton->PropertyNames.Add(FName(*_getDxyzBlendshapeName(mBlendshapeChanList[i])));
			}
		}

		mClient->PushSubjectStaticData_AnyThread(FLiveLinkSubjectKey(mSourceGuid,
			FName(*mCurrentSubjectName)), ULiveLinkAnimationRole::StaticClass(), MoveTemp(StaticDataStruct));
    }
}

void FDxyzLiveLinkSource::StopGettingCoef()
{
    if (mIsRunning)
    {
        mIsRunning = false;
        mThread->WaitForCompletion();
    }
}

void FDxyzLiveLinkSource::setConnected(bool iCo)
{
    mIsConnected = iCo;
    if (!iCo)
    {
        mSourceStatus = FText::FromString("Disconnected");
        StopGettingCoef();
        mIsTryingToConnect = false;
		mClient->RemoveSubject_AnyThread(FLiveLinkSubjectKey(mSourceGuid, FName(*mCurrentSubjectName)));

    }
};

void FDxyzLiveLinkSource::OnSourceRemoved(FGuid iGuid)
{
	if (mSourceGuid == iGuid)
	{
		// We need to use this delegate to be sure the source was intentionnally removed by the user,
		// because RequestSourceShutdown is also called when the app is closing...
		SRemoveSourceById(mId);
		SBuildJsonConfig();
	}
}

bool FDxyzLiveLinkSource::Init()
{
    return true;
}

uint32	FDxyzLiveLinkSource::Run()
{
    FDateTime vNow = FDateTime::Now();
	int vId = SGetSourceTableIdById(mId);
	TArray<FTransform> Transforms;
	Transforms.SetNum(mBonesChanList.Num());

	TArray<float> vCurves;
	vCurves.SetNum(mBlendshapeChanList.Num());
	FLiveLinkFrameDataStruct FrameDataStruct;

    while (mIsRunning && bIsValid)
    {
        // second check
        if (!mIsRunning)
            return -1;

        if (mAnimAvailable.GetValue() != 0)
        {
            if (mListener->getDxyzAnimFrame(mAnimFrame.Get()))
            {
                for (int i = 0; i < mBonesChanList.Num(); ++i)
                {
                    FRotator vRot = _getDxyzBoneRotation(mAnimFrame.Get(), mBonesChanList[i]);
                    FVector vTrans = _getDxyzBonePosition(mAnimFrame.Get(), mBonesChanList[i]);
					Transforms[i].SetRotation(vRot.Quaternion());
					Transforms[i].SetTranslation(vTrans);
                }
                
                for (int i = 0; i < mBlendshapeChanList.Num(); ++i)
                {
					vCurves[i] = _getDxyzBlendshapeCoeff(mAnimFrame.Get(), mBlendshapeChanList[i]);
                }

				if(!FrameDataStruct.IsValid())
					FrameDataStruct.InitializeWith(FLiveLinkAnimationFrameData::StaticStruct(), nullptr);

				FLiveLinkAnimationFrameData* AnimationFrameData = FrameDataStruct.Cast<FLiveLinkAnimationFrameData>();
				if (nullptr != AnimationFrameData)
				{
					AnimationFrameData->Transforms = Transforms;
					AnimationFrameData->PropertyValues = vCurves;

					// Send solver head bone index to remap asset to ignore translation
					TMap<FName, FString> StringMetaData;
					StringMetaData.Add("head", FString::FromInt(mHeadSolverIdx));
					StringMetaData.Add("eye1", FString::FromInt(mEye1SolverIdx));
					StringMetaData.Add("eye2", FString::FromInt(mEye2SolverIdx));

					// Keep the old way to store timecode in case there is a problem with the framerate
					FString vString = _getDxyzTimeCode(mAnimFrame.Get());
					StringMetaData.Add("timecode", vString);

					// Compute FPS
					++mNbTreatedFrame;
					int vElapsed = (FDateTime::Now() - vNow).GetTotalMilliseconds();
					if (vElapsed >= 1000)
					{
						mFPS = ((float)mNbTreatedFrame / ((float)vElapsed / 1000.0f));
						mNbTreatedFrame = 0;
						vNow = FDateTime::Now();
					}

					StringMetaData.Add("fps", FString::SanitizeFloat(mFPS));

					AnimationFrameData->MetaData.StringMetaData = StringMetaData;
					AnimationFrameData->MetaData.SceneTime = _getDxyzTimeCodeUEFormat(mAnimFrame.Get());

					sSources[vId].animFrameData = *AnimationFrameData;

					mClient->PushSubjectFrameData_AnyThread(FLiveLinkSubjectKey(mSourceGuid,
						FName(*mCurrentSubjectName)), MoveTemp(FrameDataStruct));
				}
            }

            mAnimAvailable.Decrement();
        }
    }

    return 0;
}

void FDxyzLiveLinkSource::Stop()
{
}

void FDxyzLiveLinkSource::Exit()
{
}


void FDxyzLiveLinkSource::ConnectionEstablished(const TArray<FDxyzChannel>& iChanList, const FString& iEscName)
{
    // NOTE: do NOT try to access to mListener variable in this method, it 
    // will bring a race condition with the ConnectToDxyzAnimServer method.
    mChan_mtx.Lock();

    mBlendshapeChanList.Empty();
    mBonesChanList.Empty();
    mIncompatibleShapes.Empty();

    // Deep copy the list of channels.
    mChanList = iChanList;

    mHeadSolverIdx = -1;
    mEye1SolverIdx = -1;
    mEye2SolverIdx = -1;

    // Populate the list of blenshapes indexes.
    for (int32 i = 0; i < mChanList.Num(); i++)
    {
        if (mChanList[i].ClassName == "blendshapetarget")
            mBlendshapeChanList.Add(i);
        else if (mChanList[i].ClassName == "component")
            mBonesChanList.Add(i);

        // Save the head bone id
        if (mChanList[i].IsHead)
        {
            mHeadSolverIdx = mBonesChanList.Num() - 1;
        }
        // Save the eyes bones ids
        else if (mChanList[i].IsEye)
        {
            if(mEye1SolverIdx == -1)
                mEye1SolverIdx = mBonesChanList.Num() - 1;
            else
                mEye2SolverIdx = mBonesChanList.Num() - 1;
        }
    }

    mChan_mtx.Unlock();

    TMap<int32, FString> vNames;
    // Look for incompatible shapes (same names)
    for (int32 i = 0; i < mBlendshapeChanList.Num(); ++i)
    {
        FString vName = _getDxyzBlendshapeName(mBlendshapeChanList[i]);
        if (nullptr == vNames.FindKey(vName))
            vNames.Add(mBlendshapeChanList[i], vName);
        else
        {
            int vIdx = *vNames.FindKey(vName);
            if(!mIncompatibleShapes.Contains(vIdx))
                mIncompatibleShapes.Add(*vNames.FindKey(vName));
            mIncompatibleShapes.Add(mBlendshapeChanList[i]);
        }
    }

    if (mSettings)
    {
        if (mIncompatibleShapes.Num() > 0)
        {
            mSettings->WarningText = "The ESC contains non-unique blendshape names ! This ESC is likely to be incompatible with DxyzLiveLinkPlugin.";
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : %s"), *mSettings->WarningText);
        }
        else
            mSettings->WarningText = "";
    }

    int vId = SGetSourceTableIdById(mId);
    FString vOldName = *mCurrentSubjectName;

    if (!iEscName.IsEmpty())
    {
        if (!sSources[vId].useCustomName)
        {
            mCurrentSubjectName = iEscName;

            if (SIsNameAlreadyAssigned(mCurrentSubjectName, mId))
            {
                // ESC has the same name as a previous source : add the source id to the end
                vOldName = mCurrentSubjectName;
                mCurrentSubjectName = FString::Format(TEXT("{0}({1})"), { mCurrentSubjectName, mId });

                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : The name '%s' is already assigned to another source. Renaming it to '%s'"),
                    *vOldName, *mCurrentSubjectName);
            }
        }

        mInitialSubjectName = iEscName;
    }

    sSources[vId].subjectName = mCurrentSubjectName;

    if(mSettings)
        mSettings->CustomSubjectName = mCurrentSubjectName;

    if(vOldName.Compare(*mCurrentSubjectName) != 0)
        UE_LOG(DxyzLog, Log, TEXT("[DxyzLiveLinkSource] - Info : Subject name is now '%s'."), *mCurrentSubjectName);

    mSourceStatus = FText::FromString("Connected");
    mIsConnected = true;
    mIsTryingToConnect = false;
    StartGettingCoef();
}

bool FDxyzLiveLinkSource::_connectToDxyzAnimServer(FString IPAddress, int32 Port)
{
    FIPv4Address ip;
    if (!FIPv4Address::Parse(IPAddress, ip))
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzLiveLinkSource] - Error : IP and/or port can't be parsed"));
        return false;
    }

    FIPv4Endpoint grabberAddr(ip, Port);

    int vId = SGetSourceTableIdById(mId);
    mListener->setShowConnectionLogs(sSources[vId].showLogs);

    // Launch Previz client connection procedure.
    mListener->connectToPrevizServer(grabberAddr, this);

    return true;
}

bool FDxyzLiveLinkSource::_disconnectFromDxyzAnimServer()
{
    StopGettingCoef();

    if (mListener != nullptr)
    {
        bool res = mListener->disconnectFromPrevizServer();

        mListener = nullptr;
    }

    return true;
}

bool  FDxyzLiveLinkSource::_isConnectedToDxyzAnimServer()
{
    if (!mListener.IsValid())
        return false;

    return (mListener->isConnected());
}

bool FDxyzLiveLinkSource::_isDxyzBlendshape(int32 ChannelIdx)
{
    if (!mListener.IsValid())               return false;
    if (!mListener->isClientRunning())		return false;
    if (ChannelIdx < 0)						return false;

    FScopeLock vScopeLock(&mChan_mtx);
    if (ChannelIdx >= mChanList.Num()) return false;

    return (mChanList[ChannelIdx].NbCoeffUsed == 1);
}

bool FDxyzLiveLinkSource::_isDxyzBone(int32 ChannelIdx)
{
    if (!mListener.IsValid())               return false;
    if (!mListener->isClientRunning())		return false;
    if (ChannelIdx < 0)						return false;

    FScopeLock vScopeLock(&mChan_mtx);
    if (ChannelIdx >= mChanList.Num()) return false;

    return (mChanList[ChannelIdx].NbCoeffUsed == 9);
}

FString FDxyzLiveLinkSource::_getDxyzBlendshapeMayaGroup(int32 ChannelIdx)
{
    if (!_isDxyzBlendshape(ChannelIdx)) return FString("Undefined");

    FScopeLock vScopeLock(&mChan_mtx);
    return mChanList[ChannelIdx].GroupName;
}

FString FDxyzLiveLinkSource::_getDxyzBlendshapeName(int32 iChannel)
{
    if (!_isDxyzBlendshape(iChannel)) return FString("Undefined");

    FScopeLock vScopeLock(&mChan_mtx);
    return mChanList[iChannel].Name;
}

float FDxyzLiveLinkSource::_getDxyzBlendshapeCoeff(UDxyzAnimFrame* FrameToRead, int32 Channel) {
    float Value = 0.0f;

    if (FrameToRead == nullptr)						return Value;
    if (FrameToRead->coeffBuffer == NULL)			return Value;
    if (!mListener.IsValid())                                 return Value;
    if (Channel < 0)								return Value;

    FScopeLock vScopeLock(&mChan_mtx);
    if (Channel >= mChanList.Num())	return Value;
    if (mChanList[Channel].NbCoeffUsed == 0) return Value;

    float* cBuf = (float*)FrameToRead->coeffBuffer;
    float value = cBuf[mChanList[Channel].CoeffBufferIndex];

    return value;
}

int32  FDxyzLiveLinkSource::_getDxyzChannelIndexFromEntityName(FString EntityName)
{
    int32 vReturnIndex = 0;
    if (!mListener.IsValid())           return vReturnIndex;
    if (!mListener->isClientRunning())return vReturnIndex;

    FScopeLock vScopeLock(&mChan_mtx);

    for (int32 i = 0; i < mChanList.Num(); i++)
    {
        if (EntityName == mChanList[i].Name)
        {
            vReturnIndex = i;
            break;
        }
    }

    return vReturnIndex;
}

FString FDxyzLiveLinkSource::_getDxyzBoneName(int32 ChannelIdx)
{
    if (!_isDxyzBone(ChannelIdx)) return FString("Undefined");

    FScopeLock vScopeLock(&mChan_mtx);
    return mChanList[ChannelIdx].Name;
}

FVector FDxyzLiveLinkSource::_getDxyzBonePosition(UDxyzAnimFrame* FrameToRead, int32 BoneChannel)
{
    FVector Position(0.0f, 0.0f, 0.0f);

    if (FrameToRead == nullptr)						return Position;
    if (FrameToRead->coeffBuffer == NULL)			return Position;
    if (!mListener.IsValid())                                 return Position;
    if (BoneChannel < 0)							return Position;

    FScopeLock vScopeLock(&mChan_mtx);
    if (BoneChannel >= mChanList.Num())	return Position;
    if (mChanList[BoneChannel].NbCoeffUsed == 1) return Position;

    float* cBuf = (float*)FrameToRead->coeffBuffer;

    float Tx = cBuf[mChanList[BoneChannel].CoeffBufferIndex];
    float Ty = cBuf[mChanList[BoneChannel].CoeffBufferIndex + 1];
    float Tz = cBuf[mChanList[BoneChannel].CoeffBufferIndex + 2];

    Position = FVector(Tx, Ty, Tz);
    return Position;
}

FRotator FDxyzLiveLinkSource::_getDxyzBoneRotation(UDxyzAnimFrame* FrameToRead, int32 BoneChannel)
{
    FRotator RelativeRotation(0.0f, 0.0f, 0.0f);

    if (FrameToRead == nullptr)						return RelativeRotation;
    if (FrameToRead->coeffBuffer == NULL)			return RelativeRotation;
    if (!mListener.IsValid())						return RelativeRotation;
    if (BoneChannel < 0)								return RelativeRotation;

    FScopeLock vScopeLock(&mChan_mtx);
    if (BoneChannel >= mChanList.Num())	return RelativeRotation;
    if (mChanList[BoneChannel].NbCoeffUsed == 1) return RelativeRotation;


    float *cBuf = (float*)FrameToRead->coeffBuffer;
    float Rx = cBuf[mChanList[BoneChannel].CoeffBufferIndex + 3];
    float Ry = cBuf[mChanList[BoneChannel].CoeffBufferIndex + 4];
    float Rz = cBuf[mChanList[BoneChannel].CoeffBufferIndex + 5];

    RelativeRotation = FRotator::MakeFromEuler(FVector(Rx, Ry, Rz));

    return RelativeRotation;
}

FString FDxyzLiveLinkSource::_getDxyzTimeCode(UDxyzAnimFrame* FrameToRead)
{
    FString timeCode = FString("00:00:00:00");

    if (FrameToRead == nullptr)	return timeCode;

    unsigned int *TCBuffer = FrameToRead->TCBuffer;
    timeCode = FString::Printf(TEXT("%02i:%02i:%02i:%02i"), TCBuffer[0], TCBuffer[1], TCBuffer[2], TCBuffer[3]);

    return timeCode;
}

FQualifiedFrameTime FDxyzLiveLinkSource::_getDxyzTimeCodeUEFormat(UDxyzAnimFrame* FrameToRead)
{
	if (FrameToRead == nullptr)	return FQualifiedFrameTime();
	
	const FFrameRate FrameRate = FApp::GetTimecodeFrameRate();
	unsigned int *TCBuffer = FrameToRead->TCBuffer;
	FTimecode Timecode(TCBuffer[0], TCBuffer[1], TCBuffer[2], TCBuffer[3], false);

	return FQualifiedFrameTime(Timecode.ToFrameNumber(FrameRate), FrameRate);
}

bool FDxyzLiveLinkSource::SBuildJsonConfig()
{
    // Save source in the Sources.dxyz file
    FString vConfPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()), FString("DxyzSaved"));
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*vConfPath))
    {
        PlatformFile.CreateDirectory(*vConfPath);

        if (!PlatformFile.DirectoryExists(*vConfPath))
        {
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : Failed to create Dynamixyz source config folder."));
            return false;
        }
    }

    FString OutputString;
    TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);

    TSharedPtr<FJsonObject> JsonRootObject = MakeShareable(new FJsonObject());
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (int i = 0; i < sSources.Num(); ++i)
    {
        TArray<FString> vParsed;
        sSources[i].addr.ParseIntoArray(vParsed, TEXT(":"), true);

        FString vIp = vParsed[0];
        FString vPort = vParsed[1];
        FString vSubjectName = sSources[i].useCustomName ? sSources[i].subjectName : "";

        TSharedPtr<FJsonObject> JsonSourceObject = MakeShareable(new FJsonObject());
        JsonSourceObject->SetStringField("id", FString::FromInt(sSources[i].id));
        JsonSourceObject->SetStringField("ip", vIp);
        JsonSourceObject->SetStringField("port", vPort);
        JsonSourceObject->SetStringField("show_logs", sSources[i].showLogs ? "true" : "false");
        JsonSourceObject->SetStringField("custom_subject_name", vSubjectName);

        TSharedRef< FJsonValueObject > JsonValue = MakeShareable(new FJsonValueObject(JsonSourceObject));
        JsonArray.Add(JsonValue);
    }

    JsonRootObject->SetArrayField("sources", JsonArray);

    FJsonSerializer::Serialize(JsonRootObject.ToSharedRef(), Writer);

    FString vFile = FPaths::Combine(vConfPath, FString("Sources.dxyz"));
    if (!FFileHelper::SaveStringToFile(OutputString, *vFile))
    {
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : Failed to save Dynamixyz source config file."));
            return false;
    }

    return true;
}

bool FDxyzLiveLinkSource::SReadJsonConfig(bool iFirstTime)
{
    // In some cases this function fails because it is called too early and LiveLink has not been initialized yet
    // There is a second call at the end of the engine initialisation. With the bool iFirstTime we ensure the errors/warnings
    // will be displayed only if the second call fails

    // Get sources from the Sources.dxyz file
    FString vConfPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()), FString("DxyzSaved"));
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*vConfPath))
    {
        if(!iFirstTime)
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : No Dynamixyz LiveLink config file was found."));
        return false;
    }

    FString vFilePath = FPaths::Combine(vConfPath, FString("Sources.dxyz"));

    FString JsonString;
    if (!FFileHelper::LoadFileToString(JsonString, *vFilePath))
    {
        // For retrocompatibility, rename json in dxyz if found
        FString vFromName = FString("Sources.json");
        FString vFromFilePath = FPaths::Combine(vConfPath, vFromName);
        PlatformFile.MoveFile(*vFilePath, *vFromFilePath);

        if (!FFileHelper::LoadFileToString(JsonString, *vFilePath))
        {
            if (!iFirstTime)
                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : Could not open Dynamixyz LiveLink config file."));
            return false;
        }
    }

    if (IModularFeatures::Get().IsModularFeatureAvailable(ILiveLinkClient::ModularFeatureName))
    {
        ILiveLinkClient* LiveLinkClient = &IModularFeatures::Get().GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName);
        if (!LiveLinkClient)
        {
            if (!iFirstTime)
                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : Could not find LiveLink module while trying to load Dynamixyz LiveLink config file."));
            return false;
        }

        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
        TSharedRef< TJsonReader<TCHAR> > JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

        if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
        {
            TArray<TSharedPtr<FJsonValue>> Sources = JsonObject->GetArrayField("sources");
            for (int i = 0; i < Sources.Num(); ++i)
            {
                TSharedPtr<FJsonObject> vSourceObject = Sources[i]->AsObject();
                if (vSourceObject.IsValid())
                {
                    int vSourceID = FCString::Atoi(*vSourceObject->GetStringField("id"));
                    FString vIP = vSourceObject->GetStringField("ip");
                    int vPort = FCString::Atoi(*vSourceObject->GetStringField("port"));
                    bool vShowLogs = vSourceObject->GetStringField("show_logs") == "true" ? true : false;

                    // For retrocompatibility, activate logs if old file version detected
                    if (!vSourceObject->HasField("show_logs"))
                        vShowLogs = true;

                    FString vSubjectName = vSourceObject->GetStringField("custom_subject_name");
                    
                    // For retrocompatibility, override subject name if old file version detected
                    if (!vSourceObject->HasField("custom_subject_name"))
                        vSubjectName = FString::Format(TEXT("Subject_{0}"), { vSourceID });

                    FIPv4Address test;
                    if (!FIPv4Address::Parse(vIP, test))
                    {
                        if (!iFirstTime)
                            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Error : IP and/or port can't be parsed for source %d"), vSourceID);
                        return false;
                    }
					FString vAddr = FString::Format(TEXT("{0}:{1}"), { *vIP, vPort });

                    if (!SIsAddrAlreadyAssigned(vAddr))
                    {
                        TSharedPtr<FDxyzLiveLinkSource> NewSource = MakeShareable(new FDxyzLiveLinkSource(vIP, vPort, vSourceID, vSubjectName, vShowLogs));
                        LiveLinkClient->AddSource(NewSource);
                    }
                    else
                    {
                        if (!iFirstTime)
                            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Error : This source was already loaded."));
                        return false;
                    }
                }
            }
        }
        else
        {
            if (!iFirstTime)
                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkSource] - Warning : Could not deserialize Dynamixyz LiveLink config file."));
            return false;
        }
    }
    else
    {
        if(!iFirstTime)
            UE_LOG(DxyzLog, Error, TEXT("[DxyzLiveLinkSource] - Error : Live Link Module could not be found."));
        return false;
    }

    return true;
}

bool FDxyzLiveLinkSource::SIsNameAlreadyAssigned(const FString& iName, int iCurrentID)
{
    for (int i = 0; i < sSources.Num() && iCurrentID != i; ++i)
    {
        if (sSources[i].subjectName.Compare(iName, ESearchCase::IgnoreCase) == 0)
            return true;
    }

    return false;
}

int FDxyzLiveLinkSource::SGetSourceTableIdById(int iId)
{
    int vIdInTable = -1;
    for (int i = 0; i < sSources.Num(); ++i)
    {
        if (sSources[i].id == iId)
            vIdInTable = i;
    }

    check(vIdInTable > -1);
    return vIdInTable;
}

bool FDxyzLiveLinkSource::SRemoveSourceById(int iId)
{
    int vIdInTable = SGetSourceTableIdById(iId);
    const SourceSettings vS = sSources[vIdInTable];
    int res = sSources.Remove(vS);

    return res > 0;
}

bool FDxyzLiveLinkSource::SIsAddrAlreadyAssigned(const FString& iAddr)
{
    for (int i = 0; i < sSources.Num(); ++i)
    {
        if (sSources[i].addr.Compare(iAddr) == 0)
            return true;
    }

    return false;
}