#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
void printno(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n;
    printno(n - 1);
}
int main()
{
    int n;
    cin >> n;
    printno(n);
    return 0;
}
