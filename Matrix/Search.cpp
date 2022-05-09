#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int row, col, target;
    cin >> row >> col >> target;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int r = 0, c = col - 1;
    bool found = false;
    while (r < row and c >= 0)
    {
        if (arr[r][c] == target)
        {
            found = true;
        }
        if (arr[r][c] > target)
            c--;
        else
            r++;
    }
    if (found)

        cout << "Element found ";
    else
        cout << "Not found";

    return 0;
}
