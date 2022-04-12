// Fill out your copyright notice in the Description page of Project Settings.


#include "TakeATankTractor.h"

#include "Components/BoxComponent.h"
//#include "TankDriverComponent.h" // Needed for MoveComp
//#include "..\..\Source\Tanks\PowerUp.h"
//#include "Kismet/GameplayStatics.h"

// Sets default values
ATakeATankTractor::ATakeATankTractor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	//BoxCollision->SetCollisionResponseToAllChannels(ECR_Block);
	//RootComponent = BoxCollision;

	//MoveComp = CreateDefaultSubobject<UTankDriverComponent>(TEXT("DriveComponent"));

	//CameraInput = FVector2D(0, 0);
	//if (Cam != nullptr)
	//{
	//	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.0f, FColor::Cyan, FString::Printf(TEXT("Error: no camera found!!")));
	//}
}

// Called when the game starts or when spawned
void ATakeATankTractor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATakeATankTractor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Camera things:
	//if (Cam != nullptr)
	//{
	//	//Rotation:
	//	FRotator NewRot = Cam->GetActorRotation();
	//	NewRot.Yaw += CameraInput.X;
	//	NewRot.Pitch = FMath::Clamp(NewRot.Pitch += CameraInput.Y, -25.0f, 15.0f);
	//	//NewRot.Pitch += CameraInput.Y;
	//	Cam->SetActorRotation(NewRot);
	//	Turret->SetRotation(NewRot);
	//	/*FRotator SpringArmRot = Cam->SpringArm->GetComponentRotation();
	//	SpringArmRot.Pitch += CameraInput.Y;*/
	//	//Cam->SpringArm->SetWorldRotation(SpringArmRot);
	//}
	//else
	//{
	//	//Cam = UGameplayStatics::GetActorOfClass(GetWorld(), ATankCamera::StaticClass());
	//	// APlayerCameraManager* PlayerCamera = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	//	//Cam = PlayerCamera->getcamera
	//}

	//if (PowerUp != nullptr)
	//{
	//	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.0f, FColor::Cyan,
	//		PowerUp->GetClass()->GetName());
	//}
	//if (bPowerActivated)
	//{
	//	PowerUp->TickActive(DeltaTime);
	//	if (PowerUp->ShouldDeactivate())
	//	{
	//		bPowerActivated = false;
	//		PowerUp = nullptr;
	//	}
	//}
}


// Called to bind functionality to input
void ATakeATankTractor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//PlayerInputComponent->BindAxis(TEXT("Acc"), this, &APlayerTank::HandleAccInput);
	//PlayerInputComponent->BindAxis(TEXT("Turn"), this, &APlayerTank::HandleTurnInput);

	//PlayerInputComponent->BindAxis(TEXT("CameraPitch"), this, &APlayerTank::PitchCamera);
	//PlayerInputComponent->BindAxis(TEXT("CameraYaw"), this, &APlayerTank::YawCamera);

	//PlayerInputComponent->BindAction(TEXT("ActivatePowerUp"), IE_Pressed, this, &APlayerTank::HandleActivatePowerUp);

}

void ATakeATankTractor::HandleActivatePowerUp()
{
	/*if (PowerUp != nullptr && !bPowerActivated)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 10.0f, FColor::Cyan,
			FString::Printf(TEXT("Activated!!!")));
		PowerUp->OnPowerActivated();
		bPowerActivated = true;
	}*/

}

void ATakeATankTractor::HandleAccInput(float Value)
{
	/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.0f, FColor::Cyan,
		FString::Printf(TEXT("Acc %f"), Value));

	MoveComp->DriveForwardInput = Value;*/
}

void ATakeATankTractor::HandleTurnInput(float Value)
{
	/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.0f, FColor::Blue,
		FString::Printf(TEXT("Turn %f"), Value));

	MoveComp->SteerInput = Value;*/

}

void ATakeATankTractor::PitchCamera(float Value)
{
	//CameraInput.Y = Value;
}

void ATakeATankTractor::YawCamera(float Value)
{
	/*CameraInput.X = Value;*/

}
//
//void ATakeATankTractor::EquipPowerup(UPowerUp* NewPowerUp)
//{
//	/*PowerUp = NewPowerUp;
//	PowerUp->Setup();*/
//}

