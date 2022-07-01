#include <bits/stdc++.h>
using namespace std;
int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    priority_queue<int, vector<int>, greater<int>> minheap;

    for (int i = 0; i < size; i++)
    {
        minheap.push(arr[i]);
    }

    int ans = 0;

    while (minheap.size() > 1)
    {

        int a = minheap.top();
        minheap.pop();
        int b = minheap.top();
        minheap.pop();
        ans += a + b;
        minheap.push(a+b);
    }
    cout << ans;
    return 0;
}
