// Write a Program to Check Whether a Number Is a Palindrome or Not.
#include <iostream>

int main()
{
    int lastDigit, n, number, reverse;
    
    std::cout << "Number to Check = ";
    std::cin >> number;
    
    n = number;
    
    do
    {
        lastDigit = number % 10;
        reverse = (reverse * 10) + lastDigit;
        number = number / 10;
    }
    while(number != 0);
    
    if(n == reverse && n > 0)
    {
        std::cout << n << " is a Palindrome Number.";
    }
    else
    {
        std::cout << n << " is NOT a Palindrome Number.";
    }
    
    return 0;
}