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