// Write a Program to Find the Maximum and Minimum in an Array.
#include <iostream>

int main()
{
    int array[] = {10, 12, 45, 48, 22, 18};
    int array_size = sizeof(array) / sizeof(array[0]);
    int maximum = array[0];
    int minimum = array[0];
    
    for(int i = 1; i < array_size; i++)
    {
        if(array[i] > maximum)
        {
            maximum = array[i];
        }
        if(array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    
    std::cout << "Maximum = " << maximum << "\n";
    std::cout << "Minimum = " << minimum;

    return 0;
}