#include <stdio.h>
int iterativeBinarySearch(int array[], int low, int high, int element)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (array[mid] == element)

            return mid;

        if (array[mid] < element)

            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}
}
int main(void)
{
    int array[] = {1, 4, 7, 9, 16, 56, 70};
    int n = 7;
    int element = 70;
    int found_index = iterativeBinarySearch(array, 0, n - 1, element);
    if (found_index == -1)
    {
        printf("Element not found in the array ");
    }
    else
    {
        printf("Element found at index : %d", found_index);
    }
    return 0;
}
