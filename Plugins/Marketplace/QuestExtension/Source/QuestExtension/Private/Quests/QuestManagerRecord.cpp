// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestManagerRecord.h"
#include <Serialization/MemoryWriter.h>
#include <Serialization/MemoryReader.h>

#include "Quest.h"
#include "QuestManagerComponent.h"
#include "Conditions/ConditionContainer.h"


bool FQuestExtensionArchive::Save(UQuestManagerComponent& Manager, FQuestManagerRecord& Record)
{
	Record = { Manager.GetFName(), Manager.GetClass() };

	//Save all running quests separately
	for (auto* RunningQuest : Manager.RunningQuests)
	{
		if (RunningQuest && RunningQuest->GetAsset().IsValid())
		{
			FQuestRecord QuestRecord = { RunningQuest->GetAsset() };

			//Save serialized state
			FMemoryWriter MemoryWriter(QuestRecord.Data, true);
			FQuestExtensionArchive Archive(MemoryWriter, false);
			RunningQuest->Serialize(Archive);

			Record.RunningQuestRecords.Add(QuestRecord);
		}
	}

	FMemoryWriter MemoryWriter(Record.Data, true);
	FQuestExtensionArchive Archive(MemoryWriter, false);
	Manager.Serialize(Archive);

	return true;
}

bool FQuestExtensionArchive::Load(UQuestManagerComponent& Manager, const FQuestManagerRecord& Record)
{
	if (!Record.IsValid()) {
		return false;
	}

	if (Manager.GetClass() != Record.Class ||
		Manager.GetFName() != Record.Name) {
		return false;
	}

	//Clean any manager state for loading
	Manager.Reset();

	FMemoryReader ManagerMemoryReader(Record.Data, true);
	FQuestExtensionArchive ManagerArchive(ManagerMemoryReader, false);
	Manager.Serialize(ManagerArchive);


	for (auto& QuestRecord : Record.RunningQuestRecords)
	{
		TSoftObjectPtr<UQuestBase> Asset{ QuestRecord.AssetPath };

		//Load and start the quest
		const FRuntimeQuest RQuest = Manager.Internal_StartQuest(Asset.LoadSynchronous(), nullptr, true);

		//Deserialize the quest
		if (RQuest.IsValid())
		{
			FMemoryReader QuestMemoryReader(QuestRecord.Data, true);
			FQuestExtensionArchive QuestArchive(QuestMemoryReader, false);

			UQuestBase* BaseQuestScript = RQuest.GetScript();

			BaseQuestScript->Serialize(QuestArchive);
			if (UQuest* QuestScript = Cast<UQuest>(BaseQuestScript))
			{
				if (QuestScript->CompleteConditions)
				{
					QuestScript->CompleteConditions->CancelLatentCheck();
				}
				QuestScript->CheckCompletion();
			}
		}
	}

	return true;
}
