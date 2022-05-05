#include <bits/stdc++.h>
using namespace std;
bool isPower(int n)
{
    return (n && !(n & n - 1));
}
int main()
{
    int n;
    cin >> n;
    if (isPower(n))
    {
        cout << "Power of two";
    }
    else
    {
        cout << "Not Power of two";
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// /* Function to check if x is power of 2*/
// bool isPowerOfTwo(int n)
// {
//     if (n == 0)
//         return 0;
//     while (n != 1)
//     {
//         if (n % 2 != 0)
//         {
//             return 0;
//         }
//         n = n / 2;
//     }
//     return 1;
// }

// /*Driver code*/
// int main()
// {
//     isPowerOfTwo(31) ? cout << "Yes\n" : cout << "No\n";
//     isPowerOfTwo(8) ? cout << "Yes\n" : cout << "No\n";
//     return 0;
// }

// // This code is contributed by rathbhupendra
