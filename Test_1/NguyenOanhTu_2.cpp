#include <stdio.h>
int main()
{
   int n, sum = 0, r;
   printf("Input integer: "); scanf("%d", &n);
    while (n != 0)
   {
      r = n % 10;
      sum       = sum + r;
      n        = n / 10;
   }
   printf("Sum = %d\n", sum);
   return 0;
}
