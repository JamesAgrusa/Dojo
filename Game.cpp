#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Game.h"

using namespace std;

Game::Game()
{

}

void Game::instructions()
{
	cout << "Hello!! and welcome to a classic game with a twist <3";
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Here are the rules to get you up to speed :D\n";
	cout << "\n";
	cout << "    Rock crushes Scisssors\n    Scissors cuts Paper\n    Paper covers Rock\n    Rock curshes LIzard\n    Lizard poisons Spock\n    Spck smashes Scissors\n    Scissors decapitates LIzard\n";
	cout << "    Lizard eats Paper\n    Paper disproves Spock\n    Spock vaporizes Rock\n";
	cout << "This game will be decided on a random number of at least 'Best of three' rounds!" << endl;
}

void Game::runGame()
{
	instructions();
	playerSettings();
	gamePlay();
	
}

char Game::playerSettings()
{
	char choice;
	std::cout << "\n";
	std::cout << "Here we need to know if you are by yourself(A) or with someone(B)\n";
	std::cin >> choice;
	if (choice == 'A')
	{
		cout << "Very well, you have choosen to play with fire" << endl;
	}
	else if (choice == 'B')
	{
		cout << "How exciting, hopefully this will settle come debates!" << endl;
	}
	else
	{
		std::cout << "Try Again!\n";
		playerSettings();
	}

	return choice;
}

char Game::gamePlayComputer()
{
	string player;
	string computer;
	int playerScore = 0;
	int computerScore = 0;
	int victoryPoints = rand() % 3;
	

	string rps[] = { "rock", "paper", "scissors" };

	srand((unsigned int)time(NULL));

	while (true)
	{
		cout << "Enter rock, paper, or scissors:" << endl;
		getline(cin, player);
		cout << "Player chooses: " << player << endl;
		

		computer = rps[rand() % 3];
		cout << "computer chooses " << computer << endl;

		if (player == computer)
		{
			cout << "No points awareded" << endl;
		}
		else if (player == "rock")
		{
			if (computer == "scissors") playerScore++;
			else if (computer == "paper") computerScore++;
		}
		else if (player == "paper")
		{
			if (computer == "rock") playerScore++;
			else if (computer == "scissors") computerScore++;
		}
		else if (player == "scissors")
		{
			if (computer == "paper") playerScore++;
			else if (computer == "rock") computerScore++;
		}
		cout << "Player: " << playerScore << " Computer: " << computerScore << endl;
		if (playerScore == victoryPoints)
		{
			cout << "Player wins!!" << endl;
			return 0;
		}
		if (computerScore == victoryPoints)
		{
			cout << "computers wins!!" << endl;
			return 0;
		}
		
	}
	return 0;
}

char Game::gamePlayPeople()
{
	string player1;
	string player2;
	int player1Score = 0;
	int player2Score = 0;
	int victoryPoints = rand() % 3;
	

	string rps[] = { "rock", "paper", "scissors" };

	srand((unsigned int)time(NULL));

	while (true)
	{
		cout << "Enter rock, paper, or scissors Player 1: " << endl;
		getline(cin, player1);
		

		cout << "Enter rock, paper, or scissors Player 2: " << endl;
		getline(cin, player2);
		
		cout << "Player 1 chooses: " << player1 << endl;
		cout << "Player2 chooses:  " << player2 << endl;

		if (player1 == player2)
		{
			cout << "No points awarded" << endl;
		}
		else if (player1 == "rock")
		{
			if (player2 == "scissors") player1Score++;
			else if (player2 == "paper") player2Score++;
		}
		else if (player1 == "paper")
		{
			if (player2 == "rock") player1Score++;
			else if (player2 == "scissors") player2Score++;
		}
		else if (player1 == "scissors")
		{
			if (player2 == "paper") player1Score++;
			else if (player2 == "rock") player2Score++;
		}
		cout << "Player 1: " << player1Score << " Player 2: " << player2Score << endl;
		if (player1Score == victoryPoints)
		{
			cout << "Player 1 wins!!" << endl;
			return 0;
		}
		if (player2Score == victoryPoints)
		{
			cout << "Player 2 wins!!" << endl;
			return 0;
		}

	}
	return 0;
}

void Game::gamePlay()
{
	if (playerSettings() == 'A')
	{
		gamePlayComputer();
	}
	else
	{
		gamePlayPeople();
	}
}