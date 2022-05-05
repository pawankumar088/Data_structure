#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of the Array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int r;
    cout << "Enter rotet time :";
    cin >> r;

    for (int i = 0; i < r; i++)
    {
        int first, j;
        first =arr[0];
        for (j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[j] = first;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
