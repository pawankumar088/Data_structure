#include <stdio.h>

int main()
{
    int rows, cols;

    // Initialize matrix a
    int a[][4] = {
        {1, 2, 3, 3},
        {8, 6, 4, 3},
        {4, 5, 6, 3},
        {4, 5, 6, 3}};

    // Calculates number of rows and columns present in given matrix
    rows = (sizeof(a) / sizeof(a[0]));
    cols = (sizeof(a) / sizeof(a[0][0])) / rows;

    if (rows != cols)
    {
        printf("Matrix should be a square matrix\n");
    }
    else
    {
        // Performs required operation to convert given matrix into lower triangular matrix
        printf("Lower triangular matrix: \n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (j > i)
                    // if (j < i)      This will print uppercase tringle matrix
                    printf("0 "); // Here also we can print whit space
                else
                    printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}