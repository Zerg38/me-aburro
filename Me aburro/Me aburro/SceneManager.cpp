#include "SceneManager.h"



void sceneManager(scene currentScene) {
	switch (currentScene) {
	case MainMenu:
		menu();
		break;
	case Dungeon:
		break;
	case Combat:
		break;
	default:
		break;
	}
}