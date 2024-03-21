#include<iostream>
#include"MainManager.h"
#include"MathFunction.h"
#include"Dungeon.h"

#include<iostream>



int main() {
	srand(time(NULL));
	MainManager manager;
	manager.Initialize();
	system("pause");
	system("cls");
	while (true) {

		switch (manager.curentScene) {
		case DUNGEON:
			Dungeon(manager);
			break;

		/*case COMBAT:
			Combat(manager);
			break;*/

		case GAMEOVER:
			if (manager.player.health == 0) {
				std::cout << "---- Game Over ----" << std::endl << std::endl;
				std::cout << "> You LOST! The minions of the dragon steal your gold , you lost " << manager.player.gold << " of gold" << std::endl;
				return 0;
			}

			else if (manager.killCount == manager.enemiesAmount) {
				std::cout << "---- Game Over ----" << std::endl << std::endl;
				std::cout << "> You WIN! you defeats all the minions of the dragon and you won a big booty,  you win " << manager.player.gold << " of gold" << std::endl;
				return 0;
			}
			break;


		default:
			break;
		}
		system("pause");
		system("cls");
	}

}