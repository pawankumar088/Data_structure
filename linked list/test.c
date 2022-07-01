#include <stdio.h>
#include <conio.h>
int main()
{

    char ch;
    printf("Enter a character ");
    ch = getch(); // taking an user input without printing the value.
    printf("\nvalue of ch is %c", ch);
    printf("\nEnter a character again ");
    ch = getche(); // taking an user input and then displaying it on the screen.
    printf("\nvalue of ch is %c", ch);
    return 0;
}