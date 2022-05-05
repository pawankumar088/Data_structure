#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            j++;
        }
        // 3 4 2 5
        // 1 5 3 2
        // 2 3 4 5
        // 1 2 3 5
        else if (b[j] > a[i])
        {
            i++;
        }
        else
        {
            // when both are equal
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

// Driver Code
int main()
{
    int a[] = {3, 4, 2, 5};
    int b[] = {1, 5, 3, 2, 9};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    // sort
    sort(a, a + n);
    sort(b, b + m);

    // Function call
    intersection(a, b, n, m);
    return 0;
}
