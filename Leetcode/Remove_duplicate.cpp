#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 1, 3, 3, 4, 4, 7};
    int ans = 1;
    int n = sizeof(arr) / sizeof(int);
    int size = n;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[ans] = arr[i];
            ans++;
            size--;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// 1 1 3 3 4 4 7
// 1 3 3 3 4 4 7
// 1 3 4 3 4 4 7
// 1 3 4 7 4 4 7
