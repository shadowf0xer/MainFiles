/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzLiveLinkRetargetAsset.h"

#include "Dom/JsonObject.h"
#include "Animation/MorphTarget.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Engine/Blueprint.h"
#include "XmlFile.h"
#include "Roles/LiveLinkAnimationTypes.h"

// TODO FJU : change this to a property to avoid it to be shared between instances
FString UDxyzLiveLinkRetargetAsset::sBoneSearchFilter = FString();
FString UDxyzLiveLinkRetargetAsset::sCurveSearchFilter = FString();

UDxyzLiveLinkRetargetAsset::UDxyzLiveLinkRetargetAsset()
    : MeshBoneNames()
    , EnableAllBones(false)
	, DisableAllBones(false)
	, EnableAllTranslations(false)
	, DisableAllTranslations(false)
	, EnableAllRotations(false)
	, DisableAllRotations(false)
    , MeshCurveNames()
	, EnableAllMorphTargets(false)
	, DisableAllMorphTargets(false)
	, BoostAllMorphTargets(false)
	, EaseAllMorphTargets(false)
	, ResetAllMorphTargets(false)
	, UseAverageEyeRotation(false)
	, HeadAxisSwapping(DxyzAxis::XYZ)
    , BonesAxisSwapping(DxyzAxis::XYZ)
    , LogFPS(false)
    , mErrCode(DxyzLLErrCode::NO_ERR)
    , mRTMappingState(0)
    , mBoneMappingState(0)
    , mCurveMappingState(0)
    , mNbTreatedFrame(0)
    , mFPS(0.0f)
	, mHeadRuntimeCalib()
	, mEyesRuntimeCalib()
	, mRetargetingIsOn(true)
{
    mStartTime = FDateTime::Now();
}
UDxyzLiveLinkRetargetAsset::~UDxyzLiveLinkRetargetAsset()
{
}

void UDxyzLiveLinkRetargetAsset::PostLoad()
{
    Super::PostLoad();
    
    if (!_readJsonFile())
        return;

    // If there is a SkeletalMesh and a ESC, but the lists are empty, then parse the ESC
    if (ListOfBones.Num() == 0 && ListOfMorphTargets.Num() == 0)
        _parseESC(ESCPath.FilePath);

    // Get the remapped bones names to fill the combo box
    if (mMeshBoneNames.Num() == 0)
    {
        FReferenceSkeleton Skel = SkeletalMesh->RefSkeleton;
        for (int i = 0; i < Skel.GetNum(); ++i)
        {
            mMeshBoneNames.Add(*Skel.GetBoneName(i).ToString());
        }
    }
    // Get the remapped curves names to fill the combo box
    if (mMeshCurveNames.Num() == 0)
    {
        TArray<UMorphTarget*> vCurves = SkeletalMesh->MorphTargets;
        for (int i = 0; i < vCurves.Num(); ++i)
        {
            mMeshCurveNames.Add(*vCurves[i]->GetName());
        }
    }

    mMeshBoneNames.Sort();
    mMeshCurveNames.Sort();

    MeshBoneNames = FString::Join(mMeshBoneNames, *FString(";"));
    MeshCurveNames = FString::Join(mMeshCurveNames, *FString(";"));

    _checkWarnings();
}

void UDxyzLiveLinkRetargetAsset::PreSave(const class ITargetPlatform * TargetPlatform)
{
    Super::PreSave(TargetPlatform);
    
    // Save the blueprint in JSON
    _buildJsonFile();
}

void UDxyzLiveLinkRetargetAsset::_buildPropertiesList()
{
    // Save the ids of the entities in the ESC to retreive them later

    TMap<FString, int32> vBoneNamesToIds;
    TMap<FString, int32> vCurveNamesToIds;

    for (int i = 0; i < mEscBoneNames.Num(); ++i)
        vBoneNamesToIds.Add(mEscBoneNames[i], i);

    for (int i = 0; i < mEscCurveNames.Num(); ++i)
        vCurveNamesToIds.Add(mEscCurveNames[i], i);

    mEscBoneNames.Sort();
    mEscCurveNames.Sort();

    // Fill the list of bones

    ListOfBones.Empty();
    ListOfBones.SetNum(mEscBoneNames.Num());

    for (int i = 0; i < mEscBoneNames.Num(); ++i)
    {
        ListOfBones[i].BoneName = mEscBoneNames[i];
        ListOfBones[i].ESCBoneIdx = vBoneNamesToIds[mEscBoneNames[i]];
        ListOfBones[i].MappedBones.SetNum(1);
		ListOfBones[i].bOverride_EnableBone = 1;
        ListOfBones[i].MappedBones[0].IsDefault = true;
    }

    // Fill the list of curves

    ListOfMorphTargets.Empty();
    ListOfMorphTargets.SetNum(mEscCurveNames.Num());

    for (int i = 0; i < mEscCurveNames.Num(); ++i)
    {
        ListOfMorphTargets[i].CurveName = mEscCurveNames[i];
        ListOfMorphTargets[i].ESCCurveIdx = vCurveNamesToIds[mEscCurveNames[i]];
        ListOfMorphTargets[i].MappedCurves.SetNum(1);
        ListOfMorphTargets[i].MappedCurves[0].IsDefault = true;
		ListOfMorphTargets[i].bOverride_EnableCurve = 1;
        ListOfMorphTargets[i].HasError = false;
    }
}

bool UDxyzLiveLinkRetargetAsset::_parseESC(const FString Path)
{
    mEscCurveNames.Empty();
    mEscBoneNames.Empty();
    mEscCurveGroupNames.Empty();
    mIncompatibleShapes.Empty();

    if (!Path.IsEmpty())
    {
        FXmlFile* ESCFile = new FXmlFile(Path);
        if (ESCFile->IsValid())
        {
            FXmlNode* Root = ESCFile->GetRootNode();
            if (Root)
            {
                const FXmlNode* Next = Root->GetFirstChildNode();
                while (Next)
                {
                    if (Next->GetTag() == "entity")
                    {
                        if (Next->GetAttribute("class") == "component")
                            mEscBoneNames.Add(Next->GetAttribute("name"));

                        else if (Next->GetAttribute("class") == "blendshapetarget")
                        {
                            int first = Next->GetAttribute("name").Find("[");
                            int last = Next->GetAttribute("name").Find("]");

                            int firstWithoutConteneur = Next->GetAttribute("name").Find(".");
                            if (firstWithoutConteneur > first)
                                first = firstWithoutConteneur;

                            FString vName = Next->GetAttribute("name").Mid(first + 1, (last - first) - 1);
                            FString vGroupName = Next->GetAttribute("name").Mid(0, first);

                            // Doublon
                            if (mEscCurveNames.Contains(vName))
                            {
                                int vIdx;
                                mEscCurveNames.Find(vName, vIdx);

                                if (!mIncompatibleShapes.Contains(vIdx))
                                {
                                    // Add first item
                                    mIncompatibleShapes.Add(vIdx);
                                }
                                // Add this item
                                mIncompatibleShapes.Add(mEscCurveNames.Num());
                            }
                            mEscCurveNames.Add(vName);
                            mEscCurveGroupNames.Add(vGroupName);
                        }

                        Next = Next->GetNextNode();
                    }
                    else
                    {
                        Next = Next->GetFirstChildNode();
                    }
                }
            }
        }
        else
        {
            WarningBonesText = "Unable to load the provided ESC.";
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Error : Unable to load the provided ESC (%s)"), *ESCFile->GetLastError());
            return false;
        }

        for (int i = 0; i < mIncompatibleShapes.Num(); ++i)
        {
            mEscCurveNames[mIncompatibleShapes[i]] = FString::Format(TEXT("{0}({1})"),
            { *mEscCurveNames[mIncompatibleShapes[i]], *mEscCurveGroupNames[mIncompatibleShapes[i]] });
        }

        return true;
    }
    return false;
}

bool UDxyzLiveLinkRetargetAsset::_doBonesMatching(bool iCurvesOnly)
{
    if (!iCurvesOnly)
    {
        TArray<FString> vMappedBones;
        mMeshBoneNames.Sort();

        // 1. Fill exact names first
        for (int i = 0; i < mEscBoneNames.Num(); ++i)
        {
            int32 vIdx = _findExactMatchingBoneNameInMesh(mEscBoneNames[i]);
            if (vIdx != -1 && ListOfBones[i].bOverride_EnableBone == 1)
            {
                ListOfBones[i].MappedBones[0].RemapName = mMeshBoneNames[vIdx];
                vMappedBones.Add(mMeshBoneNames[vIdx]);
            }
        }

        // 2.  Fill exact names without prefix
        for (int i = 0; i < mEscBoneNames.Num(); ++i)
        {
            if (ListOfBones[i].MappedBones[0].RemapName.IsEmpty())
            {
                int32 vIdx = _findMatchingBoneNameWithoutPrefixInMesh(mEscBoneNames[i], vMappedBones);
                if (vIdx != -1 && ListOfBones[i].bOverride_EnableBone == 1)
                {
                    ListOfBones[i].MappedBones[0].RemapName = mMeshBoneNames[vIdx];
                    vMappedBones.Add(mMeshBoneNames[vIdx]);
                }
            }
        }

        // 3.  Fill similar names
        for (int i = 0; i < mEscBoneNames.Num(); ++i)
        {
            if (ListOfBones[i].MappedBones[0].RemapName.IsEmpty())
            {
                if (ListOfBones[i].bOverride_EnableBone == 1)
                {
                    int32 vIdx = _findSimilarMatchingBoneNameInMesh(mEscBoneNames[i], vMappedBones);
                    if (vIdx != -1)
                    {
                        ListOfBones[i].MappedBones[0].RemapName = mMeshBoneNames[vIdx];
                        vMappedBones.Add(mMeshBoneNames[vIdx]);
                    }
                    else
                    {
                        ListOfBones[i].HasError = true;
                    }
                }
            }
        }

        // Fill the list of mesh bones to populate the combo box
        MeshBoneNames = FString::Join(mMeshBoneNames, *FString(";"));
    }

    // ----------------------- Curves ----------------------- //

    TArray<FString> vMappedCurves;
    mMeshCurveNames.Sort();

    // 1. Fill exact names first
    for (int i = 0; i < mEscCurveNames.Num(); ++i)
    {
        int32 vIdx = _findExactMatchingCurveNameInMesh(mEscCurveNames[i]);
        if (vIdx != -1 && ListOfMorphTargets[i].bOverride_EnableCurve == 1)
        {
            ListOfMorphTargets[i].MappedCurves[0].RemapName = mMeshCurveNames[vIdx];
            vMappedCurves.Add(mMeshCurveNames[vIdx]);
        }
    }

    // 2. Fill similar names
    for (int i = 0; i < mEscCurveNames.Num(); ++i)
    {
        if (ListOfMorphTargets[i].MappedCurves[0].RemapName.IsEmpty())
        {
            if (ListOfMorphTargets[i].bOverride_EnableCurve == 1)
            {
                int32 vIdx = _findSimilarMatchingCurveNameInMesh(mEscCurveNames[i], vMappedCurves);
                if (vIdx != -1)
                {
                    ListOfMorphTargets[i].MappedCurves[0].RemapName = mMeshCurveNames[vIdx];
                    vMappedCurves.Add(mMeshCurveNames[vIdx]);
                }
                else
                {
                    ListOfMorphTargets[i].HasError = true;
                }
            }
        }
    }

    // Fill the list of mesh morph targets to populate the combo box
    MeshCurveNames = FString::Join(mMeshCurveNames, *FString(";"));

    _checkWarnings();

    return true;
}

