// Write a Program to Reverse a Sentence Using Recursion.
#include <iostream>
#include <string>

void ReverseSentence(const std::string& kString);

int main()
{
    std::string sentence;
    std::cout << "Sentence = ";
    std::getline(std::cin, sentence);
    ReverseSentence(sentence);
    
    return 0;
}

void ReverseSentence(const std::string& kString)
{
    if(kString.empty())
    {
        return;
    }
    else
    {
        ReverseSentence(kString.substr(1));
        std::cout << kString[0];
    }
}