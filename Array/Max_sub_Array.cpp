#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int n;
    int maxg = INT_MIN;
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                cout << sum << " ";
            }
            cout << endl;
            maxg = max(sum, maxg);
        }
    }
    cout << endl;
    cout << maxg;
    return 0;
}
