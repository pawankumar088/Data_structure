#include <iostream>
using namespace std;

int digSum(int n)
{
    int sum = 0;
    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Driver program to test the above function
int main()
{
    int n = 1;
    cout << digSum(n);
    return 0;
}
