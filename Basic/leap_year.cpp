/* #include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int n;
    int year;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "Yes"
             << endl;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "Yes"
             << endl;
    }
    else
    {
        cout << "No";
    }

    return 0;
}
 */
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
