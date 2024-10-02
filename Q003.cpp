// Write a Program to Print the ASCII Value of a Character.
#include <iostream>

int main()
{
    char character;
    
    std::cout << "Character = ";
    std::cin >> character;
    std::cout << "ASCII Value of '" << character << "' = " << int(character);
    
    return 0;
}