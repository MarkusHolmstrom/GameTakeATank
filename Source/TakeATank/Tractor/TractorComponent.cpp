// Fill out your copyright notice in the Description page of Project Settings.


#include "TractorComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TakeATank/Enemy/TakeATankEnemyTank.h"

// Sets default values for this component's properties
UTractorComponent::UTractorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Tractor = GetOwner();
	MaxXAngle = 120;

	CheckTimer = 3.0f;
	Timer = 0;
}

bool UTractorComponent::CheckIfTractorTipped(float DeltaTime)
{
	if (Tractor == nullptr)
	{
		Tractor = GetOwner();
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, 
			TEXT("Error: Tractor cannot be found!!!! PANIC... uh, NOW!!!"));

		return false;
	}
	// Check the timer
	if (CheckTimer > Timer)
	{
		Timer += DeltaTime;
		return false;
	}
	// Reset timer and check if tractor has fallen over/tipped
	Timer = 0;

	FRotator FRot = Tractor->GetActorRotation();
	
	//Have the tractor tipped or fallen over itself?
	if (FRot.Euler().X < -MaxXAngle || FRot.Euler().X > MaxXAngle)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10.f, FColor::White, 
			TEXT("Tractor tipped, game over! EEEEEEEEEMMMIIIILLL, DIN FEAURGREAUMMADE UNGE!!!"));
		return true;
	}
	return false;
}

// Called when the game starts
void UTractorComponent::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void UTractorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (CheckIfTractorTipped(DeltaTime))
	{
		// Restart the level/map
		UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
	}
}

