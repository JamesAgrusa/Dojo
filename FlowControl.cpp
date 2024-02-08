#include <iostream>
#include <string>

using namespace std;

class LeagueOfLegends
{
public:
	LeagueOfLegends();


private:
};

class CallOfDuty
{
public:
	CallOfDuty();

private:
};

class PC
{
public:
	PC();

private:
};

class Playstation5
{
public:
	Playstation5();

private:
};

void GameSelection();
void GameIntro();
void WeaponChoice();



int main()
{

	GameIntro();
	GameSelection();
	

	return 0;
}

void GameSelection()
{

	
	char choice = (char ('A'), char ('B'));
	
	cout << "First, Which game would you like to play?\nEnter the letter following your pick:\nLeague of Legends(A) or Call of Duty(B)?\n";
	cin >> choice;
	if (choice == 'A')
	{
		cout << "You Picked Leauge of Legends!\n" << endl;
		cout << "Now that we know what game you want to play.\nIts time to pick a character!" << endl;
		cout << "You have three choices for a character: \n";
		cout << "Ashe(C), Leona(D), or the obvious choice Taric(E)" << endl;
		WeaponChoice();
	}
	else
	{
		cout << "You Picked Call of Duty!\n" << endl;
		cout << "Now that we know what game you want to play.\nIts time to pick a weapon!" << endl;
		cout << "You have three choices for a weapon: \n";
		cout << "SMG(F), AR(G), Sniper(H)\n";

	}
	return ;
}

void GameIntro()
{
	const int size = 100;

	char sentence[size];


	cout << "Hello! And WELCOME. " << endl;
	cout << "Todays activity is simple. This will be a Chose Your Own Adventure game! " << endl;
}

void WeaponChoice()
{
	char weapon = (char('C'), char('D'), char('E'));
	switch (weapon)
			case 'C':
				cout << "You Picked Ashe!\n";
}

