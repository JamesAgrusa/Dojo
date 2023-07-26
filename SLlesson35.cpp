// Proper pointer usage with memory

#include <iostream>
using namespace std;

int* Func(); // returns dynamically created integer
void Use(int* noptrInt); // uses the integer

int main()
{
	int* optrNewInt = Func(); // main is issuing call to create a new integer using the function "Func"
	                          // 'o' in "optrNewInt" means it owns the memory of this pointer

	Use(optrNewInt); // 

	delete optrNewInt; // main also deletes pointer

	optrNewInt = nullptr; // once deleted, set to null. keeping no reference so it wont remain defined for later use
	                      // with otherwise be called a dangling pointer if not set to "null"
	return 0;	
}

void Use(int* noptrInt) // "non-owning pointer"
{
	// use the ptr

	// can create the pointer but not responsible for deleting it
}

int* Func()
{
	return new int;
}