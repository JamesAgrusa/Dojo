#include <iostream>
#include "Arena.h"

using namespace std;

Arena::Arena()
{

}

void Arena::runGame()
{
    gameIntro();
    char choice = gameStart();
    if (choice == 'J')
    {
        jamesChoice();
    }
    else
    {
        cout << "Lets just go ahead at suit you up as James!" << endl;
        jamesChoice();

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

	char choice;
	cout << "Would you like to be Austin(A) or James(J)?" << endl;
	cin >> choice;
	if (choice == 'A')
	{
        // austinChoice is a void not char as it has no input/return value. 

		austinChoice();
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

char Arena::jamesChoice()
{
    int choice;
    int mhp, hp, atk, def, matk, mdef, damage, mdamage;
    atk = 10;
    def = 15;
    matk = 10;
    mdef = 15;

    srand(unsigned(time(0)));
    mhp = rand() % 50 + 150;
    hp = rand() % 20 + 120;
    while (hp > 0 || mhp > 0)
    {
        cout << "What do you want to do?\n 1 -> Bold Move \n 2 -> Safe Attack \n";
        do { cin >> choice; } while (choice > 2 || choice < 1);
        switch (choice) {
        case 1:
            atk = rand() % 20 + 10;
            def = rand() % 10 + 10;
            break;
        case 2:
            atk = rand() % 5 + 10;
            def = rand() % 10 + 10;
            break;
        case 3:
            atk = rand() % 10 + 10;
            def = rand() % 20 + 10;
            break;
        }
        choice = rand() % 2;

        switch (choice) {
        case 1:
            matk = rand() % 20 + 10;
            mdef = rand() % 10 + 10;
            break;
        case 2:
            matk = rand() % 5 + 10;
            mdef = rand() % 10 + 10;
            break;
        case 3:
            matk = rand() % 10 + 10;
            mdef = rand() % 20 + 10;
            break;
        }
        mdamage = (atk)-(mdef / atk);
        if (mdamage < 0) {
            mdamage = 0;
        }
        mhp = mhp - mdamage;
        cout << "You did " << mdamage << " damage to Austin...Amazing!\n";
        cin.get();

        if (mhp < 1) {
            cout << "You killed Austin! Amazing!\n";
            cin.get();
            return 0;
        }

        cout << "Austin now has " << mhp << " HP left.\n";
        damage = (matk)-(def / matk);
        if (damage < 0)
        {
            damage = 0;
        }
        hp = hp - damage;

        cout << "Austin in an incredible mannor did: " << damage << " points from you. You still have, " << hp << " HP points availalble\n";

        if (hp < 1) {
            cout << "You died! The beast still has " << mhp << " HP left, you suck!\n";
            cin.get();
            return 0;
        }
    }
}

void Arena::austinChoice()
{
	cout << "Sorry, you actually cant be Austin, you get it" << endl;
	cout << "his power will simply render you useless. Dont worry, James 'probably' has this! " << endl;
}