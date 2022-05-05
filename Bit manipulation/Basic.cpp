#include <bits/stdc++.h>
using namespace std;

int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updateBit(int n, int pos,int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return n|(value<<pos);
    ;
}
int main()
{
    int n, pos;
    cin >> n >> pos;
    // cout << getbit(n, pos);
    // cout << setBit(n, pos);
    // cout << clearBit(n, pos);
    cout << updateBit(n, pos,1);
    return 0;
}
