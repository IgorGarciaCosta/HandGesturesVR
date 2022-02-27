// Fill out your copyright notice in the Description page of Project Settings.


#include "VRHTCharacter.h"
#include "Camera/CameraComponent.h"
#include "OculusHandComponent.h"


// Sets default values
AVRHTCharacter::AVRHTCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(RootComponent);

	LeftMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	LeftMotionController->SetupAttachment(RootComponent);

	RightMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	RightMotionController->SetupAttachment(RootComponent);

	LeftHandOculus = CreateDefaultSubobject<UOculusHandComponent>(TEXT("LeftHandOculus"));
	LeftHandOculus->SetupAttachment(LeftMotionController);

	RightHandOculus = CreateDefaultSubobject<UOculusHandComponent>(TEXT("RightHandOculus"));
	RightHandOculus->SetupAttachment(RightMotionController);

}

// Called when the game starts or when spawned
void AVRHTCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRHTCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRHTCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

