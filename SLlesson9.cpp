// ternary operator	
#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	int y = 9;

	int max = 0;

	// (boolean expression) ? (true expression) : (false case)

	x > y ? max = x : max = y; // like if else statement below

	// if ( x > y )
	// {
		// max = x;
	// }
	// else
	// {
		// max = y;
	// }

	cout << "The max is: " << max << endl;

	return 0;
}