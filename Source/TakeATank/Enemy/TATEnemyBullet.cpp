// Fill out your copyright notice in the Description page of Project Settings.


#include "TATEnemyBullet.h"
#include "Components/SphereComponent.h"

// Sets default values
ATATEnemyBullet::ATATEnemyBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	RootComponent = Collision;
}

// Called when the game starts or when spawned
void ATATEnemyBullet::BeginPlay()
{
	Super::BeginPlay();

	BallVelocity = GetActorForwardVector() * 1200.0f;
}

// Called every frame
void ATATEnemyBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FHitResult Hit;
	AddActorWorldOffset(BallVelocity * DeltaTime, true, &Hit);

	if (Hit.bBlockingHit)
	{
		// Make bouncy balls bouncy
		if (Hit.bStartPenetrating)
		{
			AddActorWorldOffset(Hit.Normal * (Hit.PenetrationDepth + 0.01f));
		}
		else
		{
			BallVelocity = BallVelocity.MirrorByVector(Hit.Normal);
		}

	}
}

