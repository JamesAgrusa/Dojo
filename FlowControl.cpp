#include <iostream>
#include <string>
#include "LeaugeOfLegends.h"
#include "CallOfDuty.h"
#include "PC.h"
#include "Playstation5.h"


using namespace std;

void GameSelection();
void PlayGame();
// bool WantToPlayAgain();


int main()
{

	PlayGame();
	GameSelection();
	

	return 0;
}

void GameSelection()
{

	string pick;
	char choice = 'A';

	cout << "First, Which game would you like to play?\nEnter the letter following your pick:\nLeague of Legends(A) or Call of Duty(B)?\n";
	cin >> pick;
	switch (choice)
		{
		case 'A':
			cout << "You Picked Leauge of Legends!\n" << endl;
			cout << "Now that we know what game you want to play.\nIts time to pick a character!" << endl;
			cout << "Here are your choices: " << endl;
			break;
			
		case 'B':
			cout << "You Picked Call of Duty!\n" << endl;
			break;
		default:
			cout << "That is not a valid input" << endl;
		}
}

void PlayGame()
{
	const int size = 100;

	char sentence[size];


	cout << "Hello! And WELCOME. " << endl;
	cout << "Todays activity is simple. This will be a Chose Your Own Adventure game! " << endl;
}

// bool WantToPlayAgain()
// {

// }