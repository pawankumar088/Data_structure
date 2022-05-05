#include <iostream>
#include <stack>
#include <queue>
using namespace std;
bool sorted(int *arr, int n)
{
    if (n == 1)
    {
        return true;
    }
    // bool restarray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && sorted(arr + 1, n - 1));
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    if (sorted(arr, 4))
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Not sorted";
    }

    return 0;
}

// |3 1
// |2 2
// |1 3
// |arr 4
