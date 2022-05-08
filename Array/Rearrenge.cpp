#include <iostream>
#include <algorithm>
using namespace std;
void rearrange(int *a, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (i <= n - 1 && a[i] > 0)
        {
            i += 1;
        }
        while (j >= 0 && a[j] < 0)
        {
            j -= 1;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    if (i == 0 || i == n)
    {
        return;
    }
    int k = 0;
    while (k < n && i < n)
    {
        swap(a[k], a[i]);
        i = i + 1;
        k = k + 2;
    }
}
int main()
{
    int a[] = {2, 3, -4, -1, 6, -9};
    int n = sizeof(a) / sizeof(int);
    rearrange(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
