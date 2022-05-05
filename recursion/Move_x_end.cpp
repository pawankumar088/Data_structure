#include <iostream>
#include <stack>
#include <queue>
using namespace std;
string moveallx(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    int n;
    string p = "xxpawan";
    cout << moveallx(p);
    return 0;
}
// |n
// |an
// |wan
// |awan
// |pawan
// |xpawan
// |xxpawan

// |n
// |a
// |w
// |a
// |p
// |x
// |x
