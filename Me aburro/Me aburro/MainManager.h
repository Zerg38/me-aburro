#pragma once
#include"Player.h"
#include"chest.h"
#include"Enemy.h"
#include"MathFunction.h"
#include<vector>
enum GameScene { DUNGEON, COMBAT, CHEST, GAMEOVER };

struct MainManager {

	GameScene curentScene;

	Player player;
	Enemy enemy;
	Chest chest;

	std::vector<Enemy*>enemies;

	int enemiesAmount;

	int killCount = 0;

	void Initialize();
};

