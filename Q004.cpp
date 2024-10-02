// Write a Program to Swap Two Numbers.
#include <iostream>

int main()
{
    int a, b;
    
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    
    b = a + b;
    a = b - a;
    b = b - a;
    
    std::cout << "a = " << a << ", b = " << b;
    
    return 0;
}