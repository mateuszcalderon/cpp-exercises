// Write a Program for Binary to Decimal Conversion.
#include <iostream>

int main()
{
    int place = 1, binary_number, decimal_number = 0, last_digit;
    
    std::cout << "Binary number = ";
    std::cin >> binary_number;
    
    while(binary_number)
    {
        last_digit = binary_number % 10;
        binary_number = binary_number / 10;
        decimal_number += last_digit * place;
        place *= 2;
    }
    
    std::cout << "Decimal number = " << decimal_number;
    
    return 0;
}