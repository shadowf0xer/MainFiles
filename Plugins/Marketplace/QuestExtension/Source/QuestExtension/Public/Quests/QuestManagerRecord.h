// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Runtime/CoreUObject/Public/Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "QuestBase.h"

#include "QuestManagerRecord.generated.h"

class UQuestManagerComponent;


/**
* Stores data related to a quest
*/
USTRUCT()
struct FQuestRecord
{
	GENERATED_USTRUCT_BODY()

	FQuestRecord() {}
	FQuestRecord(const TSoftObjectPtr<UQuestBase>& Asset)
		: AssetPath(Asset.GetUniqueID().ToString())
	{}


	UPROPERTY(SaveGame)
	FString AssetPath;

	UPROPERTY(SaveGame)
	TArray<uint8> Data;


	friend FArchive& operator<<(FArchive& Ar, FQuestRecord& R)
	{
		return Ar << R.AssetPath << R.Data;
	}
};

/**
 * Stores the serialized state of a QuestManager
 */
USTRUCT(BlueprintType)
struct FQuestManagerRecord
{
	GENERATED_USTRUCT_BODY()

	FQuestManagerRecord() {}
	FQuestManagerRecord(const FName& InName, UClass* const InClass)
		: Name{ InName }, Class(InClass)
	{}

	virtual ~FQuestManagerRecord() {}


	UPROPERTY(SaveGame)
	FName Name;

	UPROPERTY(SaveGame)
	UClass* Class;

	UPROPERTY(SaveGame)
	TArray<uint8> Data;

	UPROPERTY(SaveGame)
	TArray<FQuestRecord> RunningQuestRecords;

	bool IsValid() const {
		return !Name.IsNone() && Class && Data.Num() > 0;
	}


	virtual void Serialize(FArchive& Ar)
	{
		Ar << Name << Class << Data;
		Ar << RunningQuestRecords;
	}
};

/**
* Archive that serializes a QuestManager
*/
struct FQuestExtensionArchive : public FObjectAndNameAsStringProxyArchive
{
	FQuestExtensionArchive(FArchive &InInnerArchive, bool bInLoadIfFindFails)
		: FObjectAndNameAsStringProxyArchive(InInnerArchive, bInLoadIfFindFails)
	{
		ArIsSaveGame = true;
		ArNoDelta = true;
	}

	static bool Save(UQuestManagerComponent& Manager, FQuestManagerRecord& Record);
	static bool Load(UQuestManagerComponent& Manager, const FQuestManagerRecord& Record);


	// Courtesy of Colin Bonstead
	FArchive& operator<<(struct FSoftObjectPtr& Value)
	{
		*this << Value.GetUniqueID();

		return *this;
	}

	FArchive& operator<<(struct FSoftObjectPath& Value)
	{
		FString Path = Value.ToString();

		*this << Path;

		if (IsLoading())
		{
			Value.SetPath(MoveTemp(Path));
		}

		return *this;
	}
};
