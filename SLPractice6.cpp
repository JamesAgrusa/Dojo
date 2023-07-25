// Arrays practice

#include <iostream>
using namespace std;

double DotProduct(const double vector1[], const double vector2[], int length);

int main()
{
	/*
	Problem 1: Write a function that takes 2 vectors and returns the dot product of the two vetors.
	the two vetctors
	*/

	double vector1[3] = { 1, 4, 7 };
	double vector2[3] = { 2, 5, 8 };

	cout << "The dot product of vector 1 and vector2 is: " << DotProduct(vector1, vector2, 3);

	/*
	 Problem 2: Make a function called GetCharacter that will take in a cstring prompt, an error cstring,
	 and return a character from stdin from the user. If the user types something incorrectly or the
	 input dosen't match the valid inputs, the function should recover from the failure gracefully and
	 output the error cstring and prompt the user to try again.
	 */

	 /*
	  Problem 3: Create a new function that called GetCharacter that will also take in valid inputs that
	  the uswer can type in, and how many there are. The function should only allow those inputs by the uswer, and give
	  and error if the user dosen't input it correctly.
	 */

	return 0;
}


double DotProduct(const double vector1[], const double vector2[], int length)
{
	double product = 0;
	for (int i = 0; i < length; i++)
	{
		product += vector1[i] * vector2[i];
	}

	return product;
}
