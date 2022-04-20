// Fill out your copyright notice in the Description page of Project Settings.


#include "TATGoalZone.h"
#include "Components/BoxComponent.h"

ATATGoalZone::ATATGoalZone()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GoalZone = CreateDefaultSubobject<UBoxComponent>(TEXT("GoalZone"));
	
	// ...
}


// Called when the game starts
void ATATGoalZone::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ATATGoalZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ...
}

