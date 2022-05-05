// #include <iostream>
// #include <stack>
// #include <queue>
// using namespace std;
// void reverse(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }
//     string ros = s.substr(1);
//     reverse(ros);
//     cout << s[0];
// }
// void rev(string s, int start, int end)

// {
//     while (start <= end)
//     {
//         int temp;
//         temp = s[start];
//         s[start] = s[end];
//         s[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int n;
//     string s = "I am Pawan Kumar";
//     int size = s.length();
//     // reverse(s);
//     rev(s, 0, size - 1);
//     cout << s;
//     return 0;
// }
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
    // string ros = s.substr(1);
    reverse(s.substr(1));
    cout << s[0];
}
int main()
{
    int n;
    string s = "";
    cout << s.length();
    return 0;
}
