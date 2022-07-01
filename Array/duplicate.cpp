/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[j] << " ";
            }
        }
    }
    return 0;
}
 */
#include <iostream>
using namespace std;
void printRepeating(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            cout << i << " ";
    }
}
int main()
{
    int arr[] = {1, 6, 3, 1, 3, 6, 6};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "The repeating elements are: \n";
    printRepeating(arr, arr_size);
    return 0;
}
