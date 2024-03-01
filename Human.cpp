#include "Human.h"
#include "Game.h"
#include "Computer.h"
#include <iostream>
#include <string>

Human::Human()
{

}

int Human::gestureChoice()
{
	int choice;
	std::cout << "Please choose an option:\n     1: Rock\n     2: Paper\n     3: Scissors\n     4: Lizzard\n     5: Spock\n";
	std::cin >> choice;
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
	default :
		std::cout << "Invalid choice\n";
		gestureChoice();
		break;
	}
	return choice;
}