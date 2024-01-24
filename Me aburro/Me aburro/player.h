#pragma once
#include <iostream>
#include <string>

struct Player {
	char gender;
	int age;
	std::string name;
	int Position[2];
};

extern Player person;

void initializePlayer();
void displayPlayerData();
bool checkGender(std::string opinion);
bool checkAge(std::string opinion);
bool checkName(std::string opinion);