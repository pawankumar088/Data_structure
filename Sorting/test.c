#include <stdio.h> /*line 1*/
/*line 2*/
int main()
{ /*line 3*/
    /*line 4*/
    printf("Nello world\n"); /*line 5*/
    // print current line /*line 6*/
    printf("Line: %d\n", _LINE_); /*line 7*/
// reset the line number by 36 /*line 8*/
#line 36 /*reseting*/
    // print current line /*line 36*/
    printf("Line: %d\n", _LINE_); /*line 37*/
    printf("Bye bye!!!\n");       /*line 39*/
    /*line 40*/
    return 0; /*line 41*/
}