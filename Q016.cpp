// Write a Program to Check if Two Arrays Are Equal or Not.
#include <iostream>
#include <algorithm>

bool AreArraysEqual(int array1[], int array2[], int size);

int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {5, 4, 3, 2, 1};
    int size = sizeof(array1) / sizeof(array1[0]);

    if(AreArraysEqual(array1, array2, size))
    {
        std::cout << "Equal.";
    }
    else
    {
        std::cout << "Not Equal.";
    }

    return 0;
}

bool AreArraysEqual(int array1[], int array2[], int size)
{
    std::sort(array1, array1 + size);
    std::sort(array2, array2 + size);

    for(int i = 0; i < size; i++)
    {
        if(array1[i] != array2[i])
        {
            return false;
        }
    }
    
    return true;
}