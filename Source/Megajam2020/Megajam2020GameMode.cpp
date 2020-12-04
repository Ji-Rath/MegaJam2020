// Copyright Epic Games, Inc. All Rights Reserved.

#include "Megajam2020GameMode.h"
#include "Megajam2020Character.h"
#include "UObject/ConstructorHelpers.h"

AMegajam2020GameMode::AMegajam2020GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
