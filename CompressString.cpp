#include <iostream>
using namespace std;

int main() {

    const int size = 80;
    char sentence[size];

    cout << "Please enter a line with multiples of random letters please." << endl;
    cin.getline(sentence, size);

    char* read = sentence; // reading input
    char* write = sentence; // printing input

    char curr = sentence[0];
    int count = 0;

    while (*read != '\0') { // reading all non zero spaces
        if (*read == curr) {
            count++; // couting as it reads how many of each letter are present
        }
        else {
            *write++ = curr;
            *write++ = count + '0';
            count = 1;
        }
        curr = *read;
        read++;
    }

    *write++ = curr;
    *write++ = count + '0';
    *write = '\0'; // here the code is compressed. '\0' is the last of each multiple and it will count how many previous prior to last version. 

    cout << "Your compressed version goes as follows: " << sentence << endl;
    return 0;
}