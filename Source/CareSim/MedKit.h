// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableBase.h"
#include "MedKit.generated.h"

UCLASS()
class CARESIM_API AMedKit : public AInteractableBase
{
	GENERATED_BODY()
	
public:	
	AMedKit();

	virtual void Interact(AActor* InstigatorActor) override;

};
