// arithmetic operations cont. 

#include <iostream>
using namespace std; 

int main()
{
	char c = 'A' + 1;

	c++; // unairy operator 

	cout << "the value c is: " << c << endl; // print out is 'C'

	int z = 0; 

	z = 10 + 30 * 36 / 6 - 9; // ((10 + 30) * 36) / 6 - 9 "()" can define the precedence
	                          // use clear use of "()" to define what order you want calculations
	                          // to be applied. 

	cout << "the value z is: " << z << endl;


	return 0; 
}