bool UDxyzLiveLinkRetargetAsset::_readJsonFile()
{
    FString vConfPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()), FString("DxyzSaved"));
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*vConfPath))
    {
        UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : No Dynamixyz config folder was found."));
        return false;
    }

    FString vBPName = *GetClass()->GetName();
    vBPName.RemoveAt(vBPName.Len() - 2, 2);

	FString vName = FString::Format(TEXT("{0}.dxyz"), { *vBPName });
    FString vFilePath = FPaths::Combine(vConfPath, vName);

    FString JsonString;
    if (!FFileHelper::LoadFileToString(JsonString, *vFilePath))
    {
        //For retrocompatibility, rename json to dxyz if found
        FString vFromName = FString::Format(TEXT("{0}.json"), { *vBPName });
        FString vFromFilePath = FPaths::Combine(vConfPath, vFromName);
        PlatformFile.MoveFile(*vFilePath, *vFromFilePath);

        if (!FFileHelper::LoadFileToString(JsonString, *vFilePath))
        {
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : Could not open Dynamixyz remap config file '%s'."), *vFilePath);
            return false;
        }
    }

    TSharedPtr<FJsonObject> JsonRootObject = MakeShareable(new FJsonObject());
    TSharedRef< TJsonReader<TCHAR> > JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

    if (FJsonSerializer::Deserialize(JsonReader, JsonRootObject))
    {
        mEscCurveNames.Empty();
        mEscBoneNames.Empty();

        // Bones
        ListOfBones.Empty();
        TArray<TSharedPtr<FJsonValue>> ListOfBonesArray = JsonRootObject->GetArrayField("bones");
        ListOfBones.SetNum(ListOfBonesArray.Num());
        for (int i = 0; i < ListOfBonesArray.Num(); ++i)
        {
            TSharedPtr<FJsonObject> BoneObject = ListOfBonesArray[i]->AsObject();
            if (BoneObject.IsValid())
            {
                ListOfBones[i].BoneName = BoneObject->GetStringField("name");
                mEscBoneNames.Add(ListOfBones[i].BoneName);
                ListOfBones[i].ESCBoneIdx = FCString::Atoi(*BoneObject->GetStringField("id"));
                ListOfBones[i].bOverride_EnableBone = BoneObject->GetStringField("enabled") == "true" ? 1 : 0;
                
                TArray<TSharedPtr<FJsonValue>> MappedArray = BoneObject->GetArrayField("mapped");
                ListOfBones[i].MappedBones.SetNum(MappedArray.Num());
                for (int j = 0; j < MappedArray.Num(); ++j)
                {
                    TSharedPtr<FJsonObject> MappedBoneObject = MappedArray[j]->AsObject();
                    ListOfBones[i].MappedBones[j].RemapName = MappedBoneObject->GetStringField("name");
                    ListOfBones[i].MappedBones[j].ApplyTranslation.Enabled = MappedBoneObject->GetStringField("translation") == "true";
                    ListOfBones[i].MappedBones[j].ApplyTranslation.XPercent = FCString::Atoi(*MappedBoneObject->GetStringField("Xtrans"));
                    if (MappedBoneObject->HasField("XminClampTrans"))
                    {
                        ListOfBones[i].MappedBones[j].ApplyTranslation.XClamp = true;
                        ListOfBones[i].MappedBones[j].ApplyTranslation.XMinClamp = FCString::Atof(*MappedBoneObject->GetStringField("XminClampTrans"));
                        ListOfBones[i].MappedBones[j].ApplyTranslation.XMaxClamp = FCString::Atof(*MappedBoneObject->GetStringField("XmaxClampTrans"));
                    }
                    ListOfBones[i].MappedBones[j].ApplyTranslation.YPercent = FCString::Atoi(*MappedBoneObject->GetStringField("Ytrans"));
                    if (MappedBoneObject->HasField("YminClampTrans"))
                    {
                        ListOfBones[i].MappedBones[j].ApplyTranslation.YClamp = true;
                        ListOfBones[i].MappedBones[j].ApplyTranslation.YMinClamp = FCString::Atof(*MappedBoneObject->GetStringField("YminClampTrans"));
                        ListOfBones[i].MappedBones[j].ApplyTranslation.YMaxClamp = FCString::Atof(*MappedBoneObject->GetStringField("YmaxClampTrans"));
                    }
                    ListOfBones[i].MappedBones[j].ApplyTranslation.ZPercent = FCString::Atoi(*MappedBoneObject->GetStringField("Ztrans"));
                    if (MappedBoneObject->HasField("ZminClampTrans"))
                    {
                        ListOfBones[i].MappedBones[j].ApplyTranslation.ZClamp = true;
                        ListOfBones[i].MappedBones[j].ApplyTranslation.ZMinClamp = FCString::Atof(*MappedBoneObject->GetStringField("ZminClampTrans"));
                        ListOfBones[i].MappedBones[j].ApplyTranslation.ZMaxClamp = FCString::Atof(*MappedBoneObject->GetStringField("ZmaxClampTrans"));
                    }
                    ListOfBones[i].MappedBones[j].ApplyRotation.Enabled = MappedBoneObject->GetStringField("rotation") == "true";
                    ListOfBones[i].MappedBones[j].ApplyRotation.XPercent = FCString::Atoi(*MappedBoneObject->GetStringField("Xrota"));
                    if (MappedBoneObject->HasField("XminClampRota"))
                    {
                        ListOfBones[i].MappedBones[j].ApplyRotation.XClamp = true;
                        ListOfBones[i].MappedBones[j].ApplyRotation.XMinClamp = FCString::Atof(*MappedBoneObject->GetStringField("XminClampRota"));
                        ListOfBones[i].MappedBones[j].ApplyRotation.XMaxClamp = FCString::Atof(*MappedBoneObject->GetStringField("XmaxClampRota"));
                    }
                    ListOfBones[i].MappedBones[j].ApplyRotation.YPercent = FCString::Atoi(*MappedBoneObject->GetStringField("Yrota"));
                    if (MappedBoneObject->HasField("YminClampRota"))
                    {
                        ListOfBones[i].MappedBones[j].ApplyRotation.YClamp = true;
                        ListOfBones[i].MappedBones[j].ApplyRotation.YMinClamp = FCString::Atof(*MappedBoneObject->GetStringField("YminClampRota"));
                        ListOfBones[i].MappedBones[j].ApplyRotation.YMaxClamp = FCString::Atof(*MappedBoneObject->GetStringField("YmaxClampRota"));
                    }
                    ListOfBones[i].MappedBones[j].ApplyRotation.ZPercent = FCString::Atoi(*MappedBoneObject->GetStringField("Zrota"));
                    if (MappedBoneObject->HasField("ZminClampRota"))
                    {
                        ListOfBones[i].MappedBones[j].ApplyRotation.ZClamp = true;
                        ListOfBones[i].MappedBones[j].ApplyRotation.ZMinClamp = FCString::Atof(*MappedBoneObject->GetStringField("ZminClampRota"));
                        ListOfBones[i].MappedBones[j].ApplyRotation.ZMaxClamp = FCString::Atof(*MappedBoneObject->GetStringField("ZmaxClampRota"));
                    }
                    if (j == 0)
                        ListOfBones[i].MappedBones[j].IsDefault = true;
                    else
                        ListOfBones[i].MappedBones[j].IsDefault = false;
                }
            }
        }

        bool vOldVersion = false;
        // Morph targets
        ListOfMorphTargets.Empty();
        TArray<TSharedPtr<FJsonValue>> ListOfCurvesArray = JsonRootObject->GetArrayField("morphtargets");
        ListOfMorphTargets.SetNum(ListOfCurvesArray.Num());
        for (int i = 0; i < ListOfCurvesArray.Num(); ++i)
        {
            TSharedPtr<FJsonObject> CurveObject = ListOfCurvesArray[i]->AsObject();
            if (CurveObject.IsValid())
            {
                ListOfMorphTargets[i].CurveName = CurveObject->GetStringField("name");
                mEscCurveNames.Add(ListOfMorphTargets[i].CurveName);
                ListOfMorphTargets[i].ESCCurveIdx = FCString::Atoi(*CurveObject->GetStringField("id"));
                ListOfMorphTargets[i].bOverride_EnableCurve = CurveObject->GetStringField("enabled") == "true" ? 1 : 0;
                
                TArray<TSharedPtr<FJsonValue>> MappedArray = CurveObject->GetArrayField("mapped");
                ListOfMorphTargets[i].MappedCurves.SetNum(MappedArray.Num());

                for (int j = 0; j < MappedArray.Num(); ++j)
                {
                    TSharedPtr<FJsonObject> MappedCurveObject = MappedArray[j]->AsObject();
                    ListOfMorphTargets[i].MappedCurves[j].RemapName = MappedCurveObject->GetStringField("name");
                    ListOfMorphTargets[i].MappedCurves[j].ValueMultiplier = FCString::Atof(*MappedCurveObject->GetStringField("multiplier"));
                    if (MappedCurveObject->HasField("MinClampVal"))
                    {
                        ListOfMorphTargets[i].MappedCurves[j].Clamp = true;
                        ListOfMorphTargets[i].MappedCurves[j].MinClamp = FCString::Atof(*MappedCurveObject->GetStringField("MinClampVal"));
                        ListOfMorphTargets[i].MappedCurves[j].MaxClamp = FCString::Atof(*MappedCurveObject->GetStringField("MaxClampVal"));
                    }
                    if (j == 0)
                        ListOfMorphTargets[i].MappedCurves[j].IsDefault = true;
                    else
                        ListOfMorphTargets[i].MappedCurves[j].IsDefault = false;
                }

                // Ensure compatibility with older retargeting assets (there was no curve remapping before)
                if (MappedArray.Num() == 0)
                {
                    vOldVersion = true;
                    ListOfMorphTargets[i].MappedCurves.SetNum(1);
                    ListOfMorphTargets[i].MappedCurves[0].IsDefault = true;
                }
            }
        }

        // Stream settings
        TSharedPtr<FJsonObject> StreamSettingsObject = JsonRootObject->GetObjectField("stream");
        UseAverageEyeRotation = StreamSettingsObject->GetStringField("averageeyerotation") == "true";
        FString vHeadAxis = StreamSettingsObject->GetStringField("headaxis");
        if(vHeadAxis == "xyz")
            HeadAxisSwapping = DxyzAxis::XYZ;
        else if (vHeadAxis == "xzy")
            HeadAxisSwapping = DxyzAxis::XZY;
        else if (vHeadAxis == "yzx")
            HeadAxisSwapping = DxyzAxis::YZX;
        else if (vHeadAxis == "yxz")
            HeadAxisSwapping = DxyzAxis::YXZ;
        else if (vHeadAxis == "zyx")
            HeadAxisSwapping = DxyzAxis::ZYX;
        else if (vHeadAxis == "zxy")
            HeadAxisSwapping = DxyzAxis::ZXY;
        FString vBoneAxis = StreamSettingsObject->GetStringField("boneaxis");
        if (vBoneAxis == "xyz")
            BonesAxisSwapping = DxyzAxis::XYZ;
        else if (vBoneAxis == "xzy")
            BonesAxisSwapping = DxyzAxis::XZY;
        else if (vBoneAxis == "yzx")
            BonesAxisSwapping = DxyzAxis::YZX;
        else if (vBoneAxis == "yxz")
            BonesAxisSwapping = DxyzAxis::YXZ;
        else if (vBoneAxis == "zyx")
            BonesAxisSwapping = DxyzAxis::ZYX;
        else if (vBoneAxis == "zxy")
            BonesAxisSwapping = DxyzAxis::ZXY;

        TSharedPtr<FJsonObject> TransObject = StreamSettingsObject->GetObjectField("translation");
        TranslationSettings.HeadInvertXAxis = TransObject->GetStringField("headinvertX") == "true";
        TranslationSettings.HeadInvertYAxis = TransObject->GetStringField("headinvertY") == "true";
        TranslationSettings.HeadInvertZAxis = TransObject->GetStringField("headinvertZ") == "true";
        TranslationSettings.HeadPositionScale = FCString::Atof(*TransObject->GetStringField("headscale"));
        TranslationSettings.InvertXAxis = TransObject->GetStringField("boneinvertX") == "true";
        TranslationSettings.InvertYAxis = TransObject->GetStringField("boneinvertY") == "true";
        TranslationSettings.InvertZAxis = TransObject->GetStringField("boneinvertZ") == "true";
        TranslationSettings.PositionScale = FCString::Atof(*TransObject->GetStringField("bonescale"));

        TSharedPtr<FJsonObject> RotaObject = StreamSettingsObject->GetObjectField("rotation");
        RotationSettings.HeadInvertXAxis = RotaObject->GetStringField("headinvertX") == "true";
        RotationSettings.HeadInvertYAxis = RotaObject->GetStringField("headinvertY") == "true";
        RotationSettings.HeadInvertZAxis = RotaObject->GetStringField("headinvertZ") == "true";
        RotationSettings.InvertXAxis = RotaObject->GetStringField("boneinvertX") == "true";
        RotationSettings.InvertYAxis = RotaObject->GetStringField("boneinvertY") == "true";
        RotationSettings.InvertZAxis = RotaObject->GetStringField("boneinvertZ") == "true";

        LogFPS = StreamSettingsObject->HasField("logfps") ? StreamSettingsObject->GetStringField("logfps") == "true" : false;

        if (vOldVersion)
        {
            // Do curve matching if old blueprint version (there was no curve remapping before)
            _doBonesMatching(true);
        }
    }
    else
    {
        UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : Could not deserialize Dynamixyz remap config file '%s'."), *vFilePath);
        return false;
    }

    return true;
}

