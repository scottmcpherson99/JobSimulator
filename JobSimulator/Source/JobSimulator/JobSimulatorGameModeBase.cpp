// Copyright Epic Games, Inc. All Rights Reserved.


#include "JobSimulatorGameModeBase.h"
#include "DropOffBox.h"
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
		FString choseProduct = productLists[rand() % 3];
		dropBox->ChooseRandomProduct(choseProduct);
		HUDWidget->SetDesiredProduct(choseProduct);
		parcelsLeft--;
		HUDWidget->SetParcelsLeft(FString::FormatAsNumber(parcelsLeft));
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AJobSimulatorGameModeBase>
void AJobSimulatorGameModeBase::BeginPlay()
{
	// set the initial stats of the game
	timeLeft = 20;
	parcelsLeft = 4;

	//check the heads up display widget has been set, if it has, add it to the viewport
	if (IsValid(HeadsUpDisplayWidget))
	{
		HUDWidget = Cast<UHeadsUpDisplay>(CreateWidget(GetWorld(), HeadsUpDisplayWidget));
		HUDWidget->Construct();
		HUDWidget->AddToViewport();
		HUDWidget->SetTimeLeft(FString::FormatAsNumber(timeLeft));
		HUDWidget->SetParcelsLeft(FString::FormatAsNumber(parcelsLeft));
		// decrease the time left in the game
		GetWorldTimerManager().SetTimer(gameTimerHandle, this, &AJobSimulatorGameModeBase::DecreaseGameTimer, 1.f, true);
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
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////