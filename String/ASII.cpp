#include <iostream>
using namespace std;
int main()
{
    char n[30];

    cout << "Enter your name: ";
    cin.getline(n, 30);
    cin.ignore();
    for (int i = 0; n[i] != '\0'; i++)
    {
        cout << n[i] << "\t"; // print name
    }

    cout << endl;

    for (int j = 0; n[j] != '\0'; j++)
    {
        cout << int(n[j]) << "\t"; // print ascii value
    }

    return 0;
}