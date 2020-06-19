// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include <Modules/ModuleManager.h>


class FQuestTest : public IModuleInterface
{
public:

	virtual void StartupModule() override {}
	virtual void ShutdownModule() override {}

	static inline FQuestTest& Get() {
		return FModuleManager::LoadModuleChecked<FQuestTest>("QuestTest");
	}

	static inline bool IsAvailable() {
		return FModuleManager::Get().IsModuleLoaded("QuestTest");
	}
};

IMPLEMENT_MODULE(FQuestTest, QuestTest);