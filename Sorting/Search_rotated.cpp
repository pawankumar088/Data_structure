#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int low = 0;
    int high = 6;
    int target = 6;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            cout << arr[mid];
        }
        else if (arr[mid] >= arr[low])
        {
            if (arr[mid] >= target and arr[low] <= target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target and arr[high] >= target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return 0;
}
