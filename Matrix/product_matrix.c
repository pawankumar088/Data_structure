#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;

    int a[][3] = {
        {1, 3, 2},
        {3, 1, 1},
        {1, 2, 2}};

    int b[][3] = {
        {2, 1, 1},
        {1, 0, 1},
        {1, 3, 1}};

    row1 = (sizeof(a) / sizeof(a[0]));
    col1 = (sizeof(a) / sizeof(a[0][0])) / row1;

    row2 = (sizeof(b) / sizeof(b[0]));
    col2 = (sizeof(b) / sizeof(b[0][0])) / row2;

    if (col1 != row2)
    {
        printf("Matrices cannot be multiplied \n");
    }
    else
    {
        int prod[row1][col2];

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