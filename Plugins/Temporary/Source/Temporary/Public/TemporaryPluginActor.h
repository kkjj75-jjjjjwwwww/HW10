// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TemporaryPluginActor.generated.h"

UCLASS()
class TEMPORARY_API ATemporaryPluginActor : public AActor
{
    GENERATED_BODY()

public:
    ATemporaryPluginActor();

protected:
    virtual void BeginPlay() override;
};