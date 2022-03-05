// Fill out your copyright notice in the Description page of Project Settings.


#include "WheeledVehicleBase.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "MyOculusHandComponent.h"
#include "Engine/Engine.h"
#include "GenericPlatform/GenericPlatformProcess.h"
#include "OculusHandComponent.h"

AWheeledVehicleBase::AWheeledVehicleBase()
{

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CamAndHandsRoot = CreateDefaultSubobject<USceneComponent>("CamAndHandsRoot");
	CamAndHandsRoot->SetupAttachment(GetRootComponent());

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>("PlayerCamera");
	PlayerCamera->SetupAttachment(CamAndHandsRoot);

	LeftMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	LeftMotionController->SetupAttachment(CamAndHandsRoot);

	RightMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	RightMotionController->SetupAttachment(CamAndHandsRoot);
}

void AWheeledVehicleBase::ExecuteExternalFile()
{//C:\Users\ISILV125\AppData\Local\CiscoSparkLauncher
	FPlatformProcess::CreateProc(TEXT("C:\\Users\\ISILV125\\AppData\\Local\\CiscoSparkLauncher\\CiscoCollabHost"), nullptr, true, false, false, nullptr, 0, nullptr, nullptr);
	//FPlatformProcess::CreateProc(TEXT("C:\\Users\\Cero\\Desktop\\Test.exe"), nullptr, true, false, false, nullptr, 0, nullptr, nullptr);
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, "FUNCTION CALLED");

}