bool UDxyzLiveLinkRetargetAsset::_buildJsonFile()
{
    FString vConfPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()), FString("DxyzSaved"));
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*vConfPath))
    {
        PlatformFile.CreateDirectory(*vConfPath);

        if (!PlatformFile.DirectoryExists(*vConfPath))
        {
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : Failed to create Dynamixyz config folder."));
            return false;
        }
    }

    FString OutputString;
    TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);

    TSharedPtr<FJsonObject> JsonRootObject = MakeShareable(new FJsonObject());

    // Settings
    TSharedPtr<FJsonObject> SettingsObject = MakeShareable(new FJsonObject());
    SettingsObject->SetStringField("mesh", SkeletalMesh->GetPathName());
    SettingsObject->SetStringField("esc", ESCPath.FilePath);
    SettingsObject->SetStringField("IMPORTANT", "The above information is indicative only. If you want to"
        " change the input settings (either the Dynamixyz ESC or the targeted mesh),"
        " please update and compile the DxyzLiveLinkRetargetAsset in the Editor.");
    JsonRootObject->SetObjectField("settings", SettingsObject);

    // Bones
    TArray<TSharedPtr<FJsonValue>> ListOfBonesArray;
    for (int i = 0; i < ListOfBones.Num(); ++i)
    {
        TSharedPtr<FJsonObject> BoneObject = MakeShareable(new FJsonObject());
        BoneObject->SetStringField("name", ListOfBones[i].BoneName);
        BoneObject->SetStringField("id", FString::FromInt(ListOfBones[i].ESCBoneIdx));
        BoneObject->SetStringField("enabled", ListOfBones[i].bOverride_EnableBone == 1 ? "true": "false");

        TArray<TSharedPtr<FJsonValue>> MappedArray;
        for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
        {
            TSharedPtr<FJsonObject> MappedBoneObject = MakeShareable(new FJsonObject());
            MappedBoneObject->SetStringField("name", ListOfBones[i].MappedBones[j].RemapName);
            MappedBoneObject->SetStringField("translation", ListOfBones[i].MappedBones[j].ApplyTranslation.Enabled ? "true" : "false");
            MappedBoneObject->SetStringField("Xtrans", FString::FromInt(ListOfBones[i].MappedBones[j].ApplyTranslation.XPercent));
            if (ListOfBones[i].MappedBones[j].ApplyTranslation.XClamp)
            {
                MappedBoneObject->SetStringField("XminClampTrans", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyTranslation.XMinClamp));
                MappedBoneObject->SetStringField("XmaxClampTrans", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyTranslation.XMaxClamp));
            }
            MappedBoneObject->SetStringField("Ytrans", FString::FromInt(ListOfBones[i].MappedBones[j].ApplyTranslation.YPercent));
            if (ListOfBones[i].MappedBones[j].ApplyTranslation.YClamp)
            {
                MappedBoneObject->SetStringField("YminClampTrans", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyTranslation.YMinClamp));
                MappedBoneObject->SetStringField("YmaxClampTrans", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyTranslation.YMaxClamp));
            }
            MappedBoneObject->SetStringField("Ztrans", FString::FromInt(ListOfBones[i].MappedBones[j].ApplyTranslation.ZPercent));
            if (ListOfBones[i].MappedBones[j].ApplyTranslation.ZClamp)
            {
                MappedBoneObject->SetStringField("ZminClampTrans", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyTranslation.ZMinClamp));
                MappedBoneObject->SetStringField("ZmaxClampTrans", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyTranslation.ZMaxClamp));
            }
            MappedBoneObject->SetStringField("rotation", ListOfBones[i].MappedBones[j].ApplyRotation.Enabled ? "true" : "false");
            MappedBoneObject->SetStringField("Xrota", FString::FromInt(ListOfBones[i].MappedBones[j].ApplyRotation.XPercent));
            if (ListOfBones[i].MappedBones[j].ApplyRotation.XClamp)
            {
                MappedBoneObject->SetStringField("XminClampRota", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyRotation.XMinClamp));
                MappedBoneObject->SetStringField("XmaxClampRota", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyRotation.XMaxClamp));
            }
            MappedBoneObject->SetStringField("Yrota", FString::FromInt(ListOfBones[i].MappedBones[j].ApplyRotation.YPercent));
            if (ListOfBones[i].MappedBones[j].ApplyRotation.YClamp)
            {
                MappedBoneObject->SetStringField("YminClampRota", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyRotation.YMinClamp));
                MappedBoneObject->SetStringField("YmaxClampRota", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyRotation.YMaxClamp));
            }
            MappedBoneObject->SetStringField("Zrota", FString::FromInt(ListOfBones[i].MappedBones[j].ApplyRotation.ZPercent));
            if (ListOfBones[i].MappedBones[j].ApplyRotation.ZClamp)
            {
                MappedBoneObject->SetStringField("ZminClampRota", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyRotation.ZMinClamp));
                MappedBoneObject->SetStringField("ZmaxClampRota", FString::SanitizeFloat(ListOfBones[i].MappedBones[j].ApplyRotation.ZMaxClamp));
            }

            TSharedRef< FJsonValueObject > MappedJsonValue = MakeShareable(new FJsonValueObject(MappedBoneObject));
            MappedArray.Add(MappedJsonValue);
        }

        BoneObject->SetArrayField("mapped", MappedArray);
        TSharedRef< FJsonValueObject > BoneJsonValue = MakeShareable(new FJsonValueObject(BoneObject));
        ListOfBonesArray.Add(BoneJsonValue);
    }
    JsonRootObject->SetArrayField("bones", ListOfBonesArray);

    // Morph targets
    TArray<TSharedPtr<FJsonValue>> ListOfCurvesArray;
    for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
    {
        TSharedPtr<FJsonObject> CurveObject = MakeShareable(new FJsonObject());
        CurveObject->SetStringField("name", ListOfMorphTargets[i].CurveName);
        CurveObject->SetStringField("id", FString::FromInt(ListOfMorphTargets[i].ESCCurveIdx));
        CurveObject->SetStringField("enabled", ListOfMorphTargets[i].bOverride_EnableCurve == 1 ? "true" : "false");

        TArray<TSharedPtr<FJsonValue>> MappedArray;
        for (int j = 0; j < ListOfMorphTargets[i].MappedCurves.Num(); ++j)
        {
            TSharedPtr<FJsonObject> MappedCurveObject = MakeShareable(new FJsonObject());
            MappedCurveObject->SetStringField("name", ListOfMorphTargets[i].MappedCurves[j].RemapName);
            MappedCurveObject->SetStringField("multiplier", FString::SanitizeFloat(ListOfMorphTargets[i].MappedCurves[j].ValueMultiplier));
            if (ListOfMorphTargets[i].MappedCurves[j].Clamp)
            {
                MappedCurveObject->SetStringField("MinClampVal", FString::SanitizeFloat(ListOfMorphTargets[i].MappedCurves[j].MinClamp));
                MappedCurveObject->SetStringField("MaxClampVal", FString::SanitizeFloat(ListOfMorphTargets[i].MappedCurves[j].MaxClamp));
            }

            TSharedRef< FJsonValueObject > MappedJsonValue = MakeShareable(new FJsonValueObject(MappedCurveObject));
            MappedArray.Add(MappedJsonValue);
        }

        CurveObject->SetArrayField("mapped", MappedArray);

        TSharedRef< FJsonValueObject > CurveJsonValue = MakeShareable(new FJsonValueObject(CurveObject));
        ListOfCurvesArray.Add(CurveJsonValue);
    }
    JsonRootObject->SetArrayField("morphtargets", ListOfCurvesArray);

    // Stream
    TSharedPtr<FJsonObject> StreamSettingsObject = MakeShareable(new FJsonObject());
    StreamSettingsObject->SetStringField("averageeyerotation", UseAverageEyeRotation ? "true" : "false");
    FString vHeadAxis = "xyz";
    switch (HeadAxisSwapping)
    {
    case DxyzAxis::XYZ:
        vHeadAxis = "xyz";
        break;

    case DxyzAxis::XZY:
        vHeadAxis = "xzy";
        break;

    case DxyzAxis::YZX:
        vHeadAxis = "yzx";
        break;

    case DxyzAxis::YXZ:
        vHeadAxis = "yxz";
        break;

    case DxyzAxis::ZYX:
        vHeadAxis = "zyx";
        break;

    case DxyzAxis::ZXY:
        vHeadAxis = "zxy";
        break;
    }
    StreamSettingsObject->SetStringField("headaxis", vHeadAxis);
    FString vBoneAxis = "xyz";
    switch (BonesAxisSwapping)
    {
    case DxyzAxis::XYZ:
        vBoneAxis = "xyz";
        break;

    case DxyzAxis::XZY:
        vBoneAxis = "xzy";
        break;

    case DxyzAxis::YZX:
        vBoneAxis = "yzx";
        break;

    case DxyzAxis::YXZ:
        vBoneAxis = "yxz";
        break;

    case DxyzAxis::ZYX:
        vBoneAxis = "zyx";
        break;

    case DxyzAxis::ZXY:
        vBoneAxis = "zxy";
        break;
    }
    StreamSettingsObject->SetStringField("boneaxis", vBoneAxis);

    TSharedPtr<FJsonObject> TransObject = MakeShareable(new FJsonObject());
    TransObject->SetStringField("headinvertX", TranslationSettings.HeadInvertXAxis ? "true" : "false");
    TransObject->SetStringField("headinvertY", TranslationSettings.HeadInvertYAxis ? "true" : "false");
    TransObject->SetStringField("headinvertZ", TranslationSettings.HeadInvertZAxis ? "true" : "false");
    TransObject->SetStringField("headscale", FString::SanitizeFloat(TranslationSettings.HeadPositionScale));
    TransObject->SetStringField("boneinvertX", TranslationSettings.InvertXAxis ? "true" : "false");
    TransObject->SetStringField("boneinvertY", TranslationSettings.InvertYAxis ? "true" : "false");
    TransObject->SetStringField("boneinvertZ", TranslationSettings.InvertZAxis ? "true" : "false");
    TransObject->SetStringField("bonescale", FString::SanitizeFloat(TranslationSettings.PositionScale));
    StreamSettingsObject->SetObjectField("translation", TransObject);

    TSharedPtr<FJsonObject> RotaObject = MakeShareable(new FJsonObject());
    RotaObject->SetStringField("headinvertX", RotationSettings.HeadInvertXAxis ? "true" : "false");
    RotaObject->SetStringField("headinvertY", RotationSettings.HeadInvertYAxis ? "true" : "false");
    RotaObject->SetStringField("headinvertZ", RotationSettings.HeadInvertZAxis ? "true" : "false");
    RotaObject->SetStringField("boneinvertX", RotationSettings.InvertXAxis ? "true" : "false");
    RotaObject->SetStringField("boneinvertY", RotationSettings.InvertYAxis ? "true" : "false");
    RotaObject->SetStringField("boneinvertZ", RotationSettings.InvertZAxis ? "true" : "false");
    StreamSettingsObject->SetObjectField("rotation", RotaObject);

    StreamSettingsObject->SetStringField("logfps", LogFPS ? "true" : "false");

    JsonRootObject->SetObjectField("stream", StreamSettingsObject);

    FJsonSerializer::Serialize(JsonRootObject.ToSharedRef(), Writer);

    // Get the name of the blueprint
    UBlueprint* Blueprint = Cast<UBlueprint>(GetClass()->ClassGeneratedBy);
    FString vBPName = Blueprint->GetName();
	FString vName = FString::Format(TEXT("{0}.dxyz"), { *vBPName });
    FString vFile = FPaths::Combine(vConfPath, vName);
    if (!FFileHelper::SaveStringToFile(OutputString, *vFile))
    {
        UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : Failed to save Dynamixyz remapping config file."));
        return false;
    }

    return true;
}

