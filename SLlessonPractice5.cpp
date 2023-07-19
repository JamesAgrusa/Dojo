// Pointer practice

#include <iostream>
using namespace std;

void Swap(int* x, int* y);                                                    //void Swap(int & x, int & y); (run this if using references and not pointers)

int main()
{
	// Problem 1: Write a function that will swap the values of 2 integers

	int x = 5;
	int y = 15;

	Swap(&x, &y);                                                           // Swap(x, y); (run this if using references and not pointers)


	cout << "The value of x is: " << x << endl;
	cout << "The value of y is: " << y << endl;



	return 0;
}

void Swap(int* x, int* y)                                                   // void Swap(int & x, int & y); (run this if using references and not pointers)
{
	                                                                         
    int temp = *x; // set value of x to temp to store for later use         // int temp = x;(run this if using references and not pointers)
                       
    *x = *y;          // 'x' now becomes 15 (which was y originally)       // x = y;   (run this if using references and not pointers)

	*y = temp;       // 'y' gets the value of temp                        // y = temp;(run this if using references and not pointers)


}
