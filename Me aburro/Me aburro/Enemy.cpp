#include"Enemy.h"

Enemy enemy;

void Initialize() {
	enemy.position[0] = rand() % 5;
	enemy.position[1] = rand() % 5;
	enemy.isDead = false;
	enemy.healht = rand() % 31 + 60;
	enemy.maxhealth = enemy.healht;
	enemy.stamina = rand() % 31 + 60;
	enemy.maxstamina = enemy.stamina;
}

