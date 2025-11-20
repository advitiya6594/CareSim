// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableBase.h"
#include "Defibrillator.generated.h"

UCLASS()
class CARESIM_API ADefibrillator : public AInteractableBase
{
	GENERATED_BODY()
	
public:	
	ADefibrillator();

	virtual void Interact(AActor* InstigatorActor) override;

};
