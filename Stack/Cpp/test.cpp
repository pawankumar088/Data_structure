#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    int n;
    string s = "I am Pawan Kumar";
    reverse(s);
    return 0;
}
