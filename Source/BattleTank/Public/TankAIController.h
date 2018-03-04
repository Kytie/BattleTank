// Author: James Kyte

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "AIController.h"
#include "Engine/World.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
	ATank* GetControlledTank() const;
	ATank* GetPlayerTank() const;
	virtual void Tick(float DeltaTime) override;
	ATank* ControlledTank;
	ATank* PlayerTank;

protected:
	virtual void BeginPlay() override;

public:
	ATankAIController();
};
