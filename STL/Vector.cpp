#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    // for (int i = 0; i < n; i++) // Without iterator
    // {
    //     cout << a[i] << endl;
    // }

    // cout << count(a.begin(), a.end(), 20);  //This will show freq of element
    // find(a.begin(), a.end(), 5) != a.end() ? cout << "\nElement found" : cout << "\nElement not found";
    return 0;
}
