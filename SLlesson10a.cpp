// while loops PT2. 

#include <iostream>
using namespace std;

int main()
{

	int sum = 0;
	int i = 1;
	const int MAX = 100;
	
	while (i <= MAX)
	{
		if (i % 2 == 0) // if i is even
		{
			sum += i;
		}
		
		i++;
	}

	cout << "The sum of all even numbers from 1 to " << MAX << " is " << sum << endl;
	
	return 0;
}