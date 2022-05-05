#include <iostream>
using namespace std;
int main()
{
    int div, num, sum = 0;
    cout << "Enter the number to check : ";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        div = num % i;
        if (div == 0)
            sum += i;
    }
    if (sum == num)
        cout << num << " is a perfect number.";
    else
        cout << num << " is not a perfect number.";
    return 0;
}