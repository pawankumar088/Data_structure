#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char arr[] = "ABC";
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%c", arr[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

/* #include <stdio.h>
#include <string.h>

void substring(char s[], char sub[], int p, int len)
{
    int c = 0;
    while (c < len)
    {
        sub[c] = s[p + c];
        c++;
    }
    sub[c] = '\0';
}

int main()
{
    char c[10], str[10] = "ABC";
    int i, j, len = strlen(str);

    printf("All subsets for the given string are: ");
    for (i = 0; i < len; i++)
    {
        for (j = 1; j <= len - i; j++)
        {
            substring(str, c, i, j);
            printf("%s\n", c);
        }
    }
    return 0;
}
 */