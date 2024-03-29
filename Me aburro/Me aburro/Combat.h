#pragma once
#include<iostream>
#include"MainManager.h"
#include "MathFunction.h"
 

void Combat(MainManager& manager);
void combatCase(MainManager& manager);
void defendCase(MainManager& manager);
void restCase(MainManager& manager);
void potionCase(MainManager& manager);
int EnemyDecision(MainManager& manager);

bool isCombat = true;
bool isValid = false;
bool playerWin = false;
char movement;
int enemyMovement;
int amount;
int enemyAmount;
int health30;
int stamina30;
int stamina20;
int stamina25;