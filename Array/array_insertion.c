#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void Insert(int arr[], int size, int capicity, int element, int index)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}
int main()
{
    int arr[100] = {234, 45, 345, 342, 234, 2};
    int size = 6;
    int index = 2;
    display(arr, size);
    Insert(arr, size, 100, 234, index);
    size += 1;
    display(arr, size);
    return 0;
}
