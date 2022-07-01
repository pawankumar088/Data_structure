#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    string s = "125";
    string s2 = "PRQ";
    string res = "P1Q2R3";
    int n = s.length();
    int m = s2.length();
    int r = res.length();
    sort(s.begin(), s.end());
    sort(s2.begin(), s2.end());
    sort(res.begin(), res.end());
    int i = 0, j = 0, k = 0;
    while (k < r)
    {
        if ((n + m) != r)
        {
            cout << "No";
            return 0;
        }
        else
        {
            if (i < n && s[i] == res[k])
            {
                i++;
            }
            else if (j < m && s2[j] == res[k])
            {
                j++;
            }
            else
            {
                cout << "No";
                return 0;
            }
        }
        k++;
    }
    if (k == r)
    {
        cout << "YES";
    }
    return 0;
}
