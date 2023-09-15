// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TutorialGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TUTORIALCPP_API ATutorialGameMode : public AGameMode
{
	GENERATED_BODY()
	
	ATutorialGameMode();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerRecharge;

	float SpawnZ = 500.0f;
	
	UPROPERTY(EditAnywhere)
		float SpawnXMin;
	UPROPERTY(EditAnywhere)
		float SpawnXMax;
	UPROPERTY(EditAnywhere)
		float SpawnYMin;
	UPROPERTY(EditAnywhere)
		float SpawnYMax;

	void SpawnPlayerRecharge();
};
