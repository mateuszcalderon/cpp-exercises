// Write a Program to Find the Size of int, float, double, and char.
#include <iostream>

int main()
{
    int i;
    float f;
    double d;
    char c;
    
    std::cout << "size of int: " << sizeof(i) << " bytes" << "\n";
    std::cout << "size of float: " << sizeof(f) << " bytes" << "\n";
    std::cout << "size of double: " << sizeof(d) << " bytes" << "\n";
    std::cout << "size of char: " << sizeof(c) << " byte";
    
    return 0;
}