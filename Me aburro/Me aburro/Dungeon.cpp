#include "Dungeon.h"

bool isDungeon = true;

void DungeonPrint()
{
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
				std::cout << "| " << value << " |";
			}
			std::cout << "\n";
			for (int j = 0; j < 5; j++)
			{
				std::cout << "|___|";
			}
			std::cout << "\n";
		}
		system("cls");
	}

}
