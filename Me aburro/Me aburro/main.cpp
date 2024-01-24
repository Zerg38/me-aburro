#include "SceneManager.h"

scene currentScene = MainMenu;

int main(){
	srand(static_cast<unsigned int>(time(0)));
		sceneManager(currentScene);
}