// nested loops
#include <iostream>
using namespace std;

int main()
{
	const int MAX = 5;

	for (int i = 1; i <= MAX; i++) // 1 interation
	{
		cout << "Iteration i = " << i << endl;

		for (int j = 1; j <= MAX; j++)
		{
			cout << "Iteration j = " << j << endl; // 5 toal iterations of 'j' for each 1 of 'i'
		}                                          
	}




	return 0;
}