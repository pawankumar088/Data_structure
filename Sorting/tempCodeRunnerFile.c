#include <stdio.h>
#include <stdlib.h>
void printArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void bubbleSort(int *a, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) //for number of pass
    {
        for (int j = 0; j < n - 1 - i; j++) //for comperison in each pass
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {232, 3424, 2234, 234, 2345};
    int n = 5;
    printArray(a, n); //This is for before sorting;
    bubbleSort(a, n); //This is for sorting algorithem
    printArray(a, n);

    return 0;
}
