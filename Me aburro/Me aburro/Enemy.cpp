#include"Enemy.h"
#include"MathFunction.h"

void Enemy::initialize() {
    // Asigna valores v�lidos a las coordenadas del enemigo
    enemyP.x; 
    enemyP.y;

    isDead = false;

    // Llama a la funci�n GenerateRandomNumber con los valores adecuados
    maxhealth = GenerateRandomNumber(60, 90);
    health = maxhealth;
    maxstamina = GenerateRandomNumber(60, 90);
    stamina = maxstamina;
    attackE = 0;
}
