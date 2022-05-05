#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return a;
    }
    if (b == 0)
    {
        return b;
    }
    if (a > b)
    {
        return (a, a - b);
    }
    else
    {
        return (b, b - a);
    }
}
int main()
{
    int a = 12, b = 18;
    cout << gcd(a, b);
    return 0;
}
