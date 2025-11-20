#include "Defibrillator.h"

ADefibrillator::ADefibrillator()
{
	PrimaryActorTick.bCanEverTick = false;
	DisplayName = TEXT("Defibrillator");
}

void ADefibrillator::Interact(AActor* InstigatorActor)
{
	Super::Interact(InstigatorActor);
	UE_LOG(LogTemp, Log, TEXT("Using Defibrillator: delivering shock"));
}

