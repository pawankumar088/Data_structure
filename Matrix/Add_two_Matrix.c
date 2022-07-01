#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row;
    int col;
    printf("Enter the number of row and col :\n");
    scanf("%d %d", &row, &col);
    int arr[row][col];
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
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    
    int sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    printf("\n\n");
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
