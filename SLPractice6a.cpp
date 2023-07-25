// Arrays Practice PT. 2

#include <iostream>
#include <cctype>
using namespace std;

char GetCharacter(const char* prompt, const char* error);

const int IGNORE_CHARS = 256;

int main()
{
	/*
	 Problem 2: Make a function called GetCharacter that will take in a cstring prompt, an error cstring,
	 and return a character from stdin from the user. If the user types something incorrectly or the
	 input dosen't match the valid inputs, the function should recover from the failure gracefully and
	 output the error cstring and prompt the user to try again.
	 */

	char input = GetCharacter("Please enter a character: ", "Input error! Please try again.");
	cout << "The character you input was: " << input << endl;


	return 0;
}

char GetCharacter(const char* prompt, const char* error)
{
	char input;
	bool failure;

	do
	{
		failure = false;

		cout << prompt;
		cin >> input;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(IGNORE_CHARS, '\n');
			cout << error << endl;
			failure = true;
		}
		else
		{
			cin.ignore(IGNORE_CHARS, '\n');
			if (isalpha(input))
			{
				input = tolower(input);
			}
			else
			{
				cout << error << endl;
				failure = true;
			}
		}

	} while (failure);

	return input;
}