void UDxyzLiveLinkRetargetAsset::_checkWarnings()
{
    if (SkeletalMesh && !ESCPath.FilePath.IsEmpty())
    {
        WarningBonesText = "";
        WarningCurvesText = "";

        bool vBoneUnmapped = false;
        bool vBoneMappedTwo = false;
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            ListOfBones[i].HasError = false;
            if (ListOfBones[i].bOverride_EnableBone == 1)
            {
                for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
                {
                    if (ListOfBones[i].MappedBones[j].RemapName.IsEmpty())
                    {
                        vBoneUnmapped = true;
                        ListOfBones[i].HasError = true;
                    }
                    else
                    {

						FReferenceSkeleton Skel = SkeletalMesh->RefSkeleton;
						int vBoneIndex = Skel.FindBoneIndex(FName(*ListOfBones[i].MappedBones[j].RemapName));

						// Check for existing rotations to display warning
						FTransform vBonePose = Skel.GetRefBonePose()[vBoneIndex];

						// Check if bone has some wrong rotations
						if (abs((int)vBonePose.GetRotation().Rotator().Roll) > 1
							|| abs((int)vBonePose.GetRotation().Rotator().Pitch) > 1
							|| abs((int)vBonePose.GetRotation().Rotator().Yaw) > 1)
						{
							UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : "
								"The selected bone '%s' contains non-null roation values. The animation could be wrong."), 
								*ListOfBones[i].MappedBones[j].RemapName);
						}

                        int32 vIdx = _checkBoneAlreadySelected(ListOfBones[i].MappedBones[j].RemapName, i, j);
                        if (vIdx != -1)
                        {
                            ListOfBones[i].HasError = true;
                            vBoneMappedTwo = true;
                        }
                    }
                }
            }
        }

        bool vCurveUnmapped = false;
        bool vCurveMappedTwo = false;
        for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
        {
            ListOfMorphTargets[i].HasError = false;
            if (ListOfMorphTargets[i].bOverride_EnableCurve == 1)
            {
                for (int j = 0; j < ListOfMorphTargets[i].MappedCurves.Num(); ++j)
                {
                    if (ListOfMorphTargets[i].MappedCurves[j].RemapName.IsEmpty())
                    {
                        ListOfMorphTargets[i].HasError = true;
                        vCurveUnmapped = true;
                    }
                    else
                    {
                        int32 vIdx = _checkCurveAlreadySelected(ListOfMorphTargets[i].MappedCurves[j].RemapName, i, j);
                        if (vIdx != -1)
                        {
                            ListOfMorphTargets[i].HasError = true;
                            vCurveMappedTwo = true;
                        }
                    }
                }
            }
        }

        // If no bones exist
        if (ListOfBones.Num() == 0)
        {
            if ((mBoneMappingState & NOFOUND) == 0)
            {
                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : "
                    "No bones were found in the provided ESC file."));
                mBoneMappingState = NOFOUND;
            }
        }
        else
        {
            mBoneMappingState &= ~NOFOUND;
        }

        // If no shapes exist
        if (ListOfMorphTargets.Num() == 0)
        {
            if((mCurveMappingState & NOFOUND) == 0)
            {
                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : "
                    "No blendshapes were found in the provided ESC file."));
                mCurveMappingState = NOFOUND;
            }
        }
        else
        {
            mCurveMappingState &= ~NOFOUND;
        }

        // If a bone is not mapped
        if (vBoneUnmapped)
        {
            if((mBoneMappingState & UNMAPPED) == 0)
            {
                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : "
                    "The list contains unmapped bones that will be ignored."));
                mBoneMappingState |= UNMAPPED;
            }
        }
        else
        {
            mBoneMappingState &= ~UNMAPPED;
        }

        // If a bone is targeted twice
        if (vBoneMappedTwo)
        {
            if ((mBoneMappingState & TWOMAPPED) == 0)
            {
                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : "
                    "A Skeleton bone cannot be mapped to two ESC bones. One will be ignored."));
                mBoneMappingState |= TWOMAPPED;
            }
        }
        else
        {
            mBoneMappingState &= ~TWOMAPPED;
        }

        // If a shape is not mapped
        if (vCurveUnmapped)
        {
            if ((mCurveMappingState & UNMAPPED) == 0)
            {
                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : "
                    "The list contains unmapped curves that will be ignored."));
                mCurveMappingState |= UNMAPPED;
            }
        }
        else
        {
            mCurveMappingState &= ~UNMAPPED;
        }

        // If a shape is targeted twice
        if (vCurveMappedTwo)
        {
            if ((mCurveMappingState & TWOMAPPED) == 0)
            {
                UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : "
                    "A Mesh curve cannot be mapped to two ESC curves. One will be ignored."));
                mCurveMappingState |= TWOMAPPED;
            }
        }
        else
        {
            mCurveMappingState &= ~TWOMAPPED;
        }

        // Display bones warnings
        WarningBonesText = "";
        if ((mBoneMappingState & NOFOUND) == NOFOUND)
            WarningBonesText = "No bones were found in the provided ESC file.\n";
        if ((mBoneMappingState & UNMAPPED) == UNMAPPED)
            WarningBonesText += "The list contains unmapped bones that will be ignored.\n";
        if ((mBoneMappingState & TWOMAPPED) == TWOMAPPED)
            WarningBonesText += "A Skeleton bone cannot be mapped to two ESC bones. One will be ignored.\n";

        // Display shapes warnings
        WarningCurvesText = "";
        if ((mCurveMappingState & NOFOUND) == NOFOUND)
            WarningCurvesText = "No blendshapes were found in the provided ESC file.\n";
        if ((mCurveMappingState & UNMAPPED) == UNMAPPED)
            WarningCurvesText += "The list contains unmapped curves that will be ignored.\n";
        if ((mCurveMappingState & TWOMAPPED) == TWOMAPPED)
            WarningCurvesText += "A Mesh curve cannot be mapped to two ESC curves. One will be ignored.\n";
    }
}

int32 UDxyzLiveLinkRetargetAsset::_findExactMatchingBoneNameInMesh(const FString& InBoneName)
{
    for (int i = 0; i < mMeshBoneNames.Num(); ++i)
    {
        if (mMeshBoneNames[i].Compare(InBoneName) == 0)
            return i;
    }

    return -1;
}

int32 UDxyzLiveLinkRetargetAsset::_findExactMatchingCurveNameInMesh(const FString& InCurveName)
{
    for (int i = 0; i < mMeshCurveNames.Num(); ++i)
    {
        if (mMeshCurveNames[i].Compare(InCurveName) == 0)
            return i;
    }

    return -1;
}

int32 UDxyzLiveLinkRetargetAsset::_findMatchingBoneNameWithoutPrefixInMesh(const FString& InBoneName, TArray<FString>& iAlreadyMapped)
{
    FString vName = InBoneName;
    int iIndex = INDEX_NONE;
    vName.FindLastChar(':', iIndex);
    if (iIndex != INDEX_NONE)
    {
        vName.RemoveAt(iIndex, vName.Len() - iIndex);
    }

    for (int i = 0; i < mMeshBoneNames.Num(); ++i)
    {
        if (!iAlreadyMapped.Contains(mMeshBoneNames[i]) && mMeshBoneNames[i].Compare(vName) == 0)
            return i;
    }

    return -1;
}

int32 UDxyzLiveLinkRetargetAsset::_findSimilarMatchingBoneNameInMesh(const FString& InBoneName, TArray<FString>& iAlreadyMapped)
{
    for (int i = 0; i < mMeshBoneNames.Num(); ++i)
    {
        if (!iAlreadyMapped.Contains(mMeshBoneNames[i]) &&
            (mMeshBoneNames[i].Contains(InBoneName) || InBoneName.Contains(mMeshBoneNames[i])))
            return i;
    }
    return -1;
}

int32 UDxyzLiveLinkRetargetAsset::_findSimilarMatchingCurveNameInMesh(const FString& InCurveName, TArray<FString>& iAlreadyMapped)
{
    for (int i = 0; i < mMeshCurveNames.Num(); ++i)
    {
        if (!iAlreadyMapped.Contains(mMeshCurveNames[i]) &&
            (mMeshCurveNames[i].Contains(InCurveName) || InCurveName.Contains(mMeshCurveNames[i])))
            return i;
    }
    return -1;
}

bool UDxyzLiveLinkRetargetAsset::_compareEscAndSource(const TArray<FName>& SourceBoneNames, const TArray<FName>& SourceCurveNames)
{
    if (ListOfBones.Num() != SourceBoneNames.Num())
        return false;

	if (ListOfMorphTargets.Num() != SourceCurveNames.Num())
		return false;

    for (int i = 0; i < ListOfBones.Num(); ++i)
    {
        if (!SourceBoneNames.Contains(*ListOfBones[i].BoneName))
        {
            return false;
        }
    }

	for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
	{
		if (!SourceCurveNames.Contains(*ListOfMorphTargets[i].CurveName))
		{
			return false;
		}
	}

    return true;
}

int32 UDxyzLiveLinkRetargetAsset::_checkBoneAlreadySelected(const FString& InBoneName, int32 InBoneIdx, int32 InRemapIdx)
{
    int vIdx = ListOfBones[InBoneIdx].ESCBoneIdx;

    // Check in all the bones mapped to this one
    for (int i = 0; i < ListOfBones[InBoneIdx].MappedBones.Num(); ++i)
    {
        if (i != InRemapIdx && ListOfBones[InBoneIdx].bOverride_EnableBone == 1
            && ListOfBones[InBoneIdx].MappedBones[i].RemapName.Compare(InBoneName) == 0)
        {
            return i;
        }
    }

    // Check in all the other bones
    for (int i = 0; i < ListOfBones.Num(); ++i)
    {
        for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
        {
            if (ListOfBones[i].ESCBoneIdx != vIdx && ListOfBones[i].bOverride_EnableBone == 1
                && ListOfBones[i].MappedBones[j].RemapName.Compare(InBoneName) == 0)
            {
                return i;
            }
        }
    }
    return -1;
}

