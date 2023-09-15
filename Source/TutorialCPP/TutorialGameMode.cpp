// Fill out your copyright notice in the Description page of Project Settings.


#include "TutorialGameMode.h"
#include "GameFramework/Actor.h"

ATutorialGameMode::ATutorialGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ATutorialGameMode::BeginPlay()
{
    Super::BeginPlay();

    FTimerHandle UnusedHandle;
    GetWorldTimerManager().SetTimer(UnusedHandle, this, &ATutorialGameMode::SpawnPlayerRecharge, FMath::RandRange(2, 5), true);
}

void ATutorialGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATutorialGameMode::SpawnPlayerRecharge()
{
    float RandX = FMath::RandRange(SpawnXMin, SpawnXMax);
    float RandY = FMath::RandRange(SpawnYMin, SpawnYMax);

    FVector SpawnPosition = FVector(RandX, RandY, SpawnZ);
    FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

    GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}
