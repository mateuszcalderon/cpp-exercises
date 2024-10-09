// Write a Program to Find the Length of a String.
#include <iostream>

int main()
{
    std::string str;
    
    std::cout << "str = ";
    getline(std::cin, str);
    
    int length = str.length();
    
    std::cout << "Length of str = " << length;
    
    return 0;
}