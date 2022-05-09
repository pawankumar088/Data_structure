#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> s;
    s.push_back(2234);
    s.push_back(2234);
    s.push_back(23224);
    s.push_back(23234);
    s.push_back(224);
    vector<int>::iterator itr;
    for (itr = s.begin(); itr < s.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}
