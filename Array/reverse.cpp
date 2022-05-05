#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverse(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        // swap(arr[i], arr[size - i - 1]);
        int temp;
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]
             << " ";
    }
}
int main()
{
    int n;
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArray(arr, 5);
    return 0;
}
