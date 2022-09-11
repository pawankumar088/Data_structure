#include <stdio.h>
#include <math.h>
int main()
{
   int num = 175, sum = 0, rem = 0, n, pow = 1;
   int len = calculateLength(num);

   n = num;
   while (num > 0)
   {
      rem = num % 10;
      for (int i = 0; i < len; i++)
      {
         pow = pow * rem;
      }
      sum = sum + pow;
      num = num / 10;
      len--;
      pow = 1;
   }
   if (sum == n)
      printf("%d is a disarium number", n);
   else
      printf("%d is not a disarium number", n);

   return 0;
}