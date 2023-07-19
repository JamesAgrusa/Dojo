// Arrays cont. 

#include <iostream>
using namespace std;

int main()
{
	const int MAX = 5;
	int intArray[MAX] = { 2, 4, 6, 8 ,10 };

	int sum = 0;
	

	for(int i = 0; i < MAX; i++);
	{
		sum += intArray[i];
	}

	cout << "The sum is: " << sum << endl;

	return 0;
}