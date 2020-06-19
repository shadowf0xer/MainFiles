//Easy Multi Save - Copyright (C) 2020 by Michael Hegemann.  

#include "EMSAsyncSaveGame.h"
#include "EMSFunctionLibrary.h"
#include "Modules/ModuleManager.h"
#include "Engine/Engine.h"
#include "Async/Async.h"

/**
Init
**/

UEMSAsyncSaveGame::UEMSAsyncSaveGame(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UEMSAsyncSaveGame* UEMSAsyncSaveGame::AsyncSaveActors(UObject* WorldContextObject, int32 Data)
{
	if (UEMSObject* EMSObject = UEMSObject::Get(WorldContextObject))
	{
		if (!EMSObject->IsAsyncSaveOrLoadTaskActive())
		{
			UEMSAsyncSaveGame* SaveTask = NewObject<UEMSAsyncSaveGame>(GetTransientPackage());
			SaveTask->WorldContextObject = WorldContextObject;
			SaveTask->Data = Data;
			SaveTask->EMS = EMSObject;
			SaveTask->bIsActive = true;

			return SaveTask;
		}
	}

	return nullptr;
}

void UEMSAsyncSaveGame::Activate()
{
	if (EMS)
	{
		EMS->PrepareLoadAndSaveActors(Data);

		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncSaveGame::StartSaving);
	}
}

void UEMSAsyncSaveGame::StartSaving()
{
	if (EMS)
	{
		//Always save slot
		EMS->SaveSlotInfoObject();

		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncSaveGame::SavePlayer);
	}
}

/**
Player
**/

void UEMSAsyncSaveGame::SavePlayer()
{
	bFinishedStep = false;

	if (EMS)
	{
		if (UEMSPluginSettings::Get()->bMultiThreadSaving && FPlatformProcess::SupportsMultithreading())
		{
			AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [this]()
			{
				InternalSavePlayer();
			});
		}
		else
		{
			InternalSavePlayer();
		}

		TryMoveToNextStep(&UEMSAsyncSaveGame::SaveLevel);
	}
}

void UEMSAsyncSaveGame::InternalSavePlayer()
{
	if (Data & ENUM_TO_FLAG(ESaveTypeFlags::SF_Player))
	{
		EMS->SavePlayerActors();
	}

	bFinishedStep = true;
}

/**
Level
**/

void UEMSAsyncSaveGame::SaveLevel()
{
	bFinishedStep = false;

	if (EMS)
	{
		if (UEMSPluginSettings::Get()->bMultiThreadSaving && FPlatformProcess::SupportsMultithreading())
		{
			AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [this]()
			{
				InternalSaveLevel();
			});
		}
		else
		{
			InternalSaveLevel();
		}

		TryMoveToNextStep(&UEMSAsyncSaveGame::FinishSaving);
	}
}

void UEMSAsyncSaveGame::InternalSaveLevel()
{
	if (Data & ENUM_TO_FLAG(ESaveTypeFlags::SF_Level))
	{
		EMS->SaveLevelActors();
	}

	bFinishedStep = true;
}

/**
Finish
**/

void UEMSAsyncSaveGame::FinishSaving()
{
	if (EMS)
	{
		bIsActive = false;
		EMS->GetTimerManager().SetTimerForNextTick(this, &UEMSAsyncSaveGame::CompleteSavingTask);
	}
}

void UEMSAsyncSaveGame::CompleteSavingTask()
{
	OnCompleted.Broadcast();
	SetReadyToDestroy();
}

/**
Helper Functions
**/

void UEMSAsyncSaveGame::TryMoveToNextStep(typename FTimerDelegate::TUObjectMethodDelegate<UEMSAsyncSaveGame>::FMethodPtr InTimerMethod)
{
	//This is used to delay further execution until multi-thread code finished, but without blocking.

	if (EMS)
	{
		FTimerDelegate TimerDelegate;
		TimerDelegate.BindLambda([this, InTimerMethod]()
		{
			if (bFinishedStep)
			{
				EMS->GetTimerManager().SetTimerForNextTick(this, InTimerMethod);
			}
			else
			{
				TryMoveToNextStep(InTimerMethod);
			}
		});

		EMS->GetTimerManager().SetTimerForNextTick(TimerDelegate);
	}
}