// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadsUpDisplay.h"
#include "Components/TextBlock.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

void UHeadsUpDisplay::Construct()
{
	UpdateProductHolding();
}

void UHeadsUpDisplay::UpdateProductHolding()
{
	// update the player's holding item on the widget
	ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);

	if (playerCharacter != nullptr)
	{
		ProductHolding->SetText(FText::FromString(playerCharacter->GetHoldingProduct()));
	}
}