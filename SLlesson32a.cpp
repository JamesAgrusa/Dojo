// C string PT. 2

#include <iostream>
using namespace std;

int StringLength(const char* aString);


int main()
{
	char cString[] = "Hello";

	cout << "The length of " << cString << " is: " << StringLength(cString) << endl;

	return 0;
}

int StringLength(const char* aString)
{
	int length = 0;

	const char* p = aString;

	if (aString != nullptr)
	{
		while (*p != '\0')
		{
			length++;
			p++;
		}
	}

	return length;
}
