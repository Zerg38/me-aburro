#include"Chest.h"

Chest chest;
void InitializeChest() {
	chest.chestName[0] = "Daga de la Noche Infinita";
	chest.chestName[1] = "Glaive Lunar";
	chest.chestName[2] = "Espada del Rey Destrozado";
	chest.chestName[3] = "Fusil de Asalto Hextech";
	chest.chestName[4] = "Tridente del Ahogado";
	chest.chestName[5] = "Cetro del Arcángel";
	chest.chestName[6] = "El Filo del Infinito";
	chest.chestName[7] = "La Hoz de Guinsoo";
	chest.chestName[8] = "El Reloj de Arena de Zhonya";
	chest.chestName[9] = "Temmo";

	chest.randomNumber = rand() % 10;
	
	chest.position[0] = rand() % 5;
	chest.position[1] = rand() % 5;

	chest.gold = rand() % 290;

	chest.isLooted = false;

	chest.ContainsPotion = rand() % 2;
}

Chest chest1;
void InitializeChest1() {
	chest1.chestName[0] = "Daga de la Noche Infinita";
	chest1.chestName[1] = "Glaive Lunar";
	chest1.chestName[2] = "Espada del Rey Destrozado";
	chest1.chestName[3] = "Fusil de Asalto Hextech";
	chest1.chestName[4] = "Tridente del Ahogado";
	chest1.chestName[5] = "Cetro del Arcángel";
	chest1.chestName[6] = "El Filo del Infinito";
	chest1.chestName[7] = "La Hoz de Guinsoo";
	chest1.chestName[8] = "El Reloj de Arena de Zhonya";
	chest1.chestName[9] = "Temmo";

	chest1.randomNumber = rand() % 10;

	chest1.position[0] = rand() % 5;
	chest1.position[1] = rand() % 5;

	chest1.gold = rand() % 290;

	chest1.isLooted = false;

	chest1.ContainsPotion = rand() % 2;
}


void PrintChest() {
	std::cout << "Has abierto un cobre lleno de bitcoins wowwwwwwwwww";
	std::cout << "Has abierto un cobre lleno de bitcoins wowwwwwwwwww";
	std::cout << "Has abierto un cobre lleno de bitcoins wowwwwwwwwww";
	std::cout << "Has abierto un cobre lleno de bitcoins wowwwwwwwwww";
	std::cout << "Has abierto un cobre lleno de bitcoins wowwwwwwwwww";
}