int32 UDxyzLiveLinkRetargetAsset::_checkCurveAlreadySelected(const FString& InCurveName, int32 InCurveIdx, int32 InRemapIdx)
{
    int vIdx = ListOfMorphTargets[InCurveIdx].ESCCurveIdx;

    // Check in all the curves mapped to this one
    for (int i = 0; i < ListOfMorphTargets[InCurveIdx].MappedCurves.Num(); ++i)
    {
        if (i != InRemapIdx && ListOfMorphTargets[InCurveIdx].bOverride_EnableCurve == 1
            && ListOfMorphTargets[InCurveIdx].MappedCurves[i].RemapName.Compare(InCurveName) == 0)
        {
            return i;
        }
    }

    // Check in all the other curves
    for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
    {
        for (int j = 0; j < ListOfMorphTargets[i].MappedCurves.Num(); ++j)
        {
            if (ListOfMorphTargets[i].ESCCurveIdx != vIdx && ListOfMorphTargets[i].bOverride_EnableCurve == 1
                && ListOfMorphTargets[i].MappedCurves[j].RemapName.Compare(InCurveName) == 0)
            {
                return i;
            }
        }
    }
    return -1;
}

#if WITH_EDITOR
void UDxyzLiveLinkRetargetAsset::PostEditChangeProperty(struct FPropertyChangedEvent& e)
{
    FName PropertyName = (e.MemberProperty != NULL) ? e.MemberProperty->GetFName() : NAME_None;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, SkeletalMesh))
    {
        mMeshBoneNames.Empty();
        mMeshCurveNames.Empty();
        WarningBonesText = "";
        WarningCurvesText = "";
        mBoneMappingState = 0;
        mCurveMappingState = 0;
        ListOfBones.Empty();
        ListOfMorphTargets.Empty();

        if (SkeletalMesh)
        {
            FReferenceSkeleton Skel = SkeletalMesh->RefSkeleton;
            for (int i = 0; i < Skel.GetNum(); ++i)
            {
                mMeshBoneNames.Add(*Skel.GetBoneName(i).ToString());
            }
            TArray<UMorphTarget*> vCurves = SkeletalMesh->MorphTargets;
            for (int i = 0; i < vCurves.Num(); ++i)
            {
                mMeshCurveNames.Add(*vCurves[i]->GetName());
            }

            mMeshBoneNames.Sort();
            mMeshCurveNames.Sort();

            if (!ESCPath.FilePath.IsEmpty())
            {
                // In case we need to get the ESC bones again (if the blueprint was just loaded for example)
                if (mEscBoneNames.Num() == 0)
                {
                    if (!_parseESC(ESCPath.FilePath))
                        return;
                }

                _buildPropertiesList();

                if (!_doBonesMatching())
                    return;
            }
        }
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, ESCPath))
    {
        mEscBoneNames.Empty();
        mEscCurveNames.Empty();
        WarningBonesText = "";
        WarningCurvesText = "";
        mBoneMappingState = 0;
        mCurveMappingState = 0;
        ListOfBones.Empty();
        ListOfMorphTargets.Empty();

        if (!ESCPath.FilePath.IsEmpty())
        {
            ESCPath.FilePath = FPaths::ConvertRelativePathToFull(ESCPath.FilePath);

            if (!_parseESC(ESCPath.FilePath))
                return;

            _buildPropertiesList();

            if (SkeletalMesh)
            {
                // In case we need to get the unreal bones again (if the blueprint was just loaded for example)
                if (mMeshBoneNames.Num() == 0)
                {
                    FReferenceSkeleton Skel = SkeletalMesh->RefSkeleton;
                    for (int i = 0; i < Skel.GetNum(); ++i)
                    {
                        mMeshBoneNames.Add(*Skel.GetBoneName(i).ToString());
                    }
                }
                if (mMeshCurveNames.Num() == 0)
                {
                    TArray<UMorphTarget*> vCurves = SkeletalMesh->MorphTargets;
                    for (int i = 0; i < vCurves.Num(); ++i)
                    {
                        mMeshCurveNames.Add(*vCurves[i]->GetName());
                    }
                }

                if (!_doBonesMatching())
                    return;

                mMeshBoneNames.Sort();
                mMeshCurveNames.Sort();

                //_checkWarnings();
            }
        }
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EnableAllBones))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            if(sBoneSearchFilter.IsEmpty() || ListOfBones[i].BoneName.Contains(sBoneSearchFilter))
                ListOfBones[i].bOverride_EnableBone = 1;
        }

        _checkWarnings();
        EnableAllBones = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, DisableAllBones))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            if (sBoneSearchFilter.IsEmpty() || ListOfBones[i].BoneName.Contains(sBoneSearchFilter))
                ListOfBones[i].bOverride_EnableBone = 0;
        }

        _checkWarnings();
        DisableAllBones = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EnableAllTranslations))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            if (sBoneSearchFilter.IsEmpty() || ListOfBones[i].BoneName.Contains(sBoneSearchFilter))
            {
                for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
                    ListOfBones[i].MappedBones[j].ApplyTranslation.Enabled = true;
            }
        }

        EnableAllTranslations = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, DisableAllTranslations))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            if (sBoneSearchFilter.IsEmpty() || ListOfBones[i].BoneName.Contains(sBoneSearchFilter))
            {
                for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
                    ListOfBones[i].MappedBones[j].ApplyTranslation.Enabled = false;
            }
        }

        DisableAllTranslations = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EnableAllRotations))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            if (sBoneSearchFilter.IsEmpty() || ListOfBones[i].BoneName.Contains(sBoneSearchFilter))
            {
                for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
                    ListOfBones[i].MappedBones[j].ApplyRotation.Enabled = true;
            }
        }

        EnableAllRotations = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, DisableAllRotations))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            if (sBoneSearchFilter.IsEmpty() || ListOfBones[i].BoneName.Contains(sBoneSearchFilter))
            {
                for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
                    ListOfBones[i].MappedBones[j].ApplyRotation.Enabled = false;
            }
        }

        DisableAllRotations = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EnableAllMorphTargets))
    {
        for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
        {
            if (sCurveSearchFilter.IsEmpty() || ListOfMorphTargets[i].CurveName.Contains(sCurveSearchFilter))
                ListOfMorphTargets[i].bOverride_EnableCurve = 1;
        }

        _checkWarnings();
        EnableAllMorphTargets = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, DisableAllMorphTargets))
    {
        for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
        {
            if (sCurveSearchFilter.IsEmpty() || ListOfMorphTargets[i].CurveName.Contains(sCurveSearchFilter))
                ListOfMorphTargets[i].bOverride_EnableCurve = 0;
        }

        _checkWarnings();
        DisableAllMorphTargets = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, BoostAllMorphTargets))
    {
        for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
        {
            if (sCurveSearchFilter.IsEmpty() || ListOfMorphTargets[i].CurveName.Contains(sCurveSearchFilter))
            {
                for (int j = 0; j < ListOfMorphTargets[i].MappedCurves.Num(); ++j)
                {
                    ListOfMorphTargets[i].MappedCurves[j].ValueMultiplier = 1;
                }
            }
        }

        BoostAllMorphTargets = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, EaseAllMorphTargets))
    {
        for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
        {
            if (sCurveSearchFilter.IsEmpty() || ListOfMorphTargets[i].CurveName.Contains(sCurveSearchFilter))
            {
                for (int j = 0; j < ListOfMorphTargets[i].MappedCurves.Num(); ++j)
                {
                    ListOfMorphTargets[i].MappedCurves[j].ValueMultiplier = -1;
                }
            }
        }

        EaseAllMorphTargets = false;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(UDxyzLiveLinkRetargetAsset, ResetAllMorphTargets))
    {
        for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
        {
            if (sCurveSearchFilter.IsEmpty() || ListOfMorphTargets[i].CurveName.Contains(sCurveSearchFilter))
            {
                for (int j = 0; j < ListOfMorphTargets[i].MappedCurves.Num(); ++j)
                {
                    ListOfMorphTargets[i].MappedCurves[j].ValueMultiplier = 0;
                }
            }
        }

        ResetAllMorphTargets = false;
    }

    Super::PostEditChangeProperty(e);
}

