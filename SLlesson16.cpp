// functions	
#include <iostream>
using namespace std;

void PrintHello(); 

int main() // caller of 'PrintHello' function
{
	PrintHello(); // the callE

	return 0;
}

void PrintHello()
{
	cout << "Hello World!" << endl;
}