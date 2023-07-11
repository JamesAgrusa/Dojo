#include <string>
#include <iostream>

int main()
{
    int num = 0;

    std::cout << "Please enter a number between 0 and 9:  ";
    std::cin >> num;

    switch (num)
    {
    case 0:
        std::cout << "zero" << std::endl;

    case 1:
        std::cout << "one" << std::endl;
        break;

    case 2:
        std::cout << "two" << std::endl;
        break;

    case 3:
        std::cout << "three" << std::endl;
        break;

    case 4:
        std::cout << "four" << std::endl;
        break;

    case 5:
        std::cout << "five" << std::endl;
        break;

    case 6:
        std::cout << "six" << std::endl;
        break;

    case 7:
        std::cout << "seven" << std::endl;
        break;

    case 8:
        std::cout << "eight" << std::endl;
        break;

    case 9:
        std::cout << "nine" << std::endl;
        break;

    default:
        std::cout << "that is not a valid input" << std::endl;
    }

        return 0;
    }