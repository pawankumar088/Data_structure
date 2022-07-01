#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string change_Case(string text)
{

    for (int x = 0; x < text.length(); x++)
    {
        if (isupper(text[x]))
        {
            text[x] = tolower(text[x]);
        }
        else
        {
            text[x] = toupper(text[x]);
        }
    }

    return text;
}

int main()
{

    cout << "Original string: Python, After changing cases-> " << change_Case("Python") << endl;
    cout << "Original string: w3resource,  After changing cases-> " << change_Case("w3resource") << endl;
    cout << "Original string: AbcdEFH Bkiuer,  After changing cases-> " << change_Case(" AbcdEFH Bkiuer") << endl;
    return 0;
}
