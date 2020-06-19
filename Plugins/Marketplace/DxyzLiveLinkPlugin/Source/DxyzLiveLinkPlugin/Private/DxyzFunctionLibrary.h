/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
#include "LiveLinkTypes.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "DxyzFunctionLibrary.generated.h"

USTRUCT(BlueprintType)
struct FAxisClamp
{
	GENERATED_BODY()

public:
	/** Enable clamping */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		bool Clamp;

	/** Minimum value */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		float MinClamp;

	/** Maximum value */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		float MaxClamp;

	FAxisClamp()
		: Clamp(false)
		, MinClamp(-360)
		, MaxClamp(360) {};
};

USTRUCT(BlueprintType)
struct FSubjectCalib
{
	GENERATED_BODY()

public:

	/** Take the Roll axis into account in the offset computation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		bool RollOffset;

	/** Take the Pitch axis into account in the offset computation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		bool PitchOffset;

	/** Take the Yaw axis into account in the offset computation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		bool YawOffset;

	/** Lock the rotation around the Roll axis */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		bool RollLock;

	/** Lock the rotation around the Pitch axis */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		bool PitchLock;

	/** Lock the rotation around the Yaw axis */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		bool YawLock;

	/** Clamp structure for the Roll axis */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		FAxisClamp RollClamp;

	/** Clamp structure for the Pitch axis */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		FAxisClamp PitchClamp;

	/** Clamp structure for the Yaw axis */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		FAxisClamp YawClamp;

	/** Ease or boost the rotation around the Roll axis */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0", ClampMax = "200"),  Category = "Subject Calibration")
		int RollPercent;

	/** Ease or boost the rotation around the Pitch axis */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0", ClampMax = "200"), Category = "Subject Calibration")
		int PitchPercent;

	/** Ease or boost the rotation around the Yaw axis */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0", ClampMax = "200"), Category = "Subject Calibration")
		int  YawPercent;

	FSubjectCalib()
		: RollOffset(true)
		, PitchOffset(true)
		, YawOffset(true)
		, RollLock(false)
		, PitchLock(false)
		, YawLock(false)
		, RollClamp()
		, PitchClamp()
		, YawClamp()
		, RollPercent(100)
		, PitchPercent(100)
		, YawPercent(100) {};
};

USTRUCT(BlueprintType)
struct FSubjectData
{
	GENERATED_BODY()

public:
	/** The calibration structure for the head calibration */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		FSubjectCalib HeadCalib;

	/** The head rotation offset */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		FRotator HeadOffset;

	/** The calibration structure for the eyes calibration */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		FSubjectCalib EyesCalib;

	/** The pupils rotation offset */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		FRotator EyesOffset;

	/** Enable or disable the retargeting */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Subject Calibration")
		bool RetargetingOn;

	FSubjectData()
		: HeadCalib()
		, HeadOffset(FRotator(0, 0, 0))
		, EyesCalib()
		, EyesOffset(FRotator(0, 0, 0))
		, RetargetingOn(true) {};
};

