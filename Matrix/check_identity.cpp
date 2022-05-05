#include <iostream>
using namespace std;
int main()
{
    int row, col, count = 0;
    cin >> row >> col;
    int arr[row][col];
    bool flag = true;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (row != col)
    {
        cout << "Matric should be square";
    }
    else
    {

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (arr[i][j] == 0)
                {
                    count++;
                }
            }
        }
        if (count > ((row * col) / 2))
        {
            cout << "sparse matrix";
        }
    }
    return 0;
}
