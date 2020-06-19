/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "BonePose.h"
#include "LiveLinkRemapAsset.h"
#include "Engine/EngineTypes.h"
#include "Engine/SkeletalMesh.h"

#include "DxyzLiveLinkRetargetAsset.generated.h"

// Runtime warnings
#define NALL_BONES (1<<0)
#define NALL_CURVES (1<<1)

// Blueprint warnings
#define NOFOUND (1<<0)
#define UNMAPPED (1<<1)
#define TWOMAPPED (1<<2)

struct FLiveLinkAnimationFrameData;

enum class DxyzLLErrCode : uint8 {
    NO_ERR = 0,
    LIVELINK_ERR = 1,               // Should never happen
    MESH_ERR = 2,                   // The Skeletal Mesh differs between Grabber and the RetargetAsset
    ESC_ERR = 3                     // The ESC differs between Grabber and the RetargetAsset
};

UENUM(BlueprintType)
enum class DxyzAxis : uint8
{
    XYZ UMETA(DisplayName = "X.Y.Z"),
    XZY UMETA(DisplayName = "X.Z.Y"),
    YZX UMETA(DisplayName = "Y.Z.X"),
    YXZ UMETA(DisplayName = "Y.X.Z"),
    ZYX UMETA(DisplayName = "Z.Y.X"),
    ZXY UMETA(DisplayName = "Z.X.Y")
};

typedef struct DxyzRuntimeCalib
{
	FString rotOffsetStr;
	FRotator rotOffset;
	bool rLock;
	bool pLock;
	bool yLock;
	bool rClamp;
	FVector2D rClampVal;
	bool pClamp;
	FVector2D pClampVal;
	bool yClamp;
	FVector2D yClampVal;
	bool rMult;
	int rPercent;
	bool pMult;
	int pPercent;
	bool yMult;
	int yPercent;

	DxyzRuntimeCalib()
		: rotOffsetStr(FRotator(0, 0, 0).ToString())
		, rotOffset(0, 0, 0)
		, rLock(false)
		, pLock(false)
		, yLock(false)
		, rClamp(false)
		, rClampVal(-360.f, 360.f)
		, pClamp(false)
		, pClampVal(-360.f, 360.f)
		, yClamp(false)
		, yClampVal(-360.f, 360.f)
		, rMult(false)
		, rPercent(100)
		, pMult(false)
		, pPercent(100) 
		, yMult(false)
		, yPercent(100) {};
} DxyzRuntimeCalib;

USTRUCT(BlueprintType)
struct FBoneTransSettings
{
    GENERATED_BODY()

    /** Enable translation */
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones")
        bool Enabled;

    /** X percentage of translation value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "0", ClampMax = "200"), meta = (NoResetToDefault))
        int XPercent;

    /** Enable X clamping */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        bool XClamp;

    /** X minimal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        float XMinClamp;

    /** X maximal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        float XMaxClamp;

    /** Y percentage of translation value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "0", ClampMax = "200"), meta = (NoResetToDefault))
        int YPercent;
    
    /** Enable Y clamping */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        bool YClamp;

    /** Y minimal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        float YMinClamp;

    /** Y maximal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        float YMaxClamp;

    /** Z percentage of translation value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "0", ClampMax = "200"), meta = (NoResetToDefault))
        int ZPercent;

    /** Enable Z clamping */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        bool ZClamp;

    /** Z minimal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        float ZMinClamp;

    /** Z maximal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        float ZMaxClamp;

    FBoneTransSettings()
        : Enabled(true)
        , XPercent(100)
        , XClamp(false)
        , XMinClamp(-1.0)
        , XMaxClamp(1.0)
        , YPercent(100)
        , YClamp(false)
        , YMinClamp(-1.0)
        , YMaxClamp(1.0)
        , ZPercent(100)
        , ZClamp(false)
        , ZMinClamp(-1.0)
        , ZMaxClamp(1.0) {};
};

USTRUCT(BlueprintType)
struct FBoneRotaSettings
{
    GENERATED_BODY()

    /** Enable rotation */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones")
        bool Enabled;

