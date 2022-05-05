#include <iostream>
using namespace std;

bool areRotations(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;
    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}

int main()
{
    string str1 = "pawan", str2 = "pnawa";
    if (areRotations(str1, str2))
        printf("Strings are not rotations of each other");
    else
        printf("Strings are rotations of each other");
        printf("Strings are rotations of each other");
    return 0;
}
