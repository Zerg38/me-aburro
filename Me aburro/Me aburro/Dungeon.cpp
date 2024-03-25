#include "Dungeon.h"
char decision;


void Dungeon(MainManager& manager)
{
	std::cout << "-------DUNGEON---------" << std::endl;
		for (int i = 0; i < 5; i++) {
			std::cout << " ___ ";
		}
		std::cout << "\n";
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++) {
				std::cout << "|   |";
			}
			std::cout << "\n";
			for (int j = 0; j < 5; j++)
			{
				char value = ' ';

				if (person.Position[0] == i && person.Position[1] == j) {
					value = 'P';
				}

				for (int k = 0; k < manager.enemiesAmount; k++) {

					if (manager.enemies[k]->enemyP.x == j && manager.enemies[k]->enemyP.y == i && manager.enemies[k]->isDead == false) {
						value = 'E';
					}
				}
				

				std::cout << "| " << value << " |";
			}
			std::cout << "\n";
			for (int j = 0; j < 5; j++)
			{
				std::cout << "|___|";
			}
			std::cout << "\n";
		}

		std::cout << "Where do you want to go?" << std::endl;
		std::cout << "Press W to go up" << std::endl;
		std::cout << "Press S to go down" << std::endl;
		std::cout << "Press A to go left" << std::endl;
		std::cout << "Press D to go right" << std::endl;
		std::cout << "Please use uppercase letters" << std::endl;

		std::cin >> decision;
		

		switch (decision) {
		case 'W':
			if (person.Position[0] != 0) {
				person.Position[0] = person.Position[0] - 1;
			}
			break;
		case 'A':
			if (person.Position[1] != 0) {
				person.Position[1] = person.Position[1] - 1;
			}
			break;
		case 'S':
			if (person.Position[0] != 4) {
				person.Position[0] = person.Position[0] + 1;
			}
			break;
		case 'D':
			if (person.Position[1] != 4) {
				person.Position[1] = person.Position[1] + 1;
			}
			break;
		}
		for (int i = 0; i < manager.enemiesAmount; i++) {
			if (manager.enemies[i]->enemyP.x == person.Position[1] && manager.enemies[i]->enemyP.y == person.Position[0]) {
				manager.curentScene = COMBAT;
			}
		}
		system("cls");
	

}
