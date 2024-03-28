#include<stdio.h>
int main()
{
  int n,i;
  float p = 1;
  do
  {
     printf("\nInput n: "); scanf("%d", &n);
     if(n < 1)
        printf("\nn >= 1, Please Input again!");
  }
  while(n < 1);
  i=1; 
  while(i <= n)
   {
  	 p = p * i;
     i++;
   }
  printf("\nT = 1 x 2 x ... x %d = %.1f",n, p);
  return 0; 
}
