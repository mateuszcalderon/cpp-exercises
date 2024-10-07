// Write a Program to Check Whether a Number Is a Palindrome or Not.
#include <iostream>

int main()
{
    int last_digit, n, number, reverse;
    
    std::cout << "Number to Check = ";
    std::cin >> number;
    
    n = number;
    
    do
    {
        last_digit = number % 10;
        reverse = (reverse * 10) + last_digit;
        number = number / 10;
    }
    while(number != 0);
    
    if(n == reverse && n > 0)
    {
        std::cout << n << " is a palindrome number.";
    }
    else
    {
        std::cout << n << " is NOT a palindrome number.";
    }

    return 0;
}
