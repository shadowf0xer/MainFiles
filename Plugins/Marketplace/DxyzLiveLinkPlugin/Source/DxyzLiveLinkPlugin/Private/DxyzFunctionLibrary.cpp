/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "DxyzFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFilemanager.h"
#include "Serialization/JsonSerializer.h"
#include "DxyzLiveLinkPlugin.h"
#include "Features/IModularFeatures.h"
#include "ILiveLinkClient.h"
#include "DxyzLiveLinkSource.h"

TMap<FString, FSubjectData> UDxyzFunctionLibrary::mSubjectDataMap = TMap<FString, FSubjectData>();

bool UDxyzFunctionLibrary::IsDxyzSubject(FString SubjectName)
{
	return _isDxyzSubject(SubjectName);
}

bool UDxyzFunctionLibrary::LoadConfigFile()
{
	return _loadConfigFile();
}

bool UDxyzFunctionLibrary::LoadWidgetState(UClass* Class, bool& Maximized, FVector2D& Position, TMap<FString, FString>& OtherParams)
{
	return _loadWidgetState(Class, Maximized, Position, OtherParams);
}

bool UDxyzFunctionLibrary::SaveWidgetState(UClass* Class, bool Maximized, FVector2D Position, TMap<FString, FString> OtherParams)
{
	return _saveWidgetState(Class, Maximized, Position, OtherParams);
}

bool UDxyzFunctionLibrary::SaveConfigFile()
{
	return _saveConfigFile();
}

bool UDxyzFunctionLibrary::CreateSubjectEntry(FString SubjectName)
{
	return _addNewSuject(SubjectName);
}

FString UDxyzFunctionLibrary::ComputeHeadOffset(FRotator Offset, FString SubjectName, FSubjectCalib HeadCalibration)
{
	FRotator vResOffset(0, 0, 0);

	if (HeadCalibration.RollOffset)
	{
		vResOffset.Roll = Offset.Roll;
	}
	if (HeadCalibration.PitchOffset)
	{
		vResOffset.Pitch = Offset.Pitch;
	}
	if (HeadCalibration.YawOffset)
	{
		vResOffset.Yaw = Offset.Yaw;
	}

	return _rotatorToFormatString(vResOffset);
}

FString UDxyzFunctionLibrary::ComputeEyesOffset(FRotator Offset, FString SubjectName, FSubjectCalib EyesCalibration)
{
	FRotator vResOffset(0, 0, 0);

	if (EyesCalibration.RollOffset)
	{
		vResOffset.Roll = Offset.Roll;
	}
	if (EyesCalibration.PitchOffset)
	{
		vResOffset.Pitch = Offset.Pitch;
	}
	if (EyesCalibration.YawOffset)
	{
		vResOffset.Yaw = Offset.Yaw;
	}

	return _rotatorToFormatString(vResOffset);
}

bool UDxyzFunctionLibrary::SetHeadCalibrationForSubject(FString SubjectName, FSubjectCalib HeadCalibration)
{
	return _setSubjectCalibrations(SubjectName, HeadCalibration, FSubjectCalib());
}

bool UDxyzFunctionLibrary::SetEyesCalibrationForSubject(FString SubjectName, FSubjectCalib EyesCalibration)
{
	return _setSubjectCalibrations(SubjectName, FSubjectCalib(), EyesCalibration);
}

bool UDxyzFunctionLibrary::SetRetargetingStatusForSubject(FString SubjectName, bool RetargetingOn)
{
	return _setRetargetingStatusForSubject(SubjectName, RetargetingOn);
}

bool UDxyzFunctionLibrary::GetSubjectOffsets(FString SubjectName, FString& HeadOffset, FString& EyesOffset)
{
	return _getSubjectOffsets(SubjectName, HeadOffset, EyesOffset);
}

bool UDxyzFunctionLibrary::GetSubjectCalibrations(FString SubjectName,
	FSubjectCalib& HeadCalibration,
	FSubjectCalib& EyesCalibration)
{
	return _getSubjectCalibrations(SubjectName, HeadCalibration, EyesCalibration);
}

bool UDxyzFunctionLibrary::GetSubjectRetargetingStatus(FString SubjectName, bool& RetargetingOn)
{
	return _getSubjectApplyNeutralValue(SubjectName, RetargetingOn);
}

