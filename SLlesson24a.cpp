// Pointers Pt.2

#include <iostream>
using namespace std;

int main()
{
	/*
	  myPointer
	  +---------+
	  | Address |
	  +---------+
	  |Var.Addr |
	  +---------+

	  or

	  myPointer
	  +---------+              +---------+
	  | Address |       +----->| Address |
	  +---------+      |       +---------+
	  |    +-----------        |  Value  |
	  +---------+              +---------+
	*/

	int x = 5;

	int* myIntPointer = nullptr; // myIntPointer points to nothing with 'nullptr'

	myIntPointer = &x;

	*myIntPointer = 10; 

	cout << "The value of x is: " << x << endl;


	return 0;

}