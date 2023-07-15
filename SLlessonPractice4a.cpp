// functions practice PT. 2
#include <iostream>
using namespace std;

int GetIntegerFromUser();

int main()
{
	// Problem 2: Write a function that gets an integer from the user. Do all appropriate error checking. 

	int number = GetIntegerFromUser;

	cout << "The number we got was: " << number;


	return 0;

}

int GetIntegerFromUser()
{
	bool failure;
	int number;
	const int IGNORE_CHARS = 256;

	do
	{
		failure = false;
		cout << "Please enter an integer: ";
		cin >> number;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(IGNORE_CHARS, '\n');
			cout << "Input error! Please try again." << endl;
			failure = true; 

		}

	} while (failure);

		return number;

}