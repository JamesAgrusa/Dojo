// Pointers and Const

#include <iostream>
using namespace std;

int main()
{
	int x = 5;

	const int* xPtr = &x; // cant change the value but can change where it is pointed too

	int y = 15;

	xPtr = &y;

	cout << "xPtr value is: " << *xPtr << endl;

	int* const yPtr = &y; // cant change what it points too but it can change the value

	*yPtr = 19;

	// const int & xRef = x;

	// const int * const xPtr2 = &x;




	return 0;
}