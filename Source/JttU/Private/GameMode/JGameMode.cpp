// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "JGameMode.h"
#include "JCharacter.h"

AJGameMode::AJGameMode()
{
	// set default pawn class to our Blueprinted character
	DefaultPawnClass = AJCharacter::StaticClass();
}
