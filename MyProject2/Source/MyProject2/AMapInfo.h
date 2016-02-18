// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "AMapInfo.generated.h"
/**
 * 
 */

UCLASS()
class MYPROJECT2_API AMapInfo : public AActor
{
	GENERATED_BODY()
public:
	AMapInfo();
	~AMapInfo();

	UFUNCTION(BlueprintPure, Category = "Maps")
	FString getMapName();
	UFUNCTION(BlueprintPure, Category = "Maps")
	FString getImgPath();
	UFUNCTION(BlueprintPure, Category = "Maps")
	FString getDescription();
	UFUNCTION(BlueprintCallable, Category = "Maps")
	void setMapName(FString name);
	UFUNCTION(BlueprintCallable, Category = "Maps")
	void setImgPath(FString imgPath);
	UFUNCTION(BlueprintCallable, Category = "Maps")
	void setDescription(FString desc);

	TArray<AMapInfo*>* fillMapArray(FString mapPathFull);

private : 
	FString worldName;
	FString imgPath;
	FString desc;
};
