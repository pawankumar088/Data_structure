#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
void OctalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x = x * 8;
        n = n / 10;
    }
    cout << ans;
}
int main()
{
    int n;
    cin >> n;
    OctalToDecimal(n);
    return 0;
}
