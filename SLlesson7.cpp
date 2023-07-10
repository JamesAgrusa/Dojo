// if, else if, else

#include <iostream>
using namespace std; 

int main()
{
	int x = 0;
	int y = 0;

	cout << "Please enter 2 numbers with a space in between: ";
	cin >> x >> y; 

	if (x > y) // if ( conditon ) 
	{
		cout << "Case 1: The bigger number is: " << x << endl;
	}
	else if (x < y) // otherwise
	{
		cout << "Case 2: The bigger number is: " << y << endl;
	}
	else // other otherwise and so on
	{
		cout << "Case 3: The numbers are the same!" << endl;
	}
	
	// will run until true is found otherwise will run last 'else' 


	return 0; 
}