#include <bits/stdc++.h>
using namespace std;
void subset(char *arr, int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (i << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    char arr[] = {'a', 'b', 'c'};
    subset(arr, 3);
    return 0;
}
