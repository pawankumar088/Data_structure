#include <iostream>
using namespace std;
void pawaa(int arr[], int n)
{
    int next, i, j;
    for (i = 0; i < n; i++)
    {
        next = -1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << "->" << next << endl;
    }
}
int main()
{
    int arr[] = {11, 13, 21, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    pawaa(arr, n);
    return 0;
}
