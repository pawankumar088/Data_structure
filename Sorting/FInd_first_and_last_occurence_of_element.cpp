#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
void check(int *arr, int n, int key)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != key)
        {
            continue;
        }
        if (first == -1)
        {
            first = i;
        }
        last = i;
    }
    cout << first + 1 << " " << last + 1;
}
int main()
{
    string s;
    int arr[] = {12, 2, 3, 1, 2, 1};
    check(arr, 6, 1);
    return 0;
}
