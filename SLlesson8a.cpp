// switch statements 
#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	

	switch (x)
	{
	case 0:
	{
		cout << "Case 0! " << endl;
	}
	break;

	case 1:
	{
		int y = 0; // new variables in a case can be introduced with '{}' present
		cout << "Case 1! " << endl;
		cout << "Case 1 - statement 2" << endl;
	}
	break; // break out of switch statement once this point is ran
	default:
		cout << "Default case" << endl;
		
	}

	cout << "Out of switch statement" << endl;

	return 0;
}