// Write a Program to Print Pascal’s Triangle.
#include <iostream>

int main()
{
    int rows;
    
    std::cout << "Number of rows = ";
    std::cin >> rows;
    
    for(int i = 0; i <= rows; ++i)
    {
        for(int number_of_spaces = i; number_of_spaces < rows; ++number_of_spaces)
        {
            std::cout << " ";
        }
        
        int current_number = 1;
        for(int position = 0; position <= i; position++)
        {
            std::cout << current_number << " ";
            current_number = current_number * (i - position) / (position +1);
        }
        std::cout << "\n";
    }
    
    return 0;
}