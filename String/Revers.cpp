// A Simple C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

// Driver program
int main()
{
    string str = "geeksforgeeks";
    reverseStr(str);
    cout << str;
    return 0;
}
// // A quickly written program for reversing a string
// // using reverse()
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str = "geeksforgeeks";

//     // Reverse str[begin..end]
//     reverse(str.begin(), str.end());

//     cout << str;
//     return 0;
// }

// C++ program to print reverse of a string
// #include <bits/stdc++.h>
// using namespace std;

// // Function to reverse a string
// void reverse(string str)
// {
//     for (int i = str.length() - 1; i >= 0; i--)
//         cout << str[i];
// }

// // Driver code
// int main(void)
// {
//     string s = "GeeksforGeeks";
//     reverse(s);
//     return (0);
// }