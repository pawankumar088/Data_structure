#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    int maxarr = INT_MIN;
    int sum = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum *= arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxarr = max(maxarr, sum);
    }
    cout << maxarr;

    return 0;
}
