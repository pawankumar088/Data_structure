#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int A[] = {1, 2, 8, 4, 0};
    int B[] = {2, 4, 5, 0, 1};
    sort(A, A + 5);
    sort(B, B + 5);
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        if (A[i] != B[i])
        {
            cout << "Not same";
            break;
        }
    }
    if (i == 5)
    {
        cout << "Yes";
    }

    return 0;
}
