#include <iostream>
using namespace std;

int main()
{
    int n;
    bool check = 1;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check)
    {
        cout << "Word is palidrom ";
    }
    else
    {
        cout << "Word is not palidrom";
    }

    return 0;
}
