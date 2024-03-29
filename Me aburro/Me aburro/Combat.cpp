#include "Combat.h"



void Combat(MainManager& manager) {
	manager.enemy.initialize();
	health30 = ToPrecent(manager.enemy.maxhealth, 30);
	stamina30 = ToPrecent(manager.enemy.maxstamina, 30);
	stamina20 = ToPrecent(manager.enemy.maxstamina, 20);
	stamina25 = ToPrecent(manager.enemy.maxstamina, 25);

	while (isCombat) {
		system("cls");

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
		std::cin >> movement;

		switch (movement) {
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

	if (manager.enemy.health <= 0 || person.health <= 0) {
		isCombat = false;
	}
}

void combatCase(MainManager& manager) {
	std::cout << "Select an amount of stamina --> " << "MAX: " << person.stamina << std::endl;
	std::cin >> amount;
	while (!isValid) {
		if (amount <= person.stamina) {
			isValid = true;
		}
		else {
			std::cout << "\nThe selected amount it's not correct, try again --> MAX: " << person.stamina << std::endl;
			std::cin >> amount;
		}
	}
	enemyMovement = EnemyDecision(manager);
	switch (enemyMovement) {
	case 1: //defend
		std::cout << "The enemy assumes a defensive posture mitigating part of your damage" << std::endl;
		std::cout << "You managed to hit the enemy by " << amount / 2 << std::endl;
		manager.enemy.health -= amount / 2;
		manager.enemy.stamina += stamina25;
		if (manager.enemy.stamina > manager.enemy.maxstamina) {
			manager.enemy.stamina = manager.enemy.maxstamina;
		}
		break;
	case 2: //Rest
		std::cout << "The enemy took the opportunity between your moves to rest a little bit" << std::endl;
		std::cout << "You managed to hit the enemy by " << amount << std::endl;
		manager.enemy.health -= amount;
		manager.enemy.stamina = manager.enemy.maxstamina;
		break;
	case 3: //Attack
		enemyAmount = GenerateRandomNumber(stamina20, manager.enemy.maxstamina);
		if (enemyAmount > amount) {
			std::cout << "Unfortunately the enemy manages to hit you first!" << std::endl;
			std::cout << "You lose a total of " << enemyAmount << " hit points!" << std::endl;
			manager.enemy.stamina -= enemyAmount;
			person.health -= enemyAmount;
			person.stamina -= amount;
		}
		else {
			std::cout << "You managed to hit the enemy first!" << std::endl;
			std::cout << "The enemy lose a total of " << amount << " hit points!" << std::endl;
			manager.enemy.health -= amount;
			manager.enemy.stamina -= enemyAmount;
			person.stamina -= amount;
		}


		break;
	}
}

void defendCase(MainManager& manager) {

}

void restCase(MainManager& manager) {

}

void potionCase(MainManager& manager) {

}

int EnemyDecision(MainManager& manager) {
	if (manager.enemy.health < health30 && manager.enemy.stamina < stamina30) {
		return 1; //Defend
	}
	else if (manager.enemy.health < stamina20) {
		return 2; //Rest
	}
	else {
		return 3; //Attack
	}
}