// new and delete with arrays

#include <iostream>
using namespace std;

int main()
{
	int length;

	cout << "Please enter a length: ";
	cin >> length;

	int* intPtr = new int[length];

	for (int i = 0; i < length; i++)
	{
		intPtr[i] = i + 1;
	}

	for (int i = 0; i < length; i++)
	{
		cout << "intPtr[" << i << "]" << intPtr[i] << endl;
	}

	delete [] intPtr; // after array is made, delete array here to make room for more memory




	return 0;
}