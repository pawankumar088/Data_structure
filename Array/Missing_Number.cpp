#include <iostream>
using namespace std;

// Function to get the missing number
int getMissingNo(int a[], int n)
{

    int total = ((n + 1) * (n + 2)) / 2; // precedence of operator
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
int main()
{
    int arr[] = {1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss;
}

/* // C++ program to Find missing elements from an Array
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void FindMissing(vector<int> arr)
{
    int i = 0;
    int N = arr.size();
    while (i < N)
    {
        int correct = arr[i] - 1; // as 0 based indxing
        if (arr[i] != arr[correct])
        {
            swap(arr[i], arr[correct]);
        }
        else
        {
            i++;
        }
    }

    for (i = 0; i < N; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
    cout << "\n";
}

int main()
{

    // Diff Test cases
    vector<int> nums = {3, 3, 3, 5, 1};
    FindMissing(nums);
    vector<int> nums2 = {1, 3, 3, 3, 5};
    FindMissing(nums2);
    vector<int> nums3 = {1, 2, 3, 4, 4, 7, 7};
    FindMissing(nums3);
}
 */