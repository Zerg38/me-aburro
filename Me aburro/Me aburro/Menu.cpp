#include "Menu.h"
#include"Enemy.h"
#include"Chest.h"


void menu()
{
	bool valid = false;
	std::string decision;
	initializePlayer();
	while (!valid) {

		std::cout << "Let's begin with a simple test" << std::endl;
		std::cout << "Are you a male or a female? [M / F]" << std::endl;
		std::cin >> decision;
		valid = checkGender(decision);
		std::cout << "\n\n";
		std::cout << "Okay right right, so you're a " << person.gender << std::endl;
		std::cout << "Now let's continue with your age: ";
		std::cin >> decision;
		valid = checkAge(decision);
		std::cout << "\n\n";
		std::cout << "And you have " << person.age << " good good, not young neither old~" << std::endl;
		std::cout << "Okay let's finish this.." << std::endl;
		std::cout << "Tell me your name: ";
		std::cin >> decision;
		valid = checkName(decision);
		if (!valid) {
			std::cout << "Okay..seems like something went wrong, let's try again.." << std::endl;
			system("pause");
			system("cls");
		}
		else {
			system("pause");
		}
	}

	system("cls");
	displayPlayerData();
	system("pause");
	Initialize();
	Initialize1();
	Initialize2();
	InitializeChest();
	InitializeChest1();
	scene currentScene = Dungeon;
	sceneManager(currentScene);
}
