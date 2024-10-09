// Write a Program to Compare Two Strings.
#include <iostream>

int main()
{
    std::string str1, str2;
    
    std::cout << "str1 = ";
    getline(std::cin, str1);
    std::cout << "str2 = ";
    getline(std::cin, str2);
    
    if(str1.compare(str2) == 0)
    {
        std::cout << "str1 and str2 are equal.";
    }
    else
    {
        std::cout << "str1 and str2 are NOT equal.";
    }
    
    return 0;
}