// Copyright Epic Games, Inc. All Rights Reserved.

#include "communication_demoGameMode.h"
#include "communication_demoCharacter.h"
#include "UObject/ConstructorHelpers.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDiedSignature, ACharacter*, Character);

Acommunication_demoGameMode::Acommunication_demoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

//void Acommunication_demoGameMode::RestartPlayer(AController* NewPlayer)
//{
//	Super::RestartPlayer(NewPlayer);
//}
//
//void Acommunication_demoGameMode::BeginPlay()
//{
//	if (!OnPlayerDied.IsBound())
//	{
//		OnPlayerDied.AddDynamic(this, &Acommunication_demoGameMode::RestartPlayer);
//	}
//}
//
//void Acommunication_demoGameMode::PlayerDied(ACharacter* Character)
//{
//	AController* CharacterController = Character->GetController();
//	RestartPlayer(CharacterController);
//}
