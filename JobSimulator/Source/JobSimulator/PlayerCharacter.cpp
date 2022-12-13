// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "JobSimulatorGameModeBase.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(RootComponent); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = true;

	// set default player's attributes
	holdingProduct = FString("None");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <SettersandGetters>
void APlayerCharacter::SetHoldingProduct(FString holdingProduct_)
{
	holdingProduct = holdingProduct_;

	// update the item holding on the game widget
	//find the current gamemode and update the players stats on the displayed widget
	AJobSimulatorGameModeBase* gameMode = Cast<AJobSimulatorGameModeBase>((AJobSimulatorGameModeBase*)GetWorld()->GetAuthGameMode());
	if (gameMode != nullptr)
	{
		gameMode->GetGameWidget()->UpdateProductHolding();
	}
}

FString APlayerCharacter::GetHoldingProduct() const
{
	return holdingProduct;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <APlayerCharacter>
// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Input
// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// movement inputs
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	// rotation inputs
	PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::AddControllerPitchInput);
}


void APlayerCharacter::MoveForward(float Value)
{
	AddMovementInput(FollowCamera->GetForwardVector(), Value);
}

void APlayerCharacter::MoveRight(float Value)
{
	AddMovementInput(FollowCamera->GetRightVector(), Value);
}

void APlayerCharacter::LookUp(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * GetWorld()->GetDeltaSeconds());
}
void APlayerCharacter::Interact()
{
}

void APlayerCharacter::Turn(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * GetWorld()->GetDeltaSeconds());
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////