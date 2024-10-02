// Write a Program to Find the Largest Among 3 Numbers.
#include <iostream>

int main()
{
    int a, b, c;
    
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    
    if(a >= b && a >= c)
    {
        std::cout << "a is the largest.";
    }
    else if(b >= a && b >= c)
    {
        std::cout << "b is the largest.";
    }
    else
    {
        std::cout << "c is the largest.";
    }
    
    return 0;
}