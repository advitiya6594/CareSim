#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableBase.generated.h"

UCLASS()
class CARESIM_API AInteractableBase : public AActor
{
    GENERATED_BODY()

public:
    AInteractableBase();

    // Simple label for UI / logging
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
    FString DisplayName;

    // Called when something interacts with this actor
    UFUNCTION(BlueprintCallable, Category = "Interactable")
    virtual void Interact(AActor* InstigatorActor);
};

