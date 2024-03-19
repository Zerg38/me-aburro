#include "SceneManager.h"
#include "Enemy.h"
#include "Chest.h"



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
	case OpenChest:
		InitializeChest();
		break;
	default:
		break;
	}
}