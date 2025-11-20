#include "InteractableBase.h"

AInteractableBase::AInteractableBase()
{
    PrimaryActorTick.bCanEverTick = false;
    DisplayName = TEXT("Interactable");
}

void AInteractableBase::Interact(AActor* InstigatorActor)
{
    UE_LOG(LogTemp, Log, TEXT("Interacting with: %s"), *DisplayName);
}
