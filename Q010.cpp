// Write a Program to Check Whether a Number Is Prime or Not.
#include <iostream>

int main()
{
    int number;
    bool is_prime = true;
    
    std::cout << "Number to Check = ";
    std::cin >> number;
    
    if(number == 0 || number == 1)
    {
        is_prime = false;
    }
    
    for(int i = 2; i <= number / 2; i++)
    {
        if(number % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    
    if(is_prime)
    {
        std::cout << number << " is a Prime Number.";
    }
    else
    {
        std::cout << number << " is NOT a Prime Number.";
    }
    
    return 0;
}