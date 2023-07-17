// Mind model of memory
#include <iostream>
using namespace std;

int main()
{
	/*
	  Variable 
	+----------+
	|  Address |   1000
	+----------+
	|  Value   |   5
	+----------+
	*/

	int x = 5;

	cout << "The address of x is: " << &x << endl;  // hexidecimal output 
	                                                // '&' - address of

	return 0;
}