#include <stdio.h>

int main()
{
    int rows, cols;

    int a[][3] = {
        {1, 0, 1},
        {4, 5, 6},
        {1, 2, 3}};

    int b[][3] = {
        {1, 1, 1},
        {2, 3, 1},
        {1, 5, 1}};
    rows = (sizeof(a) / sizeof(a[0]));
    cols = (sizeof(a) / sizeof(a[0][0])) / rows;

    int sum[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of two matrices: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}