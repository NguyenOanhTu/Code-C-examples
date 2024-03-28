#include <stdio.h>
int main()
{
   int n, s = 0, r;
   printf("Enter a number: ");
   for (scanf("%d", &n); n != 0; n = n/10) 
   {
      r = n % 10;
      s = s + r;
   }
   printf("Sum of digits of a number = %d\n", s);
   return 0;
}
