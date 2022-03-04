// Fill out your copyright notice in the Description page of Project Settings.


#include "WheeledVehicleBase.h"
#include "Camera/CameraComponent.h"
#include "MyOculusHandComponent.h"
#include "OculusHandComponent.h"

AWheeledVehicleBase::AWheeledVehicleBase()
{

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>("PlayerCamera");
	PlayerCamera->SetupAttachment(RootComponent);

	LeftMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	LeftMotionController->SetupAttachment(PlayerCamera);

	RightMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	RightMotionController->SetupAttachment(PlayerCamera);
}
