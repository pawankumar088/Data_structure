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
    int odd = 0;
    int even = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    printf("Freqency of even number is %d\n", even);
    printf("Freqency of od number is %d\n", odd);
}