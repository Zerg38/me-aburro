#pragma once
#include "MapPosition.h"

struct Enemy {
	MapPosition enemyP;

	bool isDead;
	int health;
	int maxhealth;
	int stamina;
	int maxstamina;
	int attackE;

	void initialize();
};


