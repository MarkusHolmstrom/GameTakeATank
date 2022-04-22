// Fill out your copyright notice in the Description page of Project Settings.


#include "TakeATankCamera.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TakeATank\Tractor\TakeATankTractor.h"
#include "Components/InputComponent.h"

// NOTICE:
// This is not used, to scared to delete it from the project

// Sets default values
ATakeATankCamera::ATakeATankCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraInput = FVector2D(0, 0);

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));

	SpringArm->SetupAttachment(Root);
	Camera->SetupAttachment(SpringArm);

}

// Called when the game starts or when spawned
void ATakeATankCamera::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	PlayerController->SetViewTarget(this);
}

// Called every frame
void ATakeATankCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (FollowActor == nullptr)
	{
		//FollowActor = UGameplayStatics::GetActorOfClass(GetWorld(), ATakeATankTractor::StaticClass());
		return;
	}

	//UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetMousePosition();

	FVector Loc = GetActorLocation();
	Loc = FMath::Lerp(Loc, FollowActor->GetActorLocation(), FollowSpeed * DeltaTime);

	SetActorLocation(Loc);
	FRotator NewRot = GetActorRotation();
	NewRot.Yaw += CameraInput.X;
	NewRot.Pitch = FMath::Clamp(NewRot.Pitch += CameraInput.Y, -25.0f, 15.0f);
	//NewRot.Pitch += CameraInput.Y;
	SetActorRotation(NewRot);
	/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.0f, FColor::Cyan,
		FString::Printf(TEXT("Rot %f"), NewRot.Yaw));*/

}

void ATakeATankCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ATakeATankCamera::PitchCamera);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &ATakeATankCamera::YawCamera);

	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.0f, FColor::Green,
		FString::Printf(TEXT("Set up: started")));

}

void ATakeATankCamera::PitchCamera(float Value)
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.0f, FColor::Cyan,
		FString::Printf(TEXT("Pitch %f"), Value));
	CameraInput.Y = Value;
}

void ATakeATankCamera::YawCamera(float Value)
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.0f, FColor::Cyan,
		FString::Printf(TEXT("Yaw, yall %f"), Value));
	CameraInput.X = Value;
}
