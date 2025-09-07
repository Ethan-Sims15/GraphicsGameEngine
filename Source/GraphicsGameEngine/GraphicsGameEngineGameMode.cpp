// Copyright Epic Games, Inc. All Rights Reserved.

#include "GraphicsGameEngineGameMode.h"
#include "GraphicsGameEngineCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGraphicsGameEngineGameMode::AGraphicsGameEngineGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
