// Arrays with functions

#include <iostream>
using namespace std;

void Func(int array[], int length);


int main()
{
	int array[] = { 1, 3, 5, 7, 9 };

	Func(array, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << "array[" << i << "]" << array[i] << endl;
	}


	return 0;
}

void Func(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		array[i]++;
	}
}
