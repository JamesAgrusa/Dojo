// scope
#include <iostream>
using namespace std;

void Func();

int x = 5;

int main()
{
	
	cout << "x is: " << x << endl;

	Func();


	return 0;
}

void Func()
{
	cout << "Func - x is: " << x << endl;
}