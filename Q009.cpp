// Write a Program to Check if a Given Year Is a Leap Year.
#include <iostream>

int main()
{
    int year;
    
    std::cout << "Year = ";
    std::cin >> year;
    
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        std::cout << year << " is a Leap Year.";
    }
    else
    {
        std::cout << year << " is NOT a Leap Year.";
    }
    return 0;
}