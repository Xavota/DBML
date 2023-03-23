// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DBMLGameMode.generated.h"

/**
 * 
 */
UCLASS()
class DBML_API ADBMLGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
  ADBMLGameMode();
  virtual void
  InitGame(const FString& MapName,
           const FString& Options,
           FString& ErrorMessage);
};
