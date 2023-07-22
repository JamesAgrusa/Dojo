// Dynamic Memory

#include <iostream>
using namespace std;

int main()
{
	int* newIntPtr = new int;

	*newIntPtr = 8;

	cout << "The value of my new integer is: " << *newIntPtr << endl;

	delete newIntPtr; // put the memory from the heap and return it to the heap
	                  // delete the memory pointed to by newIntPtr


	return 0;
}