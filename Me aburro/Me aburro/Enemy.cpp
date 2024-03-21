#include"Enemy.h"
#include"MathFunction.h"

void Enemy::initialize() {
	enemyP.x;
	enemyP.y;

	isDead = false;

	maxhealth = GenerateRandomNum(60, 90);
	health = maxhealth;
	maxstamina = GenerateRandomNum(60, 90);
	stamina = maxstamina;
	attackE = 0;
}
