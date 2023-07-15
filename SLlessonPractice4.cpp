// function practice
#include <iostream>
using namespace std;

double Diameter(double radius);
double Circumference(double radius);
double Area(double radius);


const double PI = 3.14159;

int main()
{
	/*
	Problem 1: Write a program that takes a radius as input and calculates the diameter, 
	 the circumference and area of the given circle using functions. 
    */
	double radius;

	cout << "Please enter the radius of a circle: ";
	cin >> radius;

	cout << "The diameter of the circle is: " << Diameter(radius) << endl;
	cout << "The circumference of the circle is: " << Circumference(radius) << endl;
	cout << "The area of the circle is: " << Area(radius) << endl;

	return 0;

}

double Diameter(double radius);
{
	return 2.0 * radius;
}

double Circumference(double radius);
{
	return 2.0 * radius * PI;
}

double Area(double radius);
{
	return PI * radius * radius;
}