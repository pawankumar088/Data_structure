#include <iostream>
#include <stack>
using namespace std;
bool isBalancedExp(string s)
{
    stack<char> stk;
    char x;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stk.push(s[i]);
            continue;
        }
        
        if (stk.empty())
            return false;
        switch (s[i])
        {
        case ')':
            x = stk.top();
            stk.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        case '}':
            x = stk.top();
            stk.pop();
            if (x == '(' || x == '[')
                return false;
            break;
        case ']':
            x = stk.top();
            stk.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    return (stk.empty());
}
int main()
{
    string expresion = "()[]{}";
    if (isBalancedExp(expresion))
        cout << "This is Balanced Expression";
    else
        cout << "This is Not Balanced Expression";
}
/* #include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
bool check(string str)
{
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' or str[i] == '{' or str[i] == '[')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (str[i] == ']')
        {
            if (!st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (str[i] == '{')
        {
            if (!st.empty() and st.top() == '}')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!st.empty())
        return false;
    return ans;
}
int main()
{
    string s = "{([])}";
    if (check(s))
        cout << "Yes this is balanced Paranthesis";
    else
        cout << "Not this is not balanced Paranthesis";

    return 0;
}
 */