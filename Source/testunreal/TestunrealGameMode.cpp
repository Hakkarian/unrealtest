#include "TestunrealGameMode.h"

ATestunrealGameMode::ATestunrealGameMode()
{
    PrimaryActorTick.bCanTick = true;
    DefaultGravityScale = 1.0f;
    MaxPlayerLives = 3;
}