bool UDxyzFunctionLibrary::ApplySubjectHeadOffset(FString SubjectName, FString HeadOffset)
{
	return _setSubjectOffsets(SubjectName, HeadOffset, FString());
}

bool UDxyzFunctionLibrary::ApplySubjectEyesOffset(FString SubjectName, FString EyesOffset)
{
	return _setSubjectOffsets(SubjectName, FString(), EyesOffset);
}

bool UDxyzFunctionLibrary::ApplySubjectOffsets(FString SubjectName, FString HeadOffset, FString EyesOffset)
{
	return _setSubjectOffsets(SubjectName, HeadOffset, EyesOffset);
}

bool UDxyzFunctionLibrary::ApplySubjectCalibrations(FString SubjectName, FSubjectCalib HeadCalib, FSubjectCalib EyesCalib)
{
	return _setSubjectCalibrations(SubjectName, HeadCalib, EyesCalib);
}

bool UDxyzFunctionLibrary::SendSubjectDataToLiveLink(FString SubjectName)
{
	return _sendSubjectDataToLiveLink(SubjectName);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////

bool UDxyzFunctionLibrary::_isDxyzSubject(FString iSubjectName)
{
	for (int i = 0; i < FDxyzLiveLinkSource::sSources.Num(); ++i)
	{
		if (FDxyzLiveLinkSource::sSources[i].subjectName.ToLower().Compare(iSubjectName.ToLower()) == 0)
		{
			UE_LOG(DxyzLog, Log, TEXT("[UDxyzFunctionLibrary] - Info : Subject %s is a Dxyz subject."), *iSubjectName);
			return true;
		}
	}
	UE_LOG(DxyzLog, Log, TEXT("[UDxyzFunctionLibrary] - Info : Subject %s is not a Dxyz subject."), *iSubjectName);
	return false;
}

bool UDxyzFunctionLibrary::_loadConfigFile()
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString vConfPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(
		FPaths::ProjectContentDir()), FString("DxyzSaved"));

	FString vFilePath = FPaths::Combine(vConfPath, FString("Calib.dxyz"));
	if (PlatformFile.DirectoryExists(*vConfPath) && PlatformFile.FileExists(*vFilePath))
	{
		FString JsonString;
		if (FFileHelper::LoadFileToString(JsonString, *vFilePath))
		{
			TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
			TSharedRef< TJsonReader<TCHAR> > JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

			if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
			{
				//mSubjectDataMap.Empty();

				TMap<FString, TSharedPtr<FJsonValue> > &SubjectFields = JsonObject->Values;
				TArray<FString> SubjectNames;
				SubjectFields.GetKeys(SubjectNames);

				for (int i = 0; i < SubjectNames.Num(); ++i)
				{
					FSubjectData vSubjectData;
					FString vSubjectName = SubjectNames[i];

					TSharedPtr<FJsonObject> SubjectObject = JsonObject->GetObjectField(vSubjectName);

					if (SubjectObject->HasField("head"))
					{
						TSharedPtr<FJsonObject> HeadField = SubjectObject->GetObjectField("head");
						if (HeadField->HasField("calib"))
							_buildCalibrationFromJson(HeadField->GetObjectField("calib"), vSubjectData.HeadCalib);
						if (HeadField->HasField("offset"))
							vSubjectData.HeadOffset.InitFromString(HeadField->GetStringField("offset"));
					}

					if (SubjectObject->HasField("eyes"))
					{
						TSharedPtr<FJsonObject> EyesField = SubjectObject->GetObjectField("eyes");
						if (EyesField->HasField("calib"))
							_buildCalibrationFromJson(EyesField->GetObjectField("calib"), vSubjectData.EyesCalib);
						if (EyesField->HasField("offset"))
							vSubjectData.EyesOffset.InitFromString(EyesField->GetStringField("offset"));
					}

					mSubjectDataMap.Add(vSubjectName, vSubjectData);
				}
				return true;
			}
		}
	}
	else
	{
		// No config file was found, reset calibs and offsets to default
		TArray<FString> vSubjectNames;
		mSubjectDataMap.GetKeys(vSubjectNames);

		for (int i = 0; i < vSubjectNames.Num(); ++i)
			mSubjectDataMap[vSubjectNames[i]] = FSubjectData();
	}
	return false;
}

