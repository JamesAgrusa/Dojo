#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Battlefield.h"
#include "Dinosaur.h"
#include "Robot.h"
#include "Fleet.h"

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
	Fleet fleet(1, 100, 100, 100);

	int fleetPowerLevel{};
	int fleetHealth{};
	int fleetDamage{};
	int fleetDef{};

	robo1.roboHealth = fleetHealth;

	robo1.roboDamage = fleetDamage;

	robo1.roboDef = fleetDef;

	robo1.roboPowerLevel = fleetPowerLevel;


	int choice;
	

	srand(unsigned(time(0)));
	fleet.fleetHealth = rand() % 75 + 100;
	dino1.dinoHealth = rand() % 75 + 100;

	while (fleet.fleetHealth > 0 || dino1.dinoHealth > 0)
	{
		
		std::cout << "What would you like to see happen next?\n1: Attack\n2 : Heavy Attack\n";
		do { std::cin >> choice; } while (choice > 2 || choice < 1);
		switch (choice) 
		{
		case 1:
			fleet.fleetPowerLevel = rand() % 15 + 20;
			fleet.fleetDef = rand() % 13 + 26;
			break;
		case 2:
			fleet.fleetPowerLevel = rand() % 21 + 28;
			fleet.fleetDef = rand() % 13 + 26;
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
		fleet.fleetDamage = dino1.dinoAttackPower - (fleet.fleetDef / dino1.dinoAttackPower);
		if (fleet.fleetDamage < 0)
		{
			fleet.fleetDamage = 0;
		}
		fleet.fleetHealth = fleet.fleetHealth - fleet.fleetDamage;
		std::cout << "The Robot took " << fleet.fleetDamage << " from the Dinosaur!" << endl;
		
		std::cin.get();
		if (fleet.fleetHealth < 1)
		{
			std::cout << "the Robot has died!" << endl;
			std::cin.get();
			return 0;
			
		}
		std::cout << "The Dinosaur now has: " << dino1.dinoHealth << " HP left" << endl;
		dino1.dinoDamage = fleet.fleetPowerLevel - (dino1.dinoDef / fleet.fleetPowerLevel);
		if (dino1.dinoDamage < 0)
		{
			dino1.dinoDamage = 0;
		}
		dino1.dinoHealth = dino1.dinoHealth - dino1.dinoDamage;
		std::cout << "Dinosaur took: " << dino1.dinoDamage << " from the Robot" << endl;
		std::cout << "The Robot has " << fleet.fleetHealth << " HP left!" << endl;
		if (dino1.dinoHealth < 1)
		{
			std::cout << "the dinosaur died!!" << endl;
			std::cin.get();
			return 0;
			
		}
	}
}

