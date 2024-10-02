// Write a Program to Check Even or Odd Integers.
#include <iostream>

int main()
{
    int number;
    
    std::cout << "Number: ";
    std::cin >> number;
    
    if (number % 2 == 0)
    {
        std::cout << number << " is an Even Number.";
    }
    else
    {
        std::cout << number << " is an Odd Number.";
    }
    
    return 0;
}