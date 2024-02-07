#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;     // declaring variable
	int length;		// declaring variable
	bool isPalindrome = true;    // declaring variable

	cout << "Enter a word here, lets see if is a palindrome!" << endl;  // prompting user what to do
	cout << "A palindrome is a word that is the same word front to back." << endl;

	getline(cin, str); // this is where the user will type their world. then the compiler takes the word and puts it as the variable "str" our string

	length = str.length(); // we need to know the length of the word so our compiler knows when to stop looking. 

	for (int i = 0; i < (length / 2); i++) // here we create a loop to examine each letter to see if the corrosponding letter matches. 
										   // since the number of examinations is only half the size of the world we divide by 2 here. 
	{
		if (str[i] != str[(length - 1) - i]) // our letter 'i' is constantly compared to its mirror self
			isPalindrome = false;
	}

	if (isPalindrome == true)
		cout << "Your word is a palindrome!" << endl;
	  
	else
		cout << "Your word is not a palindrome!" << endl;

	return 0;
}