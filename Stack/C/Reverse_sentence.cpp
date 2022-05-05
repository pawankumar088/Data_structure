/* #include <bits/stdc++.h>
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
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    int n;
    string s = "I am Pawan Kumar";
    reverse(s);
    return 0;
}
 */
#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    int n;
    string s = "Pawan Kumar";
    reverse(s);
    return 0;
}
