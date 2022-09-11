#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    int check[234];
    for (int i = 0; i < s.length(); i++)
    {
        if (check[i] == 1 || s[i] == ' ')
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
                check[j] = 1;
            }
        }
        cout << s[i] << "=>" << count << endl;
    }

    return 0;
}
