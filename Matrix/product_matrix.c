#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;

    // Initialize matrix a
    int a[][3] = {
        {1, 3, 2},
        {3, 1, 1},
        {1, 2, 2}};

    // Initialize matrix b
    int b[][3] = {
        {2, 1, 1},
        {1, 0, 1},
        {1, 3, 1}};

    // Calculates number of rows and columns present in first matrix
    row1 = (sizeof(a) / sizeof(a[0]));
    col1 = (sizeof(a) / sizeof(a[0][0])) / row1;

    // Calculates number of rows and columns present in second matrix
    row2 = (sizeof(b) / sizeof(b[0]));
    col2 = (sizeof(b) / sizeof(b[0][0])) / row2;

    // For two matrices to be multiplied,
    // number of columns in first matrix must be equal to number of rows in second matrix
    if (col1 != row2)
    {
        printf("Matrices cannot be multiplied \n");
    }
    else
    {
        // Array prod will hold the result
        int prod[row1][col2];

        // Performs product of matrices a and b. Store the result in matrix prod
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                prod[i][j] = 0;
                for (int k = 0; k < row2; k++)
                {
                    prod[i][j] = prod[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        printf("Product of two matrices: \n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d ", prod[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}