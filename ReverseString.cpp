#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	cout << "Hello, welcome! Type a word you want reversed!" << endl;

	string input;

	cin >> input;

	reverse(input.begin(), input.end());

	cout << "Your REVERSED word! : " << input << endl;

	cout << "Thanks for playing!" << endl;

	return 0;

}