#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "pawankuma";

    int i, counter, len = 0, n = 3, temp = 0, chars;
    len = strlen(str);
    chars = len / n;
    char c[chars + 1];
    // Check whether a string can be divided into n equal parts
    if (len % n != 0 || n == 0)
    {
        printf("Sorry this string cannot be divided into %d equal parts.", n);
    }
    else
    {
        printf("%d equal parts of given string are\n", n);
        for (i = 0; i < len; i = i + chars)
        {
            counter = 0;
            // Dividing string in n equal part using substring()
            while (counter < chars)
            {
                c[counter] = str[i + counter];
                counter++;
            }
            c[counter] = '\0';
            printf("%s", c);
            printf("\n");
        }
    }
    return 0;
}