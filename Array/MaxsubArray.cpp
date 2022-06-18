#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
void maxsub(int *arr, int n)
{
    int maxsum = 0;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum > maxsum)
        {
            maxsum = currsum;
        }
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << maxsum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxsub(arr, n);

    return 0;
}
/* #include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {-2, -3, 4, -1, 2, 1, 5, -3};
    int maxsum = INT_MIN;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i; j < 8; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                // cout << arr[k] << " ";
                sum += arr[k];
                maxsum = max(maxsum, sum);
            }
        }
    }
    cout << maxsum;

    return 0;
}
 */