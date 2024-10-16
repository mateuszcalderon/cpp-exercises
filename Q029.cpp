// Write a Program to Print a Simple Full Pyramid Pattern.
#include <iostream>

int main()
{
    int rows;
    
    std::cout << "Number of rows = ";
    std::cin >> rows;
    
    for(int i = 1; i <= rows; ++i)
    {
        for(int number_of_spaces = i; number_of_spaces < rows; ++number_of_spaces)
        {
            std::cout << " ";
        }

        for(int number_of_stars = 1; number_of_stars <= 2 * i -1; ++number_of_stars)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}