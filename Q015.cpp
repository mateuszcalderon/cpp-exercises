// Write a Program to Swap Two Numbers Using a Function.
#include <iostream>

void SwapNumbers(int* a, int* b);

int main()
{
    int a, b;
    
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    SwapNumbers(&a, &b);
    std::cout << "a = " << a << ", b = " << b;
    
    return 0;
}

void SwapNumbers(int* a, int* b)
{
    *b = *a + *b;
    *a = *b - *a;
    *b = *b - *a;
}