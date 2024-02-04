#pragma once
#include <cstdlib>
#include <ctime>
#include "Menu.h"
#include "Dungeon.h"

enum scene {
	MainMenu,
	Dungeon,
	Combat,
	Chest
};

void sceneManager(scene currentScene);