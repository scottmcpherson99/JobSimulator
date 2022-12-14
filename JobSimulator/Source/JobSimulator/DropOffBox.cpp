// Fill out your copyright notice in the Description page of Project Settings.

#include <memory>
#include "DropOffBox.h"
#include "PlayerCharacter.h"
#include "JobSimulatorGameModeBase.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADropOffBox::ADropOffBox()
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


void ADropOffBox::ChooseRandomProduct(FString productChosen_)
{
	desiredProduct = productChosen_;
}

// Called when the game starts or when spawned
void ADropOffBox::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks for the collision box
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADropOffBox::OnTriggerBoxOverlap);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ADropOffBox::OnComponentEndOverlap);

	// set up the players input
	BindToInput();
}

// Called every frame
void ADropOffBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADropOffBox::BindToInput()
{
	// Initialize our component
	InputComponent = NewObject<UInputComponent>(this);
	InputComponent->RegisterComponent();
	if (InputComponent)
	{
		InputComponent->BindAction("Interact", IE_Pressed, this, &ADropOffBox::OnInteraction);
	}
}

void ADropOffBox::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character, if it is, destroy the tile
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	if (playerCharacter != nullptr && playerController != nullptr)
	{
		EnableInput(playerController);

		//find the current gamemode and update the players stats on the displayed widget
		AJobSimulatorGameModeBase* gameMode = Cast<AJobSimulatorGameModeBase>((AJobSimulatorGameModeBase*)GetWorld()->GetAuthGameMode());
		if (gameMode != nullptr)
		{
			gameMode->GetGameWidget()->SetInteractMessage("Press 'E' to drop " + playerCharacter->GetHoldingProduct());
		}
	}
}

void ADropOffBox::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//check to see if the overlapping actor is a player character, if it is, destroy the tile
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	if (playerCharacter != nullptr && playerController != nullptr)
	{
		DisableInput(playerController);
		//find the current gamemode and update the players stats on the displayed widget
		AJobSimulatorGameModeBase* gameMode = Cast<AJobSimulatorGameModeBase>((AJobSimulatorGameModeBase*)GetWorld()->GetAuthGameMode());
		if (gameMode != nullptr)
		{
			gameMode->GetGameWidget()->SetInteractMessage("");
		}
	}
}

void ADropOffBox::OnInteraction()
{
	ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);

	if (playerCharacter != nullptr)
	{
		if (playerCharacter->GetHoldingProduct() == desiredProduct)
		{
			playerCharacter->SetHoldingProduct(FString("None"));

			//find the current gamemode and update the players stats on the displayed widget
			AJobSimulatorGameModeBase* gameMode = Cast<AJobSimulatorGameModeBase>((AJobSimulatorGameModeBase*)GetWorld()->GetAuthGameMode());
			if (gameMode != nullptr)
			{
				gameMode->SetNextProduct();
			}
		}
	}
}

