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

bool isCombats = true;
bool validStamina = false;
char Decision;
int enemyMovements;
int playerAmount;
int enemiesAmount;
int healthPer30;
int staminaPer30;
int staminaPer20;
int staminaPer25;