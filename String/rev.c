#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char str[] = "edcba";
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (str[j] > str[j + 1])
            {
                int temp;
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}
