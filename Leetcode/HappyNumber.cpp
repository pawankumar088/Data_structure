#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int getNext(int n)
{
    int totalSum = 0;
    while (n > 0)
    {
        int d = n % 10;
        n = n / 10;
        totalSum += d * d;
    }
    return totalSum;
}
bool isHappy(int n)
{
    set<int> seen;
    while (n != 1 && seen.find(n) == seen.end())
    {
        seen.insert(n);
        n = getNext(n);
    }
    return n == 1;
}
int main()
{
    int n;
end:
    cin >> n;
    if (n)
        cout << "YES" << endl;
    else
        cout << "NO"
             << endl;
    goto end;
    return 0;
}
