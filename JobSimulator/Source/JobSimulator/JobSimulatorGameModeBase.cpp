// Copyright Epic Games, Inc. All Rights Reserved.


#include "JobSimulatorGameModeBase.h"
#include "DropOffBox.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AJobSimulatorGameModeBase::AJobSimulatorGameModeBase()
{

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Setters and Getters>
UHeadsUpDisplay* AJobSimulatorGameModeBase::GetGameWidget()
{
	return HUDWidget;
}

void AJobSimulatorGameModeBase::SetNextProduct()
{
	ADropOffBox* dropBox = Cast<ADropOffBox>(UGameplayStatics::GetActorOfClass(GetWorld(), ADropOffBox::StaticClass()));

	// if the valid dropbox has been found, update the next parcel to be delivered
	if (dropBox != nullptr)
	{
		FString choseProduct = productLists[rand() % 8];
		dropBox->ChooseRandomProduct(choseProduct);
		HUDWidget->SetDesiredProduct(choseProduct);
		parcelsLeft--;
		HUDWidget->SetParcelsLeft(FString::FormatAsNumber(parcelsLeft));

		// display the end screen if the player has delivered all the parcels
		if (parcelsLeft <= 0)
		{
			GetWorldTimerManager().ClearTimer(gameTimerHandle);

			// get the player character and disable the input
			ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
			APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);
			APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

			if (playerCharacter != nullptr && playerController != nullptr)
			{
				playerCharacter->DisableInput(playerController);
			}

			// fade the camera to white
			APlayerCameraManager* playerCameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);

			if (playerCameraManager != nullptr)
			{
				HUDWidget->RemoveFromParent();
				playerCameraManager->StartCameraFade(0.f, 0.8f, 2.f, FLinearColor(1.f, 1.f, 1.f, 1.f), false, true);
				GetWorldTimerManager().SetTimer(endWidgetTimer, this, &AJobSimulatorGameModeBase::DisplayEndScreen, 2.f, false);

				// update the text on the widget to indicate the player has won
				if (endGameWidget != nullptr)
				{
					endGameWidget->UpdateText("You have Won!");
				}
			}
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AJobSimulatorGameModeBase>
void AJobSimulatorGameModeBase::BeginPlay()
{
	// set the initial stats of the game
	timeLeft = 30;
	parcelsLeft = 7;

	//check the heads up display widget has been set, if it has, add it to the viewport
	if (IsValid(HeadsUpDisplayWidget))
	{
		HUDWidget = Cast<UHeadsUpDisplay>(CreateWidget(GetWorld(), HeadsUpDisplayWidget));
		HUDWidget->Construct();
		HUDWidget->AddToViewport();
		HUDWidget->SetTimeLeft(FString::FormatAsNumber(timeLeft));
		HUDWidget->SetParcelsLeft(FString::FormatAsNumber(parcelsLeft));
		
		// decrease the time left in the game every second
		GetWorldTimerManager().SetTimer(gameTimerHandle, this, &AJobSimulatorGameModeBase::DecreaseGameTimer, 1.f, true);
	}
	
	//check the heads up display widget has been set, if it has, add it to the viewport
	if (IsValid(EndGameHUDWidget))
	{
		endGameWidget = Cast<UEndGameHUD>(CreateWidget(GetWorld(), EndGameHUDWidget));
		endGameWidget->UpdateText("");
	}

	SetNextProduct();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AJobSimulatorGameModeBase>
void AJobSimulatorGameModeBase::DecreaseGameTimer()
{
	// decrease the time left in the game
	timeLeft--;
	HUDWidget->SetTimeLeft(FString::FormatAsNumber(timeLeft));

	if (timeLeft <= 0)
	{
		GetWorldTimerManager().ClearTimer(gameTimerHandle);

		// get the player character and disable the input
		ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);
		APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

		if (playerCharacter != nullptr && playerController != nullptr)
		{
			playerCharacter->DisableInput(playerController);
		}

		// fade the camera to red
		APlayerCameraManager* playerCameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);

		if (playerCameraManager != nullptr)
		{
			HUDWidget->RemoveFromParent();
			playerCameraManager->StartCameraFade(0.f, 0.8f, 2.f, FLinearColor(0.9f, 0.06f, 0.04f, 1.f), false, true);
			GetWorldTimerManager().SetTimer(endWidgetTimer, this, &AJobSimulatorGameModeBase::DisplayEndScreen, 2.f, false);

			// update the text on the widget to indicate the player has lost
			if (endGameWidget != nullptr)
			{
				endGameWidget->UpdateText("You have Lost!");
			}
		}
	}
}

void AJobSimulatorGameModeBase::DisplayEndScreen()
{
	// clear the timer handle
	GetWorldTimerManager().ClearTimer(endWidgetTimer);

	// ass the end game widget to the viewport
	if (endGameWidget != nullptr)
	{
		endGameWidget->AddToViewport();
	}

	//set the input mode to be UI only nad show the mouse cursor
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	playerController->SetInputMode(FInputModeUIOnly::FInputModeUIOnly());
	playerController->SetShowMouseCursor(true);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////