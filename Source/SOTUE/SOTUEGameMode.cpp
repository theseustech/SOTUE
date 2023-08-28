// Copyright Epic Games, Inc. All Rights Reserved.

#include "SOTUEGameMode.h"
#include "SOTUECharacter.h"
#include "UObject/ConstructorHelpers.h"

ASOTUEGameMode::ASOTUEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
