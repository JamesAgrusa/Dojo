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
	cout << "" << endl;
	cout << "" << endl;
	cout << "    Rock crushes Scisssors\n    Scissors cuts Paper\n    Paper covers Rock\n    Rock curshes LIzard\n    Lizard poisons Spock\n    Spck smashes Scissors\n    Scissors decapitates LIzard\n";
	cout << "    Lizard eats Paper\n    Paper disproves Spock\n    Spock vaporizes Rock\n";
	cout << "" << endl;
	cout << "" << endl;
	cout << "This game will be decided on a 'Best of three' rounds!" << endl;
}

void Game::runGame()
{
	instructions();
	playerSettings();
	gamePlay();
	playAgain();
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
		cout << "Try Again!\n";
		playerSettings();
	}

	return choice;
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

char Game::gamePlayComputer()
{
	char player;
	char computer;
	int playerScore = 0;
	int computerScore = 0;
	int victoryPoints = 3;
	
	// Rock(R) Paper(P) Scissors(S) Lizzad(L) Spock(K)
	char rpsls[] = { 'R', 'P', 'S', 'L', 'SK'};

	srand((unsigned int)time(NULL));

	while (true)
	{
		cout << "Enter Rock(R), Paper(P), Scissors(S), Lizzard(L) or Spock(K):" << endl;
		cin >> player;
		cout << "Player chooses: " << player << endl;
		

		computer = rpsls[rand() % 5];
		cout << "computer chooses " << computer << endl;

		if (player == computer)
		{
			cout << "No points awareded" << endl;
		}
		// rock
		else if (player == 'R')
		{
			if (computer == 'S' || computer == 'L') playerScore++;
			else if (computer == 'P' || computer == 'K') computerScore++;
		}
		// paper
		else if (player == 'P')
		{
			if (computer == 'R' || computer == 'L') playerScore++;
			else if (computer == 'S' || computer == 'K') computerScore++;
		}
		// scissors
		else if (player == 'S')
		{
			if (computer == 'P' || computer == 'L') playerScore++;
			else if (computer == 'R' || computer == 'K') computerScore++;
		}
		// lizzard
		else if (player == 'L')
		{
			if (computer == 'K' || computer == 'P') playerScore++;
			else if (computer == 'S' || computer == 'R') computerScore++;
		}
		// spock
		else if (player == 'K')
		{
			if (computer == 'S' || computer == 'R') playerScore++;
			else if (computer == 'L' || computer == 'P') computerScore++;
		}
		// checking input
		else
		{
			cout << "" << endl;
			cout << "" << endl;
			cout << "Invalid choice. Try another choice!!" << endl;
			gamePlayComputer();
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
	// playAgain();
	return 0;
}

char Game::gamePlayPeople()
{
	char player1;
	char player2;
	int player1Score = 0;
	int player2Score = 0;
	int victoryPoints = 3;
	

	char rpsls[] = { 'R', 'P', 'S', 'L', 'SK' };

	srand((unsigned int)time(NULL));

	while (true)
	{
		cout << "Enter Rock(R), Paper(P), Scissors(S), Lizzard(L) or Spock(K) Player 1: " << endl;
		cin >> player1;
		

		cout << "Enter Rock(R), Paper(P), Scissors(S), Lizzard(L) or Spock(K) Player 2: " << endl;
		cin >> player2;
		
		cout << "Player 1 chooses: " << player1 << endl;
		cout << "Player2 chooses:  " << player2 << endl;

		if (player1 == player2)
		{
			cout << "No points awarded" << endl;
		}
		// rock
		else if (player1 == 'R')
		{
			if (player2 == 'S' || player2 == 'L') player1Score++;
			else if (player2 == 'P' || player2 == 'K') player2Score++;
		}
		// paper
		else if (player1 == 'P')
		{
			if (player2 == 'R' || player2 == 'L') player1Score++;
			else if (player2 == 'S' || player2 == 'K') player2Score++;
		}
		// scissors
		else if (player1 == 'S')
		{
			if (player2 == 'P' || player2 == 'L') player1Score++;
			else if (player2 == 'R' || player2 == 'K') player2Score++;
		}
		// lizzard
		else if (player1 == 'L')
		{
			if (player2 == 'K' || player2 == 'P') player1Score++;
			else if (player2 == 'R' || player2 == 'S') player2Score++;
		}
		// spock
		else if (player1 == 'K')
		{
			if (player2 == 'R' || player2 == 'S') player1Score++;
			else if (player2 == 'L' || player2 == 'P') player2Score++;
		}
		// checking for input
		else
		{
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "Invalid choice. Try another choice!!" << endl;
			gamePlayPeople();
		}

		
		cout << "Player 1: " << player1Score << " Player 2: " << player2Score << endl;
		if (player1Score == victoryPoints)
		{
			cout << "Player 1 wins!!" << endl;
			// playAgain();
			return 0;
		}
		if (player2Score == victoryPoints)
		{
			cout << "Player 2 wins!!" << endl;
			// playAgain();
			return 0;
		}

	}
	return 0;
}



char Game::playAgain()
{
	char choice;
	cout << "Would you like to play again? Yes(Y) or No(N)" << endl;
	cin >> choice;
	if (choice == 'Y')
	{
		runGame();
	}
	else if (choice == 'N')
	{
		cout << "Thanks For Playing!!" << endl;
		cout << "Hope to see you again soon!" << endl;
	}
	else
	{
		cout << "Please try again!!" << endl;
		playAgain();
	}
	return choice;
}