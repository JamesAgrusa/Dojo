#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Battlefield.h"
#include "Dinosaur.h"
#include "Robot.h"
#include "Fleet.h"
#include "Herd.h"

using namespace std;

Battlefield::Battlefield()
{

}


void Battlefield::instructions()
{
	std::cout << "Welcome! Today you unfortuatly have been summoned right in the middle of a debate between Robots and Dinosaurs!! " << endl;
	std::cout << "Sadly the debate is far too heated to calm anyone down. you will have to see this thorugh. Sorry!" << endl;
	std::cout << "Just as you get somewhat safe behind a rock the first swing is swung!" << endl;
	std::cout << "As the battle starts you notice that the 3 robots form together to form one big Robot!!" << endl;
	std::cout << "and oh fuck, the fucking dinosaurs are folling suite" << endl;
	std::cout << "Get a personality Dinosaurs!! shout the Robots" << endl;
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
	
	Fleet fleet(1, 300, 300, 300);
	Herd herd(1, 100, 100, 100, 100);

	int choice;


	srand(unsigned(time(0)));
	fleet.fleetHealth = rand() % 75 + 100;
	herd.herdHealth = rand() % 75 + 100;

	while (fleet.fleetHealth > 0 || herd.herdHealth > 0)
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
			herd.herdAttackPower = rand() % 15 + 20;
			herd.herdDef = rand() % 13 + 26;
			break;
		case 2:
			herd.herdAttackPower = rand() % 21 + 28;
			herd.herdDef = rand() % 13 + 26;
			break;
		}
		fleet.fleetDamage = herd.herdAttackPower - (fleet.fleetDef / herd.herdAttackPower);
		if (fleet.fleetDamage < 0)
		{
			fleet.fleetDamage = 0;
		}
		fleet.fleetHealth = fleet.fleetHealth - fleet.fleetDamage;
		std::cout << "The Fleet took " << fleet.fleetDamage << " from the Herd!" << endl;

		std::cin.get();
		if (fleet.fleetHealth < 1)
		{
			std::cout << "the Fleet has died!" << endl;
			std::cin.get();
			return 0;

		}
		std::cout << "The Herd now has: " << herd.herdHealth << " HP left" << endl;
		herd.herdDamage = fleet.fleetPowerLevel - (herd.herdDef / fleet.fleetPowerLevel);
		if (herd.herdDamage < 0)
		{
			herd.herdDamage = 0;
		}
		herd.herdHealth = herd.herdHealth - herd.herdDamage;
		std::cout << "The Herd took: " << herd.herdDamage << " from the Fleet" << endl;
		std::cout << "The Fleet has " << fleet.fleetHealth << " HP left!" << endl;
		if (herd.herdHealth < 1)
		{
			std::cout << "the Herd died!!" << endl;
			std::cin.get();
			return 0;


		}
	}
}

