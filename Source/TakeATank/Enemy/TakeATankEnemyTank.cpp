// Fill out your copyright notice in the Description page of Project Settings.


#include "TakeATankEnemyTank.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "TakeATank/Enemy/TATEnemyBullet.h"
#include "TakeATank/Tractor/TractorComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATakeATankEnemyTank::ATakeATankEnemyTank()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	BoxCollision->SetCollisionResponseToAllChannels(ECR_Block);
	RootComponent = BoxCollision;
	ReloadTimer = 0.3f;
	Timer = 0.0f;

	Speed = 50.0f;
	ChangeDirectionTimer = FMath::RandRange(3.0f, 6.0f);
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SphereCollision->SetupAttachment(BoxCollision);
	SphereCollisionName = "SphereCollision";

	TowingCollisionName = "CapTowingCollision";
	TowingCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapTowingCollision"));
	TowingCollision->SetupAttachment(BoxCollision);
	TractorTag = "Tractor";

	TowingDistance = 200.0f;
}

// Called when the game starts or when spawned
void ATakeATankEnemyTank::BeginPlay()
{
	Super::BeginPlay();
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ATakeATankEnemyTank::OnOverlapBegin);
	SphereCollision->OnComponentEndOverlap.AddDynamic(this, &ATakeATankEnemyTank::OnOverlapEnd);
	TowingCollision->OnComponentBeginOverlap.AddDynamic(this, &ATakeATankEnemyTank::OnOverlapTowBegin);
}

// Called every frame
void ATakeATankEnemyTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!bActive)
	{
		return;
	}
	Timer += DeltaTime;
	if (bChasing && !bTowed)
	{
		if (ReloadTimer < Timer)
		{
			Timer = 0;
			SpawnBullet();
		}
		RotateTowardsTractor();
		
	}
	else if (bTowed)
	{
		TowedByTractor();
	}
	else if (ChangeDirectionTimer < Timer)
	{
		Timer = 0;
		// Make the tank turn once in a while and just dont go forward in a straight line
		RotateChangeDirection();
	}
	// Make tank move a little bit
	SetActorLocation(GetActorLocation() + 
		GetActorForwardVector() * Speed * DeltaTime);
}


void ATakeATankEnemyTank::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{	
	if (bTowed || !bActive)
	{
		return;
	}
	// Needed for RotateTowardsTractor(), OtherActor can be another Tank
	if (Tractor == nullptr && OtherActor->ActorHasTag(TractorTag))
	{
		Tractor = OtherActor;
	}
	// Is tractor within shooting range
	if (OtherActor->ActorHasTag(TractorTag))
	{
		bChasing = true;
	}
	
}

void ATakeATankEnemyTank::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Is tractor out of shooting range
	if (OtherActor->ActorHasTag(TractorTag))
	{
		bChasing = false;
	}
}


void ATakeATankEnemyTank::SpawnBullet()
{
	FTransform SpawnTrans = GetActorTransform();
	SpawnTrans.AddToTranslation(GetActorForwardVector() * 100.0f);
	GetWorld()->SpawnActor(EnemyBulletClass, &SpawnTrans);
}

void ATakeATankEnemyTank::RotateTowardsTractor()
{
	if (Tractor == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
				"Error: Something is wrong, (cant find tractor) can you hear me, Major Tom? x3")));
		return;
	}
	FRotator FRot = UKismetMathLibrary::FindLookAtRotation(
		GetActorLocation(),
		Tractor->GetActorLocation());

	SetActorRotation(FRot);
}

void ATakeATankEnemyTank::RotateChangeDirection()
{
	SetActorRotation(GetActorRotation() + (GetActorRightVector().Rotation()));
}

void ATakeATankEnemyTank::OnOverlapTowBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Needed for TowedByTractor(), OtherActor can be another Tank
	if (Tractor == nullptr && OtherActor->ActorHasTag(TractorTag))
	{
		Tractor = OtherActor;
	}
	// Is the tractor close enough behind this tank?
	if (OtherActor->ActorHasTag(TractorTag))
	{
		bChasing = false;
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 8.f, FColor::White,
			TEXT("Tank succesfully captured, take it to the base now!..."));
		bTowed = true;
	}
}

void ATakeATankEnemyTank::TowedByTractor()
{
	if (Tractor == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
			"Error: something is wrong, (cant find tractor) what the hell should we do?")));
		return;
	}
	SetActorLocationAndRotation(Tractor->GetActorLocation() - (Tractor->GetActorForwardVector() * TowingDistance), Tractor->GetActorRotation(), false);
}