bool UDxyzFunctionLibrary::_saveConfigFile()
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString vConfPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(
		FPaths::ProjectContentDir()), FString("DxyzSaved"));
	FString vFilePath = FPaths::Combine(vConfPath, FString("Calib.dxyz"));

	// First get file content to avoid overriding info for non-connected sources
	TSharedPtr<FJsonObject> JsonRootObject = MakeShareable(new FJsonObject());

	FString JsonString;
	if (FFileHelper::LoadFileToString(JsonString, *vFilePath))
	{
		TSharedRef< TJsonReader<TCHAR> > JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

		FJsonSerializer::Deserialize(JsonReader, JsonRootObject);
	}

	// Then serialize the subject data map
	TArray<FString> vSubjectNames;
	mSubjectDataMap.GetKeys(vSubjectNames);

	for (int i = 0; i < vSubjectNames.Num(); ++i)
	{
		FSubjectData vSubjectData = mSubjectDataMap[vSubjectNames[i]];
		TSharedPtr<FJsonObject> SubjectObject = MakeShareable(new FJsonObject());

		if (JsonRootObject->HasField(vSubjectNames[i]))
		{
			SubjectObject = JsonRootObject->GetObjectField(vSubjectNames[i]);
		}

		// Head--
		TSharedPtr<FJsonObject> HeadObject = MakeShareable(new FJsonObject());
		TSharedPtr<FJsonObject> HeadCalibObject = MakeShareable(new FJsonObject());

		// Head offset && calibration
		HeadObject->SetStringField("offset", _rotatorToFormatString(vSubjectData.HeadOffset));
		_buildJsonFromCalibration(vSubjectData.HeadCalib, HeadCalibObject);

		HeadObject->SetObjectField("calib", HeadCalibObject);
		SubjectObject->SetObjectField("head", HeadObject);
		// --Head

		// Eyes--
		TSharedPtr<FJsonObject> EyesObject = MakeShareable(new FJsonObject());
		TSharedPtr<FJsonObject> EyesCalibObject = MakeShareable(new FJsonObject());

		// Eyes offset && calibration
		EyesObject->SetStringField("offset", _rotatorToFormatString(vSubjectData.EyesOffset));
		_buildJsonFromCalibration(vSubjectData.EyesCalib, EyesCalibObject);

		EyesObject->SetObjectField("calib", EyesCalibObject);
		SubjectObject->SetObjectField("eyes", EyesObject);
		// --Eyes

		JsonRootObject->SetObjectField(vSubjectNames[i], SubjectObject);
	}

	// Write the file
	FString OutputString;
	TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonRootObject.ToSharedRef(), Writer);

	if (!FFileHelper::SaveStringToFile(OutputString, *vFilePath))
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzFunctionLibrary] - Error : Could not save file '%s'"), *vFilePath);
		return false;
	}

	return true;
}

bool UDxyzFunctionLibrary::_addNewSuject(FString iSubjectName)
{
	if(!mSubjectDataMap.Contains(iSubjectName))
	{
		mSubjectDataMap.Add(iSubjectName, FSubjectData());
		return true;
	}
	return false;
}

bool UDxyzFunctionLibrary::_loadWidgetState(UClass* Class, bool& Maximized, FVector2D& Position, TMap<FString, FString>& OtherParams)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString vConfPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(
		FPaths::ProjectContentDir()), FString("DxyzSaved"));
	FString vFilePath = FPaths::Combine(vConfPath, FString("Widgets.dxyz"));

	if (PlatformFile.DirectoryExists(*vConfPath) && PlatformFile.FileExists(*vFilePath))
	{
		FString JsonString;
		if (FFileHelper::LoadFileToString(JsonString, *vFilePath))
		{
			TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
			TSharedRef< TJsonReader<TCHAR> > JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

			if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
			{
				FString vBPName = Class->GetName();
				vBPName.RemoveAt(vBPName.Len() - 2, 2);

				if (JsonObject->HasField(vBPName))
				{
					TSharedPtr<FJsonObject> WidgetObject = JsonObject->GetObjectField(vBPName);
					TMap<FString, TSharedPtr<FJsonValue> > &Fields = WidgetObject->Values;
					TArray<FString> FieldsNames;
					Fields.GetKeys(FieldsNames);

					for (int i = 0; i < FieldsNames.Num(); ++i)
					{
						if (FieldsNames[i].Compare("maximized") == 0)
						{
							Maximized = WidgetObject->GetStringField("maximized") == "true";
						}
						else if (FieldsNames[i].Compare("position") == 0)
						{
							FVector2D vPos;
							vPos.InitFromString(WidgetObject->GetStringField("position"));
							Position = vPos;
						}
						else
						{
							OtherParams.Add(FieldsNames[i], WidgetObject->GetStringField(FieldsNames[i]));
						}
					}
					
					return true;
				}
			}
		}
	}
	return false;
}

