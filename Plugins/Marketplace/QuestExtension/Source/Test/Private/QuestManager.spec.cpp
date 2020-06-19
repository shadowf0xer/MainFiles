// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "TestHelpers.h"
#include "QuestManagerComponent.h"

namespace
{
	constexpr uint32 Flags_Product = EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter;
	constexpr uint32 Flags_Smoke = EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter;
}

#define BASE_SPEC FQESpec

BEGIN_TESTSPEC(FQuestManagerSpec, "QuestExtension.Manager", Flags_Product)
	UWorld* World = nullptr;
	UQuestManagerComponent* Manager = nullptr;
END_TESTSPEC(FQuestManagerSpec)
void FQuestManagerSpec::Define()
{
	BeforeEach([this]()
	{
		World = GetTestWorld();
		Manager = CreateManager(World);
	});

	It("Quest Manager is instantiated", [this]()
	{
		TestNotNull("Manager", Manager);
	});

	AfterEach([this]()
	{
		DestroyManager(Manager);
	});
}
