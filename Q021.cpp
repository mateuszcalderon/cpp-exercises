// Write a Program to Compute the Sum of Diagonals of a Matrix.
#include <iostream>

int main()
{
    int main_diagonal_sum, secondary_diagonal_sum;
    int matrix_size;
    
    std::cout << "Matrix size = ";
    std::cin >> matrix_size;
    
    int matrix[matrix_size][matrix_size];
    
    std::cout << "Elements of the Matrix = " << "\n";
    for(int row = 0; row < matrix_size; row++)
    {
        for(int column = 0; column < matrix_size; column++)
        std::cin >> matrix[row][column];
    }

    for(int i = 0; i < matrix_size; i++)
    {
        main_diagonal_sum += matrix[i][i];
        secondary_diagonal_sum += matrix[i][matrix_size - i -1];
    }
    
    std::cout << "Principal Diagonal = " << main_diagonal_sum << "\n";
    std::cout << "Secondary Diagonal = " << secondary_diagonal_sum;

    return 0;
}