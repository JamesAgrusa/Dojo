// Practice PT. 3
#include <iostream>

using namespace std;

int main()
{
	// Problem 1: Write a program that will take in a number from the user
	// and print the reverse of that number ie; input: 1234 -> output: 4321

	// int number = 0;
	// int reverse = 0;

     // cout << " Please Enter a number: ";
	 // cin >> number;

	//  while ( number > 0 )
	//  {
		//  reverse = (reverse * 10) (number % 10);
		  // 0 + 4
		  // 4(10) + 3
		  // 430 + 2
		  // 4320 + 1
		  // 4321

		  // number /= 10; //123
	// }

	// cout << "The reverse is: " << reverse << endl;

	// Problem 2: Write a program that takes in two numbers from the user and prints a star pattern in a rectangular form. 
	// the first number will be the number of rows
	// the second number will be the number of columns.

	// int numberOfRows = 0;
	// int numberOfCols = 0;

	// cout << "Please enter the number of rows: ";
	// cin >> numberOfRows;

	// cout << "Please enter the number of columns: ";
	// cin >> numberOfCols;

	// for (int r = 0; r < numberOfRows; r++)
	// {
		// for (int c = 0; c < numberOfCols; c++)
		// {
			// cout << '*';
		// }
		// cout << endl;
	//  }

	// Problem 3: Write a program that takes in a number and prints a pyramid star
	// pattern. 

	int number = 0;
	cout << "Please enter a number: ";
	cin >> number;

	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < (number - i - 1); j++) // print spaces
		{
			cout << ' ';
		}
		// print stars
		for (int j = 0; j < (2*i+1); j++)
		{
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}