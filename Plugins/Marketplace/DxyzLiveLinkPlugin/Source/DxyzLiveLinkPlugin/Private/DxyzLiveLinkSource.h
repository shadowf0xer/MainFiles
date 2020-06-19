/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "HAL/ThreadSafeBool.h"
#include "HAL/RunnableThread.h"
#include "HAL/Runnable.h"
#include "ILiveLinkSource.h"

#include "DxyzLiveLinkSourceSettings.h"

struct FDxyzChannel;
class UDxyzPrevizClientListener;

struct SourceSettings
{
    int id;
    FString addr;
    bool useCustomName;
    bool showLogs;
    FString subjectName;
	FGuid guid;
	FLiveLinkAnimationFrameData animFrameData;

    SourceSettings()
        : id(-1)
        , addr()
        , useCustomName(false)
        , showLogs(true)
        , subjectName() 
	    , guid()
		, animFrameData() {};

    bool operator==(const SourceSettings& s2) const
    {
        return (id == s2.id
            && addr.Compare(s2.addr) == 0
            && useCustomName == s2.useCustomName
            && showLogs == s2.showLogs
            && subjectName.Compare(s2.subjectName) == 0
			&& guid.ToString().Compare(s2.guid.ToString()) == 0);
    }
};

class DXYZLIVELINKPLUGIN_API FDxyzLiveLinkSource : public ILiveLinkSource, public FRunnable
{

public:
    FDxyzLiveLinkSource(const FString& IpAdress, int Port, int iID=-1, FString iSubjectName = FString(), bool iShowLogs=true);
    virtual ~FDxyzLiveLinkSource();

protected:
    // FRunnable interface.
    virtual bool    Init();
    virtual uint32  Run();
    virtual void    Stop();
    virtual void    Exit();

public:
// ------- ILiveLinkSource interface
    virtual void InitializeSettings(ULiveLinkSourceSettings* Settings);
    virtual void ReceiveClient(ILiveLinkClient* InClient, FGuid InSourceGuid);

	virtual bool IsSourceStillValid() const { return bIsValid; };

    virtual bool RequestSourceShutdown();

	virtual TSubclassOf<ULiveLinkSourceSettings> GetSettingsClass() const;
    virtual void OnSettingsChanged(ULiveLinkSourceSettings* Settings, const FPropertyChangedEvent& PropertyChangedEvent);

    virtual FText GetSourceType() const { return mSourceType; }
    virtual FText GetSourceMachineName() const { return mSourceMachineName; }
    virtual FText GetSourceStatus() const { return mSourceStatus; }
// ------- end ILiveLinkSource interface

    // DxyzPrevizClientListener will notify source when it is connected
    void ConnectionEstablished(const TArray<FDxyzChannel>& iChanList, const FString& iEscName);

    void StartGettingCoef();
    void StopGettingCoef();

	void OnSourceRemoved(FGuid iGuid);

    void setConnected(bool iCo);
    bool isConnected() { return mIsConnected; };

    static TArray<SourceSettings> sSources;
    static bool SBuildJsonConfig();
    static bool SReadJsonConfig(bool iFirstTime=false);
    static bool SIsNameAlreadyAssigned(const FString& iName, int iCurrentID);
    static bool SIsAddrAlreadyAssigned(const FString& iAddr);
    static int SGetSourceTableIdById(int iId);
    static bool SRemoveSourceById(int iId);

private:
    bool _connectToDxyzAnimServer(FString IPAddress = "127.0.0.1", int32 Port = 5559);
    bool _disconnectFromDxyzAnimServer();
    bool _isConnectedToDxyzAnimServer();
    bool _isDxyzBlendshape(int32 ChannelIdx);
    bool _isDxyzBone(int32 ChannelIdx);
    
    /** Return the blendshape group from the given channel index (if there are identical names). */
    FString _getDxyzBlendshapeMayaGroup(int32 ChannelIdx);

    /** Return the blendshape name from the given channel index. */
    FString _getDxyzBlendshapeName(int32 ChannelIdx);

    /** Extract the blendshape coefficient from the given frame. */
    float _getDxyzBlendshapeCoeff(UDxyzAnimFrame* FrameToRead, int32 Channel);

    /** Gets the Channel Rotation used by this instance. */
    int32 _getDxyzChannelIndexFromEntityName(FString EntityName);

    /** Return the bone name from the given channel index. */
    FString _getDxyzBoneName(int32 ChannelIdx);

    /** Extract the bone position from the given frame */
    FVector _getDxyzBonePosition(UDxyzAnimFrame* FrameToRead, int32 BoneChannel);

    /** Extract the bone rotation from the given frame. */
    FRotator _getDxyzBoneRotation(UDxyzAnimFrame* FrameToRead, int32 BoneChannel);

	/** Extract the timecode from the given frame. */
	FString _getDxyzTimeCode(UDxyzAnimFrame* FrameToRead);

	/** Extract the timecode from the given frame. */
	FQualifiedFrameTime _getDxyzTimeCodeUEFormat(UDxyzAnimFrame* FrameToRead);

private:
    FRunnableThread* mThread;
    FThreadSafeCounter mAnimAvailable;
    bool mIsRunning;

    ILiveLinkClient* mClient;

    // Our identifier in LiveLink
    FGuid mSourceGuid;

    FText mSourceType;
    FText mSourceMachineName;
    FText mSourceStatus;

    // Current Validity of Source
    FThreadSafeBool bIsValid;

    TWeakObjectPtr<UDxyzPrevizClientListener> mListener;
    FCriticalSection        mMutex;
    FCriticalSection        mChan_mtx;
    TArray<FDxyzChannel>    mChanList;
    TArray<int32>           mBonesChanList;
    TArray<int32>           mBlendshapeChanList;
    int32                   mHeadSolverIdx;
    int32                   mEye1SolverIdx;
    int32                   mEye2SolverIdx;
    TArray<int32>           mIncompatibleShapes;

    TWeakObjectPtr<UDxyzAnimFrame> mAnimFrame;

    UDxyzLiveLinkSourceSettings* mSettings;

    bool mIsConnected;
    bool mIsTryingToConnect;

    FString mIPAdress;
    int mPort;
    FString mInitialSubjectName;
    FString mCurrentSubjectName;

    int mId;
    bool mLoadedFromFile;

    int mNbTreatedFrame;
    double mFPS;

    static int sNumberOfThreads;
};