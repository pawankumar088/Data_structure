#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 2; i++)
    {
        swap(arr[i], arr[5 - 1 - i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}
