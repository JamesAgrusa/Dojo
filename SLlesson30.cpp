// Arrays vs pointers 

#include <iostream>
using namespace std;

int main()
{
	int array[5] = { 2, 4, 6, 8, 10 };

	int * ptr = nullptr;

	ptr = array; // ptr is assigned the first elemeted first assigned too by 'array' 

	ptr = &array[0];

	cout << "The value pointed to by ptr is: " << *ptr << endl;

	cout << "The address of element 0 is: " << array << endl;

	cout << "The address of element 1 is: " << &array[1] << endl; // array + 1 will also work

	ptr[1] = 5;

	cout << "array[1] is: " << array[1] << endl;

	return 0;
}