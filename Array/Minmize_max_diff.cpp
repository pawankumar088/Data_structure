#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    for (int i = 0; i < n - 1; i++)
    {
        int Min = min(smallest, arr[i + 1] - k);
        int Max = max(largest, arr[i] + k);
        if (Min < 0)
            continue;
        ans = min(ans, Max - Min);
        return ans;
    }

    return ans;
}

// Driver Code Starts
int main()
{
    int k = 3, n = 5;
    int arr[n] = {3, 9, 12, 16, 20};
    int ans = getMinDiff(arr, n, k);
    cout << ans;
}
