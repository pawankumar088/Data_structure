#include <bits/stdc++.h>
using namespace std;
int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return m * pow(m, n - 1);
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << pow(m, n);
    return 0;
}