bool UDxyzFunctionLibrary::_saveWidgetState(UClass* Class, bool Maximized, FVector2D Position, TMap<FString, FString> OtherParams)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString vConfPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(
		FPaths::ProjectContentDir()), FString("DxyzSaved"));
	FString vFilePath = FPaths::Combine(vConfPath, FString("Widgets.dxyz"));

	FString vBPName = Class->GetName();
	vBPName.RemoveAt(vBPName.Len() - 2, 2);

	// First get file content to avoid overriding info for other widgets
	TSharedPtr<FJsonObject> JsonRootObject = MakeShareable(new FJsonObject());

	FString JsonString;
	if (FFileHelper::LoadFileToString(JsonString, *vFilePath))
	{
		TSharedRef< TJsonReader<TCHAR> > JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

		FJsonSerializer::Deserialize(JsonReader, JsonRootObject);
	}

	// Then save the info for this widget
	TSharedPtr<FJsonObject> WidgetObject = MakeShareable(new FJsonObject());

	if (JsonRootObject->HasField(vBPName))
	{
		WidgetObject = JsonRootObject->GetObjectField(vBPName);
	}

	// Head offset
	WidgetObject->SetStringField("maximized", Maximized ? "true" : "false");
	WidgetObject->SetStringField("position", Position.ToString());

	TArray<FString> OtherParamsKeys;
	OtherParams.GetKeys(OtherParamsKeys);
	for (int i = 0; i < OtherParamsKeys.Num(); ++i)
	{
		// In BP we cannot have a null TMap so there will always be something
		// inside but it can be an empty string and it crashes JsonWriter...
		if(!OtherParamsKeys[i].IsEmpty())
			WidgetObject->SetStringField(OtherParamsKeys[i], OtherParams[OtherParamsKeys[i]]);
	}
		
	JsonRootObject->SetObjectField(vBPName, WidgetObject);

	// Write the file
	FString OutputString;
	TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonRootObject.ToSharedRef(), Writer);

	if (!FFileHelper::SaveStringToFile(OutputString, *vFilePath))
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzFunctionLibrary] - Error : Could not save file '%s'"), *vFilePath);
		return false;
	}

	return true;
}

bool UDxyzFunctionLibrary::_getDxyzSourceDataBySubjectName(FString iSubjectName, FGuid& oGuid, FLiveLinkAnimationFrameData* oAnimData)
{
	ILiveLinkClient* LiveLinkClient = &IModularFeatures::Get().GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName);
	if (!LiveLinkClient)
	{
		UE_LOG(DxyzLog, Warning, TEXT("[DxyzFunctionLibrary] - Warning : Could not find LiveLink module while trying to load Dynamixyz LiveLink config file."));
		return false;
	}
	for (int i = 0; i < FDxyzLiveLinkSource::sSources.Num(); ++i)
	{
		if (FDxyzLiveLinkSource::sSources[i].subjectName.Compare(iSubjectName) == 0)
		{
			oGuid = FDxyzLiveLinkSource::sSources[i].guid;
			*oAnimData = FDxyzLiveLinkSource::sSources[i].animFrameData;
			return true;
		}
	}

	return false;
}

