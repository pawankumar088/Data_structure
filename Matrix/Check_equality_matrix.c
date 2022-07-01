#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int row;
    int col;
    bool flag = true;
    printf("Enter the number of row and col :\n");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    if (row != col)
    {
        printf("Please Enter square matrix ");
    }
    else
    {

        printf("Enter first matrix :\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        int arr2[row][col];
        printf("Enter second Matrix :\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (arr[i][j] != arr2[i][j])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            printf("Matrix is equal ");
        }
        else
        {
            printf("Matirx in not equal");
        }
    }
}
