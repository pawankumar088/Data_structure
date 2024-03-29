#include <iostream>
#include <algorithm>

using namespace std;

int findMinDiff(int arr[], int n, int m)

{
    if (m == 0 || n == 0)
        return 0;
    sort(arr, arr + n);
    if (n < m)
        return -1;
    int min_diff = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}

int main()
{
    int arr[] = {3, 5, 1, 9, 56, 7, 9, 12};
    int m = 5; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findMinDiff(arr, n, m);
    return 0;
}

