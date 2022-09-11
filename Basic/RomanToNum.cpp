#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int convert(string s, int i)
{
    char ch = s[i];
    if (i > 0)
    { // to avoid segmentation fault
        char chp = s[i - 1];
        if (ch == 'V' && chp == 'I')
            return 4;
        if (ch == 'X' && chp == 'I')
            return 9;
        if (ch == 'L' && chp == 'X')
            return 40;
        if (ch == 'C' && chp == 'X')
            return 90;
        if (ch == 'D' && chp == 'C')
            return 400;
        if (ch == 'M' && chp == 'C')
            return 900;
    }

    if (ch == 'I')
        return 1;
    if (ch == 'V')
        return 5;
    if (ch == 'X')
        return 10;
    if (ch == 'L')
        return 50;
    if (ch == 'C')
        return 100;
    if (ch == 'D')
        return 500;
    if (ch == 'M')
        return 1000;

    return 0; // if none of these then return 0
}
int romanToInt(string s)
{
    int sum = 0;
    int temp = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        temp = convert(s, i); // get the corresponding value
        if (temp == 4 || temp == 9 || temp == 40 ||
            temp == 90 || temp == 400 || temp == 900)
            i--;
        sum = sum + temp;
    }
    return sum;
}
int main()
{
    string s;
    cin >> s;
    cout << romanToInt(s);
    return 0;
}
