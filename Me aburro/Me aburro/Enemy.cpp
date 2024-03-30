#include"Enemy.h"
#include"MathFunction.h"

void Enemy::initialize() {
    // Asigna valores válidos a las coordenadas del enemigo
    enemyP.x; 
    enemyP.y;

    isDead = false;

    // Llama a la función GenerateRandomNumber con los valores adecuados
    maxhealth = 60 + rand() % ((90 + 1) - 60);
    health = maxhealth;
    maxstamina = 60 + rand() % ((90 + 1) - 60);
    stamina = maxstamina;
    attackE = 0;
}