    /** X percentage of rotation value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "0", ClampMax = "200"), meta = (NoResetToDefault))
        int XPercent;

    /** Enable X clamping */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault), meta = (NoResetToDefault))
        bool XClamp;

    /** X minimal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "-360", ClampMax = "360"), meta = (NoResetToDefault))
        float XMinClamp;

    /** X maximal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "-360", ClampMax = "360"), meta = (NoResetToDefault))
        float XMaxClamp;

    /** Y percentage of rotation value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "0", ClampMax = "200"), meta = (NoResetToDefault))
        int YPercent;

    /** Enable Y clamping */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        bool YClamp;

    /** Y minimal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "-360", ClampMax = "360"), meta = (NoResetToDefault))
        float YMinClamp;

    /** Y maximal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "-360", ClampMax = "360"), meta = (NoResetToDefault))
        float YMaxClamp;

    /** Z percentage of rotation value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "0", ClampMax = "200"), meta = (NoResetToDefault))
        int ZPercent;

    /** Enable Z clamping */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (NoResetToDefault))
        bool ZClamp;

    /** Z minimal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "-360", ClampMax = "360"), meta = (NoResetToDefault))
        float ZMinClamp;

    /** Z maximal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz bones", meta = (ClampMin = "-360", ClampMax = "360"), meta = (NoResetToDefault))
        float ZMaxClamp;

    FBoneRotaSettings()
        : Enabled(true)
        , XPercent(100)
        , XClamp(false)
        , XMinClamp(-359.0)
        , XMaxClamp(359.0)
        , YPercent(100)
        , YClamp(false)
        , YMinClamp(-359.0)
        , YMaxClamp(359.0)
        , ZPercent(100)
        , ZClamp(false)
        , ZMinClamp(-359.0)
        , ZMaxClamp(359.0) {};
};

USTRUCT(BlueprintType)
struct FDxyzBoneSettings
{
    GENERATED_BODY()

    // Used to know if this is the first bone mapped, this field will be hidden by customization
        UPROPERTY(VisibleAnywhere, Category = "Dxyz mapping settings")
        bool IsDefault;

    // Contains the remap name, this field will be hidden by customization
    UPROPERTY(EditAnywhere, Category = "Dxyz mapping settings", meta = (NoResetToDefault))
        FString RemapName;

    /** Enable translation for this bone in the final pose */
    UPROPERTY(EditAnywhere, Category = "Dxyz mapping settings", meta = (NoResetToDefault))
        FBoneTransSettings ApplyTranslation;

    /** Enable rotation for this bone in the final pose */
    UPROPERTY(EditAnywhere, Category = "Dxyz mapping settings", meta = (NoResetToDefault))
        FBoneRotaSettings ApplyRotation;

    FDxyzBoneSettings() 
        : IsDefault(false)
        , RemapName()
        , ApplyTranslation()
        , ApplyRotation() {};
};

USTRUCT(BlueprintType)
struct FDxyzBoneModify
{
    GENERATED_BODY()

    // This field will be hidden by customization
    UPROPERTY(VisibleAnywhere, Category = "Dxyz mapping settings")
        bool HasError;

    // Source Bone name, will become the name of the property in customization
    UPROPERTY(VisibleAnywhere, Category = "Dxyz mapping settings")
        FString BoneName; 

    /** Enable animation for this bone in the final pose */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
        uint32 bOverride_EnableBone : 1;

    /** Additionnal bones to map to the ESC bone */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (editcondition = "bOverride_EnableBone"), NoClear, EditFixedSize, Category = "Dxyz mapping settings")
        TArray<FDxyzBoneSettings> MappedBones;

    /** Field to find the id of the bone inside the ESC after sorting */
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Dxyz mapping settings")
        int32 ESCBoneIdx;

    FDxyzBoneModify()
        : HasError(false)
        , BoneName()
        , bOverride_EnableBone(1)
        , MappedBones()
        , ESCBoneIdx(-1) {};

};

USTRUCT(BlueprintType)
struct FTranslationSettings
{
    GENERATED_BODY()

    /** Invert X axis for head position. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool HeadInvertXAxis;

    /** Invert Y axis for head position. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool HeadInvertYAxis;

    /** Invert Z axis for head position. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool HeadInvertZAxis;

    /** Change the translation scale. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        float HeadPositionScale;

    /** Invert X axis for bones position. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool InvertXAxis;

    /** Invert Y axis for bones position. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool InvertYAxis;

    /** Invert Z axis for bones position. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool InvertZAxis;

    /** Change the translation scale. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        float PositionScale;

    FTranslationSettings()
        : HeadInvertXAxis(false)
        , HeadInvertYAxis(false)
        , HeadInvertZAxis(false)
        , HeadPositionScale(1.0)
        , InvertXAxis(false)
        , InvertYAxis(true)
        , InvertZAxis(false)
        , PositionScale(1.0) {};
};

USTRUCT(BlueprintType)
struct FRotationSettings
{
    GENERATED_BODY()

    /** Invert X axis for head rotation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool HeadInvertXAxis;

    /** Invert Y axis for head rotation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool HeadInvertYAxis;

    /** Invert Z axis for head rotation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool HeadInvertZAxis;

    /** Invert X axis for bones rotation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool InvertXAxis;

    /** Invert Y axis for bones rotation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool InvertYAxis;

    /** Invert Z axis for bones rotation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool InvertZAxis;

    FRotationSettings() 
        : HeadInvertXAxis(false)
        , HeadInvertYAxis(false)
        , HeadInvertZAxis(false)
        , InvertXAxis(false)
        , InvertYAxis(true)
        , InvertZAxis(true) {};
};

USTRUCT(BlueprintType)
struct FDxyzCurveSettings
{
    GENERATED_BODY()

    // Used to know if this is the first curve mapped, this field will be hidden by customization
    UPROPERTY(VisibleAnywhere, Category = "Dxyz mapping settings", meta = (NoResetToDefault))
    bool IsDefault;

    // Contains the remap name, this field will be hidden by customization
    UPROPERTY(EditAnywhere, Category = "Dxyz mapping settings", meta = (NoResetToDefault))
        FString RemapName;

    /** Blendshape multiplier */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz mapping settings")
        float ValueMultiplier;

