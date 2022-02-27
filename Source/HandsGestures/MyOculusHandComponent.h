// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OculusHandComponent.h"
#include "MyOculusHandComponent.generated.h"

/**
 * 
 */
UCLASS()
class HANDSGESTURES_API UMyOculusHandComponent : public UOculusHandComponent
{
	GENERATED_BODY()

public:
	UMyOculusHandComponent();

	UPROPERTY(VisibleAnywhere, Category = "Cpp Based Properties | Components", BlueprintReadWrite)
		class UOculusHandComponent* HandOculus;
	
};
