// Write a Program to Calculate the Average of All the Elements Present in an Array.
#include <iostream>

int main()
{
    int array[] = {10, 22, 45, 11};
    int array_size = sizeof(array) / sizeof(array[0]);
    int sum;
    
    for(int i = 0; i < array_size; i++)
    {
        sum += array[i];
    }
    
    double average = static_cast<double>(sum) / array_size;
    
    std::cout << "Average = " << average;
    
    return 0;
}