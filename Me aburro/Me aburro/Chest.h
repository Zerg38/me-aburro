#pragma once
#include<string>
#include<iostream>

struct Chest {
	std::string chestName[10];
	int randomNumber;
	int position[2];
	int gold;
	bool isLooted = false;
	bool ContainsPotion = false;
};


extern Chest chest;

extern Chest chest1;


void InitializeChest();

void InitializeChest1();

void PrintChest();