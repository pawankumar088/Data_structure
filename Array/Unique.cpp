#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
    return 0;
}
// 00
// 01
// --
// 01
// 10
// 11
// 10
// 01
// 10
// 11
// I think this only work for when only to duplicate element persent in array 