void UDxyzLiveLinkRetargetAsset::PostEditChangeChainProperty(struct FPropertyChangedChainEvent& e)
{
    FName PropertyName = (e.Property != nullptr) ? e.Property->GetFName() : NAME_None;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FDxyzBoneSettings, RemapName)
        || PropertyName == GET_MEMBER_NAME_CHECKED(FDxyzCurveSettings, RemapName)
        || PropertyName == GET_MEMBER_NAME_CHECKED(FDxyzBoneModify, MappedBones)
        || PropertyName == GET_MEMBER_NAME_CHECKED(FDxyzCurveModify, MappedCurves))
    {
        _checkWarnings();
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FDxyzCurveSettings, MinClamp))
    {
        for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
        {
            for (int j = 0; j < ListOfMorphTargets[i].MappedCurves.Num(); ++j)
            {
                if (ListOfMorphTargets[i].MappedCurves[j].MinClamp >
                    ListOfMorphTargets[i].MappedCurves[j].MaxClamp)
                {
                    ListOfMorphTargets[i].MappedCurves[j].MaxClamp =
						FMath::Min(ListOfMorphTargets[i].MappedCurves[j].MinClamp + 0.1f, 1.f);
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FDxyzCurveSettings, MaxClamp))
    {
        for (int i = 0; i < ListOfMorphTargets.Num(); ++i)
        {
            for (int j = 0; j < ListOfMorphTargets[i].MappedCurves.Num(); ++j)
            {
                if (ListOfMorphTargets[i].MappedCurves[j].MaxClamp <
                    ListOfMorphTargets[i].MappedCurves[j].MinClamp)
                {
                    ListOfMorphTargets[i].MappedCurves[j].MinClamp =
						FMath::Max(ListOfMorphTargets[i].MappedCurves[j].MaxClamp - 0.1f, 0.f);
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneTransSettings, XMinClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyTranslation.XMinClamp >
                    ListOfBones[i].MappedBones[j].ApplyTranslation.XMaxClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyTranslation.XMaxClamp =
                        ListOfBones[i].MappedBones[j].ApplyTranslation.XMinClamp + 1;
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneTransSettings, XMaxClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyTranslation.XMaxClamp <
                    ListOfBones[i].MappedBones[j].ApplyTranslation.XMinClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyTranslation.XMinClamp =
                        ListOfBones[i].MappedBones[j].ApplyTranslation.XMaxClamp - 1;
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneTransSettings, YMinClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyTranslation.YMinClamp >
                    ListOfBones[i].MappedBones[j].ApplyTranslation.YMaxClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyTranslation.YMaxClamp =
                        ListOfBones[i].MappedBones[j].ApplyTranslation.YMinClamp + 1;
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneTransSettings, YMaxClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyTranslation.YMaxClamp <
                    ListOfBones[i].MappedBones[j].ApplyTranslation.YMinClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyTranslation.YMinClamp =
                        ListOfBones[i].MappedBones[j].ApplyTranslation.YMaxClamp - 1;
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneTransSettings, ZMinClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyTranslation.ZMinClamp >
                    ListOfBones[i].MappedBones[j].ApplyTranslation.ZMaxClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyTranslation.ZMaxClamp =
                        ListOfBones[i].MappedBones[j].ApplyTranslation.ZMinClamp + 1;
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneTransSettings, ZMaxClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyTranslation.ZMaxClamp <
                    ListOfBones[i].MappedBones[j].ApplyTranslation.ZMinClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyTranslation.ZMinClamp =
                        ListOfBones[i].MappedBones[j].ApplyTranslation.ZMaxClamp - 1;
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneRotaSettings, XMinClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyRotation.XMinClamp >
                    ListOfBones[i].MappedBones[j].ApplyRotation.XMaxClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyRotation.XMaxClamp =
                        FMath::Min(ListOfBones[i].MappedBones[j].ApplyRotation.XMinClamp + 1, (float)360);
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneRotaSettings, XMaxClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyRotation.XMaxClamp <
                    ListOfBones[i].MappedBones[j].ApplyRotation.XMinClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyRotation.XMinClamp =
                        FMath::Max(ListOfBones[i].MappedBones[j].ApplyRotation.XMaxClamp - 1, (float)-360);
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneRotaSettings, YMinClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyRotation.YMinClamp >
                    ListOfBones[i].MappedBones[j].ApplyRotation.YMaxClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyRotation.YMaxClamp =
                        FMath::Min(ListOfBones[i].MappedBones[j].ApplyRotation.YMinClamp + 1, (float)360);
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneRotaSettings, YMaxClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyRotation.YMaxClamp <
                    ListOfBones[i].MappedBones[j].ApplyRotation.YMinClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyRotation.YMinClamp =
                        FMath::Max(ListOfBones[i].MappedBones[j].ApplyRotation.YMaxClamp - 1, (float)-360);
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneRotaSettings, ZMinClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyRotation.ZMinClamp >
                    ListOfBones[i].MappedBones[j].ApplyRotation.ZMaxClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyRotation.ZMaxClamp =
                        FMath::Min(ListOfBones[i].MappedBones[j].ApplyRotation.ZMinClamp + 1, (float)360);
                }
            }
        }
    }
    if (PropertyName == GET_MEMBER_NAME_CHECKED(FBoneRotaSettings, ZMaxClamp))
    {
        for (int i = 0; i < ListOfBones.Num(); ++i)
        {
            for (int j = 0; j < ListOfBones[i].MappedBones.Num(); ++j)
            {
                if (ListOfBones[i].MappedBones[j].ApplyRotation.ZMaxClamp <
                    ListOfBones[i].MappedBones[j].ApplyRotation.ZMinClamp)
                {
                    ListOfBones[i].MappedBones[j].ApplyRotation.ZMinClamp =
                        FMath::Max(ListOfBones[i].MappedBones[j].ApplyRotation.ZMaxClamp - 1, (float)-360);
                }
            }
        }
    }
    Super::PostEditChangeChainProperty(e);
}
#endif

void UDxyzLiveLinkRetargetAsset::BuildPoseFromAnimationData(float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose)
{
	USkeletalMesh* vSkeletalMesh = Cast<USkeletalMesh>(OutPose.GetBoneContainer().GetAsset());
	if (!vSkeletalMesh)
	{
		if (mErrCode != DxyzLLErrCode::LIVELINK_ERR)
		{
			UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Error : "
				"An error occured with the LiveLink associated skeleton."));
		}

		mErrCode = DxyzLLErrCode::LIVELINK_ERR;
		return;
	}

	// User changed head offset at runtime
	if (InFrameData->MetaData.StringMetaData.Contains("h_offset")
		&& mHeadRuntimeCalib.rotOffsetStr.Compare(InFrameData->MetaData.StringMetaData["h_offset"]) != 0)
	{
		mHeadRuntimeCalib.rotOffsetStr = InFrameData->MetaData.StringMetaData["h_offset"];
		mHeadRuntimeCalib.rotOffset.InitFromString(mHeadRuntimeCalib.rotOffsetStr);
	}

	// User changed pupils offset at runtime
	if (InFrameData->MetaData.StringMetaData.Contains("e_offset")
		&& mEyesRuntimeCalib.rotOffsetStr.Compare(InFrameData->MetaData.StringMetaData["e_offset"]) != 0)
	{
		mEyesRuntimeCalib.rotOffsetStr = InFrameData->MetaData.StringMetaData["e_offset"];
		mEyesRuntimeCalib.rotOffset.InitFromString(mEyesRuntimeCalib.rotOffsetStr);
	}
	
	// User asked to stop retargeting at runtime
	if (InFrameData->MetaData.StringMetaData.Contains("retarg_on"))
	{
		mRetargetingIsOn = InFrameData->MetaData.StringMetaData["retarg_on"] == "true";
	}

	// User locked a head axis at runtime
	if (InFrameData->MetaData.StringMetaData.Contains("h_r_lock"))
		mHeadRuntimeCalib.rLock = InFrameData->MetaData.StringMetaData["h_r_lock"] == "true";

	if (InFrameData->MetaData.StringMetaData.Contains("h_p_lock"))
		mHeadRuntimeCalib.pLock = InFrameData->MetaData.StringMetaData["h_p_lock"] == "true";
	if (InFrameData->MetaData.StringMetaData.Contains("h_y_lock"))
		mHeadRuntimeCalib.yLock = InFrameData->MetaData.StringMetaData["h_y_lock"] == "true";

	// User locked eyes axis at runtime
	if (InFrameData->MetaData.StringMetaData.Contains("e_r_lock"))
		mEyesRuntimeCalib.rLock = InFrameData->MetaData.StringMetaData["e_r_lock"] == "true";
	if (InFrameData->MetaData.StringMetaData.Contains("e_p_lock"))
		mEyesRuntimeCalib.pLock = InFrameData->MetaData.StringMetaData["e_p_lock"] == "true";
	if (InFrameData->MetaData.StringMetaData.Contains("e_y_lock"))
		mEyesRuntimeCalib.yLock = InFrameData->MetaData.StringMetaData["e_y_lock"] == "true";

	// User clamped a head axis at runtime
	if (InFrameData->MetaData.StringMetaData.Contains("h_r_clamp"))
	{
		mHeadRuntimeCalib.rClamp = InFrameData->MetaData.StringMetaData["h_r_clamp"] == "true";
		mHeadRuntimeCalib.rClampVal.X = FCString::Atof(*InFrameData->MetaData.StringMetaData["h_r_minclamp"]);
		mHeadRuntimeCalib.rClampVal.Y = FCString::Atof(*InFrameData->MetaData.StringMetaData["h_r_maxclamp"]);
	}
		
	if (InFrameData->MetaData.StringMetaData.Contains("h_p_clamp"))
	{
		mHeadRuntimeCalib.pClamp = InFrameData->MetaData.StringMetaData["h_p_clamp"] == "true";
		mHeadRuntimeCalib.pClampVal.X = FCString::Atof(*InFrameData->MetaData.StringMetaData["h_p_minclamp"]);
		mHeadRuntimeCalib.pClampVal.Y = FCString::Atof(*InFrameData->MetaData.StringMetaData["h_p_maxclamp"]);
	}
		
	if (InFrameData->MetaData.StringMetaData.Contains("h_y_clamp"))
	{
		mHeadRuntimeCalib.yClamp = InFrameData->MetaData.StringMetaData["h_y_clamp"] == "true";
		mHeadRuntimeCalib.yClampVal.X = FCString::Atof(*InFrameData->MetaData.StringMetaData["h_y_minclamp"]);
		mHeadRuntimeCalib.yClampVal.Y = FCString::Atof(*InFrameData->MetaData.StringMetaData["h_y_maxclamp"]);
	}

	// User clamped an eye axis at runtime
	if (InFrameData->MetaData.StringMetaData.Contains("e_r_clamp"))
	{
		mEyesRuntimeCalib.rClamp = InFrameData->MetaData.StringMetaData["e_r_clamp"] == "true";
		mEyesRuntimeCalib.rClampVal.X = FCString::Atof(*InFrameData->MetaData.StringMetaData["e_r_minclamp"]);
		mEyesRuntimeCalib.rClampVal.Y = FCString::Atof(*InFrameData->MetaData.StringMetaData["e_r_maxclamp"]);
	}

	if (InFrameData->MetaData.StringMetaData.Contains("e_p_clamp"))
	{
		mEyesRuntimeCalib.pClamp = InFrameData->MetaData.StringMetaData["e_p_clamp"] == "true";
		mEyesRuntimeCalib.pClampVal.X = FCString::Atof(*InFrameData->MetaData.StringMetaData["e_p_minclamp"]);
		mEyesRuntimeCalib.pClampVal.Y = FCString::Atof(*InFrameData->MetaData.StringMetaData["e_p_maxclamp"]);
	}

	if (InFrameData->MetaData.StringMetaData.Contains("e_y_clamp"))
	{
		mEyesRuntimeCalib.yClamp = InFrameData->MetaData.StringMetaData["e_y_clamp"] == "true";
		mEyesRuntimeCalib.yClampVal.X = FCString::Atof(*InFrameData->MetaData.StringMetaData["e_y_minclamp"]);
		mEyesRuntimeCalib.yClampVal.Y = FCString::Atof(*InFrameData->MetaData.StringMetaData["e_y_maxclamp"]);
	}

	// User changed the percentage of a head axis at runtime
	if (InFrameData->MetaData.StringMetaData.Contains("h_r_multiply"))
	{
		mHeadRuntimeCalib.rMult = InFrameData->MetaData.StringMetaData["h_r_multiply"] == "true";
		mHeadRuntimeCalib.rPercent = FCString::Atoi(*InFrameData->MetaData.StringMetaData["h_r_percent"]);
	}

	if (InFrameData->MetaData.StringMetaData.Contains("h_p_multiply"))
	{
		mHeadRuntimeCalib.pMult = InFrameData->MetaData.StringMetaData["h_p_multiply"] == "true";
		mHeadRuntimeCalib.pPercent = FCString::Atoi(*InFrameData->MetaData.StringMetaData["h_p_percent"]);
	}

	if (InFrameData->MetaData.StringMetaData.Contains("h_y_multiply"))
	{
		mHeadRuntimeCalib.yMult = InFrameData->MetaData.StringMetaData["h_y_multiply"] == "true";
		mHeadRuntimeCalib.yPercent = FCString::Atoi(*InFrameData->MetaData.StringMetaData["h_y_percent"]);
	}

	// User changed the percentage of an eye axis at runtime
	if (InFrameData->MetaData.StringMetaData.Contains("e_r_multiply"))
	{
		mEyesRuntimeCalib.rMult = InFrameData->MetaData.StringMetaData["e_r_multiply"] == "true";
		mEyesRuntimeCalib.rPercent = FCString::Atoi(*InFrameData->MetaData.StringMetaData["e_r_percent"]);
	}

	if (InFrameData->MetaData.StringMetaData.Contains("e_p_multiply"))
	{
		mEyesRuntimeCalib.pMult = InFrameData->MetaData.StringMetaData["e_p_multiply"] == "true";
		mEyesRuntimeCalib.pPercent = FCString::Atoi(*InFrameData->MetaData.StringMetaData["e_p_percent"]);
	}

	if (InFrameData->MetaData.StringMetaData.Contains("e_y_multiply"))
	{
		mEyesRuntimeCalib.yMult = InFrameData->MetaData.StringMetaData["e_y_multiply"] == "true";
		mEyesRuntimeCalib.yPercent = FCString::Atoi(*InFrameData->MetaData.StringMetaData["e_y_percent"]);
	}
	
		
	if(!mRetargetingIsOn)
		return;

	int32 vHeadIdx = -1, vEye1Idx = -1, vEye2Idx = -1;

	if (InFrameData->MetaData.StringMetaData.Contains("head"))
		vHeadIdx = FCString::Atoi(*InFrameData->MetaData.StringMetaData["head"]);
	if (InFrameData->MetaData.StringMetaData.Contains("eye1"))
		vEye1Idx = FCString::Atoi(*InFrameData->MetaData.StringMetaData["eye1"]);
	if (InFrameData->MetaData.StringMetaData.Contains("eye2"))
		vEye2Idx = FCString::Atoi(*InFrameData->MetaData.StringMetaData["eye2"]);

	FQuat vEye1Rot = FQuat();
	FQuat vEye2Rot = FQuat();
	FCompactPoseBoneIndex vEye1BoneIdx = FCompactPoseBoneIndex(INDEX_NONE);
	FCompactPoseBoneIndex vEye2BoneIdx = FCompactPoseBoneIndex(INDEX_NONE);

	const TArray<FName>& SourceBoneNames = InSkeletonData->BoneNames;
	const TArray<FName>& SourceCurveNames = InSkeletonData->PropertyNames;

	// Advanced mapping
	if (SkeletalMesh && !ESCPath.FilePath.IsEmpty())
	{
		if (SkeletalMesh != vSkeletalMesh)
		{
			if (mErrCode != DxyzLLErrCode::MESH_ERR)
			{
				UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Error : "
					"The skeletal mesh associated with LiveLink differs from the RetargetingAsset skeletal mesh !"));
			}

			mErrCode = DxyzLLErrCode::MESH_ERR;
			return;
		}

		if (!_compareEscAndSource(SourceBoneNames, SourceCurveNames))
		{
			if (mErrCode != DxyzLLErrCode::ESC_ERR)
			{
				UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Error : "
					"The RetargetingAsset ESC differs from Dynamixyz Grabber's ESC !"));
			}

			mErrCode = DxyzLLErrCode::ESC_ERR;
			return;
		}

		FReferenceSkeleton Skel = SkeletalMesh->RefSkeleton;
		for (int32 vBoneArrayIdx = 0; vBoneArrayIdx < ListOfBones.Num(); ++vBoneArrayIdx)
		{
			// Bone is disabled, ignore it
			if (ListOfBones[vBoneArrayIdx].bOverride_EnableBone != 1
				|| ListOfBones[vBoneArrayIdx].MappedBones[0].RemapName.IsEmpty())
				continue;

			// idx in ESC is wrong (should not happen)
			int32 vBoneESCIdx = ListOfBones[vBoneArrayIdx].ESCBoneIdx;
			if (vBoneESCIdx >= SourceBoneNames.Num())
				continue;

			// Name is not the same between source ESC and BP ESC (should not happen)
			FName BoneName = SourceBoneNames[vBoneESCIdx];
			if (ListOfBones[vBoneArrayIdx].BoneName.Compare(BoneName.ToString()) != 0)
				continue;

			// Loop on all mapped bones
			for (int j = 0; j < ListOfBones[vBoneArrayIdx].MappedBones.Num(); ++j)
			{
				FName RemapBoneName = FName(*ListOfBones[vBoneArrayIdx].MappedBones[j].RemapName);

				int32 vSkelBoneIdx = Skel.FindBoneIndex(RemapBoneName);
				if (vSkelBoneIdx == -1)
					continue;

				FTransform BoneTransform = OutPose.GetBones()[vSkelBoneIdx];
				FTransform NewBoneTransform = InFrameData->Transforms[vBoneESCIdx];

				if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.Enabled)
				{
                    FRotator vRotOffset = NewBoneTransform.GetRotation().Rotator();

					// 1. Apply offsets
					if (vBoneESCIdx == vHeadIdx)
						vRotOffset -= mHeadRuntimeCalib.rotOffset;
					else if (vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx)
						vRotOffset -= mEyesRuntimeCalib.rotOffset;

					// 2. Invert axes if neede
					FRotator vRot = _updateRotationWithSettings(vRotOffset, vBoneESCIdx == vHeadIdx).Rotator();

					// Check if axis X (Roll) is locked for head or eyes
					if (vBoneESCIdx == vHeadIdx && mHeadRuntimeCalib.rLock)
					{
						vRot.Roll = mHeadRuntimeCalib.rotOffset.Roll;
					}
					else if ((vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx) && mEyesRuntimeCalib.rLock)
					{
						vRot.Roll = mEyesRuntimeCalib.rotOffset.Roll;
					}
					else
					{
						// 3. Apply percentages on X (Roll) (Runtime calib overrides BP calib)
						if (vBoneESCIdx == vHeadIdx && mHeadRuntimeCalib.rMult)
						{
							vRot.Roll = vRot.Roll * (float)mHeadRuntimeCalib.rPercent / 100.0f;
						}
						else if ((vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx) && mEyesRuntimeCalib.rMult)
						{
							vRot.Roll = vRot.Roll * (float)mEyesRuntimeCalib.rPercent / 100.0f;
						}
						else if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.XPercent != 100)
					{
						vRot.Roll = vRot.Roll * (float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.XPercent / 100.0f;
					}
						// 4. Clamp X (Roll) (Runtime calib overrides BP calib)
						if (vBoneESCIdx == vHeadIdx && mHeadRuntimeCalib.rClamp)
						{
							vRot.Roll = FMath::Max(mHeadRuntimeCalib.rClampVal.X, vRot.Roll);
							vRot.Roll = FMath::Min(mHeadRuntimeCalib.rClampVal.Y, vRot.Roll);
						}
						else if ((vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx) && mEyesRuntimeCalib.rClamp)
						{
							vRot.Roll = FMath::Max(mEyesRuntimeCalib.rClampVal.X, vRot.Roll);
							vRot.Roll = FMath::Min(mEyesRuntimeCalib.rClampVal.Y, vRot.Roll);
						}
						else if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.XClamp || mHeadRuntimeCalib.rClamp)
					{
						vRot.Roll = FMath::Max((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.XMinClamp, vRot.Roll);
						vRot.Roll = FMath::Min((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.XMaxClamp, vRot.Roll);
					}
					}
					// Check if axis Y (Pitch) is locked
					if (vBoneESCIdx == vHeadIdx && mHeadRuntimeCalib.pLock)
					{
						vRot.Pitch = mHeadRuntimeCalib.rotOffset.Pitch;
					}
					else if ((vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx) && mEyesRuntimeCalib.pLock)
					{
						vRot.Pitch = mEyesRuntimeCalib.rotOffset.Pitch;
					}
					else
					{
						// 5. Apply percentage on Y (Pitch) (Runtime calib overrides BP calib)
						if (vBoneESCIdx == vHeadIdx && mHeadRuntimeCalib.pMult)
						{
							vRot.Pitch = vRot.Pitch * (float)mHeadRuntimeCalib.pPercent / 100.0f;
						}
						else if ((vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx) && mEyesRuntimeCalib.pMult)
						{
							vRot.Pitch = vRot.Pitch * (float)mEyesRuntimeCalib.pPercent / 100.0f;
						}
						else if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.YPercent != 100)
					{
						vRot.Pitch = vRot.Pitch * (float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.YPercent / 100.0f;
					}
						// 6. Clamp Y (Pitch) (Runtime calib overrides BP calib)
						if (vBoneESCIdx == vHeadIdx && mHeadRuntimeCalib.pClamp)
						{
							vRot.Pitch = FMath::Max(mHeadRuntimeCalib.pClampVal.X, vRot.Pitch);
							vRot.Pitch = FMath::Min(mHeadRuntimeCalib.pClampVal.Y, vRot.Pitch);
						}
						else if ((vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx) && mEyesRuntimeCalib.pClamp)
						{
							vRot.Pitch = FMath::Max(mEyesRuntimeCalib.pClampVal.X, vRot.Pitch);
							vRot.Pitch = FMath::Min(mEyesRuntimeCalib.pClampVal.Y, vRot.Pitch);
						}
						else if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.YClamp)
					{
						vRot.Pitch = FMath::Max((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.YMinClamp, vRot.Pitch);
						vRot.Pitch = FMath::Min((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.YMaxClamp, vRot.Pitch);
					}
					}
					// Check if axis Z (Yaw) is locked
					if (vBoneESCIdx == vHeadIdx && mHeadRuntimeCalib.yLock)
					{
						vRot.Yaw = mHeadRuntimeCalib.rotOffset.Yaw;
					}
					else if ((vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx) && mEyesRuntimeCalib.yLock)
					{
						vRot.Yaw = mEyesRuntimeCalib.rotOffset.Yaw;
					}
					else
					{
						// 7. Apply percentage on Z (Yaw)
						if (vBoneESCIdx == vHeadIdx && mHeadRuntimeCalib.yMult)
						{
							vRot.Yaw = vRot.Yaw * (float)mHeadRuntimeCalib.yPercent / 100.0f;
						}
						else if ((vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx) && mEyesRuntimeCalib.yMult)
						{
							vRot.Yaw = vRot.Yaw * (float)mEyesRuntimeCalib.yPercent / 100.0f;
						}
						else if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.ZPercent != 100)
					{
						vRot.Yaw = vRot.Yaw * (float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.ZPercent / 100.0f;
					}
						// 8. Clamp Z (Yaw)
						if (vBoneESCIdx == vHeadIdx && mHeadRuntimeCalib.yClamp)
						{
							vRot.Yaw = FMath::Max(mHeadRuntimeCalib.yClampVal.X, vRot.Yaw);
							vRot.Yaw = FMath::Min(mHeadRuntimeCalib.yClampVal.Y, vRot.Yaw);
						}
						else if ((vBoneESCIdx == vEye1Idx || vBoneESCIdx == vEye2Idx) && mEyesRuntimeCalib.yClamp)
						{
							vRot.Yaw = FMath::Max(mEyesRuntimeCalib.yClampVal.X, vRot.Yaw);
							vRot.Yaw = FMath::Min(mEyesRuntimeCalib.yClampVal.Y, vRot.Yaw);
						}
						else if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.ZClamp || mHeadRuntimeCalib.yClamp)
					{
						vRot.Yaw = FMath::Max((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.ZMinClamp, vRot.Yaw);
						vRot.Yaw = FMath::Min((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyRotation.ZMaxClamp, vRot.Yaw);
					}
					}
                    BoneTransform.SetRotation(vRot.Quaternion());
				}

				if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.Enabled)
				{
					FVector vTrans = NewBoneTransform.GetTranslation();
					if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.XPercent != 100)
					{
						vTrans.X = vTrans.X * (float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.XPercent / 100.0f;
					}
					if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.XClamp)
					{
						vTrans.X = FMath::Max((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.XMinClamp, vTrans.X);
						vTrans.X = FMath::Min((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.XMaxClamp, vTrans.X);
					}
					if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.YPercent != 100)
					{
						vTrans.Y = vTrans.Y * (float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.YPercent / 100.0f;
					}
					if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.YClamp)
					{
						vTrans.Y = FMath::Max((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.YMinClamp, vTrans.Y);
						vTrans.Y = FMath::Min((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.YMaxClamp, vTrans.Y);
					}
					if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.ZPercent != 100)
					{
						vTrans.Z = vTrans.Z * (float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.ZPercent / 100.0f;
					}
					if (ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.ZClamp)
					{
						vTrans.Z = FMath::Max((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.ZMinClamp, vTrans.Z);
						vTrans.Z = FMath::Min((float)ListOfBones[vBoneArrayIdx].MappedBones[j].ApplyTranslation.ZMaxClamp, vTrans.Z);
					}
					BoneTransform.SetTranslation(_updateTranslationWithSettings(vTrans, vBoneESCIdx == vHeadIdx));
				}

				BoneTransform.SetRotation(BoneTransform.GetRotation().GetNormalized());

				int32 MeshIndex = OutPose.GetBoneContainer().GetPoseBoneIndexForBoneName(RemapBoneName);
				if (MeshIndex != INDEX_NONE)
				{
					FCompactPoseBoneIndex CPIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(MeshIndex));
					if (CPIndex != INDEX_NONE)
					{
						OutPose[CPIndex] = BoneTransform;
						if (UseAverageEyeRotation)
						{
							if (vBoneESCIdx == vEye1Idx)
							{
								vEye1Rot = BoneTransform.GetRotation();
								vEye1BoneIdx = CPIndex;
							}
							else if (vBoneESCIdx == vEye2Idx)
							{
								vEye2Rot = BoneTransform.GetRotation();
								vEye2BoneIdx = CPIndex;
							}
						}
					}
				}
			}
		}

		if (UseAverageEyeRotation && vEye1BoneIdx != INDEX_NONE && vEye2BoneIdx != INDEX_NONE)
		{
			OutPose[vEye1BoneIdx].SetRotation(FQuat((vEye1Rot + vEye2Rot)*0.5).GetNormalized());
			OutPose[vEye2BoneIdx].SetRotation(FQuat((vEye1Rot + vEye2Rot)*0.5).GetNormalized());
		}
	}
	else
	{
		// Simple mapping => should be identical to the LiveLinkRemapAsset
		TArray<FTransform> BonePoses;
		BonePoses.SetNum(SourceBoneNames.Num());

		for (int32 i = 0; i < SourceBoneNames.Num(); ++i)
		{
			FName BoneName = SourceBoneNames[i];
			FTransform BoneTransform = BonePoses[i];
            FTransform NewBoneTransform = InFrameData->Transforms[i];

			FRotator vRot = NewBoneTransform.GetRotation().Rotator();
			if (i == vHeadIdx)
				vRot -= mHeadRuntimeCalib.rotOffset;
			else if (i == vEye1Idx || i == vEye2Idx)
				vRot -= mEyesRuntimeCalib.rotOffset;
			FRotator vRotOffset = _updateRotationWithSettings(vRot, i == vHeadIdx).Rotator();
			BoneTransform.SetRotation(vRotOffset.Quaternion());

			BoneTransform.SetTranslation(_updateTranslationWithSettings(NewBoneTransform.GetTranslation(), false));

			bool vBoneFound = false;
			int32 MeshIndex = OutPose.GetBoneContainer().GetPoseBoneIndexForBoneName(BoneName);
			if (MeshIndex != INDEX_NONE)
			{
				FCompactPoseBoneIndex CPIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(MeshIndex));
				if (CPIndex != INDEX_NONE)
				{
					vBoneFound = true;
					OutPose[CPIndex] = BoneTransform;
				}
			}

			if (!vBoneFound)
			{
				if ((mRTMappingState & NALL_BONES) == 0)
				{
					UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : "
						"Not all ESC bones were found in the SkeletalMesh. Fill the DxyzLiveLinkRetargetAsset to remap missing bones."));
				}
				mRTMappingState |= NALL_BONES;
			}
		}
	}

	// Compute FPS
	++mNbTreatedFrame;
	int vElapsed = (FDateTime::Now() - mStartTime).GetTotalMilliseconds();
	if (vElapsed >= 1000)
	{
		mFPS = ((float)mNbTreatedFrame / ((float)(vElapsed / 1000.0f)));
		mNbTreatedFrame = 0;
		mStartTime = FDateTime::Now();

		if (LogFPS)
			UE_LOG(DxyzLog, Log, TEXT("[DxyzLiveLinkRetargetAsset] - Info : Animation FPS is %f"), mFPS);
	}
}

