// C strings 

#include <iostream>
using namespace std;

int main()
{
	char aString[6];

	aString[0] = 'H';
	aString[1] = 'e';
	aString[2] = 'l';
	aString[3] = 'l';
	aString[4] = 'o';
	aString[5] = '\0';

	const char * anotherString = "Hello"; // points to 'H'

	cout << aString << endl;

	cout << anotherString << endl;

	return 0;
}