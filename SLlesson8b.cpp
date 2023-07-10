// switch statements 
#include <iostream>
using namespace std;

int main()
{
	int day = 0;

	cout << "Please enter the day of the week (1 to 7): ";
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "Monday" << endl;

	case 2:
		cout << "Tuesday" << endl;
		break;

	case 3:
		cout << "Wednesday" << endl;
		break;

	case 4:
		cout << "Thursday" << endl;
		break;

	case 5:
		cout << "Friday" << endl;
		break;

	case 6:
		cout << "Saturday" << endl;
		break;

	case 7:
		cout << "Sunday" << endl;
		break;

	default:
		cout << "that was not a valid day!" << endl;
	}

	return 0;
}