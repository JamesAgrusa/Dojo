// Recursion 
// factorial = 5! - 5*4*3*2*1 or 5 * 4!

#include <iostream>
using namespace std;

int Factorial(int number);

int main()
{
	int x = 5; 

	cout << "The factorial of " << x << " is : " << Factorial(x) << endl;

	return 0;
}

int Factorial(int number)
{
	if (number == 1)
	{
		return 1;
	}

	return number * Factorial(number - 1); // keeps running loop until - 1 = 1 stopping point and stops. 
}