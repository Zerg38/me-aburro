#include "Combat.h"



void Combat(MainManager& manager) {
	manager.enemy.initialize();
	while (isCombats) {
		system("cls");
		healthPer30 = ToPrecent(manager.enemy.maxhealth, 30);
		staminaPer30 = ToPrecent(manager.enemy.maxstamina, 30);
		staminaPer20 = ToPrecent(manager.enemy.maxstamina, 20);
		staminaPer25 = ToPrecent(manager.enemy.maxstamina, 25);
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
		std::cin >> Decision;

		switch (Decision) {
		case 'A':
			validStamina = false;
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
		isCombats = false;
	}
}

void combatCase(MainManager& manager) {
	std::cout << "Select an amount of stamina --> " << "MAX: " << person.stamina << std::endl;
	std::cin >> playerAmount;
	while (!validStamina) {
		if (playerAmount <= person.stamina) {
			validStamina = true;
		}
		else {
			std::cout << "\nThe selected amount it's not correct, try again --> MAX: " << person.stamina << std::endl;
			std::cin >> playerAmount;
		}
	}
	enemyMovements = EnemyDecision(manager);
	switch (enemyMovements) {
	case 1: //defend
		std::cout << "The enemy assumes a defensive posture mitigating part of your damage" << std::endl;
		std::cout << "You managed to hit the enemy by " << playerAmount / 2 << std::endl;
		manager.enemy.health -= playerAmount / 2;
		manager.enemy.stamina += staminaPer25;
		if (manager.enemy.stamina > manager.enemy.maxstamina) {
			manager.enemy.stamina = manager.enemy.maxstamina;
		}
		break;
	case 2: //Rest
		std::cout << "The enemy took the opportunity between your moves to rest a little bit" << std::endl;
		std::cout << "You managed to hit the enemy by " << playerAmount << std::endl;
		manager.enemy.health -= playerAmount;
		manager.enemy.stamina = manager.enemy.maxstamina;
		break;
	case 3: //Attack
		enemiesAmount = GenerateRandomNumber(staminaPer20, manager.enemy.maxstamina);
		if (enemiesAmount > playerAmount) {
			std::cout << "Unfortunately the enemy manages to hit you first!" << std::endl;
			std::cout << "You lose a total of " << enemiesAmount << " hit points!" << std::endl;
			manager.enemy.stamina -= enemiesAmount;
			person.health -= enemiesAmount;
			person.stamina -= playerAmount;
		}
		else {
			std::cout << "You managed to hit the enemy first!" << std::endl;
			std::cout << "The enemy lose a total of " << playerAmount << " hit points!" << std::endl;
			manager.enemy.health -= playerAmount;
			manager.enemy.stamina -= enemiesAmount;
			person.stamina -= playerAmount;
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
	if (manager.enemy.health < healthPer30 && manager.enemy.stamina < staminaPer30) {
		return 1; //Defend
	}
	else if (manager.enemy.health < staminaPer20) {
		return 2; //Rest
	}
	else {
		return 3; //Attack
	}
}