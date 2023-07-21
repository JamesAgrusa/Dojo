// Arrays vs pointers PT 2. 

#include <iostream>
using namespace std;

int main()
{
	int array[5] = { 2, 4, 6, 8, 10 };

	int sum = 0;

	int* ptr = &array[0];

	for (int i = 0; i < 5; i++)
	{
		sum += ptr[i];
	}

	cout << "The sum is: " << sum << endl;


	return 0;
}