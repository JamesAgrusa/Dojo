// Dynamic memory practice

# include <iostream>


using namespace std;

int main()
{
 // Problem 1: Read a phrase from the user and output it again

	const int MAX_BUFFER_LENGTH = 256; // reads 256 characters or until the next line

	char buffer[MAX_BUFFER_LENGTH];

	cout << "Please enter a phrase: ";

	cin.get(buffer, MAX_BUFFER_LENGTH - 1);// accounting for null character that will be added

	cout << "Your input was: " << buffer;

 // Problem 2: Using problem 1, make a function that will take in the input phrase 
 // and returns a reverse copy of the phrase and outputs it
}