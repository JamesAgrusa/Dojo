#include <iostream>
#include <string>

using namespace std;



char GameSelection();
void GameIntro();
char CharacterSelection();
void WeaponSelection();
void ConsoleSelection();

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
		// cout << "You have three choices for a character: \n";
		// cout << "Ashe, Leona, or the obvious choice Taric" << endl;
	}
	else if (choice == 'B')
	{
		cout << "You Picked Call of Duty!\n" << endl;
		cout << "Now that we know what game you want to play.\nIts time to pick a weapon!" << endl;
		// cout << "You have three choices for a weapon: \n";
		// cout << "SMG(F), AR(G), Sniper(H)\n";
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
	return choice;

}

void WeaponSelection()
{
	// This function is to allow the user to choose their weapon
	// cout << "You Picked Call of Duty!\n" << endl;
	// cout << "Now that we know what game you want to play.\nIts time to pick a weapon!" << endl;
	// cout << "You have three choices for a weapon: \n";
	// cout << "SMG(F), AR(G), Sniper(H)\n";
	


}

void ConsoleSelection()
{
	// this function is to allow the user to choose what console to play on if Call of Duty is picked

}


