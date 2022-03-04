// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "MotionControllerComponent.h"
#include "WheeledVehicleBase.generated.h"

/**
 * 
 */
UCLASS()
class HANDSGESTURES_API AWheeledVehicleBase : public AWheeledVehicle
{
	GENERATED_BODY()


public:

	AWheeledVehicleBase();

	// Default Sub Objects
	UPROPERTY(EditAnywhere)
		class USceneComponent* CamAndHandsRoot;

	UPROPERTY(EditAnywhere)
		class UCameraComponent* PlayerCamera;

	UPROPERTY(VisibleAnywhere, Category = "Cpp Based Properties | Components")
		class UMotionControllerComponent* LeftMotionController;

	UPROPERTY(VisibleAnywhere, Category = "Cpp Based Properties | Components")
		class UMotionControllerComponent* RightMotionController;
};
