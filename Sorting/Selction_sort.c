

#include <stdio.h>
int main()
{
    int n;
    int arr[] = {5, 4, 3, 2, 1, 0};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
// Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
//  00  01  02  03  04
// |03, 05, 02, 13, 12

// After first pass
//  00  01  02  03  04
//  02,|05, 03, 13, 12

// After second pass
// 00  01  02  03  04
// 02, 03,|05, 13, 12

// After third pass
// 00  01  02  03  04
// 02, 03, 05,|13, 12

// After fourth pass
// 00  01  02  03  04
// 02, 03, 05, 12,|13

// 5 4 3 2 1
// 4 5 3 2 1
// 3 5 4 2 1
// 2 5 4 3 1
// 1 5 4 3 2
