#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int arr[5] = {1, 2, 3, 3, 4};
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }
        cout << ans;
    for (int i = 1; i < 5; i++)
    {
        ans = ans ^ i;
    }
    cout << ans;

    return 0;
}
