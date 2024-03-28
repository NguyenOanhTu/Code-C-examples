#include<stdio.h>
int main()
{
  int n,i;
  float p = 1;
  printf("\nInput n: "); scanf("%d", &n);
  i=1; 
  while(i <= n)
   {
  	 p = p * i;
     i++;
   }
  printf("\nT = 1 x 2 x ... x %d = %.1f",n, p);
  return 0; 
}
