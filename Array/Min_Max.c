#include <stdio.h>

void main()

{

    int array1[15], i, max, min, size;

    printf(" Enter the size of array :");

    scanf("%d", &size);

    printf(" Enter the array elements :");

    for (i = 0; i < size; i++)
    {

        scanf("%d", &array1[i]);
    }

 

    printf(" \nThe maximum element in array is %d", max);

    printf("\nThe minimum element in array is %d", min);
}
// #include <stdio.h>

// int sumofarray(int a[], int n)
// {
//     int min, max, i;
//     min = max = a[0];
//     for (i = 1; i < n; i++)
//     {
//         if (min > a[i])
//             min = a[i];
//         if (max < a[i])
//             max = a[i];
//     }

//     printf("minimum of array is : %d", min);
//     printf("\nmaximum of array is : %d", max);
// }
// int main()
// {
//     int a[1000], i, n, sum;

//     printf("Enter size of the array : ");
//     scanf("%d", &n);

//     printf("Enter elements in array : ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     sumofarray(a, n);
//     return 0;
// }

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        minNo = min(minNo, arr[i]);
        maxNo = max(maxNo, arr[i]);
    }
    cout << minNo << " " << maxNo;

    return 0;
}
