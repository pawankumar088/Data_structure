#include <stdio.h>
#include <stdbool.h>

int main()
{
    int rows, cols;
    bool flag = true;

    // Initialize matrix a
    int a[][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    // Calculates number of rows and columns present in given matrix
    rows = (sizeof(a) / sizeof(a[0]));
    cols = (sizeof(a) / sizeof(a[0][0])) / rows;

    // Checks whether given matrix is a square matrix or not
    if (rows != cols)
    {
        printf("Matrix should be a square matrix");
    }
    else
    {
        // Checks if diagonal elements are equal to 1 and rest of elements are 0
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (i == j && a[i][j] != 1)
                {
                    flag = false;
                    break;
                }
                if (i != j && a[i][j] != 0)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
            printf("Given matrix is an identity matrix");
        else
            printf("Given matrix is not an identity matrix");
    }
    return 0;
}