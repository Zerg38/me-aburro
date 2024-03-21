#pragma once
#include"Player.h"
#include"chest.h"
#include"Enemy.h"
#include<vector>
enum GameScene { DUNGEON, COMBAT, CHEST, GAMEOVER };

struct MainManager {

	GameScene curentScene;

	Player player;
	Enemy enemy;
	Chest chest;

	std::vector<Chest*>chests;
	std::vector<Enemy*>enemies;

	int enemiesAmount;

	Enemy* combatEnemy;

	int killCount = 0;

	void Initialize();
};

