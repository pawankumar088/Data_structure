/* #include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            res++;
    }
    return res;
}
int main()
{
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDistinct(arr, n);
    return 0;
} */
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5};
    set<int> s;
    for (int element : arr)
    {
        s.insert(element);
    }
    cout << s.size();
    return 0;
}
