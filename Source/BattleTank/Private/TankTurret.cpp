// Author: James Kyte

#include "TankTurret.h"
#include "Engine/World.h"


void UTankTurret::Rotate(float ReletiveSpeed)
{
	ReletiveSpeed = FMath::Clamp<float>(ReletiveSpeed, -1.0f, 1.0f);
	auto RotationChange = ReletiveSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto NewRotation = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, NewRotation, 0));
}


