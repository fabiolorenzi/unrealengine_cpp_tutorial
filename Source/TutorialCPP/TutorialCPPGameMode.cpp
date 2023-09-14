// Copyright Epic Games, Inc. All Rights Reserved.

#include "TutorialCPPGameMode.h"
#include "TutorialCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorialCPPGameMode::ATutorialCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
