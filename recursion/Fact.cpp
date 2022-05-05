#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
// |2 1
// |3 2
// |4 3
// |5 4
// |5