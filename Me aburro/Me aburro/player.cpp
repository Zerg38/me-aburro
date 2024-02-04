#include "player.h"

Player person;

// Función para inicializar un jugador con valores predeterminados
void initializePlayer() {
    person.gender = ' ';
    person.age = 0;
    person.name = "";
    person.Position[0] = rand() % 5;
    person.Position[1] = rand() % 5;
    person.gold = 0;
    person.healht = rand() % 21 + 90;
    person.maxHealth = person.healht;
    person.stamina = rand() % 21 + 90;
    person.maxstamina = person.stamina;
    person.agility = 3;
    person.maxagility = person.agility;
    person.potions = 0;
    person.maxpotions = person.potions;
}


// Función para mostrar los datos de un jugador
void displayPlayerData() {
    std::cout << "Player Data:" << std::endl;
    std::cout << "Gender: " << person.gender << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Health: " << person.healht << " / " << person.maxHealth << std::endl;
    std::cout << "Potions: " << person.potions << " / " << person.maxpotions << std::endl;
    std::cout << "Moves: " << person.agility << " / " << person.maxagility << std::endl;
}

bool checkGender(std::string opinion)
{
    if (opinion == "F" || opinion == "f") {
        person.gender = 'F';
        return true;
    }
    else if (opinion == "M" || opinion == "m") {
        person.gender = 'M';
        return true;
    }
    else {
        return false;
    }
    return false;
}

bool checkAge(std::string opinion) {
    person.age = std::stoi(opinion);
    if (person.age >= 0 && person.age <= 100) {
        return true;
    }
    else {
        return false;
    }
}

bool checkName(std::string opinion) {
    person.name = opinion;
    return true;
}

