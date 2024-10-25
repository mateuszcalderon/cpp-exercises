// Write a Program for Decimal to Octal Conversion.
#include <iostream>

int main()
{
    int place = 1, decimal_number, octal_number = 0, last_digit;
    
    std::cout << "Decimal number = ";
    std::cin >> decimal_number;
    
    while(decimal_number != 0)
    {
        last_digit = decimal_number % 8;
        decimal_number = decimal_number / 8;
        octal_number += last_digit * place;
        place *= 10;
    }
    
    std::cout << "Octal number = " << octal_number;
    
    return 0;
}