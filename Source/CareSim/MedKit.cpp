#include "MedKit.h"

AMedKit::AMedKit()
{
	PrimaryActorTick.bCanEverTick = false;
	DisplayName = TEXT("Med Kit");
}

void AMedKit::Interact(AActor* InstigatorActor)
{
	Super::Interact(InstigatorActor);
	UE_LOG(LogTemp, Log, TEXT("Using Med Kit: restoring health"));
}