void UDxyzFunctionLibrary::_buildCalibrationFromJson(TSharedPtr<FJsonObject> iObject, FSubjectCalib& oCalibration)
{
	oCalibration.PitchOffset = iObject->GetStringField("pitch") == "true";
	oCalibration.YawOffset = iObject->GetStringField("yaw") == "true";
	oCalibration.RollOffset = iObject->GetStringField("roll") == "true";

	oCalibration.PitchLock = iObject->GetStringField("p_lock") == "true";
	oCalibration.YawLock = iObject->GetStringField("y_lock") == "true";
	oCalibration.RollLock = iObject->GetStringField("r_lock") == "true";
	
	if (iObject->HasField("p_clamp"))
	{
		oCalibration.PitchClamp.Clamp = iObject->GetStringField("p_clamp") == "true";
		oCalibration.PitchClamp.MinClamp = FCString::Atof(*iObject->GetStringField("p_minclamp"));
		oCalibration.PitchClamp.MaxClamp = FCString::Atof(*iObject->GetStringField("p_maxclamp"));
	}

	if (iObject->HasField("y_clamp"))
	{
		oCalibration.YawClamp.Clamp = iObject->GetStringField("y_clamp") == "true";
		oCalibration.YawClamp.MinClamp = FCString::Atof(*iObject->GetStringField("y_minclamp"));
		oCalibration.YawClamp.MaxClamp = FCString::Atof(*iObject->GetStringField("y_maxclamp"));
	}

	if (iObject->HasField("r_clamp"))
	{
		oCalibration.RollClamp.Clamp = iObject->GetStringField("r_clamp") == "true";
		oCalibration.RollClamp.MinClamp = FCString::Atof(*iObject->GetStringField("r_minclamp"));
		oCalibration.RollClamp.MaxClamp = FCString::Atof(*iObject->GetStringField("r_maxclamp"));
	}

	if (iObject->HasField("p_multiplier"))
	{
		oCalibration.PitchPercent = FCString::Atoi(*iObject->GetStringField("p_multiplier"));
	}

	if (iObject->HasField("y_multiplier"))
	{
		oCalibration.YawPercent = FCString::Atoi(*iObject->GetStringField("y_multiplier"));
	}

	if (iObject->HasField("r_multiplier"))
	{
		oCalibration.RollPercent = FCString::Atoi(*iObject->GetStringField("r_multiplier"));
	}
}

void UDxyzFunctionLibrary::_buildJsonFromCalibration(const FSubjectCalib& iCalibration, TSharedPtr<FJsonObject>& ioObject)
{
	// Offset axis
	ioObject->SetStringField("pitch", iCalibration.PitchOffset ? "true" : "false");
	ioObject->SetStringField("yaw", iCalibration.YawOffset ? "true" : "false");
	ioObject->SetStringField("roll", iCalibration.RollOffset ? "true" : "false");

	// Lock
	ioObject->SetStringField("p_lock", iCalibration.PitchLock ? "true" : "false");
	ioObject->SetStringField("y_lock", iCalibration.YawLock ? "true" : "false");
	ioObject->SetStringField("r_lock", iCalibration.RollLock ? "true" : "false");

	// Clamp
	if (iCalibration.PitchClamp.Clamp)
	{
		ioObject->SetStringField("p_clamp", "true");
		ioObject->SetStringField("p_minclamp", FString::SanitizeFloat(iCalibration.PitchClamp.MinClamp));
		ioObject->SetStringField("p_maxclamp", FString::SanitizeFloat(iCalibration.PitchClamp.MaxClamp));
	}
	if (iCalibration.YawClamp.Clamp)
	{
		ioObject->SetStringField("y_clamp", "true");
		ioObject->SetStringField("y_minclamp", FString::SanitizeFloat(iCalibration.YawClamp.MinClamp));
		ioObject->SetStringField("y_maxclamp", FString::SanitizeFloat(iCalibration.YawClamp.MaxClamp));
	}
	if (iCalibration.RollClamp.Clamp)
	{
		ioObject->SetStringField("r_clamp", "true");
		ioObject->SetStringField("r_minclamp", FString::SanitizeFloat(iCalibration.RollClamp.MinClamp));
		ioObject->SetStringField("r_maxclamp", FString::SanitizeFloat(iCalibration.RollClamp.MaxClamp));
	}

	// Mult
	if (iCalibration.PitchPercent != 100)
	{
		ioObject->SetStringField("p_multiplier", FString::FromInt(iCalibration.PitchPercent));
	}
	if (iCalibration.YawPercent != 100)
	{
		ioObject->SetStringField("y_multiplier", FString::FromInt(iCalibration.YawPercent));
	}
	if (iCalibration.RollPercent != 100)
	{
		ioObject->SetStringField("r_multiplier", FString::FromInt(iCalibration.RollPercent));
	}
}

