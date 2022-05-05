#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void find(int *arr, int size, int key)
{
    int first = -1, last = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != key)
        {
            continue;
        }
        if (first == -1)
        {
            first = i;
        }
        last = i;
    }
    cout << "first " << first << " " << endl
         << "Second :" << last;
}
int main()
{
    int n;
    int arr[] = {3, 3, 3, 3, 3, 3, 3};
    find(arr, 7, 3);
    return 0;
}
