#pragma once
#include <iostream>
#include <string>

struct Player {
	int Position[2];
	int gold;
	int health;
	int maxHealth;
	int stamina;
	int maxstamina;
	int agility;
	int maxagility;
	int potions;
	int maxpotions;
	void initialize();
};

extern Player person;


