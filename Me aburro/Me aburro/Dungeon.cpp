#include "Dungeon.h"
#include "Enemy.h"
#include "Chest.h"
bool isDungeon = true;
char decision;


void DungeonPrint()
{
	std::cout << "-------DUNGEON---------" << std::endl;
	while (isDungeon) {
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
				if (enemy.position[0] == i && enemy.position[1] == j) {
						value = 'E';
				}
				if (enemy1.position[0] == i && enemy1.position[1] == j) {
					value = 'E';
				}
				if (enemy2.position[0] == i && enemy2.position[1] == j) {
					
					value = 'E';
				}
				if (chest.position[0] == i && chest.position[1] == j) {
					value = 'C';
				}
				if (chest1.position[0] == i && chest1.position[1] == j) {
					value = 'C';
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
		std::cout << "Please use uppercase inputs" << std::endl;
		if (person.Position[0] == chest.position[0] && person.Position[1] == chest.position[1]) {
			system("cls");
			scene currentScene = OpenChest;
		}
		std::cout << enemy.position[0] << enemy.position[1] << std::endl;
		std::cout << enemy1.position[0] << enemy1.position[1] << std::endl;
		std::cout << enemy2.position[0] << enemy2.position[1] << std::endl;
		std::cin >> decision;
		system("cls");
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
	}
	

}
