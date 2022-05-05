#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int arr[] = {2, 34, 34, 234, 23};
    (binary_search(arr, arr + 5, 34)) ? cout << "Element found" : cout << "Not found";
    
    return 0;
}
