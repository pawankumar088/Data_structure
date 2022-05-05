// Simple C++ program to find k'th smallest element
#include <algorithm>
#include <iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);

    return arr[k - 1];
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "K'th smallest element is " << kthSmallest(arr, n, k);
    return 0;
}
