// Write a Program for Fibonacci Numbers Using Recursion.
#include <iostream>
  
int Fibonacci(int fibonacci_index);
  
int main()
{
    int fibonacci_index;
    std::cout << "N = ";
    std::cin >> fibonacci_index;
    std::cout << Fibonacci(fibonacci_index);
    
    return 0;
}

int Fibonacci(int fibonacci_index)
{
    if (fibonacci_index <= 1)
    {
        return fibonacci_index;
    }
    else
    {
        return Fibonacci(fibonacci_index - 1) + Fibonacci(fibonacci_index - 2);
    }
}