void UDxyzLiveLinkRetargetAsset::BuildPoseAndCurveFromBaseData(float DeltaTime, const FLiveLinkBaseStaticData* InBaseStaticData, const FLiveLinkBaseFrameData* InBaseFrameData, FCompactPose& OutPose, FBlendedCurve& OutCurve)
{
	if (mErrCode != DxyzLLErrCode::NO_ERR || !mRetargetingIsOn)
		return;

	const USkeleton* Skeleton = OutPose.GetBoneContainer().GetSkeletonAsset();

    // Advanced case
    if (SkeletalMesh && !ESCPath.FilePath.IsEmpty())
    {
        // Should not happen because it means the ESC is not the same
        if (ListOfMorphTargets.Num() != InBaseStaticData->PropertyNames.Num())
        {
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Error : "
                "Wrong number of curves in the provided ESC !"));
            return;
        }

        for (int32 vCurveArrayIdx = 0; vCurveArrayIdx < ListOfMorphTargets.Num(); ++vCurveArrayIdx)
        {
            // Curve is disabled, ignore it
            if (ListOfMorphTargets[vCurveArrayIdx].bOverride_EnableCurve != 1
                || ListOfMorphTargets[vCurveArrayIdx].MappedCurves[0].RemapName.IsEmpty())
                continue;

            // idx in ESC is wrong (should not happen)
            int32 vCurveESCIdx = ListOfMorphTargets[vCurveArrayIdx].ESCCurveIdx;
			
			if (vCurveESCIdx >= InBaseStaticData->PropertyNames.Num())
            {
                continue;
            }

            // Name is not the same between source ESC and BP ESC (should not happen)
            FName vName = InBaseStaticData->PropertyNames[vCurveESCIdx];
            if (ListOfMorphTargets[vCurveArrayIdx].CurveName.Compare(vName.ToString()) != 0)
                continue;

            // Loop on all mapped curves
            for (int j = 0; j < ListOfMorphTargets[vCurveArrayIdx].MappedCurves.Num(); ++j)
            {
                if (ListOfMorphTargets[vCurveArrayIdx].MappedCurves[j].RemapName.IsEmpty())
                    continue;

				float vValue = InBaseFrameData->PropertyValues[vCurveESCIdx];
                float vMult = ListOfMorphTargets[vCurveArrayIdx].MappedCurves[j].ValueMultiplier;

                if (vMult > 0)
                {
                    vValue *= (1 + vMult);
                }
                else if (vMult < 0)
                {
                    vValue /= (1 + FMath::Abs(vMult));
                }

                if (vValue > 1)
                    vValue = 1;
                if (vValue < 0)
                    vValue = 0;

                if (ListOfMorphTargets[vCurveArrayIdx].MappedCurves[j].Clamp)
                {
                    vValue = FMath::Max((float)ListOfMorphTargets[vCurveArrayIdx].MappedCurves[j].MinClamp, vValue);
                    vValue = FMath::Min((float)ListOfMorphTargets[vCurveArrayIdx].MappedCurves[j].MaxClamp, vValue);
                }

                ApplyCurveValue(Skeleton, FName(*ListOfMorphTargets[vCurveArrayIdx].MappedCurves[j].RemapName), vValue, OutCurve);
            }
        }
    }

    // Simple case
    else
    {
        for (int32 CurveIdx = 0; CurveIdx < InBaseStaticData->PropertyNames.Num(); ++CurveIdx)
        {
            SmartName::UID_Type UID = Skeleton->GetUIDByName(USkeleton::AnimCurveMappingName, InBaseStaticData->PropertyNames[CurveIdx]);
            if (UID != SmartName::MaxUID)
            {
                ApplyCurveValue(Skeleton, InBaseStaticData->PropertyNames[CurveIdx], InBaseFrameData->PropertyValues[CurveIdx], OutCurve);
            }
            else
            {
                if ((mRTMappingState & NALL_CURVES) == 0)
                {
                    UE_LOG(DxyzLog, Warning, TEXT("[DxyzLiveLinkRetargetAsset] - Warning : "
                    "Not all ESC curves were found in the SkeletalMesh. Fill the DxyzLiveLinkRetargetAsset to remap missing curves."));
                }
                mRTMappingState |= NALL_CURVES;
            }
        }
    }
}

