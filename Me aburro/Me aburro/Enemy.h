#pragma once
#include<iostream>
#include<random>

struct Enemy {

	int position[2];
	bool isDead;
	int healht;
	int maxhealth;
	int stamina;
	int maxstamina;
};

extern Enemy enemy;

extern Enemy enemy1;

extern Enemy enemy2;

//Enemigo 1
void Initialize();
//Enemigo 2
void Initialize1();
//Enemigo 3
void Initialize2();