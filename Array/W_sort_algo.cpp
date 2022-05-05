#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int n;
    int arr[] = {0, 2, 1, 2, 1, 0};
    int count = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int i = 0;
    while (count--)
    {
        arr[i++] = 0;
    }
    while (count1--)
    {
        arr[i++] = 1;
    }
    while (count2--)
    {
        arr[i++] = 2;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
