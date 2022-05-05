#include <iostream>
#include <stack>
#include <queue>
using namespace std;
bool isSafe(int *arr, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }
}
int main()
{
    int n;

    return 0;
}
