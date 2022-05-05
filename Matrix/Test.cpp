#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n, flag = 0;

    cin >> n >> n1 >> n2;
    int arr1[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i][j] == n)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "Eelement avilabel";
    }
    else
    {
        cout << "Not aveilable";
    }

    return 0;
}
