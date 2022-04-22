// Fill out your copyright notice in the Description page of Project Settings.


#include "TATGoalZone.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ATATGoalZone::ATATGoalZone()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GoalZone = CreateDefaultSubobject<UBoxComponent>(TEXT("GoalZone"));
	NumberOfTanks = 0;
	MaxNumberOfTanks = 3;
	bTankInserted = false;
}


// Called when the game starts
void ATATGoalZone::BeginPlay()
{
	Super::BeginPlay();

	GoalZone->OnComponentBeginOverlap.AddDynamic(this, &ATATGoalZone::OnOverlapBegin);
	
}


// Called every second
void ATATGoalZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Safe play to avoid detecting the different collisions in the tank object
	// and insert the tanks one at the time
	if (bTankInserted)
	{
		bTankInserted = false;
	}
}

void ATATGoalZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag(TankTag) && !bTankInserted)
	{
		AddTankToZone(NumberOfTanks);
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 4.f, FColor::White, 
			TEXT("Tank you!..."));
		OtherActor->Destroy();
	}
}


void ATATGoalZone::AddTankToZone(int number)
{
	bTankInserted = true;
	if (MaxNumberOfTanks > number)
	{
		NumberOfTanks++;
		FTransform ParkPosition = GetActorTransform();
		ParkPosition.AddToTranslation(GetActorForwardVector() - (number * 100.0f));
		GetWorld()->SpawnActor(TankProp, &ParkPosition);
		
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 4.f, FColor::Yellow, 
			TEXT("Tank added in collection!"));
		
	}
	if (MaxNumberOfTanks - 1 <= number)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 15.f, FColor::Blue, 
			TEXT("Game over! You are the champion, Emil Streaum!"));
	}
}



