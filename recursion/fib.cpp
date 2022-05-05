#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int pow(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * n *pow(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << pow(n);
    return 0;
}
