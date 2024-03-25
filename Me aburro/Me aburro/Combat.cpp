#include"Combat.h"


bool isCombat = true;
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
		

		/*int printH = Porcentage(p1.health, p1.maxHealth);
		int printS = Porcentage(p1.stamina, p1.maxStamina);
		int printHE = Porcentage(e1.health, e1.maxHealth);
		int printSE = Porcentage(e1.stamina, e1.maxStamina);
		std::cout << "------COMBAT------\n" << std::endl;
		std::cout << "--ENEMY--" << std::endl;
		std::cout << "[";
		for (int i = 0; i < printHE; i++) {
			std::cout << "=";
		}
	int blankHE = 10 - printHE;
	for (int i = 0; i < blankHE; i++) {
		std::cout << " ";
	}
	std::cout << "] " << e1.health << " / " << e1.maxHealth << " HP" << std::endl;
	std::cout << "[";
		for (int i = 0; i < printSE; i++) {
			std::cout << "=";
		}
		int blankSE = 10 - printSE;
		for (int i = 0; i < blankSE; i++) {
			std::cout << " ";
		}
		std::cout << "] " << e1.stamina << " / " << e1.maxStamina << " STAMINA\n" << std::endl;
		std::cout << "[==========] " << e1.health << " / " << e1.maxHealth << " HP" << std::endl;
		std::cout << "[<<<<<<<<<<] " << e1.stamina << " / " << e1.maxStamina << " STAMINA\n" << std::endl;
		std::cout << "-------------\n" << std::endl;
		std::cout << "--Player--" << std::endl;
		std::cout << "[";
		for (int i = 0; i < printH; i++) {
			std::cout << "=";
		}
		int blankH = 10 - printH;
		for (int i = 0; i < blankH; i++) {
			std::cout << " ";
		}
		std::cout << "] " << p1.health << " / " << p1.maxHealth << " HP" << std::endl;
		std::cout << "[";
		for (int i = 0; i < printS; i++) {
			std::cout << ">";
		}
		int blankP = 10;
		for (int i = 0; i < blankP; i++) {
			std::cout << " ";
		}
		std::cout << "] " << p1.stamina << " / " << p1.maxStamina << " STAMINA \n" << std::endl;
		std::cout << "[==========] " << p1.health << " / " << p1.maxHealth << " HP" << std::endl;
		std::cout << "[<<<<<<<<<<] " << p1.stamina << " / " << p1.maxStamina << " STAMINA \n" << std::endl;
		std::cout << "Potions " << p1.potions << " / \n" << p1.maxPotions << std::endl;
		std::cout << "______________________________________________________\n" << std::endl;
		std::cout << "A -> Attack" << std::endl;
		}*/
	}
}