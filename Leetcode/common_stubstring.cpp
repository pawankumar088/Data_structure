#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string check(string *strs)
{
    string ans;
    for (int i = 0; i < strs[0].length(); i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (strs[0][i] != strs[j][i])
            {
                return ans;
            }
        }
        ans += strs[0][i];
    }
    return ans;
}
int main()
{
    string strs[5] = {"fllower", "fllo", "fllpawan"};
    string word = check(strs);
    cout << word;
    cout << strs[0][3];
}
