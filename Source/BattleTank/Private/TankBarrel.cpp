// Author: James Kyte

#include "TankBarrel.h"
#include "Engine/World.h"


void UTankBarrel::Elevate(float ReletiveSpeed)
{
	ReletiveSpeed = FMath::Clamp<float>(ReletiveSpeed, -1.0f, 1.0f);
	auto ElevationChange = ReletiveSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinElevation, MaxElevation);
	SetRelativeRotation(FRotator(Elevation, 0, 0));
}

