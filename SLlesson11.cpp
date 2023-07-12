// do while loops

#include <iostream>
using namespace std;

int main()
{
	int i = 1; 
	const int MAX = 0;

	while (i <= MAX) // evaluates to false therfore going onto the 'do while' loop (here)
	{
		cout << "We're in the while loop!" << endl; // while loops check the condition first
	}

	do 
	{
		cout << "In the do while loop!" << endl;
	} while (i <= MAX); // do while loops check the condition last (here)



	return 0;
}