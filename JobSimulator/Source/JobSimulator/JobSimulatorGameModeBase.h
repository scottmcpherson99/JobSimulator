// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HeadsUpDisplay.h"
#include "EndGameHUD.h"
#include "JobSimulatorGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class JOBSIMULATOR_API AJobSimulatorGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	// sets the default values
	AJobSimulatorGameModeBase();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <SettersandGetters>
	UHeadsUpDisplay* GetGameWidget();

	void SetNextProduct();
	// </SettersandGetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <AJobSimulatorGameModeBase>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// </AJobSimulatorGameModeBase>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Widgets>
	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> HeadsUpDisplayWidget;

	class UHeadsUpDisplay* HUDWidget;

	//widget class to use for our end screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> EndGameHUDWidget;

	class UEndGameHUD* endGameWidget;

	// timer to delay the end game widget timer appearing
	FTimerHandle endWidgetTimer;

	// display the end game widget to the screen
	void DisplayEndScreen();
	// </Widgets>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Gameplay>
	TArray<FString> productLists{ "TV", "Lamp", "Picture", "Bag", "Boot", "Heel", "Chair", "Plant"};

	// the time left in the game
	int timeLeft;
	
	// number of parcels left
	int parcelsLeft;

	FTimerHandle gameTimerHandle;

	void DecreaseGameTimer();
	// </Gameplay>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
