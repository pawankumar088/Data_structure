#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int findNextPrime(int n)
{
    int nextPrime = n;
    bool found = false;
    while (!found)
    {
        nextPrime++;
        if (isPrime(nextPrime))
            found = true;
    }
    return nextPrime;
}
int main()
{
    int n;
    cin >> n;
    cout << findNextPrime(n);
}
