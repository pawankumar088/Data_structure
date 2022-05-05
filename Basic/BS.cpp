// CPP program to implement
// Binary Search in
// Standard Template Library (STL)
#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}

int main()
{
    int a[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    if (binary_search(a, a + size, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    if (binary_search(a, a + size, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    return 0;
}
