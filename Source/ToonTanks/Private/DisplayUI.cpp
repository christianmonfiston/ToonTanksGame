// Fill out your copyright notice in the Description page of Project Settings.


#include "DisplayUI.h"
#include "Components/ProgressBar.h"

void UDisplayUI::SetHealth(float CurrentHealth, float MaxHealth) {

	if (HealthBar) {
		//
		HealthBar->SetPercent(CurrentHealth / MaxHealth); 
	}
}






