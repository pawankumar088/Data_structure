#include <stdio.h>

int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int fibbonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibbonacci(n - 1) + fibbonacci(n - 2));
    }
}

int main()
{
    int n = 5;
    int i;

    printf("Factorial of %d: %d\n", n, factorial(n));
    printf("Fibbonacci of %d: ", n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibbonacci(i));
    }
}

/* #include <stdio.h>
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
} */