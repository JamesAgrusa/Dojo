// name : Variables2.c
#include <iostream>
using namespace std; 

int main()
{
	// 10 , 3
	// 0 or 1
	// 0 - 9
	
	//123
	//(1 * 10^2) + (2 * 10^1) + (3 * 10^0)

	//1001

	//(1 * 2^3) + (0 * 2^2) + (0 * 2^1) + (1 * 2^0) = 8 + 0 + 0 + 1 = 9
	
	// a byte is 8 bites
	
	//sizeof()

	cout << "The size of an int is: " << sizeof(int) << endl; 
	cout << "The size of a chare is: " << sizeof(char) << endl;
	cout << "The size of a float is: " << sizeof(float) << endl;
	cout << "The size of doule is: " << sizeof(double) << endl;

	// int -> -2^31 to 2^31 -1 (-1 becuase of 0)

	int intVal = 3; // 0 to 2^32-1

	float floatVal = 3.14;

	intVal = floatVal;

	cout << "the Value of intVal is: " << intVal << endl;
	cout << "the value of floatVal is: " << floatVal << endl;




	return 0; 
}