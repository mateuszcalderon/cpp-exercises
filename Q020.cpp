// Write a Program to Print the Array After It Is Right Rotated K Times.
#include <iostream>

int main()
{
    int array[] = {10, 11, 7, 33, 5, 1};
    int array_size = sizeof(array) / sizeof(array[0]);
    int k;
    
    std::cout << "K = ";
    std::cin >> k;
    
    for(int i = 0; i < k; i++)
    {
        int last_element = array[array_size - 1];
        for(int index = array_size - 1; index > 0; index--)
        {
            array[index] = array[index - 1];
        }
        array[0] = last_element;
    }

    std::cout << "Array after rotation: {";
    for(int i = 0; i < array_size; i++)
    {
        std::cout << array[i];
        if(i < array_size - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "}";

    return 0;
}