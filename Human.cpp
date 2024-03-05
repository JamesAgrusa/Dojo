#include "Human.h"
#include "Game.h"
#include "Computer.h"
#include <iostream>
#include <string>

Human::Human()
{

}

int Human::gestureChoicePlayer1()
{
	int choice;
	std::cout << "Please choose an option:\n     1: Rock\n     2: Paper\n     3: Scissors\n     4: Lizzard\n     5: Spock\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		std::cout << "Rock was picked by the player\n";
		break;
	case 2:
		std::cout << "Paper was picked by the player\n";
		break;
	case 3:
		std::cout << "Scissors was picked by the player\n";
		break;
	case 4:
		std::cout << "Lizzard was picked by the player\n";
		break;
	case 5:
		std::cout << "Spock was picked by the player\n";
		break;
	default:
		std::cout << "Invalid choice by the player\n";
		gestureChoicePlayer1();
		break;
	}
	return choice;
}

int Human::gestureChoicePlayer2()
{
	int choice;
	std::cout << "Please choose an option Player 2:\n     1: Rock\n     2: Paper\n     3: Scissors\n     4: Lizzard\n     5: Spock\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		std::cout << "Rock was picked by the player 2\n";
		break;
	case 2:
		std::cout << "Paper was picked by the player 2\n";
		break;
	case 3:
		std::cout << "Scissors was picked by the player 2\n";
		break;
	case 4:
		std::cout << "Lizzard was picked by the player 2\n";
		break;
	case 5:
		std::cout << "Spock was picked by the player 2\n";
		break;
	default:
		std::cout << "Invalid choice by the player 2\n";
		gestureChoicePlayer2();
		break;
	}
	return choice;
}