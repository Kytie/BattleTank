// Copyright James Kyte

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;
class APawn;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
	virtual void Tick(float DeltaTime) override;

	//Distance from player that is acceptable for AI to reach.
	UPROPERTY(EditAnywhere, Category = "Navigation")
	float AcceptanceRadius = 3000;

	virtual void SetPawn(APawn* InPAwn) override;

	UFUNCTION()
	void OnPossessedTankDeath();

public:
	ATankAIController();
};
