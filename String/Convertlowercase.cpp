#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < 97)
        {
            a[i] = a[i] + 32;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}
