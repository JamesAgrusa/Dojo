// Default Parameters

#include <iostream>
using namespace std;

int CalcVolumeOfRectangularPrism(int width, int length, int height);

int main()
{
	int width = 5;
	int length = 5;
	int height = 5;

	cout << "The volume is: " << CalcVolumeOfRectangularPrism(width, length, height) << endl;
	return 0;
}

int CalcVolumeOfRectangularPrism(int width, int length, int height)
{
	return width * length * height;
}