    /** Enable clamping */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz mapping settings", meta = (NoResetToDefault))
        bool Clamp;

    /** Minimal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz mapping settings", meta = (NoResetToDefault), meta = (ClampMin = "0", ClampMax = "1"))
        float MinClamp;

    /** Maximal value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz mapping settings", meta = (NoResetToDefault), meta = (ClampMin = "0", ClampMax = "1"))
        float MaxClamp;

    FDxyzCurveSettings()
        : IsDefault(false)
        , RemapName()
        , ValueMultiplier(0)
        , Clamp(false)
        , MinClamp(0.0)
        , MaxClamp(1.0) {};
};

USTRUCT(BlueprintType)
struct FDxyzCurveModify
{
    GENERATED_BODY()

    // This field will be hidden by customization
    UPROPERTY(VisibleAnywhere, Category = "Dxyz mapping settings")
        bool HasError;

    // Source Curve name, will become the name of the property in customization
    UPROPERTY(VisibleAnywhere, Category = "Dxyz mapping settings")
        FString CurveName;

    /** Enable animation for this morph target in the final pose */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))
        uint32 bOverride_EnableCurve : 1;

    /** Additionnal curves to map to the ESC curve */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (editcondition = "bOverride_EnableCurve"), NoClear, EditFixedSize, Category = "Dxyz mapping settings")
        TArray<FDxyzCurveSettings> MappedCurves;

    /** Field to find the id of the bone inside the ESC after sorting */
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Dxyz mapping settings")
        int32 ESCCurveIdx;

    FDxyzCurveModify()
        : HasError(false)
        , CurveName()
        , bOverride_EnableCurve(1)
        , MappedCurves()
        , ESCCurveIdx(-1) {};
};

UCLASS(Blueprintable)
class DXYZLIVELINKPLUGIN_API UDxyzLiveLinkRetargetAsset : public ULiveLinkRetargetAsset
{
    GENERATED_BODY()

public:

    // Used to write the yellow warning, this field will be hidden by customization
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Dxyz mapping settings")
        FString WarningBonesText; 

    // Used to write the yellow warning, this field will be hidden by customization
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Dxyz mapping settings")
        FString WarningCurvesText;

    /** The SkeletalMesh associated with this mapping */
    UPROPERTY(EditAnywhere, Category = "Dxyz mapping settings", meta = (AllowedClasses = "SkeletalMesh"))
        USkeletalMesh* SkeletalMesh;

    /** The ESC file that will be streamed by Dynamixyz Grabber software */
    UPROPERTY(EditAnywhere, Category = "Dxyz mapping settings", meta = (FilePathFilter = "esc", DisplayName = "ESC file path"))
        FFilePath ESCPath;

    // Only used to send the list of bones contained in the skeletal mesh to the customization class to populate a combo box
    UPROPERTY(VisibleAnywhere, Category = "BoneMapping", meta = (NoResetToDefault))
        FString MeshBoneNames;

    /** Enable all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "BoneMapping", meta = (NoResetToDefault))
        bool EnableAllBones;

    /** Disable all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "BoneMapping", meta = (NoResetToDefault))
        bool DisableAllBones;

    /** Enable all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "BoneMapping", meta = (NoResetToDefault))
        bool EnableAllTranslations;

    /** Disable all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "BoneMapping", meta = (NoResetToDefault))
        bool DisableAllTranslations;
    
    /** Enable all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "BoneMapping", meta = (NoResetToDefault))
        bool EnableAllRotations;

    /** Disable all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "BoneMapping", meta = (NoResetToDefault))
        bool DisableAllRotations;

    /** Bones mapping between the SkeletalMesh and the ESC file */
    UPROPERTY(EditAnywhere, Category = "BoneMapping", NoClear, EditFixedSize)
        TArray<FDxyzBoneModify> ListOfBones;

    // Only used to send the list of curves contained in the skeletal mesh to the customization class to populate a combo box
    UPROPERTY(VisibleAnywhere, Category = "MorphTargets", meta = (NoResetToDefault))
        FString MeshCurveNames;

