#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
void check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = y;
        c = x;
    }
    if (a * a == b * b + c * c)
    {
        cout << "pythagorian triplate";
    }
    else
    {
        cout << "Not pythagorina triplate";
    }
    
}
int main()
{
    int n;
    int x, y, z;
    cin >> x >> y >> z;
    check(x, y, z);
    return 0;
}
