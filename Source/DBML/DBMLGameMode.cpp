// Copyright Epic Games, Inc. All Rights Reserved.


#include "DBMLGameMode.h"
#include "DBML.h"

ADBMLGameMode::ADBMLGameMode()
{}
void
ADBMLGameMode::InitGame(const FString& MapName,
                        const FString& Options,
                        FString& ErrorMessage)
{
  Super::InitGame(MapName, Options, ErrorMessage);
  UE_LOG(LogDBML, Log, TEXT("Game is running: %s, %s"), *MapName, *Options);
}