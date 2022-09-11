#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<set<int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            arr[i].insert(v);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; i++)
            {
                bool check = true;
                for (int pop = 1; pop <= 5; pop++)
                {
                    check &= arr[i].count(pop) || arr[j].count(pop);
                }
                if (check)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}
