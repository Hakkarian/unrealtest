#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestunrealGameMode.generated.h"

UCLASS()
class ATestunrealGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ATestunrealGameMode();

    UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
    float DefaultGravityScale = 1.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
    int32 MaxPlayerLives = 3;
};