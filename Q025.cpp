// Write a Program to Check if the String Is Palindrome.
#include <iostream>

int main()
{
    bool is_palindrome = true;
    int left;
    std::string str;
    
    std::cout << "str = ";
    getline(std::cin, str);
    
    int right = str.length() -1;
    
    while(left < right)
    {
        if(str[left] != str[right])
        {
            is_palindrome = false;
            break;
        }
    left++;
    right--;
    }
    
    if(is_palindrome)
    {
        std::cout << "str is a palindrome string.";
    }
    else
    {
        std::cout << "str is NOT a palindrome string.";
    }

    return 0;
}