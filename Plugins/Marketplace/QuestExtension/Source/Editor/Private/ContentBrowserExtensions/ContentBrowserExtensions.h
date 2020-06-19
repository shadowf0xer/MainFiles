// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

// Integrate QuestExtension actions associated with existing engine types into the content browser
class FQuestContentBrowserExtensions
{
public:
	static void InstallHooks();
	static void RemoveHooks();
};