// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlappyBirdCopycatGameMode.h"
#include "FlappyBirdCopycatCharacter.h"

AFlappyBirdCopycatGameMode::AFlappyBirdCopycatGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AFlappyBirdCopycatCharacter::StaticClass();	
}
