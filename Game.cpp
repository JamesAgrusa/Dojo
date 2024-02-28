#include <iostream>
#include "Game.h"

Game::Game()
{

}

void Game::runGame()
{
	instructions();
	playerSettings();
}

void Game::instructions()
{
	std::cout << "Hello, and welcome! Today we will be playing a classic game with a twist! How exciting.\n";
	std::cout << "Here are the rules to get you up to speed :D\n";
	std::cout << "\n";
	std::cout << "    Rock crushes Scisssors\n    Scissors cuts Paper\n    Paper covers Rock\n    Rock curshes LIzard\n    Lizard poisons Spock\n    Spck smashes Scissors\n    Scissors decapitates LIzard\n";
	std::cout << "    Lizard eats Paper\n    Paper disproves Spock\n    Spock vaporizes Rock\n";
}

char Game::playerSettings()
{
	char choice;
	std::cout << "\n";
	std::cout << "Here we need to know if you are by yourself(A) or with someone(B)\n";
	std::cin >> choice;
	if (choice == 'A' )
	{
		std::cout << "Hey you are lonley!! JK youre beautiful <3\n";
	}
	else if (choice == 'B')
	{
		std::cout << "You have friends!!\n";
	}
	else
	{
		std::cout << "Try Again!\n";
		playerSettings();
	}

	return choice;
}