bool UDxyzFunctionLibrary::_getSubjectsNamesFromFile(TArray<FName>& oSubjectsNames)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString vConfPath = FPaths::Combine(FPaths::ConvertRelativePathToFull(
		FPaths::ProjectContentDir()), FString("DxyzSaved"));

	FString vFilePath = FPaths::Combine(vConfPath, FString("Calib.dxyz"));
	if (PlatformFile.DirectoryExists(*vConfPath) && PlatformFile.FileExists(*vFilePath))
	{
		FString JsonString;
		if (FFileHelper::LoadFileToString(JsonString, *vFilePath))
		{
			TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
			TSharedRef< TJsonReader<TCHAR> > JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

			if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
			{
				TMap<FString, TSharedPtr<FJsonValue> > &SubjectFields = JsonObject->Values;
				TArray<FString> SubjectNames;
				SubjectFields.GetKeys(SubjectNames);
				for (int i = 0; i < SubjectNames.Num(); ++i)
				{
					oSubjectsNames.Add(FName(*SubjectNames[i]));
				}
				return true;
			}
		}
	}

	return false;
}

bool UDxyzFunctionLibrary::_getSubjectOffsets(FString SubjectName,
	FString& oHeadOffsetString,
	FString& oEyesOffsetString)
{
	FRotator vNull = FRotator(0, 0, 0);
	oHeadOffsetString = _rotatorToFormatString(vNull);
	oEyesOffsetString = _rotatorToFormatString(vNull);

	FSubjectData* vData = mSubjectDataMap.Find(SubjectName);
	if (nullptr != vData)
	{
		oHeadOffsetString = _rotatorToFormatString(vData->HeadOffset);
		oEyesOffsetString = _rotatorToFormatString(vData->EyesOffset);
		return true;
	}
	return false;
}

bool UDxyzFunctionLibrary::_getSubjectCalibrations(FString SubjectName,
	FSubjectCalib& oHeadCalibration, FSubjectCalib& oEyesCalibration)
{
	oHeadCalibration = FSubjectCalib();
	oEyesCalibration = FSubjectCalib();

	FSubjectData* vData = mSubjectDataMap.Find(SubjectName);
	if (nullptr != vData)
	{
		oHeadCalibration = vData->HeadCalib;
		oEyesCalibration = vData->EyesCalib;
		return true;
	}
	return false;
}

bool UDxyzFunctionLibrary::_getSubjectApplyNeutralValue(FString iSubjectName, bool& oApply)
{
	oApply = true;

	FSubjectData* vData = mSubjectDataMap.Find(iSubjectName);
	if (nullptr != vData)
	{
		oApply = vData->RetargetingOn;
		return true;
	}
	return false;
}

bool UDxyzFunctionLibrary::_setSubjectOffsets(FString iSubjectName, FString iHeadOffset, FString iEyesOffset)
{
	FSubjectData* vData = mSubjectDataMap.Find(iSubjectName);
	if (nullptr != vData)
	{
		if(!iHeadOffset.IsEmpty())
			vData->HeadOffset.InitFromString(iHeadOffset);
		if (!iEyesOffset.IsEmpty())
			vData->EyesOffset.InitFromString(iEyesOffset);

		return _sendSubjectDataToLiveLink(iSubjectName);
	}
	return false;
}

bool UDxyzFunctionLibrary::_setSubjectCalibrations(FString iSubjectName, FSubjectCalib iHeadCalib, FSubjectCalib iEyesCalib)
{
	FSubjectData* vData = mSubjectDataMap.Find(iSubjectName);
	if (nullptr != vData)
	{
		vData->HeadCalib = iHeadCalib;
		vData->EyesCalib = iEyesCalib;

		return _sendSubjectDataToLiveLink(iSubjectName);
	}
	return false;
}

