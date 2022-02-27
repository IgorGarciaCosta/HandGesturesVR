// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MotionControllerComponent.h"
#include "VRHTCharacter.generated.h"

UCLASS()
class HANDSGESTURES_API AVRHTCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVRHTCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	// Default Sub Objects
	UPROPERTY(EditAnywhere)
		class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = "Cpp Based Properties | Components")
		class UMotionControllerComponent* LeftMotionController;

	UPROPERTY(VisibleAnywhere, Category = "Cpp Based Properties | Components")
		class UMotionControllerComponent* RightMotionController;

	/*UPROPERTY(VisibleAnywhere, Category = "Cpp Based Properties | Components", BlueprintReadWrite)
		class UMyOculusHandComponent* LeftHandOculus;

	UPROPERTY(VisibleAnywhere, Category = "Cpp Based Properties | Components", BlueprintReadWrite)
		class UMyOculusHandComponent* RightHandOculus;*/
};
