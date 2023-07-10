// conditions
#include <iostream>
using namespace std;

int main()
{
	bool myBoolean = false; // 2 values - true or false;
	// true - 1 ( anything expect 0 is seen as true with boolean logic )  
	// false - 0 

	// >, <, >=, <=, ==
	// will produce a true or false value

	float pi = 3.14; 
	float pi2 = 3.1415;

	bool result = (pi != pi2); // !(pi == pi2) is the same. not equal too. 

	

	cout << "The value of the result is: " << result << endl; 

	return 0;
}