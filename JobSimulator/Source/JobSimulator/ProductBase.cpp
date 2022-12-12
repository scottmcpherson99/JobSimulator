// Fill out your copyright notice in the Description page of Project Settings.


#include "ProductBase.h"
#include "PlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AProductBase::AProductBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = sceneComp;

	//create the product mesh
	productMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("productMesh"));
	productMesh->SetupAttachment(RootComponent);

	//create the trigger box
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Input
void AProductBase::BindToInput()
{
	// Initialize our component
	InputComponent = NewObject<UInputComponent>(this);
	InputComponent->RegisterComponent();
	if (InputComponent)
	{
		InputComponent->BindAction("Interact", IE_Pressed, this, &AProductBase::OnInteraction);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AProductBase>
// Called when the game starts or when spawned
void AProductBase::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks for the collision box
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AProductBase::OnTriggerBoxOverlap);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &AProductBase::OnComponentEndOverlap);

	// set up the players input
	BindToInput();
}

// Called every frame
void AProductBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void AProductBase::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
		//check to see if the overlapping actor is a player character, if it is, destroy the tile
		APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
		APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

		if (playerCharacter != nullptr && playerController != nullptr)
		{
			EnableInput(playerController);
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Input Enabled")));
		}
}

void AProductBase::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	if (playerCharacter != nullptr && playerController != nullptr)
	{
		DisableInput(playerController);
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Input Disabled")));
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Gameplay
void AProductBase::OnInteraction()
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Player Interacted")));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////