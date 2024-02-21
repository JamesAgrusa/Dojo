#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Battlefield.h"
#include "Dinosaur.h"
#include "Robot.h"

using namespace std;

Battlefield::Battlefield()
{

}

void Battlefield::instructions()
{
	std::cout << "Welcome! " << endl;
	std::cout << "The battle has commeneced!\n";
	std::cout << "You dont have to worry about picking a side, you will be controlling the Robots perspective!" << endl;
}

void Battlefield::runGame()
{
	instructions();
	battleSeq(); 
}

char Battlefield::battleSeq()
{
	Dinosaur dino1(1, 100, 100, 100, 100);
	Robot robo1(1, 100, 100, 100);

	int choice;
	

	srand(unsigned(time(0)));
	robo1.roboHealth = rand() % 75 + 100;
	dino1.dinoHealth = rand() % 75 + 100;

	while (robo1.roboHealth > 0 || dino1.dinoHealth > 0)
	{
		
		std::cout << "What would you like to see happen next?\n1: Attack\n2 : Heavy Attack\n";
		do { std::cin >> choice; } while (choice > 2 || choice < 1);
		switch (choice) 
		{
		case 1:
			robo1.roboPowerLevel = rand() % 15 + 20;
			robo1.roboDef = rand() % 13 + 26;
			break;
		case 2:
			robo1.roboPowerLevel = rand() % 21 + 28;
			robo1.roboDef = rand() % 13 + 26;
			break;
		}
		
		choice = rand() % 2;

		switch (choice)
		{
		case 1: 
			dino1.dinoAttackPower = rand() % 15 + 20;
			dino1.dinoDef = rand() % 13 + 26;
			break;
		case 2:
			dino1.dinoAttackPower = rand() % 21 + 28;
			dino1.dinoDef = rand() % 13 + 26;
			break;
		}
		robo1.roboDamage = dino1.dinoAttackPower - (robo1.roboDef / dino1.dinoAttackPower);
		if (robo1.roboDamage < 0)
		{
			robo1.roboDamage = 0;
		}
		robo1.roboHealth = robo1.roboHealth - robo1.roboDamage;
		std::cout << "The Robot took " << robo1.roboDamage << " from the Dinosaur!" << endl;
		
		std::cin.get();
		if (robo1.roboHealth < 1)
		{
			std::cout << "the Robot has died!" << endl;
			std::cin.get();
			return 0;
			
		}
		std::cout << "The Dinosaur now has: " << dino1.dinoHealth << " HP left" << endl;
		dino1.dinoDamage = robo1.roboPowerLevel - (dino1.dinoDef / robo1.roboPowerLevel);
		if (dino1.dinoDamage < 0)
		{
			dino1.dinoDamage = 0;
		}
		dino1.dinoHealth = dino1.dinoHealth - dino1.dinoDamage;
		std::cout << "Dinosaur took: " << dino1.dinoDamage << " from the Robot" << endl;
		std::cout << "The Robot has " << robo1.roboHealth << " HP left!" << endl;
		if (dino1.dinoHealth < 1)
		{
			std::cout << "the dinosaur died!!" << endl;
			std::cin.get();
			return 0;
			
		}

	}
	
}

