#include <iostream>
#include <string>
#include "Game.h"
#include "Human.h"
#include "Computer.h"
#include <ctime>
#include <cstdlib>

using namespace std;

Game::Game()
{

}

void Game::runGame()
{
	instructions();
	playerSettings();
	// roundCount();
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
	if (choice == 'A')
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


// void Game::scoreBoard()
// {
	// Human Player1;
	// Human Player2;

	// std::cout << "Player 1 has: " << Player1.gamePoints << " total!" << endl;
	// std::cout << "PLayer 2 has: " << Player2.gamePoints << " total!" << endl;
// }

// void Game::scoreBoardComputer()
// {
	// Human Player1;
	// Computer computer;

	// std::cout << "Player 1 has: " << Player1.gamePoints << " total!" << endl;
	// std::cout << "The computer has: " << computer.gamePoints << " total!" << endl;
// }

void Game::gamePlay()
{
	Human Player1;
	Human Player2;
	Computer computer;
	
	if (playerSettings() == 'A')
	{
		// make a do while loop here once points are figured out. 
		
		do
		{
			Player1.gestureChoicePlayer1();
			computer.computerChoice();
			gestureComparrisonVsComputer();
			// scoreBoardComputer();
		} while (Player1.gamePoints != victoryPoints && Player2.gamePoints != victoryPoints);

	}
	else
	{
		do
		{
			Player1.gestureChoicePlayer1();
			Player2.gestureChoicePlayer2();
			gestureComparrisonPlayers();
			// scoreBoard();
		} while (Player1.gamePoints != victoryPoints && computer.gamePoints != victoryPoints);
	}

}

void Game::gestureComparrisonPlayers()
{
	Human Player1;
	Human Player2;


	//Rock
	// if (Player1.gestureChoicePlayer1() == 1)
	// {
		// if (Player1.gestureChoicePlayer1() == 1 || Player2.gestureChoicePlayer2() == 1)
		// {
			// std::cout << "Both players picked the same, no points awarded\n";
		// }
		// if (Player2.gestureChoicePlayer2() == 4 || Player2.gestureChoicePlayer2() == 3)
		// {
			// std::cout << "Player 1 won that round!\n";
		// }
		// else if (Player2.gestureChoicePlayer2() == 2 || Player2.gestureChoicePlayer2() == 5)
		// {
			// std::cout << "Player 2 won that round!\n";
		// }

		if (Player1.gestureChoicePlayer1() == 1 && Player2.gestureChoicePlayer2() == 1)
		{
			std::cout << "Both players picked the same thing, no points awareded\n";
		}
		else if ((Player1.gestureChoicePlayer1() == 1 && Player2.gestureChoicePlayer2() == 4) || (Player1.gestureChoicePlayer1() == 1 && Player2.gestureChoicePlayer2() == 3))
		{
			std::cout << "Player 1 won that round!\n";
			Player1.gamePoints++;
		}
		else if ((Player1.gestureChoicePlayer1() == 1 && Player2.gestureChoicePlayer2() == 2) || (Player1.gestureChoicePlayer1() == 1 && Player2.gestureChoicePlayer2() == 5))
		{
			std::cout << "Player 2 won that round!\n";
			Player2.gamePoints++;
		}
		

	// }

	//Paper
	if (Player1.gestureChoicePlayer1() == 2)
	{
		if (Player1.gestureChoicePlayer1() == 2 || Player2.gestureChoicePlayer2() == 2)
		{
			std::cout << "Both players picked the same, no points awarded\n";
		}
		else if (Player2.gestureChoicePlayer2() == 1 || Player2.gestureChoicePlayer2() == 5)
		{
			std::cout << "Player 1 won that round!\n";
			Player1.gamePoints++;
		}
		else if (Player2.gestureChoicePlayer2() == 3 || Player2.gestureChoicePlayer2() == 4)
		{
			std::cout << "Player 2 won that round!\n";
			Player2.gamePoints++;
		}
	}

	//Scissors
	if (Player1.gestureChoicePlayer1() == 3)
	{
		if (Player1.gestureChoicePlayer1() == 3 || Player2.gestureChoicePlayer2() == 3)
		{
			std::cout << "Both players picked the same, no points awarded\n";
		}
		else if (Player2.gestureChoicePlayer2() == 2 || Player2.gestureChoicePlayer2() == 4)
		{
			std::cout << "Player 1 won that round!\n";
			Player1.gamePoints++;
		}
		else if (Player2.gestureChoicePlayer2() == 1 || Player2.gestureChoicePlayer2() == 5)
		{
			std::cout << "Player 2 won that round!\n";
			Player2.gamePoints++;
		}
	}

	//Lizzard
	if (Player1.gestureChoicePlayer1() == 4)
	{
		if (Player1.gestureChoicePlayer1() == 4 || Player2.gestureChoicePlayer2() == 4)
		{
			std::cout << "Both players picked the same, no points awarded\n";
		}
		else if (Player2.gestureChoicePlayer2() == 2 || Player2.gestureChoicePlayer2() == 5)
		{
			std::cout << "Player 1 won that round!\n";
			Player1.gamePoints++;
		}
		else if (Player2.gestureChoicePlayer2() == 1 || Player2.gestureChoicePlayer2() == 3)
		{
			std::cout << "Player 2 won that round!\n";
			Player2.gamePoints++;
		}
	}

	//Spock
	if (Player1.gestureChoicePlayer1() == 5)
	{
		if (Player1.gestureChoicePlayer1() == 5 || Player2.gestureChoicePlayer2() == 5)
		{
			std::cout << "Both players picked the same, no points awarded\n";
		}
		else if (Player2.gestureChoicePlayer2() == 1 || Player2.gestureChoicePlayer2() == 3)
		{
			std::cout << "Player 1 won that round!\n";
			Player1.gamePoints++;
		}
		else if (Player2.gestureChoicePlayer2() == 2 || Player2.gestureChoicePlayer2() == 4)
		{
			std::cout << "Player 2 won that round!\n";
			Player2.gamePoints++;
		}
	}

	
}

void Game::gestureComparrisonVsComputer()
{
	Human Player1;
	Computer computer;
	srand(unsigned(time(0)));
	victoryPoints = rand() % 5;
	
	while (true)
	{
		//Rock
		if (Player1.gestureChoicePlayer1() == 1)
		{
			if (Player1.gestureChoicePlayer1() == 1 || computer.computerChoice() == 1) cout << "No points awarded" << endl;

			else if (computer.computerChoice() == 4 || computer.computerChoice() == 3) Player1.gamePoints++;

			else if (computer.computerChoice() == 2 || computer.computerChoice() == 5) computer.gamePoints++;
		}


		//Paper
		if (Player1.gestureChoicePlayer1() == 2)
		{
			if (Player1.gestureChoicePlayer1() == 2 || computer.computerChoice() == 2) cout << "No points awarded" << endl;

			else if (computer.computerChoice() == 1 || computer.computerChoice() == 5) Player1.gamePoints++;

			else if (computer.computerChoice() == 3 || computer.computerChoice() == 4) computer.gamePoints++;

		}


		//Scissors
		if (Player1.gestureChoicePlayer1() == 3)
		{
			if (Player1.gestureChoicePlayer1() == 3 || computer.computerChoice() == 3) cout << "No points awarded" << endl;

			else if (computer.computerChoice() == 2 || computer.computerChoice() == 4) Player1.gamePoints++;

			else if (computer.computerChoice() == 1 || computer.computerChoice() == 5) computer.gamePoints++;

		}


		//Lizzard
		if (Player1.gestureChoicePlayer1() == 4)
		{
			if (Player1.gestureChoicePlayer1() == 4 || computer.computerChoice() == 4) cout << "No points awarded" << endl;

			else if (computer.computerChoice() == 2 || computer.computerChoice() == 5) Player1.gamePoints++;

			else if (computer.computerChoice() == 1 || computer.computerChoice() == 3) computer.gamePoints++;

		}


		//Spock
		if (Player1.gestureChoicePlayer1() == 5)
		{
			if (Player1.gestureChoicePlayer1() == 5 || computer.computerChoice() == 5) cout << "No points awarded" << endl;

			else if (computer.computerChoice() == 1 || computer.computerChoice() == 3) Player1.gamePoints++;

			else if (computer.computerChoice() == 2 || computer.computerChoice() == 4) computer.gamePoints++;

		}
		cout << "Player has: " << Player1.gamePoints << "Computer has: " << computer.gamePoints << endl;
		if (Player1.gamePoints == victoryPoints) cout << "Player 1 wins!" << endl;
		if (computer.gamePoints == victoryPoints) cout << "Computer wins!" << endl;
	}
	playAgain();
		
}



void Game::gameDecision()
{
	Human Player1;
	Human Player2;
	Computer computer;

	if (Player1.gamePoints == victoryPoints)
	{
		std::cout << "Player 1 has won!\n";
	}
	else if (Player2.gamePoints == victoryPoints)
	{
		std::cout << "Player 2 has won!\n";
	}
	else
	{
		std::cout << "The computer has won!\n";
	}
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



