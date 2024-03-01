#include <iostream>
#include <string>
#include "Game.h"
#include "Human.h"
#include "Computer.h"

using namespace std;

Game::Game()
{

}

void Game::runGame()
{
	instructions();
	playerSettings();
	roundCount();
	gamePlay();
	gameDecision();
	playAgain();
	
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
		string Player1;
		std::cout << "Please enter your name: ";
		std::cin >> Player1;
		std::cout << "Nice to meet you " << Player1 << " get ready to play!\n";
		
	}
	else if (choice == 'B')
	{
		std::cout << "You have friends!!\n";
		string Name1;
		string Name2;
		std::cout << "Please enter the name of Player 1: ";
		std::cin >> Name1;
		std::cout << "Nice to meet you " << Name1 << " lets meet your friend!\n";
		std::cout << "Please enter the name of Player 2: ";
		std::cin >> Name2;
		std::cout << "Nice to meet you " << Name2 << endl;
		std::cout << "Now that we got the squad ready, lets play\n";
		
	}
	else
	{
		std::cout << "Try Again!\n";
		playerSettings();
	}

	return choice;
}

int Game::roundCount()
{
	int roundCount;
	

	std::cout << "Here we need to know how many rounds it will take to win...\n";
	std::cout << "Round Count:  ";
	std::cin >> roundCount;
	victoryPoints = roundCount;

	return roundCount;
}

void Game::gestureComparrison()
{
	Human Player1;
	Human Player2;
	Computer computer;
	
	//Rock
	if (Player1.gestureChoice() == 1)
	{
		if (Player1.gestureChoice() == 1 || Player2.gestureChoice() == 1 || computer.computerChoice() == 1)
		{
			std::cout << "Both players picked the same, no points awarded\n";
		}
		else if (Player2.gestureChoice() == 4 || Player2.gestureChoice() == 3 || computer.computerChoice() == 4 || computer.computerChoice() == 3)
		{
			std::cout << "somethng happened" << "     " << "picked " << Player1.gestureChoice() << " and " << "      " << " picked " << Player2.gestureChoice() << " !" << "    " << " won that round \n" << endl;
		}
		else if (Player2.gestureChoice() == 2 || Player2.gestureChoice() == 5 || computer.computerChoice() == 2 || computer.computerChoice() == 5)
		{
			std::cout << "somethng happened" << "     " << "picked " << Player1.gestureChoice() << " and " << "      " << " picked " << Player2.gestureChoice() << " !" << "    " << " won that round \n" << endl;
		}

	}

	//Paper
	if (Player1.gestureChoice() == 2)
	{
		if (Player1.gestureChoice() == 2 || Player2.gestureChoice() == 2 || computer.computerChoice() == 2)
		{
			std::cout << "Both players picked the same, no points awarded\n";
		}
		else if (Player2.gestureChoice() == 1 || Player2.gestureChoice() == 5 || computer.computerChoice() == 1 || computer.computerChoice() == 5)
		{

		}
		else if (Player2.gestureChoice() == 3 || Player2.gestureChoice() == 4 || computer.computerChoice() == 3 || computer.computerChoice() == 4)
		{

		}
	}

	//Scissors
	if (Player1.gestureChoice() == 3)
	{
		if (Player1.gestureChoice() == 3 || Player2.gestureChoice() == 3 || computer.computerChoice() == 3)
		{
			std::cout << "Both players picked the same, no points awarded\n";
		}
		else if (Player2.gestureChoice() == 2 || Player2.gestureChoice() == 4 || computer.computerChoice() == 2 || computer.computerChoice() == 4)
		{

		}
		else if (Player2.gestureChoice() == 1 || Player2.gestureChoice() == 5 || computer.computerChoice() == 1 || computer.computerChoice() == 5)
		{

		}
	}

	//Lizzard
	if (Player1.gestureChoice() == 4)
	{
		if (Player1.gestureChoice() == 4 || Player2.gestureChoice() == 4 || computer.computerChoice() == 4)
		{
			std::cout << "Both players picked the same, no points awarded\n";
		}
		else if (Player2.gestureChoice() == 2 || Player2.gestureChoice() == 5 || computer.computerChoice() == 2 || computer.computerChoice() == 5)
		{

		}
		else if (Player2.gestureChoice() == 1 || Player2.gestureChoice() == 3 || computer.computerChoice() == 1 || computer.computerChoice() == 3)
		{

		}
	}

	//Spock
	if (Player1.gestureChoice() == 5)
	{
		if (Player1.gestureChoice() == 5 || Player2.gestureChoice() == 5 || computer.computerChoice() == 5)
		{
			std::cout << "Both players picked the same, no points awarded\n";
		}
		else if (Player2.gestureChoice() == 1 || Player2.gestureChoice() == 3 || computer.computerChoice() == 1 || computer.computerChoice() == 3)
		{
			
		}
		else if (Player2.gestureChoice() == 2 || Player2.gestureChoice() == 4 || computer.computerChoice() == 2 || computer.computerChoice() == 4)
		{
			
		}
	}
	
	
}

void Game::gamePlay()
{
	Human Player1;
	Human Player2;
	Computer computer;

	if (playerSettings() == 'A')
	{
		Player1.gestureChoice();
		computer.computerChoice();
		gestureComparrison();

	}
	else
	{
		Player1.gestureChoice();
		Player2.gestureChoice();
		gestureComparrison();
	}
	
}

void Game::gameDecision()
{
	// where if Player 1 or Player 2 has game points that exceeds victory points
	// this is where game over is determined 
	// need to define game points
}

char Game::playAgain()
{
	char choice;

	std::cout << "Would you like to play again? Yes(Y) or No(N)\n";
	std::cin >> choice;
	if (choice == 'Y')
	{
		runGame();
	}
	else
	{
		std::cout << "Thanks for playing!\n";
	}
	return choice;
}



