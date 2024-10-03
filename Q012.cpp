// Write a Program to Make a Simple Calculator.
#include <iostream>

int main()
{
    char operation;
    int number1, number2;
    
    std::cout << "Enter an operation:" << "\n";
    std::cout << "a for addition," << "\n";
    std::cout << "s for substraction,"  << "\n";
    std::cout << "m for multiplication," << "\n";
    std::cout << "d for division." << "\n";
    std::cin >> operation;
    std::cout << "Enter the Numbers:" << "\n";
    std::cout << "N1: ";
    std::cin >> number1;
    std::cout << "N2: ";
    std::cin >> number2;
    
    switch(operation)
    {
        case 'a':
            std::cout << number1 << " + " << number2 << " = " << number1 + number2;
            break;
        
        case 's':
            std::cout << number1 << " - " << number2 << " = " << number1 - number2;
            break;
        
        case 'm':
            std::cout << number1 << " x " << number2 << " = " << number1 * number2;
            break;
        
        case 'd':
            std::cout << number1 << " / " << number2 << " = " << number1 / number2 << "\n";
            std::cout << "Remainder of the division = " << number1 % number2;
            break;
        
        default:
            std::cout << "That operation was NOT valid!";
            break;
    }

    return 0;
}