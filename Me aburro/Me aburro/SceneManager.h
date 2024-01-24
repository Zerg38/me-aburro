#pragma once
#include <cstdlib>
#include <ctime>
#include "Menu.h"
#include "Dungeon.h"

enum scene {
	MainMenu,
	Dungeon,
	Combat
};

void sceneManager(scene currentScene);