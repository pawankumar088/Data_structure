// #include <iostream>
// #include <stack>
// #include <queue>
// using namespace std;

// int main()
// {
//     int n, reverse = 0;
//     cin >> n;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         reverse = reverse * 10 + rem;
//         n = n / 10;
//     }
//     cout << reverse;//Here we will reverse not number because chages is apply in number
// return 0;
// }

#include <stdio.h>
void printFibonacci(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        printFibonacci(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("%d %d ", 0, 1);
    printFibonacci(n - 2); // n-2 because 2 numbers are already printed
    return 0;
}