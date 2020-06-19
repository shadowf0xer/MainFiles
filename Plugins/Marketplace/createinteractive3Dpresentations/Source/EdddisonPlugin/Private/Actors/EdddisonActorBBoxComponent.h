/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "InputCoreTypes.h"
#include "GameFramework/Actor.h"
#ifdef EDDDISON_BBOX_EXP_EVENTS
#include "Components/SceneComponent.h"
#else
#include "Components/ActorComponent.h"
#endif

#include "EdddisonActorBBoxComponent.generated.h"





// use the PostEditChange delegate from AActor to react on all changes
//#define USE_POST_EDIT_CHANGE 1

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class EDDDISONPLUGIN_API UEdddisonActorBBoxComponent : public UActorComponent/*, public TSharedFromThis<UEdddisonActorBBoxComponent>*/ //USceneComponent
{
	GENERATED_BODY()
		//GENERATED_UCLASS_BODY()

protected:

	UPROPERTY(VisibleAnywhere, Category = "edddison")
		FString ID;

public:

	UEdddisonActorBBoxComponent();
	~UEdddisonActorBBoxComponent();

	virtual void OnRegister() override;
	virtual void OnUnregister() override;


	#ifdef EDDDISON_BBOX_EXP_EVENTS
#if WITH_EDITOR


	// Triggered when the spline is edited
	FSimpleDelegate OnSplineEdited;
	FScriptDelegate onrelease_del;
	FScriptDelegate onApply;
	FDelegateHandle OnPropertyChangedHandle;
	virtual void EditorApplyTranslation(const FVector &DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown);

	virtual void PostEditComponentMove(bool bFinished) override;

	// nein
	void OnReleaseDelegate(AActor* actor, FKey key);
	//UFUNCTION()
	//void OnReleaseBind(/*UObject* Object, FPropertyChangedEvent& PropertyChangedEvent*/);
	void PostEditChangeDelegateBind(UObject* Object, FPropertyChangedEvent& PropertyChangedEvent);
	void ObjectModifiedBind(UObject* Object);
	//virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	// nein


#endif
#endif


	AActor* GetActor();

	static UEdddisonActorBBoxComponent* CreateInstance(AActor *actor);
	static bool DestroyInstance(AActor *actor);
};
