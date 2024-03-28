#include "Combat.h"



bool isCombat = true;
char decision;
void Combat(MainManager& manager) {
	manager.enemy.initialize();
	while (isCombat) {
		system("cls");

		//LAS STATS DE COMBATENEMY ESTAN VACIAS, HABRÍA QUE HACER INITIALIZE ANTES DE TODO
		std::cout << "------COMBAT------\n" << std::endl;
		std::cout << "--ENEMY--" << std::endl;
		std::cout << "Slime ----->" << std::endl;
		std::cout << "HP:" << manager.enemy.maxhealth << " / " << manager.enemy.health << std::endl;
		std::cout << "Stamina: " << manager.enemy.maxstamina << " / " << manager.enemy.stamina << std::endl;
		std::cout << "\n";
		std::cout << "--------------------\n" << std::endl;
		std::cout << "--PLAYER--" << std::endl;
		std::cout << "Unknown ---->" << std::endl;
		std::cout << "HP:" << person.maxHealth << " / " << person.health << std::endl;
		std::cout << "Stamina:" << person.maxstamina << " / " << person.stamina << std::endl;
		std::cout << "Potions: " << person.potions << " / " << person.maxpotions << std::endl;
		std::cout << "__________________________" << std::endl;
		std::cout << "A -> Attack" << std::endl;
		std::cout << "D -> Defend" << std::endl;
		std::cout << "R -> Rest" << std::endl;
		std::cout << "P -> Potion\n" << std::endl;
		std::cout << "Enter your action: ";
		std::cin >> decision;

		switch (decision) {
		case 'A':
			combatCase(manager);
			break;
		case 'D':
			defendCase(manager);
			break;
		case 'R':
			restCase(manager);
			break;
		case 'P':
			potionCase(manager);
			break;
		}
	}
}

void combatCase(MainManager& manager) {

}

void defendCase(MainManager& manager) {

}

void restCase(MainManager& manager) {

}

void potionCase(MainManager& manager) {

}
