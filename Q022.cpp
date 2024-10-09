// Write a Program to Rotate the Elements of a Matrix.
#include <iostream>

int main()
{
    int k;
    int matrix_size = 3;
    int matrix[matrix_size][matrix_size] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    std::cout << "K = ";
    std::cin >> k;
    
    for(int rotation = 0; rotation < k; rotation++)
    {
        for(int layer = 0; layer < matrix_size / 2; layer++)
        {
            for(int element = layer; element < matrix_size - layer -1; element++)
            {
                int temporary = matrix[layer][element];
                matrix[layer][element] = matrix[matrix_size -1 - element][layer];
                matrix[matrix_size -1 - element][layer] = matrix[matrix_size -1 - layer][matrix_size -1 - element];
                matrix[matrix_size -1 - layer][matrix_size -1 - element] = matrix[element][matrix_size -1 - layer];
                matrix[element][matrix_size -1 - layer] = temporary;
            }
        }
    }

    std::cout << "Matrix = " << "\n";
    for(int row = 0; row < matrix_size; row++)
    {
        for(int column = 0; column < matrix_size; column++)
        {
            std::cout << matrix[row][column] << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}