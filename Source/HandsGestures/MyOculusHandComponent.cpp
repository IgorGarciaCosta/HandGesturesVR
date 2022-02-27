// Fill out your copyright notice in the Description page of Project Settings.


#include "MyOculusHandComponent.h"
#include "OculusHandComponent.h"


UMyOculusHandComponent::UMyOculusHandComponent() {
	HandOculus = CreateDefaultSubobject<UOculusHandComponent>(TEXT("HandOculus"));

}
