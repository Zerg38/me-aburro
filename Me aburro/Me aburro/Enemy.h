#pragma once

struct Enemy {

	int position[2];
	bool isDead;
	int healht;
	int maxhealth;
	int stamina;
	int maxstamina;
};

extern Enemy enemy;
