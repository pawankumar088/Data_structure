#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0, n2 = 1, n3;
    int limit;
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++)
    {
        printf("%d %d ", n1, n2);
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}
