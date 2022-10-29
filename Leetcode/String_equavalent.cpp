#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    string str[10] = {"a", "bc"};
    string str1[10] = {"ba", "c"};
    string word1, word2;
    for (int i = 0; i < 2; i++)
    {
        // word1.append(str[i]);
        // word2.append(str1[i]);
        // word1 += str[i];
        // word2+= str1[i];
    }
    if (word1 == word2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
