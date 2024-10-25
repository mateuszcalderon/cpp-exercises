// Write a Program to Sort an Array (Bubble Sort).
#include <iostream>

void BubbleSort(int array[], int array_size);
void PrintArray(int array[], int size);

int main()
{
    int array[] = {1, 85, 41, 23, 11};
    int array_size = sizeof(array) / sizeof(array[0]);
    
    BubbleSort(array, array_size);
    
    std::cout << "array[] = {";
    PrintArray(array, array_size);
    std::cout << "}";
    
    return 0;
}

void BubbleSort(int array[], int array_size)
{
    for(int i = 0; i < array_size -1; i++)
    {
        for(int j = 0; j < array_size - i -1; j++)
        {
            if(array[j] > array[j +1])
            {
                std::swap(array[j], array[j +1]);
            }
        }
    }
}

void PrintArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i];
        if(i < size -1)
        {
            std::cout << ", ";
        }
    }
}