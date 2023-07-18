// references

#include <iostream>
using namespace std;

int main()
{
	int x = 5;

	int & intRef = x; // '&' = reference
	                  // 'alias'
	intRef = 10;

	cout << "x is: " << x << endl; // use pointer when you want it point to nothing or a real value
	                               // references are always used to point to a real value


	return 0;
}