    /** Enable all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "MorphTargets", meta = (NoResetToDefault))
        bool EnableAllMorphTargets;

    /** Disable all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "MorphTargets", meta = (NoResetToDefault))
        bool DisableAllMorphTargets;

    /** Boost all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "MorphTargets", meta = (NoResetToDefault))
        bool BoostAllMorphTargets;

    /** Ease all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "MorphTargets", meta = (NoResetToDefault))
        bool EaseAllMorphTargets;

    /** Reset all the morph targets in the final pose */
    UPROPERTY(EditAnywhere, Category = "MorphTargets", meta = (NoResetToDefault))
        bool ResetAllMorphTargets;

    /** Morph targets contained in the ESC file */
    UPROPERTY(EditAnywhere, Category = "MorphTargets", NoClear, EditFixedSize)
        TArray<FDxyzCurveModify> ListOfMorphTargets;

    /** Apply same rotation value for both eyes */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        bool UseAverageEyeRotation;

    /** Swap head axis according to your rig export. By default,
    Dynamixyz Grabber sends X.Y.Z coordinates in world space. This setting allows you to
    map each axis to another axis. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        DxyzAxis HeadAxisSwapping;

    /** Swap the other bones axis. By default,
    Dynamixyz Grabber sends X.Y.Z coordinates in parent bone space. This setting allows you to
    map each axis to another axis. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        DxyzAxis BonesAxisSwapping;

    /** Axis properties for translation */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        FTranslationSettings TranslationSettings;

    /** Axis properties for rotation */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration")
        FRotationSettings RotationSettings;

    /** Display the face animation FPS in the logs */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dxyz stream configuration", meta = (DisplayName = "Log Face Animation FPS"))
        bool LogFPS;

public:
    UDxyzLiveLinkRetargetAsset();
    virtual ~UDxyzLiveLinkRetargetAsset();
	virtual void BuildPoseFromAnimationData(float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose);
	virtual void BuildPoseAndCurveFromBaseData(float DeltaTime, const FLiveLinkBaseStaticData* InBaseStaticData, const FLiveLinkBaseFrameData* InBaseFrameData, FCompactPose& OutPose, FBlendedCurve& OutCurve);

    static FString sBoneSearchFilter;
    static FString sCurveSearchFilter;

#if WITH_EDITOR
protected:
    virtual void PostEditChangeProperty(struct FPropertyChangedEvent& e);
    virtual void PostEditChangeChainProperty(struct FPropertyChangedChainEvent& e);
#endif

private:
    bool _compareEscAndSource(const TArray<FName>& SourceBoneNames, const TArray<FName>& SourceCurveNames);
    void _buildPropertiesList();
    bool _parseESC(const FString Path);
    bool _doBonesMatching(bool iCurvesOnly=false);
    bool _readJsonFile();
    bool _buildJsonFile();
    int32 _checkBoneAlreadySelected(const FString& InBoneName, int32 InBoneIdx, int32 InRemapIdx);
    int32 _checkCurveAlreadySelected(const FString& InCurveName, int32 InCurveIdx, int32 InRemapIdx);
    void _checkWarnings();

    int32 _findExactMatchingBoneNameInMesh(const FString& InBoneName);
    int32 _findExactMatchingCurveNameInMesh(const FString& InCurveName);

    // Secondary mapping
    int32 _findMatchingBoneNameWithoutPrefixInMesh(const FString& InBoneName, TArray<FString>& iAlreadyMapped);
    int32 _findSimilarMatchingBoneNameInMesh(const FString& InBoneName, TArray<FString>& iAlreadyMapped);
    int32 _findSimilarMatchingCurveNameInMesh(const FString& InCurveName, TArray<FString>& iAlreadyMapped);

    FQuat _updateRotationWithSettings(FRotator InRotation, bool IsHead);
    FVector _updateTranslationWithSettings(FVector InTranslation, bool IsHead);

    virtual void PostLoad();
    virtual void PreSave(const class ITargetPlatform * TargetPlatform);

private:
    TArray<FString> mEscCurveNames;
    TArray<FString> mEscCurveGroupNames;
    TArray<FString> mEscBoneNames;
    TArray<FString> mMeshBoneNames;
    TArray<FString> mMeshCurveNames;
    TArray<int32>   mIncompatibleShapes;

    DxyzLLErrCode mErrCode;
    int mRTMappingState; //Used to log if the bone and curve mappings are ok

    int mBoneMappingState;
    int mCurveMappingState;

    int mNbTreatedFrame;
    FDateTime mStartTime;
    double mFPS;

	DxyzRuntimeCalib mHeadRuntimeCalib;
	DxyzRuntimeCalib mEyesRuntimeCalib;

	bool mRetargetingIsOn;
};
