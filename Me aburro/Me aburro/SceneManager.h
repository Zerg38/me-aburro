#pragma once
#include <cstdlib>
#include <ctime>
#include "Menu.h"
#include "Dungeon.h"

enum scene {
	MainMenu,
	Dungeon,
	Combat,
	OpenChest,
};

void sceneManager(scene currentScene);