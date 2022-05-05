#include <iostream>
#include <stack>
#include <queue>
using namespace std;
string removeDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}
int main()
{
    int n;
    string p = "pawann";
    cout << removeDup(p);
    return 0;
}
// |n
// |nn
// |ann
// |wann
// |awann
// |pawann
//    p
//    a
//    w
//    a
//    n
//    n