FQuat UDxyzLiveLinkRetargetAsset::_updateRotationWithSettings(FRotator InRotation, bool IsHead)
{
    FRotator OutRotation = InRotation;
    float Rx = OutRotation.Roll;
    float Ry = OutRotation.Pitch;
    float Rz = OutRotation.Yaw;

    if (IsHead)
    {
        if (RotationSettings.HeadInvertXAxis)
            Rx = Rx*-1.0f;

        if (RotationSettings.HeadInvertYAxis)
            Ry = Ry*-1.0f;

        if (RotationSettings.HeadInvertZAxis)
            Rz = Rz*-1.0f;

        OutRotation = FRotator::MakeFromEuler(FVector(Rx, Ry, Rz));

        switch (HeadAxisSwapping)
        {
        case DxyzAxis::XYZ:
            OutRotation = FRotator::MakeFromEuler(FVector(Rx, Ry, Rz));
            break;

        case DxyzAxis::XZY:
            OutRotation = FRotator::MakeFromEuler(FVector(Rx, Rz, Ry));
            break;

        case DxyzAxis::YZX:
            OutRotation = FRotator::MakeFromEuler(FVector(Ry, Rz, Rx));
            break;

        case DxyzAxis::YXZ:
            OutRotation = FRotator::MakeFromEuler(FVector(Ry, Rx, Rz));
            break;

        case DxyzAxis::ZYX:
            OutRotation = FRotator::MakeFromEuler(FVector(Rz, Ry, Rx));
            break;

        case DxyzAxis::ZXY:
            OutRotation = FRotator::MakeFromEuler(FVector(Rz, Rx, Ry));
            break;
        }
    }
    else
    {
        if (RotationSettings.InvertXAxis)
            Rx = Rx*-1.0f;

        if (RotationSettings.InvertYAxis)
            Ry = Ry*-1.0f;

        if (RotationSettings.InvertZAxis)
            Rz = Rz*-1.0f;

        OutRotation = FRotator::MakeFromEuler(FVector(Rx, Ry, Rz));

        switch (BonesAxisSwapping)
        {
        case DxyzAxis::XYZ:
            OutRotation = FRotator::MakeFromEuler(FVector(Rx, Ry, Rz));
            break;

        case DxyzAxis::XZY:
            OutRotation = FRotator::MakeFromEuler(FVector(Rx, Rz, Ry));
            break;

        case DxyzAxis::YZX:
            OutRotation = FRotator::MakeFromEuler(FVector(Ry, Rz, Rx));
            break;

        case DxyzAxis::YXZ:
            OutRotation = FRotator::MakeFromEuler(FVector(Ry, Rx, Rz));
            break;

        case DxyzAxis::ZYX:
            OutRotation = FRotator::MakeFromEuler(FVector(Rz, Ry, Rx));
            break;

        case DxyzAxis::ZXY:
            OutRotation = FRotator::MakeFromEuler(FVector(Rz, Rx, Ry));
            break;
        }
    }

    return OutRotation.Quaternion();
}

FVector UDxyzLiveLinkRetargetAsset::_updateTranslationWithSettings(FVector InTranslation, bool IsHead)
{
    FVector OutTranslation = InTranslation;
    float Tx = OutTranslation.X;
    float Ty = OutTranslation.Y;
    float Tz = OutTranslation.Z;

    if (IsHead)
    {
        if (TranslationSettings.HeadInvertXAxis)
            Tx = Tx*-1.0f;

        if (TranslationSettings.HeadInvertYAxis)
            Ty = Ty*-1.0f;

        if (TranslationSettings.HeadInvertZAxis)
            Tz = Tz*-1.0f;

        switch (HeadAxisSwapping)
        {
        case DxyzAxis::XYZ:
            OutTranslation = FVector(Tx, Ty, Tz)*TranslationSettings.HeadPositionScale;
            break;

        case DxyzAxis::XZY:
            OutTranslation = FVector(Tx, Tz, Ty)*TranslationSettings.HeadPositionScale;
            break;

        case DxyzAxis::YZX:
            OutTranslation = FVector(Ty, Tz, Tx)*TranslationSettings.HeadPositionScale;
            break;

        case DxyzAxis::YXZ:
            OutTranslation = FVector(Ty, Tx, Tz)*TranslationSettings.HeadPositionScale;
            break;

        case DxyzAxis::ZYX:
            OutTranslation = FVector(Tz, Ty, Tx)*TranslationSettings.HeadPositionScale;
            break;

        case DxyzAxis::ZXY:
            OutTranslation = FVector(Tz, Tx, Ty)*TranslationSettings.HeadPositionScale;
            break;
        }

    }
    else
    {
        if (TranslationSettings.InvertXAxis)
            Tx = Tx*-1.0f;

        if (TranslationSettings.InvertYAxis)
            Ty = Ty*-1.0f;

        if (TranslationSettings.InvertZAxis)
            Tz = Tz*-1.0f;

        switch (BonesAxisSwapping)
        {
        case DxyzAxis::XYZ:
            OutTranslation = FVector(Tx, Ty, Tz)*TranslationSettings.PositionScale;
            break;

        case DxyzAxis::XZY:
            OutTranslation = FVector(Tx, Tz, Ty)*TranslationSettings.PositionScale;
            break;

        case DxyzAxis::YZX:
            OutTranslation = FVector(Ty, Tz, Tx)*TranslationSettings.PositionScale;
            break;

        case DxyzAxis::YXZ:
            OutTranslation = FVector(Ty, Tx, Tz)*TranslationSettings.PositionScale;
            break;

        case DxyzAxis::ZYX:
            OutTranslation = FVector(Tz, Ty, Tx)*TranslationSettings.PositionScale;
            break;

        case DxyzAxis::ZXY:
            OutTranslation = FVector(Tz, Tx, Ty)*TranslationSettings.PositionScale;
            break;
        }
    }

    return OutTranslation;
}

