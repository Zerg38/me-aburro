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
void Initialize1() {
	enemy1.position[0] = rand() % 5;
	enemy1.position[1] = rand() % 5;
	enemy1.isDead = false;
	enemy1.healht = rand() % 31 + 60;
	enemy1.maxhealth = enemy.healht;
	enemy1.stamina = rand() % 31 + 60;
	enemy1.maxstamina = enemy.stamina;
}

Enemy enemy2;
void Initialize2() {
	enemy2.position[0] = rand() % 5;
	enemy2.position[1] = rand() % 5;
	enemy2.isDead = false;
	enemy2.healht = rand() % 31 + 60;
	enemy2.maxhealth = enemy.healht;
	enemy2.stamina = rand() % 31 + 60;
	enemy2.maxstamina = enemy.stamina;
}