UCLASS()
class DXYZLIVELINKPLUGIN_API UDxyzFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/** Is this Live Link subject associated to a Dynamixyz source ? */
	UFUNCTION(BlueprintPure, Category = "Dxyz functions")
		static bool IsDxyzSubject(FString SubjectName);

	/** Load the calibrations from the config file (Calib.dxyz) */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool LoadConfigFile();

	/** Load the previous widget state from the config file Widgets.dxyz */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool LoadWidgetState(UClass* Class, bool& Maximized, FVector2D& Position, TMap<FString, FString>& OtherParams);

	/** Save the current widget state in the config file Widgets.dxyz */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool SaveWidgetState(UClass* Class, bool Maximized, FVector2D Position, TMap<FString, FString> OtherParams);

	/** Save the current calibration in the config file (Calib.dxyz) */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool SaveConfigFile();

	/** Add a new subject to the map */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool CreateSubjectEntry(FString SubjectName);

	/** Compute the head rotation offset regarding the calibration settings */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static FString ComputeHeadOffset(FRotator Offset, FString SubjectName, FSubjectCalib HeadCalibration);

	/** Compute the eyes rotation offset regarding the calibration settings */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static FString ComputeEyesOffset(FRotator Offset, FString SubjectName, FSubjectCalib EyesCalibration);

	/** Set the head calibration for the subject SubjectName*/
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool SetHeadCalibrationForSubject(FString SubjectName, FSubjectCalib HeadCalibration);

	/** Set the eyes calibration for the subject SubjectName*/
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool SetEyesCalibrationForSubject(FString SubjectName, FSubjectCalib EyesCalibration);

	/** Read the head rotation offset and the eyes rotation offset for the subject from the file Calib.dxyz */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool GetSubjectOffsets(FString SubjectName,
			FString& HeadOffset,
			FString& EyesOffset);

	/** Read the calibration settings for the subject from the file Calib.dxyz */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool GetSubjectCalibrations(FString SubjectName,
										FSubjectCalib& HeadCalibration,
										FSubjectCalib& EyesCalibration);

	/** Apply the neutral values for the subject SubjectName*/
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool SetRetargetingStatusForSubject(FString SubjectName, bool RetargetingOn);

	/** Read the retargeting status for the subject from the file Calib.dxyz */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool GetSubjectRetargetingStatus(FString SubjectName, bool& RetargetingOn);

	/** Apply a head rotation offset for the subject */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool ApplySubjectHeadOffset(FString SubjectName, FString HeadOffset);

	/** Apply a pupils rotation offset for the subject */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool ApplySubjectEyesOffset(FString SubjectName, FString EyesOffset);

	/** Apply head and eyes rotation offsets for the subject */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool ApplySubjectOffsets(FString SubjectName, FString HeadOffset, FString EyesOffset);

	/** Apply axis customizations for the subject */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool ApplySubjectCalibrations(FString SubjectName, FSubjectCalib HeadCalib, FSubjectCalib EyesCalib);

	/** Send all subject runtime information to live link */
	UFUNCTION(BlueprintCallable, Category = "Dxyz functions")
		static bool SendSubjectDataToLiveLink(FString SubjectName);

private:
	static bool _isDxyzSubject(FString iSubjectName);
	static bool _loadConfigFile();
	static bool _saveConfigFile();

	static bool _addNewSuject(FString iSubjectName);

	static bool _loadWidgetState(UClass* Class, bool& Maximized, FVector2D& Position, TMap<FString, FString>& OtherParams);
	static bool _saveWidgetState(UClass* Class, bool Maximized, FVector2D Position, TMap<FString, FString> OtherParams);

	static bool _getDxyzSourceDataBySubjectName(FString iSubjectName, FGuid& oGuid, FLiveLinkAnimationFrameData* oAnimData);

	static void _buildCalibrationFromJson(TSharedPtr<FJsonObject> iObject, FSubjectCalib& oHeadCalibration);

	static void _buildJsonFromCalibration(const FSubjectCalib& iCalibration, TSharedPtr<FJsonObject>& ioObject);

	static bool _getSubjectsNamesFromFile(TArray<FName>& oSubjectsNames);

	static bool _getSubjectOffsets(FString iSubjectName,
								FString& oHeadOffsetString,
								FString& oEyesOffsetString);

	static bool _getSubjectCalibrations(FString SubjectName,
									FSubjectCalib& oHeadCalibration,
									FSubjectCalib& oEyesCalibration);

	static bool _getSubjectApplyNeutralValue(FString SubjectName, bool& oApply);
	
	static bool _setSubjectOffsets(FString iSubjectName,
								FString iHeadOffset,
								FString iEyesOffset);

	static bool _setSubjectCalibrations(FString iSubjectName,
									FSubjectCalib iHeadCalib,
									FSubjectCalib iEyesCalib);

	static bool _setRetargetingStatusForSubject(FString iSubjectName, bool iIsOn);

	static bool _sendSubjectDataToLiveLink(FString iSubjectName);

	static FString _rotatorToFormatString(const FRotator& ioRotator);

private:
	static TMap<FString, FSubjectData> mSubjectDataMap;
};
