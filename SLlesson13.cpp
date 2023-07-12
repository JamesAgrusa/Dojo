// break statement 

#include <iostream>
using namespace std;

int main()
{
	const int MAX = 10;

	for (int i = 1; i <= MAX; i++)
	{
		if (i == MAX / 2)
		{
			cout << "Breaking at " << i << endl; // breaking out of the loop once this is met. 
			break;
		}
		cout << "The current itteration is: " << i << endl;
	}

	cout << "Outside the for loop" << endl;


	return 0;
}