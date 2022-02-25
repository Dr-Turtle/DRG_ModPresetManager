#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GDGameStatsTracking.generated.h"

USTRUCT(BlueprintType)
struct FGDGameStatsTracking {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TotalEnemyKillsFilter;
    
    FSD_API FGDGameStatsTracking();
};

