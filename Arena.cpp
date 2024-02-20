#include <iostream>
#include "Arena.h"
#include "James.h"
#include "Austin.h"

using namespace std;

Arena::Arena()
{

}

void Arena::runGame()
{
    James(james);
    gameIntro();
    char choice = gameStart();
    if (choice == 'J')
    {
        // calling from James Class
        james.jamesChoice();
    }
    else
    {
        cout << "Lets just go ahead at suit you up as James!" << endl;
       
        // calling from James Class
        james.jamesChoice();

    }
}

void Arena::gameIntro()
{
    // Basic introduction to the game

		cout << "Hello and welcome to the Thunderdome!!!" << endl;
		cout << "Today we have a very special treat for you to partake in. " << endl;
		cout << "We have the honor to witness the powerhouses of Austin and James partake in a battle" << endl;
}

char Arena::gameStart()
{
    // Here user declares who they want to be. However really only one selection will run the game.

    Austin(austin);
	char choice;
	cout << "Would you like to be Austin(A) or James(J)?" << endl;
	cin >> choice;
	if (choice == 'A')
	{
        // austinChoice is a void not char as it has no input/return value. 

        
		austin.austinChoice();
        gameStart();
        
	}
	else if (choice == 'J')
	{
		cout << "You have selected to be the honorable James! He is pretty goofy, but he can get it done!" << endl;
        cout << "Let the area dome enter battle mode" << endl;
        cout << "Austin and James take battle form...You should clear at least 5 square miles for this!" << endl;
        cout << "1\n";
        cout << "2\n";
        cout << "3\n";
        cout << "The battle starts!!!\n";
	}
	else
	{
		cout << "You have not selected a worthy opponet. Only Austin and James can fight. All others will fail. I promise you." << endl;
        gameStart();
	}

	return choice;
}

char Arena::playAgain()
{
    char choice;
    cout << "Would you like to play again?" << endl;
    cout << "Yes(Y) or No(N)" << endl;
    cin >> choice;
    if (choice == 'Y')
    {
        runGame();
    }
    else
    {

    }
    return choice;
}