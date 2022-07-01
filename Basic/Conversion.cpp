#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
void Binary_to_decimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x = x * 2;
        n /= 10;
    }
    cout << ans;
}
void Octail_to_decimal(int n)
{

    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x = x * 2;
        n /= 10;
    }
    cout << ans;
}
void Hexa_to_Decimal(string s)
{
    int ans = 0;
    int x = 1;
    int size = s.length();
    for (int i = size - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ans += x * (s[i] - '0');
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            ans += x * (s[i] - 'A' + 10);
        }
        x *= 16;
    }
    cout << ans;
}
void Decimal_To_Binary(int n)
{
    
}
int main()
{
    int n;
    cin >> n;
    // string s;
    // cin >> s;
    // Binary_to_decimal(n);
    // Octail_to_decimal(n);
    // Hexa_to_Decimal(s);
    return 0;
}
