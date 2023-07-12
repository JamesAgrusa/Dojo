// continue statement 

#include <iostream>
using namespace std;

int main()
{
	const int MAX = 100;

	for (int i = 1; i <= MAX; i++)
	{
		if (i % 2 == 0) // all even numbers are skipped and only odd oupts are outputted. 
		{
			continue;
		}
		cout << "The current itteration is: " << i << endl;
	}

	


	return 0;
}