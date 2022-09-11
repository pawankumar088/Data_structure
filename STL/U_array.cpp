#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int ar[] = {1, 2, 3, 4, 5};
    int arr1[5];
    // copy(ar, ar + 5, arr1);
    iota(arr1, ar + 5, 23);
    // This will override
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr1[i] << " ";
    // }
    /*     all_of(ar, ar + 6, [](int x)
               { return x > 0; })
            ? cout << "All are positive elements"
            : cout << "All are not positive elements";

     */ any_of(ar, ar + 6, [](int x)
               { return x < 0; })
        ? cout << "There exists a negative element"
        : cout << "All are positive elements";
    return 0;
}
