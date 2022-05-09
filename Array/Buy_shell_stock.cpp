// Time complexity o(n2)
// space complexity o(1)
// So we can optimize it in time complexity o(n) and space complexity o(1)

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int MAX(int *arr, int n)
{
    int minSofar = arr[0];
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        minSofar = min(minSofar, arr[i]);
        int profit = arr[i] - minSofar;
        maxProfit = max(profit, maxProfit);
    }
    return maxProfit;
}
int main()
{
    int arr[] = {3, 1, 4, 8, 7, 2, 5};
    cout << MAX(arr, 7);
    return 0;
}
/* #include <iostream>
using namespace std;
int main()
{
    int maxprofit = 0;
    int arr[] = {3, 1, 4, 8, 7, 2, 5};
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            int profit = arr[i] - arr[j];
            maxprofit = max(maxprofit, profit);
        }
    }
    cout << maxprofit;
    return 0;
}
 */