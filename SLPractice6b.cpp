// Arrays Practice PT. 3
#include <iostream>
#include <cctype>
using namespace std;

char GetCharacter(const char* prompt, const char* error, const char validInput[], int validInputLength);

const int IGNORE_CHARS = 256;

int main()
{
	/*
	 Problem 3: Create a new function that called GetCharacter that will also take in valid inputs that
	 the uswer can type in, and how many there are. The function should only allow those inputs by the uswer, and give
	 and error if the user dosen't input it correctly.
	*/

	char validInputs[] = { 'y', 'n' };

	char input = GetCharacter("Would you like to play again? (y/n)", "Input Error! Please try again.", validInputs, 2);
	cout << "The character you input was: " << input << endl;



	return 0;
}

char GetCharacter(const char* prompt, const char* error, const char validInput[], int validInputLength)
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

				for (int i = 0; i < validInputLength; i++)
				{
					if (input == validInput[i])
					{
						return input;
					}
				}
			}
			
			cout << error << endl;
			failure = true;
			
		}

	} while (failure);

	return input;
}
