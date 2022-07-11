#include <iostream>
using namespace std;
void frequency(int arr[], int size)
{
    bool check[size];
    for (int i = 0; i < size; i++)
    {
        check[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        if (check[i] == 1)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                check[j] = 1;
                count++;
            }
        }
        cout << "frequency of " << arr[i] << " is: " << count << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    frequency(arr, size);
    return 0;
}