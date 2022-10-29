#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t)
    {
        if (t & 1)
        {
            count++;
        }
        t = t >> 1;
    }
    cout << count;

    return 0;
}
