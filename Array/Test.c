#include <stdio.h>
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])
void findPair(int arr[], int n, int sum)
{
    int i, j;
    int countPair = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("%d %d ", arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int arr[] = {1, 5, 7, -1, 5};
    int sum = 6;
    findPair(arr, 5, 6);
    return 0;
}