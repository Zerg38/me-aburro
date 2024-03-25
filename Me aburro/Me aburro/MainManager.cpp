#include "MainManager.h"
#include<iostream>
#define MAP_SIZE 5

void MainManager::Initialize() {
	curentScene = DUNGEON;
	player.initialize();

	enemiesAmount = GenerateRandomNumber(5, 7);

	for (int i = 0; i < enemiesAmount; i++) {
		Enemy* e = new Enemy;
		e->initialize();
		bool valid;
		do {
			valid = true;
			e->enemyP.x = GenerateRandomNumber(0, MAP_SIZE - 1);
			e->enemyP.y = GenerateRandomNumber(0, MAP_SIZE - 1);

			if (e->enemyP.x == player.Position[1] && e->enemyP.y == player.Position[0]) {
				valid = false;
			}

			for (int j = 0; j < i; j++) {
				if (e->enemyP.x == enemies[j]->enemyP.x && e->enemyP.y == enemies[j]->enemyP.y) {
					valid = false;
				}
			}



		} while (!valid);
		enemies.push_back(e);
	}


}