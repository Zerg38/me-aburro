#pragma once
#include "Menu.h"

enum scene {
	MainMenu,
	Dungeon,
	Combat
};

void sceneManager(scene currentScene);