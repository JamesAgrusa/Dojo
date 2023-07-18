// Pointers

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

	int * myIntPointer = &x; //points from right to left

	*myIntPointer = 10; // '*' is the dereference operator "value pointer to by"

	cout << "The value of x is: " << x << endl;


	return 0;

}