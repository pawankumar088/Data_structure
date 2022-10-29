#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n1 = n;
    int n2 = n;
    int count = 0;

    while (n)
    {
        n /= 10;
        count++;
    }
    int sum = 0;
    while (n1)
    {
        int rem = n1 % 10;
        sum += pow(rem, count);
        n1 /= 10;
    }
    if (n2 == sum)
    {
        cout << "ANAGRAM" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
