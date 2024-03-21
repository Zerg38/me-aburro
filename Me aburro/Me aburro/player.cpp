#include "player.h"

Player person;

// Función para inicializar un jugador con valores predeterminados
void Player::initialize() {
    person.Position[0] = 2;
    person.Position[1] = 4;
    person.gold = 0;
    person.health = rand() % 21 + 90;
    person.maxHealth = person.health;
    person.stamina = rand() % 21 + 90;
    person.maxstamina = person.stamina;
    person.agility = 3;
    person.maxagility = person.agility;
    person.potions = 0;
    person.maxpotions = person.potions;
}

