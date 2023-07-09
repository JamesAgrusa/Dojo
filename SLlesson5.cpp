// Constants

#include <iostream>
using namespace std; 

int main()
{
	const float PI = 3.14159; // declaring this variable as only this number
	// running PI++; will not work as PI is constant to what was stated above. 

	

	float radius;

	cout << "Please enter the radius of a circle: ";

	cin >> radius;

	cout << "The circumference of the circle is: " << 2 * PI * radius << endl;


	return 0;
}