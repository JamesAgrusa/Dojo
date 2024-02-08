#include <iostream>
#include <string>
#include "LeaugeOfLegends.h"
#include "CallOfDuty.h"
#include "PC.h"
#include "Playstation5.h"


using namespace std;

void GameSelection();
// bool WantToPlayAgain();

const int IGNORE_CHARS = 256;

int main()
{

	const int size = 100;

	char sentence[size];
	bool failure;

	cout << "Hello! And WELCOME. " << endl;
	cout << "Todays activity is simple. This will be a Chose Your Own Adventure game! " << endl;
	GameSelection();
	

	return 0;
}

void GameSelection()
{
	
	string pick;
	int num = 0;

	cout << "First Which game would you like to play? Enter the number following your pick: League of Legends(0) or Call of Duty(1)?\n";
	cin >> pick;
	switch (num)
		{
		case 0:
			cout << "You Picked Leauge of Legends!" << endl;
			
		case 1:
			cout << "You Picked Call of Duty!" << endl;
			break;
		default:
			cout << "That is not a valid input" << endl;
		}
}

// bool WantToPlayAgain()
// {

// }