#include <iostream> // include path for code 
using namespace std; // allows for use of the namespace std and to not have to call out std always when using cout. Warning when using in deeper coding. 

int main() // body starts for code
{
	for (int i = 0; i <= 100; i++) // for loop. declaring 'i' initially as '0'. We put it in a loop until it reaches 100.  'i' ++ will keep adding by one unti goal reached. 
	{
		if (i % 3 == 0 && i % 5 == 0) { // using the % modulator will cause the code to see how many times 3 or 5 can go into a number without creating a '.' point.
			cout << "FizzBuzz" << endl; // if both '3' and '5' can follow this criteria at the same time "FizzBuzz" will be printed. 
		} // 0 prints off "FizzBuzz" becuase our code calls for '==' which means equal too. and 0 is what we origianally initialized. So we call "FizzBuzz" first. 
		else if (i % 3 == 0) { // here we only look for the numbers divisable by '3'
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0) { // here we only look for numbers divisable by '5'
			cout << "Buzz" << endl;
		}
		 else {
			 cout << i << endl; // this is to call every number that meets none of the criteria and will print itself. 
		 }
	}
	return 0; // all codes produce a return value as an exit status for the code
} // main body end