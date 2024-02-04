#include "SceneManager.h"
#include "Enemy.h"



void sceneManager(scene currentScene) {
	switch (currentScene) {
	case MainMenu:
		menu();
		break;
	case Dungeon:
		DungeonPrint();
		break;
	case Combat:
		break;
	case Chest:
		break;
	default:
		break;
	}
}