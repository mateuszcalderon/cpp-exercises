// Write a Program to Split a String into a Number of Sub-Strings.
#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    char delimiter = ' ';
    std::string str;
    std::vector<std::string>substrings;
    
    std::cout << "str = ";
    std::getline(std::cin, str);
    
    std::stringstream string_stream(str);
    std::string token;
    
    while(std::getline(string_stream, token, delimiter))
    {
        substrings.push_back(token);
    }
    
    for(const std::string &kIndividualSubStrings : substrings)
    {
        std::cout << kIndividualSubStrings << "\n";
    }

    return 0;
}