// Loops and Input

#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int num3;

	cout << "please input 3 integers with a space between: ";
	cin >> num1;

	if (cin.fail()) // if type missmatch entered
	{
		cin.clear(); // takes away failure state and brings back computer back to read
		cin.ignore(256, ' '); // will ignore up to 256 characters or until a space
	}

	cin >> num2;

	if (cin.fail()) 
	{
		cin.clear(); 
		cin.ignore(256, ' '); 
	}

	cin >> num3;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(256, ' '); // however if error entered, how will one tell user
		                      // hey, wrong input? 
	}


	cout << "The integers you input were: " << num1 << ", " << num2 << " and " << num3 << endl;

	return 0;
}