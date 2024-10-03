// Write a Program to Search an Element in an Array (Linear Search).
#include <iostream>

int main()
{
    int array[] = {10, 11, 7, 8, 2, 9};
    int array_size = sizeof(array) / sizeof(array[0]);
    int element_to_search, position = -1;
    
    std::cout << "Element to be Searched: ";
    std::cin >> element_to_search;
    
    for(int i = 0; i < array_size; i++)
    {
        if(array[i] == element_to_search)
        {
            position = i;
            break;
        }
    }
    
    if(position != -1)
    {
        std::cout << element_to_search << " is present at index " << position;
    }
    else
    {
        std::cout << element_to_search << " not found in the array[]";
    }
    
    return 0;
}