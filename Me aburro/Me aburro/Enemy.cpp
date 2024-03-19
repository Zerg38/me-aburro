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

Enemy enemy1;
void Initialize() {
	enemy1.position[0] = rand() % 5;
	enemy1.position[1] = rand() % 5;
	enemy1.isDead = false;
	enemy1.healht = rand() % 31 + 60;
	enemy1.maxhealth = enemy.healht;
	enemy1.stamina = rand() % 31 + 60;
	enemy1.maxstamina = enemy.stamina;
}