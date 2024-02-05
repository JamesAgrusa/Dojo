#include <iostream>
#include <string> // this will allow for a string of letters to be typed, then able to be printed. 

using namespace std;

int main()
{
	cout << "Hello, welcome! Type a word you want reversed!" << endl; // prompting user of what to do

	string input; // declaring our string input here "input" can be named here

	cin >> input; // getting word to be reversed input here

	reverse(input.begin(), input.end()); // taking the front of the string and pulling it to the back. until the back in then in the front. "pulling the string, LOL!"

	cout << "Your REVERSED word! : " << input << endl; // our input displayed in reverse here. 

	cout << "Thanks for playing!" << endl; // give your users come love <3

	return 0;

}