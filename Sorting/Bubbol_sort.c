#include <stdio.h>
#include <stdlib.h>
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++) // for number of pass
    {
        for (int j = 0; j < size - 1 - i; j++) // for comperison in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {232, 3424, 2234, 234, 2345};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size); // This is for before sorting;
    bubbleSort(arr, size); // This is for sorting algorithem
    printArray(arr, size);

    return 0;
}
