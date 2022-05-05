#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int rows, col;
    cin >> rows >> col;
    int arr[rows][col];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
