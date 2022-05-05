#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}
int main()
{
    string str = "Pawan";
    reverse(str);
    return 0;
}
// |n
// |an
// |wan
// |awan
// |pawan
