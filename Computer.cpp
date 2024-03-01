#include "Human.h"
#include "Game.h"
#include "Computer.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

Computer::Computer()
{

}

int Computer::computerChoice()
{
	int choice;
	srand(unsigned(time(0)));

	choice = rand() % 6;
	switch (choice)
	{
	case 1:
		std::cout << "Rock was picked\n";
		break;
	case 2:
		std::cout << "Paper was picked\n";
		break;
	case 3:
		std::cout << "Scissors was picked\n";
		break;
	case 4:
		std::cout << "Lizzard was picked\n";
		break;
	case 5:
		std::cout << "Spock was picked\n";
		break;
	}
	return choice;
}