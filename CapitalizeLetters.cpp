#include <iostream>

using namespace std;

int main()
{
    const int size = 80; // here we declare how many characters will be allowed in our statement

    char sentence[size];

    cout << "Please enter a sentence." << endl;
    cout << "Lets see if we can capitalize each first letter of your sentence :D" << endl;
    cin.getline(sentence, size); // make sure limit is not excedded

    sentence[0] = toupper(sentence[0]); // this is calling that each first char at each array is starting out as "toupper" as in to get to upper case

    for (int i = 1; i < size; i++)
    {
        if (sentence[i - 1] == ' ')
            sentence[i] = toupper(sentence[i]); // checking for first letters or spaces, those become upper case characters
        else
            sentence[i] = tolower(sentence[i]); // all other characters will follow their normal pattern and be lower case
    }

   cout << "Here is what we did: " << sentence << endl; // this will call out when you typed and our criteria will be met, the first letter of each word will be capilalized.

   cout << "We did it! Thanks for hanging out!" << endl;

    return 0;
}