bool UDxyzFunctionLibrary::_setRetargetingStatusForSubject(FString iSubjectName, bool iIsOn)
{
	FSubjectData* vData = mSubjectDataMap.Find(iSubjectName);
	if (nullptr != vData)
	{
		vData->RetargetingOn = iIsOn;
		
		return _sendSubjectDataToLiveLink(iSubjectName);
	}

	return false;
}

bool UDxyzFunctionLibrary::_sendSubjectDataToLiveLink(FString iSubjectName)
{
	FSubjectData* vData = mSubjectDataMap.Find(iSubjectName);
	if (nullptr != vData)
	{
		FGuid vGuid;
		FLiveLinkFrameDataStruct vFrameDataStruct;
		vFrameDataStruct.InitializeWith(FLiveLinkAnimationFrameData::StaticStruct(), nullptr);
		FLiveLinkAnimationFrameData* vFrameData = vFrameDataStruct.Cast<FLiveLinkAnimationFrameData>();
		_getDxyzSourceDataBySubjectName(iSubjectName, vGuid, vFrameData);

		// Offsets
		vFrameData->MetaData.StringMetaData.Add("h_offset", vData->HeadOffset.ToString());
		vFrameData->MetaData.StringMetaData.Add("e_offset", vData->EyesOffset.ToString());

		// Calibrations
		if (vData->HeadCalib.RollLock)
			vFrameData->MetaData.StringMetaData.Add("h_r_lock", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("h_r_lock", "false");

		if (vData->HeadCalib.PitchLock)
			vFrameData->MetaData.StringMetaData.Add("h_p_lock", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("h_p_lock", "false");

		if (vData->HeadCalib.YawLock)
			vFrameData->MetaData.StringMetaData.Add("h_y_lock", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("h_y_lock", "false");

		if (vData->HeadCalib.RollClamp.Clamp)
			vFrameData->MetaData.StringMetaData.Add("h_r_clamp", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("h_r_clamp", "false");
		vFrameData->MetaData.StringMetaData.Add("h_r_minclamp", FString::SanitizeFloat(vData->HeadCalib.RollClamp.MinClamp));
		vFrameData->MetaData.StringMetaData.Add("h_r_maxclamp", FString::SanitizeFloat(vData->HeadCalib.RollClamp.MaxClamp));

		if (vData->HeadCalib.PitchClamp.Clamp)
			vFrameData->MetaData.StringMetaData.Add("h_p_clamp", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("h_p_clamp", "false");
		vFrameData->MetaData.StringMetaData.Add("h_p_minclamp", FString::SanitizeFloat(vData->HeadCalib.PitchClamp.MinClamp));
		vFrameData->MetaData.StringMetaData.Add("h_p_maxclamp", FString::SanitizeFloat(vData->HeadCalib.PitchClamp.MaxClamp));

		if (vData->HeadCalib.YawClamp.Clamp)
			vFrameData->MetaData.StringMetaData.Add("h_y_clamp", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("h_y_clamp", "false");
		vFrameData->MetaData.StringMetaData.Add("h_y_minclamp", FString::SanitizeFloat(vData->HeadCalib.YawClamp.MinClamp));
		vFrameData->MetaData.StringMetaData.Add("h_y_maxclamp", FString::SanitizeFloat(vData->HeadCalib.YawClamp.MaxClamp));

		if (vData->HeadCalib.RollPercent != 100)
			vFrameData->MetaData.StringMetaData.Add("h_r_multiply", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("h_r_multiply", "false");
		vFrameData->MetaData.StringMetaData.Add("h_r_percent", FString::FromInt(vData->HeadCalib.RollPercent));

		if (vData->HeadCalib.PitchPercent != 100)
			vFrameData->MetaData.StringMetaData.Add("h_p_multiply", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("h_p_multiply", "false");
		vFrameData->MetaData.StringMetaData.Add("h_p_percent", FString::FromInt(vData->HeadCalib.PitchPercent));

		if (vData->HeadCalib.YawPercent != 100)
			vFrameData->MetaData.StringMetaData.Add("h_y_multiply", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("h_y_multiply", "false");
		vFrameData->MetaData.StringMetaData.Add("h_y_percent", FString::FromInt(vData->HeadCalib.YawPercent));


		if (vData->EyesCalib.RollLock)
			vFrameData->MetaData.StringMetaData.Add("e_r_lock", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("e_r_lock", "false");

		if (vData->EyesCalib.PitchLock)
			vFrameData->MetaData.StringMetaData.Add("e_p_lock", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("e_p_lock", "false");

		if (vData->EyesCalib.YawLock)
			vFrameData->MetaData.StringMetaData.Add("e_y_lock", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("e_y_lock", "false");

		if (vData->EyesCalib.RollClamp.Clamp)
			vFrameData->MetaData.StringMetaData.Add("e_r_clamp", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("e_r_clamp", "false");
		vFrameData->MetaData.StringMetaData.Add("e_r_minclamp", FString::SanitizeFloat(vData->EyesCalib.RollClamp.MinClamp));
		vFrameData->MetaData.StringMetaData.Add("e_r_maxclamp", FString::SanitizeFloat(vData->EyesCalib.RollClamp.MaxClamp));

		if (vData->EyesCalib.PitchClamp.Clamp)
			vFrameData->MetaData.StringMetaData.Add("e_p_clamp", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("e_p_clamp", "false");
		vFrameData->MetaData.StringMetaData.Add("e_p_minclamp", FString::SanitizeFloat(vData->EyesCalib.PitchClamp.MinClamp));
		vFrameData->MetaData.StringMetaData.Add("e_p_maxclamp", FString::SanitizeFloat(vData->EyesCalib.PitchClamp.MaxClamp));

		if (vData->EyesCalib.YawClamp.Clamp)
			vFrameData->MetaData.StringMetaData.Add("e_y_clamp", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("e_y_clamp", "false");
		vFrameData->MetaData.StringMetaData.Add("e_y_minclamp", FString::SanitizeFloat(vData->EyesCalib.YawClamp.MinClamp));
		vFrameData->MetaData.StringMetaData.Add("e_y_maxclamp", FString::SanitizeFloat(vData->EyesCalib.YawClamp.MaxClamp));

		if (vData->EyesCalib.RollPercent != 100)
			vFrameData->MetaData.StringMetaData.Add("e_r_multiply", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("e_r_multiply", "false");
		vFrameData->MetaData.StringMetaData.Add("e_r_percent", FString::FromInt(vData->EyesCalib.RollPercent));

		if (vData->EyesCalib.PitchPercent != 100)
			vFrameData->MetaData.StringMetaData.Add("e_p_multiply", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("e_p_multiply", "false");
		vFrameData->MetaData.StringMetaData.Add("e_p_percent", FString::FromInt(vData->EyesCalib.PitchPercent));

		if (vData->EyesCalib.YawPercent != 100)
			vFrameData->MetaData.StringMetaData.Add("e_y_multiply", "true");
		else
			vFrameData->MetaData.StringMetaData.Add("e_y_multiply", "false");
		vFrameData->MetaData.StringMetaData.Add("e_y_percent", FString::FromInt(vData->EyesCalib.YawPercent));

		// Retargeting status
		vFrameData->MetaData.StringMetaData.Add("retarg_on", vData->RetargetingOn ? "true" : "false");

		ILiveLinkClient* LiveLinkClient = &IModularFeatures::Get().GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName);
		if (!LiveLinkClient)
		{
			UE_LOG(DxyzLog, Error, TEXT("[DxyzFunctionLibrary] - Error : Could not find LiveLink module while trying to load Dynamixyz LiveLink config file."));
			return false;
		}

		LiveLinkClient->PushSubjectFrameData_AnyThread(FLiveLinkSubjectKey(vGuid,
			FName(*iSubjectName)), MoveTemp(vFrameDataStruct));
		return true;
		
	}

	return false;
}

FString UDxyzFunctionLibrary::_rotatorToFormatString(const FRotator& ioRotator)
{
	float vPitch = int(ioRotator.Pitch * 100) / 100.0;
	float vYaw = int(ioRotator.Yaw * 100) / 100.0;
	float vRoll = int(ioRotator.Roll * 100) / 100.0;

	FString vRes = FString::Format(TEXT("P={0} Y={1} R={2}"),
		{ FString::SanitizeFloat(vPitch), FString::SanitizeFloat(vYaw), FString::SanitizeFloat(vRoll) });
	return vRes;
}
