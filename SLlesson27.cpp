// Pass by reference vs pass by value

#include <iostream>
using namespace std;

void Func(int * y);                                           // voidFunc(int & y);

int main()
{
	int x = 5;

	Func(&x); // pass the address of 'x'                      //  Func(x);

	cout << "The value of x is: " << x << endl;


	return 0;
}

void Func(int * y)                                            // voidFunc(int & y)
{
	*y = 15; // 'y' now points to x's address                 // y = 15;

	cout << "The value of y is: " << *y << endl;
}

