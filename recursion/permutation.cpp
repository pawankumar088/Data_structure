#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        permutation(ros, ans + ch);
    }
}
int main()
{
    int n;
    string str = "ABC";
    permutation(str, "");
    
    return 0;
}
