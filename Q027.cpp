// Write a Program to Convert String to int.
#include <iostream>

int main()
{
    int number;
    std::string str;
    
    std::cout << "str = ";
    std::cin >> str;
    
    try
    {
        number = std::stoi(str);
        std::cout << "Number = " << number;
    }
    catch(const std::invalid_argument &kInvalidArgument)
    {
        std::cerr << "Invalid Argument: " << kInvalidArgument.what();
    }
    catch(const std::out_of_range &kOutOfRange)
    {
        std::cerr << "Out of range: " << kOutOfRange.what();
    }
    
    return 0;
}