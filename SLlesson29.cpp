// Arrays

#include <iostream>
using namespace std;

int main()
{
	// Array - a series of elements of the same type placed contigously in memory - all next to each other

	const int MAX = 5;
	int intArray[MAX] = {}; // will automatically start it from zero, otherwise will start at 1


	intArray[0]; // start from 0 and not from 1

	intArray[4];  //  '[]' means array

	/*             0    1    2    3    4    ***  n-1   the indecies of the array
	             +----+----+----+----+----+     +----+
	  Array name |    |    |    |    |    | *** |    |
	             +----+----+----+----+----+     +----+

	*/




	return 0;
}