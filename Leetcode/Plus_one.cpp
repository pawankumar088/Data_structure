#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int arr[4] = {1, 2, 4, };
    for (int i = 0; i < 4; i++)
    {
        int temp = arr[3];
        if (temp % 10 == 0)
        {
            arr[0] == arr[0] + 1;
            break;
        }
        else
        {
            arr[3] = arr[3] + 1;
            break;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
