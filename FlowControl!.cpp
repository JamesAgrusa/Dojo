#include <iostream>
#include <string>

using namespace std;


void GameIntro();
char GameSelection();
char CharacterSelection();
char WeaponSelection();
char ConsoleSelection();
void GameOutro();
char PlayAgain();

void main()
{

	GameIntro();
	char choice = GameSelection();
	if (choice == 'A')
	{
		// call to character selection here
		CharacterSelection();
	}
	else
	{
		// call to weapon selection here 
		// call to console selection
		WeaponSelection();
		ConsoleSelection();
	}
	GameOutro();
	PlayAgain();
}

void GameIntro()
{
	cout << "Hello! And WELCOME. " << endl;
	cout << "Todays activity is simple. This will be a Chose Your Own Adventure game! " << endl;
}

char GameSelection()
{
	char choice;
	
	cout << "First, Which game would you like to play?\nEnter the letter following your pick:\nLeague of Legends(A) or Call of Duty(B)?\n";
	cin >> choice;
	if (choice == 'A')
	{
		cout << "You Picked Leauge of Legends!\n" << endl;
		cout << "Now that we know what game you want to play.\nIts time to pick a character!" << endl;
		
	}
	else if (choice == 'B')
	{
		cout << "You Picked Call of Duty!\n" << endl;
		cout << "Now that we know what game you want to play.\nIts time to pick a weapon!" << endl;
		
	}
	else
	{
		cout << "You have made an invalid pick!" << endl;
		GameSelection();
	}
	return choice;
}

char CharacterSelection()
{
	// This function is to allow the user to choose their character
	char choice;

	cout << "You have three choices for a character: \n";
	cout << "Ashe(A), Leona(B), or the obvious choice Taric(C)" << endl;
	cin >> choice;
	if (choice == 'A')
	{
		cout << "you have picked Ashe!" << endl;
		
	}
	else if(choice == 'B')
	{
		cout << "you have picked Leona!" << endl;
	}
	else if (choice == 'C')
	{
		cout << "you have picked Taric!" << endl;
	}
	else
	{
		cout << "you have made an invalid pick!" << endl;
		CharacterSelection();
	}
	cout << "Leauge of Legends can only be played on PC!" << endl;
	return choice;

}

char WeaponSelection()
{
	char choice;
	cout << "You have three choices for a weapon" << endl;
	cout << "SMG(A), AR(B), Sniper(C)" << endl;
	cin >> choice;
	if (choice == 'A')
	{
		cout << "You have picked a SMG!" << endl;
	}
	else if (choice == 'B')
	{
		cout << "You have picked an AR" << endl;
	}
	else if (choice == 'C')
	{
		cout << "You have picked a Sniper!" << endl;
	}
	else
	{
		cout << "You have made an invalid pick!" << endl;
		WeaponSelection();
	}
	return choice;
}

char ConsoleSelection()
{
	// this function is to allow the user to choose what console to play on if Call of Duty is picked
	char choice;
	cout << "Now we have made it this far, only one thing left too do!" << endl;
	cout << "Its time to decide if you want to play Call of Duty on a PC(A), and a Playstation5(B)." << endl;
	cin >> choice;
	if (choice == 'A')
	{
		cout << "you have selected to play on a PC!" << endl;
	}
	else if (choice == 'B')
	{
		cout << "you have selected to play on a Playstation5!" << endl;
	}
	else
	{
		cout << "you have made an invalid pick!" << endl;
		ConsoleSelection();
	}
	return choice;
}

void GameOutro()
{
	cout << "Thanks for hanging out, I hope you enjoy your gaming session!" << endl;
}

char PlayAgain()
{
	char choice;
	cout << "would you like to play again?" << endl;
	cout << "Yes(Y) or No(N)" << endl;
	cin >> choice;
	if (choice == 'Y')
	{
		char choice = GameSelection();
		if (choice == 'A')
		{
			CharacterSelection();
		}
		else
		{
		    WeaponSelection();
			ConsoleSelection();
		}
		GameOutro();
		PlayAgain();
	}
	else
	{
		GameOutro();
	}
	return choice;
}


